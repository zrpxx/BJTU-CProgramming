/**
* @Author Trevor.Z
* @Date：2020/03/13
* @Desc:输入两个浮点数并指定四则运算，输出结果
*/

#include <stdio.h>

int main() {
    double num1, num2;
    int op;
    printf("Please input num1:");
    scanf("%lf", &num1);
    printf("Please input num2:");
    scanf("%lf", &num2);
    printf("Please select operation(1 for addition, 2 for multiplication, 3 for division):"); // 1->+  2->* 3->/
    scanf("%d", &op);
    switch(op)
    {
        case 1:
            printf("%lf\n", num1 + num2);
            break;
        case 2:
            printf("%lf\n", num1 * num2);
            break;
        case 3:
            if(num2 == 0)
                printf("Num2 cannot be 0. \n");
            else
                printf("%lf\n", num1 / num2);
            break;
        default:
            printf("Unknown operation. \n");
            break;
    }
    return 0;
}
