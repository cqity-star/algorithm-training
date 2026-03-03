/*
描述

2021-2022-1-《程序设计基础》补考第三题
2021年转专业学生考试第二题
小朋友玩跳绳比赛,要计算在一分钟内跳了多少下.假设每秒钟跳一下,如果中途失败了,则要花三秒钟后才能开始重跳.一般小朋友跳绳一分钟要跳坏好几次.现在给出小朋友每次跳坏时已经跳的总数,求小朋友在一分钟内跳了多少下.

输入描述

第一行为n个小朋友
其余各行,每行第一个整数是跳坏的次数m,其余m个整数是跳坏时累计跳了多少下.

输出描述

输出相应小朋友头一分钟内跳了多少下.

用例输入 1 

6
0
3 12 23 45 
1 17
4 10 20 30 40
5 10 20 30 40 58 
6 10 20 30 40 47 60
用例输出 1 

60
51
57
48
48
47
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    for (int i = 0;i < n;i++) {
        int m;
        scanf("%d",&m);

        int fails[100];
        for (int j = 0;j < m;j++) {
            scanf("%d",&fails[j]);
        }
        int time_loss = 0;
        int final_score = 0;
        int is_finished = 1;

        for (int k = 0;k < m;k++) {
            if (fails[k] + time_loss >= 60) {
                final_score = 60 - time_loss;
                is_finished = 0;
                break;
            }
            if (fails[k] + time_loss + 3 >= 60) {
                final_score = fails[k];
                is_finished = 0;
                break;
            }
            time_loss += 3;
        }
        if (is_finished == 1) {
                final_score = 60 - time_loss;
            }
            printf("%d\n",final_score);
    }
}