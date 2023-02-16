#include <stdio.h>
#define ADJUST 7.2

int main()
{
    const double SCALE = 0.333;//const常量
    double shoe, foot;

    printf("shoe size (men's)  foot length\n");
    shoe=3.0;
    while(shoe<18.5)//while 循环开始
    {
        foot = SCALE*shoe +ADJUST;
        printf("%10.1f %15.2f inches\n", shoe,foot);
        shoe = shoe + 1.0;

        printf("%10.1f+1\n",shoe);

    }
    printf ("If the shoe fits, wear it");
    return 0;

}