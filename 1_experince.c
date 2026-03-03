/*
题目描述
将两个给定的距阵(3*3)相乘得到另一个距阵并将其打印出来。

输入
输入两个大小为3*3的距阵

输出
输出一个大小为3*3的距阵，矩阵每一行相邻的的两个数字之间由一个空格隔开。
*/
#include <stdio.h>

 int main() {
    int n_1;
    int n_2;

    scanf("%d %d",&n_1,&n_2);
    int count = 0;

    for (int num = n_1; num <= n_2; num++) {
        int is_prime = 1; 
        if (num < 2) {
            is_prime = 0; 
        } 
        else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    is_prime = 0; 
                    break;
                }
            }
        }
        if (is_prime) {
            printf("%d ", num);
            count++;
            if (count % 5 == 0) {
                printf("\n"); 
            }
        }
    }
    return 0;
 }