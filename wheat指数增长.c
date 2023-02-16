#include <stdio.h>
#define SQUARES 64

int main()
{
    const double CROP = 2E16; //世界小麦年产谷粒数
    double current, total;
    int count = 1;

    printf("square grains total");
    printf("fraction of \n");
    printf("added grains");
    printf("world total\n");

    total = current = 1.0;//从一粒谷开始
    printf("%4d %13.2e %12.2e %12.2e\n",count,current, total, total/CROP);
    
    while( count < SQUARES)
    {
        count = count + 1;
        current = 2.0 * current;//下一刻谷粒翻倍
        total = total + current;//更新总数
        printf("%4d %30.2e %12.2e %30.2e\n",count, current, total, total/CROP);
    
    }
    printf("That's all.\n");

    return 0;
    
}
