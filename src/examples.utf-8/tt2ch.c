/* egg 2ch.c -o 2ch -Wall */
/* 2chアスキーアートのサンプル */
#include <eggx.h>

int main()
{
    int win ;
    int x,y ;
    win = gopen(560,120) ;

    ttnewfontset(win,"Serif",NORMAL) ;
    x=0 ;
    y=120-32 ;

    ttdrawstr(win,x,y, 16,"UTF-8",
	    "　　 ∧＿∧　　／‾‾‾‾‾\n"
	    "　　（　´∀｀）＜　オマエモナー\n"
	    "　　（　　　　） 　＼＿＿＿＿＿\n"
	    "　　｜ ｜　|\n"
	    "　　（_＿）＿）") ;
    
    x=210 ;
    y=120-32 ;
    ttdrawstr(win,x,y, 16,"UTF-8",
	    "　　　　　　　　　　　　　　　　　　∧∧\n"
	    "　　　　　　　　　　　　∧∧　　　(,,゜Д゜)　　　　∧∧\n"
	    "　　　　　　∧∧　　　(,,゜Д゜)　 ⊂　　つ　　　 (　　,,)\n"
	    "〜′‾‾(,,゜Д゜)　　 / つつ　 〜　　|　　　　/　　|\n"
	    "　　UU‾U U　　 〜（＿＿）　　 し｀Ｊ　　〜（＿＿）") ;
    
    ggetch() ;
    gclose(win) ;
    return(0) ;
}
