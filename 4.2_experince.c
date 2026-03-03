/*
题目描述
读入两个小于100的正整数A和B，计算A+B。需要注意的是：A和B的每一位数字由对应的英文单词给出。

输入
测试输入包含若干测试用例，每个测试用例占一行，格式为"A + B ="，相邻两字符串有一个空格间隔。当A和B同时为0时输入结束，相应的结果不要输出。

输出
对每个测试用例输出1行，即A+B的值。
*/
#include <stdio.h>
#include <string.h>

char* words[10] = {
    "zero","one","two","three","four","five","six","seven","eight","nine"
};

int word_to_num(char* w) {
    for (int i = 0;i < 10;i++) {
        if (strcmp(w,words[i]) == 0) {
            return i;
        }
    }
    return -1;
}

int number() {
    char temp[20];
    int num = 0;

    while (1) {
        scanf("%s",temp);

        if (strcmp(temp,"+") == 0) {
            break;
        } 
        if (strcmp(temp,"=") == 0) {
            break;
        }
        
        int x;
        x = word_to_num(temp);
        num = 10 * num + x;
    }
    return num;
}

int main() {
    while (1) {
        int A,B;

        A = number();
        B = number();

        if (A == 0 && B == 00) {
            break;
        }
        printf("%d\n",A + B);
    }
}
