/**
* @Author Trevor.Z
* @Date：2020/04/01
* @Desc: 输入完整日期，分离为年月日
*/

#include <stdio.h>

void date(int x, int* year, int *month, int *day)
{
    *year = x / 10000;
    *month = (x - *year * 10000) / 100;
    *day = x - *year * 10000 - *month * 100;
    return ;
}

int main()
{
    int inDate;
    scanf("%d", &inDate);
    int year, month, day;
    date(inDate, &year, &month, &day);
    printf("year:%d\nmonth:%d\nday:%d\n", year, month, day);
    return 0;
}