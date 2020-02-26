/**
* @Author Trevor.Z
* @Date：2020/02/26
* @Desc:输入长宽，输出矩形周长
*/

#include <stdio.h>

const int MIN = 1e-9; //用于double比较相等时消除误差干扰

int main() {
    double length = 0, width = 0, circumstance = 0;
    do{
        printf("请输入矩形的长和宽(空格隔开):");
        scanf("%lf %lf", &length, &width);
        if(length <= MIN || width <= MIN) // Invalid data (len or wid <= 0)
            printf("输入非法\n");
    }while(length <= MIN || width <= MIN); // Re-Input data
    circumstance = 2 * (length + width); // Calculate circumstance of the Rectangle
    printf("矩形的周长为%lf\n", circumstance);
    return 0;
}
