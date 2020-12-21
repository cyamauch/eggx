/* egg nihongo.c -o nihongo -Wall */
/* 日本語表示のテスト */
#include <stdio.h>
#include <eggx.h>

int main(int argc,char *argv[])
{
    int x = 4, y = 4,i=0;
    int win;
    win = gopen(300,139);
/*
    while(1) {
*/
        x = 4, y = 4;
        ttdrawstr(win,x,y, 12, 0, "デフォルト日本語フォント");
        y += 16;

        ttdrawstr(win,x,y, 14, 0, "14-dot ASCII font");
        y += 16;

        ttnewfontset(win, "Serif", BOLD);
        ttdrawstr(win,x,y, 14, 0, "14ドット日本語フォント");
        y += 16;

        ttnewfontset(win, "Serif", NORMAL);
        ttdrawstr(win,x,y, 16, 0, "16-dot ASCII font");
        y += 18;

        ttnewfontset(win, "Serif", ITALIC);
        ttdrawstr(win,x,y, 16, 0, "16ドット日本語フォント");
        y += 18;

        ttdrawstr(win,x,y, 24, 0, "24-dot ASCII font");
        y += 26;
        newrgbcolor(win,255,100,50);
        ttnewfontset(win, "Sans", BOLD_ITALIC);
        ttdrawstr(win,x,y, 24, 0, "24ドット日本語フォント");
        y += 26;
 /*       
        gclr(win);
        i++;
        if((i%100)==0) printf("loop %d\n",i);
        //msleep(10);
        //if(i>100000) break;
    }
*/
    ggetch();
    gclose(win);

    return 0;
}
