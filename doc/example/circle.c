#include <eggx.h>

int main()
{
    int win;
    win = gopen(640,400);
    circle(win,280,180,110,110);
    ggetch();
    gclose(win);
    return 0;
}
