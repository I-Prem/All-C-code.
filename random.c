#include <stdio.h>

int main()
{
    int y=8;
    y=(++y)+(y--)+(--y);
    printf("%d",y);
    return 0;
}
