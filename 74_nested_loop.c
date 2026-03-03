/*
题目：编写一段代码，使用for循环嵌套for循环来打印出图示的三角形。
三角形如下：
* 
* * 
* * * 
* * * * 
* * * * *
*/
#include <stdio.h>

int main() {
    for (int i = 0;i <= 5;i++) {
        for (int j = 0;j <= i;j++) {
            printf("* ");
        }
        printf("\n");
    }
}