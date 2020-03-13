/**
* @Author Trevor.Z
* @Date：2020/03/13
* @Desc:输入存款时间，输出利率
*/

#include <stdio.h>
#include <math.h>

int main() {
    double time;
    scanf("%lf", &time);
    if(time < 0)                              // Time < 0 year
        printf("Invalid input.");
    else if(time < 5)                         // Time < 5 years
        printf("%.3lf\n",0.02 + floor(time) * 0.005);
    else                                      // Time >= 5 years
        printf("%.3lf\n",0.045);
    return 0;
}
