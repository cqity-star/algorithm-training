/*
描述

2020-2021-2 程序设计基础单开班第二题
划拳是古老中国酒桌文化的组成部分。有一种简单的划拳方法，每人口中喊出一个数字，同时用手比划出一个数字。如果谁比划出的数字正好等于两人喊出的数字之和，谁就输了，输家罚一杯酒。两人同赢或两人同输则继续下一轮，直到唯一的赢家出现。

现出给出A、B两人的最大酒量（最多能喝多少杯不倒）和两人的划拳记录，请你判断两个人谁先倒。

输入描述

输入第一行先后给出A、B两人的酒量（不超过100的非负整数），以空格分隔。第二行给出一个正整数N（≤100）
随后N行，每行给出一轮划拳的记录，格式为：
A喊 A划 B喊 B划

其中喊是喊出的数字，划是划出的数字，均为不超过100的正整数（两只手一起划）。

输出描述

在第一行中输出先倒下的那个人。
第二行中输出没倒的那个人喝了多少杯。
题目保证有一个人倒下。注意程序处理到有人倒下就终止，后面的数据不必处理。

用例输入 1 

1 1
6
8 10 9 12
5 10 5 10
3 8 5 12
12 18 1 13
4 16 12 15
15 1 1 16
用例输出 1 

A
1
*/
#include <stdio.h>

int main() {
    int max_a;
    int max_b;

    if (scanf("%d %d",&max_a,&max_b) != 2) {
        return 0;
    }

    int N;
    scanf("%d",&N);

    int drink_a = 0;
    int drink_b = 0;

    for (int i = 0;i < N;i++) {
        int shout_a;
        int hand_a;
        int shout_b;
        int hand_b;

        scanf("%d %d %d %d",&shout_a,&hand_a,&shout_b,&hand_b);
        int sum = shout_a + shout_b;
        int match_a = (hand_a == sum);
        int match_b = (hand_b == sum);

        if (match_a && !match_b) {
            drink_a++;
            if (drink_a > max_a) {
                printf("A\n");
                printf("%d\n",drink_b);
                return 0;
            }
        }

        if (match_b && !match_a) {
            drink_b++;
            if (drink_b > max_b) {
                printf("B\n");
                printf("%d\n",drink_a);
                return 0;
            }
        }
    }
}