/**
* @Author Trevor.Z
* @Date：2020/03/13
* @Desc:输入年月日，输出当天是该年第几天
*/

#include <stdio.h>

_Bool isLeapYear(int year)
{
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
};

int dayPerMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    int year, month, day;
    scanf("%d %d %d", &year, &month, &day);
    int ans = 0;
    for(int i = 0; i < month; i++)
        ans += dayPerMonth[i];
    ans += day;
    if(isLeapYear(year) && month > 2)
        ans++;
    printf("%d\n", ans);
    return 0;
}