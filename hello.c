#include <ncurses.h>
#include <string.h>

/*

    See http://github.com/figital/hello-ncurses for more info   
*/

int main() {	

    char message[] = "Hello, Dolly!";
    int row, col;
    
	initscr();
	getmaxyx(stdscr, row, col);
	mvprintw(row/2, (col-strlen(message))/2, "%s", message);
	
	refresh();
	getch();
	endwin();

	return 0;

}
