/**
* @Author Trevor.Z
* @Date：2020/03/13
* @Desc: 输入5个人三次的成绩，输出每个人平均成绩
*/

#include <stdio.h>

int main()
{
    int score1, score2, score3;
    for(int i = 1; i <= 5; i++)
    {
        scanf("%d %d %d", &score1, &score2, &score3);
        printf("Player%d: %lf\n", i, (score1 + score2 + score3) / 3.0);
    }
    return 0;
}
