/**
* @Author Trevor.Z
* @Date：2020/03/13
* @Desc:输入10个数，输出最大的数
*/

#include <stdio.h>

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int x;
    scanf("%d", &x);
    for(int i = 0, tmp;i < 9;i++)
    {
        scanf("%d", &tmp);
        x = max(tmp, x);
    }
    printf("%d\n", x);
    return 0;
}
