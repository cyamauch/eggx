#include <eggx.h>

int main()
{
    int win;
    int i;
    win = gopen(300,44);
    gsetbgcolor(win,"#ffffff");
    gclr(win);

    newrgbcolor(win,0,0,0);
    for ( i=0 ; i<10 ; i++ ) {
	int off=0;
	drawsym(win,12+i*30,30,16,i+1);
	if ( 10 <= i+1 ) off=-4;
	drawstr(win,9+i*30+off,2, 16,0,"%d",i+1);
    }

    saveimg(win,0,0,0,299,43,"convert",256,"syms.eps");

    gclose(win);

    return 0;
}
