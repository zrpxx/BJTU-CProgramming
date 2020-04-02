/**
* @Author Trevor.Z
* @Date：2020/04/01
* @Desc: 输入胜负场次，输出胜率
*/

#include <stdio.h>

double winPercent(int win, int lose)
{
    return (win + 0.0) / (win + lose);
}

int main()
{
    int win, lose;
    scanf("%d %d", &win, &lose);
    printf("%lf%%\n", winPercent(win, lose) * 100);
    return 0;
}