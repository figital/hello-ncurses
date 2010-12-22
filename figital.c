#include <ncurses.h>

void showhelp(void);

WINDOW *help;

int main(void) {

	int ch;

	initscr();

	if((help = newwin(15,70,4,3)) == NULL) {
		addstr("unable to allocate memory");
		endwin();
		return(1);
	}

	mvwaddstr(help,1,1,"figital");
	mvwaddstr(help,13,3,"Press the ~ key to quit");
	mvwaddstr(help,13,38,"Press ENTER to go back");
	box(help, 0, 0);
	refresh();
	noecho();

	do {

		ch = getch();
		refresh();
		
		if(ch == '+') {
			showhelp();
		} else { 
			addch(ch);
		}




	} while (ch != '~');
	endwin();
	return 0;
}

void showhelp(void) {
	touchwin(help);
	wrefresh(help);
	getch();
	refresh();
	touchwin(stdscr);

}
