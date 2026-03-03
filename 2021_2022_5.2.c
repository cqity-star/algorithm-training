/*
描述

2021-2022-1-《程序设计基础》补考第二题
请编写一个程序实现以下的题目要求： １、输入圆柱体的半径（radius）和高(high); 2、定义PI为3.14159; 3、求出圆柱体的体积。

输入描述

请编写一个程序实现以下的题目要求： １、输入圆柱体的半径（radius）和高(high); 2、定义PI为3.14159; 3、求出圆柱体的体积。

输出描述

输出有三行： 第一行是圆柱体的半径，第二行是圆柱体的高，第三行圆柱体的体积。每一个输出的结果保留到小数点后３位。具体的请见Sample Output。

用例输入 1 

3.8  5
用例输出 1 

radius:3.800
high:5.000
The volume is:226.823
用例输入 2 

3 4
用例输出 2 

radius:3.000
high:4.000
The volume is:113.097
*/
#include <stdio.h>

#define PI 3.14159

int main() {
    double radius;
    double high;
    
    if (scanf("%lf %lf",&radius,&high) != 2) {
        return 0;
    }
    
    double volume;
    volume = PI * radius *radius * high;
    printf("radius:%.3lf\n",radius);
    printf("high:%.3lf\n",high);
    printf("The volume is:%.3lf",volume);
}