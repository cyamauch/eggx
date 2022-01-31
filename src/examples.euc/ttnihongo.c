/* egg nihongo.c -o nihongo -Wall */
/* 日本語表示のテスト */
#include <stdio.h>
#include <eggx.h>

int main(int argc,char *argv[])
{

    int x = 4, y = 4;
    int win;
    win = gopen(1200,360);

    newrgbcolor(win,100,100,255);
    ttdrawstr(win,x,y, 64, "EUC-JP", "デフォルト日本語フォント");
    y += 66;

    //ttdrawstr(win,x,y, 14, "EUC-JP", "14-dot ASCII font");
    //y += 16;

    ttnewfontset(win, "Serif", BOLD);
    ttdrawstr(win,x,y, 64, "EUC-JP", "ボールド日本語フォント");
    y += 66;

    ttnewfontset(win, "Serif", NORMAL);
    ttdrawstr(win,x,y, 64, "EUC-JP", "通常日本語フォント");
    y += 66;

    ttnewfontset(win, "Serif", ITALIC);
    ttdrawstr(win,x,y, 64, "EUC-JP", "イタリック日本語フォント");
    y += 66;

    //ttdrawstr(win,x,y, 24, "EUC-JP", "24-dot ASCII font");
    //y += 26;
    newrgbcolor(win,255,100,50);
    ttnewfontset(win, "Serif", BOLD_ITALIC);
    ttdrawstr(win,x,y, 64, "EUC-JP", "ボールド・イタリック日本語フォント");
    y += 66;

    ggetch();
    gclose(win);

    return 0;
}
/*
int main(int argc,char *argv[])
{
    int x = 4, y = 4;
    int win;
    win = gopen(300,139);
    x = 4, y = 4;
    ttdrawstr(win,x,y, 12, "EUC-JP", "デフォルト日本語フォント");
    y += 16;

    ttdrawstr(win,x,y, 14, "EUC-JP", "14-dot ASCII font");
    y += 16;

    ttnewfontset(win, "Serif", BOLD);
    ttdrawstr(win,x,y, 14, "EUC-JP", "14ドット日本語フォント");
    y += 16;

    ttnewfontset(win, "Serif", NORMAL);
    ttdrawstr(win,x,y, 16, "EUC-JP", "16-dot ASCII font");
    y += 18;

    ttnewfontset(win, "Serif", ITALIC);
    ttdrawstr(win,x,y, 16, "EUC-JP", "16ドット日本語フォント");
    y += 18;

    ttdrawstr(win,x,y, 24, "EUC-JP", "24-dot ASCII font");
    y += 26;
    newrgbcolor(win,255,100,50);
    ttnewfontset(win, "Sans", BOLD_ITALIC);
    ttdrawstr(win,x,y, 24, "EUC-JP", "24ドット日本語フォント");
    y += 26;

    ggetch();
    gclose(win);

    return 0;
}
*/