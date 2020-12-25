/* egg nihongo.c -o nihongo -Wall */
/* ���ܸ�ɽ���Υƥ��� */
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
        ttdrawstr(win,x,y, 12, "EUC-JP", "�ǥե�������ܸ�ե����");
        y += 16;

        ttdrawstr(win,x,y, 14, "EUC-JP", "14-dot ASCII font");
        y += 16;

        ttnewfontset(win, "Serif", BOLD);
        ttdrawstr(win,x,y, 14, "EUC-JP", "14�ɥå����ܸ�ե����");
        y += 16;

        ttnewfontset(win, "Serif", NORMAL);
        ttdrawstr(win,x,y, 16, "EUC-JP", "16-dot ASCII font");
        y += 18;

        ttnewfontset(win, "Serif", ITALIC);
        ttdrawstr(win,x,y, 16, "EUC-JP", "16�ɥå����ܸ�ե����");
        y += 18;

        ttdrawstr(win,x,y, 24, "EUC-JP", "24-dot ASCII font");
        y += 26;
        newrgbcolor(win,255,100,50);
        ttnewfontset(win, "Sans", BOLD_ITALIC);
        ttdrawstr(win,x,y, 24, "EUC-JP", "24�ɥå����ܸ�ե����");
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
