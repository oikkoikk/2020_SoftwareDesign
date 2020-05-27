#include <stdio.h>

typedef struct
{
    int xpos;
    int ypos;
} Point;

Point getScale2xPoint(const Point *getPoint)
{
    Point new;

    new.xpos = 2 * (getPoint->xpos);
    new.ypos = 2 * (getPoint->ypos);

    return new;
}
int main()
{
    Point p1;

    scanf("%d %d", &p1.xpos, &p1.ypos);
    Point p2 = getScale2xPoint(&p1);
    printf("%d %d", p2.xpos, p2.ypos);

    return 0;
}