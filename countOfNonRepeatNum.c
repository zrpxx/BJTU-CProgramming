/**
* @Author Trevor.Z
* @Date：2020/03/13
* @Desc: 求用数字1、2、3、4能组成多少个互不相同且无重复数字的三位数
*/

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    int cnt = 0;
    for(num1 = 1; num1 <= 4; num1++)
    {
        for(num2 = 1; num2 <= 4; num2++)
        {
            if(num2 == num1)
                continue ;
            for(num3 = 1; num3 <= 4; num3++)
            {
                if(num3 == num2 || num3 == num1)
                    continue ;
                printf("%d ", num1 * 100 + num2 * 10 + num3);
                cnt++;
            }
        }
    }
    printf("\n%d\n", cnt);
    return 0;
}