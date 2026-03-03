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
    int matrix1[3][3];
    int matrix2[3][3];
    int result[3][3] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
 }