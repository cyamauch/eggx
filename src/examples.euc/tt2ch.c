/* egg 2ch.c -o 2ch -Wall */
/* 2ch¥¢¥¹¥­¡¼¥¢¡¼¥È¤Î¥µ¥ó¥×¥ë */
#include <eggx.h>

int main()
{
    int win ;
    int x,y ;
    win = gopen(560,120) ;

    ttnewfontset(win,"IPAX0208Mincho",NORMAL) ;
    x=0 ;
    y=120-32 ;

    ttdrawstr(win,x,y, 16,"EUC-JP",
	    "¡¡¡¡ ¢Ê¡²¢Ê¡¡¡¡¡¿~~~~~\n"
	    "¡¡¡¡¡Ê¡¡¡­¢Ï¡®¡Ë¡ã¡¡¥ª¥Þ¥¨¥â¥Ê¡¼\n"
	    "¡¡¡¡¡Ê¡¡¡¡¡¡¡¡¡Ë ¡¡¡À¡²¡²¡²¡²¡²\n"
	    "¡¡¡¡¡Ã ¡Ã¡¡|\n"
	    "¡¡¡¡¡Ê_¡²¡Ë¡²¡Ë") ;
    
    x=210 ;
    y=120-32 ;
    ttdrawstr(win,x,y, 16,"EUC-JP",
	    "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¢Ê¢Ê\n"
	    "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¢Ê¢Ê¡¡¡¡¡¡(,,¡¬§¥¡¬)¡¡¡¡¡¡¡¡¢Ê¢Ê\n"
	    "¡¡¡¡¡¡¡¡¡¡¡¡¢Ê¢Ê¡¡¡¡¡¡(,,¡¬§¥¡¬)¡¡ ¢¾¡¡¡¡¤Ä¡¡¡¡¡¡ (¡¡¡¡,,)\n"
	    "?¡ì~~(,,¡¬§¥¡¬)¡¡¡¡ / ¤Ä¤Ä¡¡ ?¡¡¡¡|¡¡¡¡¡¡¡¡/¡¡¡¡|\n"
	    "¡¡¡¡UU~U U¡¡¡¡ ?¡Ê¡²¡²¡Ë¡¡¡¡ ¤·¡®£Ê¡¡¡¡?¡Ê¡²¡²¡Ë") ;
    
    ggetch() ;
    gclose(win) ;
    return(0) ;
}
