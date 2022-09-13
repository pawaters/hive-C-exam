#include "flood_fill.h"

void fill(char **area, char c, t_point size, int x, int y)
{
    if(x >= size.x || y >= size.y)
        return;
    if(x < 0 || y < 0)
        return;
    //dont forget to stop if the current is diff from previous.
    if (area[y][x] != c)
        return;
    area[y][x] = 'F';
    fill(area, c, size, x + 1, y);
    fill(area, c, size, x, y + 1);
    fill(area, c, size, x - 1, y);
    fill(area, c, size, x, y - 1);
}


void flood_fill(char **area, t_point size, t_point begin)
{
    fill(area, tab[begin.y][begin.x], size, begin.x, begin.y);
}