/**
* @Author Trevor.Z
* @Date：2020/04/01
* @Desc: 输入两个点坐标，输出两点间距离
*/

#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}

int main()
{
    double x1, y1, x2, y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("%lf\n", distance(x1, y1, x2, y2));
    return 0;
}