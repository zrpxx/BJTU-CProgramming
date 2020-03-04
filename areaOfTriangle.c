/**
* @Author Trevor.Z
* @Date：2020/02/26
* @Desc:输入三边，输出三角形面积
*/

#include <stdio.h>
#include <math.h>

const int MIN = 1e-9; //用于double比较相等时消除误差干扰

double len_1 = 0, len_2 = 0, len_3 = 0, area = 0;

_Bool isTriangle()
{
    if(len_1 + len_2 > len_3 && len_1 + len_3 > len_2 && len_2 + len_3 > len_1) // Definition of Triangle
        return 1; //True
    return 0; //False
}

int main() {
    do{
        printf("请输入三角形的三边长(空格隔开):");
        scanf("%lf %lf %lf", &len_1, &len_2, &len_3);
        if(len_1 <= MIN || len_2 <= MIN || len_3 <= MIN || !isTriangle()) // Invalid data (len <= 0 or NOT triangle)
            printf("输入非法\n");
    }while(len_1 <= MIN || len_2 <= MIN || len_3 <= MIN || !isTriangle()); // Re-Input data
    double p = (len_1 + len_2 + len_3) / 2;                    // Helen 公式
    area =  sqrt(p * (p - len_1) * (p - len_2) * (p - len_3)); // Helen 公式
    printf("三角形的面积为%lf\n", area);
    return 0;
}
