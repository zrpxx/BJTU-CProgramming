/**
* @Author Trevor.Z
* @Date：2020/02/29
* @Desc:输入华氏度，输出摄氏度
*/

#include "stdio.h"

int main()
{
    double temp_F, temp_C;
    scanf("%lf", &temp_F);
    temp_C = (temp_F - 32) * 5.0 / 9.0;
    printf("%lf华氏度等于%lf摄氏度\n", temp_F, temp_C);
    return 0;
}