/**
* @Author Trevor.Z
* @Date：2020/03/23
* @Desc:输入年份，判断是否为闰年
*/

#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        printf("Is leap year");
    else
        printf("Not leap year");
    return 0;
}