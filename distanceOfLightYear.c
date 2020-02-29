/**
* @Author Trevor.Z
* @Date：2020/02/29
* @Desc:输出1光年长度，单位为米
*/

#include "stdio.h"

const long long lightSpeed = 3e8;
long long disPerLightYear;

int main()
{
    disPerLightYear = lightSpeed * 60 * 60 * 24 * 365; // Assume not 闰年
    printf("%lld\n", disPerLightYear);
    return 0;
}