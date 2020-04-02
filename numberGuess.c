/**
* @Author Trevor.Z
* @Date：2020/04/01
* @Desc: 猜数游戏, 7次机会
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand((int)time(0));
    int x = rand() % 100 + 1;
    for(int i = 0; i < 7; i++)
    {
        int guess;
        scanf("%d", &guess);
        if(guess == x)
        {
            printf("Hooray,you have win\n");
            return 0;
        }
        else if(guess > x)
            printf("Wrong guess. Too High!\n");
        else
            printf("Wrong guess. Too Low!\n");
    }
    printf("Sorry,you lose.\nThe number is: %d\n", x);
    return 0;
}