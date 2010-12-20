#include <ncurses.h>

/*

    This will output a couple of windows, then wait for a keypress.
    
*/

WINDOW *create_newwin(int height, int width, int starty, int startx);

int main(int argc, char *argv[]) {	

    WINDOW *win1, *win2;

	int x, y, width, height;

	initscr();

	height = 15;
	width = 50;
	y = (LINES - height) / 2;
	x = (COLS - width) / 2;

	refresh();
	
	win1 = create_newwin(height, width, y, x);
	win2 = create_newwin(10, 30, 5, 5);
		
	getch();
	endwin();

	return 0;
	
}

WINDOW *create_newwin(int height, int width, int starty, int startx) {	

    WINDOW *local_win;

	local_win = newwin(height, width, starty, startx);
	box(local_win, 0 , 0);	 
	wrefresh(local_win);

	return local_win;
	
}


