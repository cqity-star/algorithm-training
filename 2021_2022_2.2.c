/*
描述

2021-2022-1-《程序设计基础》考试第二场第二题
2021年转专业学生考试第四题
判断一行字符串中的数字出现的个数。

输入描述

输入有多行，每行一个字符串，该字符串中可以包含&$#@*任何符号以及空格。

输出描述

有多行。输出该字符串中每个出现过的数字，然后在冒号“:”后面输出该数字出现的次数。按数字大小，从小到大的顺序输出。一行输出一个数字及其出现次数。没有出现过的数字不输出。
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[101];

    // 读取多行输入，直到 EOF
    while (fgets(str, sizeof(str), stdin) != NULL) {
        int count[10] = {0}; // 用于统计数字 0-9 出现的次数

        // 遍历字符串，统计数字出现的次数
        for (int i = 0; str[i] != '\0'; i++) {
            if (isdigit((unsigned char)str[i])) { // 检查是否为数字字符
                count[str[i] - '0']++; // 计算对应数字的索引并增加计数
            }
        }

        // 输出出现过的数字及其出现次数
        for (int i = 0; i < 10; i++) {
            if (count[i] > 0) {
                printf("%d:%d\n", i, count[i]);
            }
        }
    }

    return 0;
}
