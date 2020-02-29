/**
* @Author Trevor.Z
* @Date：2020/02/29
* @Desc:输出给定距离和平均速度下的预计时间
*/

#include "stdio.h"

const long int avgSpeed = 65, distance = 150;

int main()
{
    double time = (distance  + 0.0) / avgSpeed; // Convert int to float by adding 0.0
    printf("%lf\n", time);
    return 0;
}