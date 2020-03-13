/**
* @Author Trevor.Z
* @Date：2020/03/13
* @Desc:输入成绩，输出是否通过
*/

#include <stdio.h>

const int PASS_GRADE = 70;
const double MIN = 1e-18;

int main() {
    double grade;
    scanf("%lf", &grade);
    if(grade - PASS_GRADE >= MIN) // Avoid considering 69.9999... as passing
        printf("A passing grade\n");
    else
        printf("A failing grade\n");
    return 0;
}
