/**
* @Author Trevor.Z
* @Date：2020/02/29
* @Desc:输入半径，输出圆的周长
*/

#include "stdio.h"

const float PI = 3.14159;

int main()
{
    double radius;
    scanf("%lf", &radius);
    if(radius <= 0)
    {
        printf("输入非法");
        return 0;
    }
    double circumference = radius * 2 * PI;
    printf("%lf\n", circumference);
    return 0;
}