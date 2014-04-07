#include <eggx.h>

#define WIDTH 512
#define HEIGHT 16

int main()
{
    int i,j ;
    int win,r,g,b ;

    win = gopen(WIDTH,HEIGHT) ;

    for( i=EGGX_COLOR_BEGIN ; i<EGGX_COLOR_NUM-EGGX_COLOR_BEGIN ; i++ ){
	for( j=0 ; j<WIDTH ; j++ ){
	    makecolor(i,0,WIDTH,j,&r,&g,&b) ;
	    newrgbcolor(win,r,g,b) ;
	    line(win,j,0,PENUP) ;
	    line(win,j,HEIGHT-1,PENDOWN) ;
	}
	/* ggetch(win) ; */
	saveimg(win,0, 0,0,WIDTH-1,HEIGHT-1,"convert -compress ZIP",256,
		"color%03d.eps2",i) ;
    }
    gclose(win) ;

    return(0) ;
}
