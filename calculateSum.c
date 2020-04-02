/**
* @Author Trevor.Z
* @Date：2020/03/13
* @Desc:求s=a+aa+aaa+...aaa...a的值
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a, n;
    scanf("%d %d", &a, &n);
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        int x = 0;
        for(int j = 0; j < i; j++)
            x += a * (int)ceil(pow(10, j)); // float转int向上取整
        //printf("%d\n", x);
        sum += x;
    }
    printf("%d\n", sum);
    return 0;
}
