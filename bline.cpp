#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{
    int x1, x2, y1, y2, pk, i, dy, dx;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    cout << "x1=";
    cin >> x1;
    cout << "x2=";
    cin >> x2;
    cout << "y1=";
    cin >> y1;
    cout << "y2=";
    cin >> y2;
    dx = x2 - x1;
    dy = y2 - y1;
    pk = 2 * dy - dx;
    putpixel(x1, y1, WHITE);
    for (i = 0; i < dx; i++)
    {
        if (pk < dx)
        {
            pk = pk + 2 * dx;
            x1 = x1 + 1;
        }
        else
        {
            pk = pk + 2 * dx - 2 * dy;
            y1 = y1 + 1;
            x1 = x1 + 1;
        }
        putpixel(x1, y1, WHITE);
    }
    getch();
    closegraph();
    return 0;
}