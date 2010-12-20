#hello-ncurses

I'm working my way through [Pradeep Padala's[(http://twitter.com/ppadala) ncurses intro at:
http://tldp.org/HOWTO/NCURSES-Programming-HOWTO/

Install for recent debian'ish distros:
    
    wget http://ftp.gnu.org/pub/gnu/ncurses/ncurses-5.7.tar.gz
    gunzip ncurses*.gz
    tar -xvf ncurses*.tar
    cd ncurses*
    ./configure
    make
    sudo make install
    
"whereis ncurses" should now yield /usr/includes/ncurses.h

You should now be able to run something like ...

    gcc hello.c -lncurses -o hello
    
... which will give you an executable to run from the command line.

:)
