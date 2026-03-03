/*
题目描述
用选择法对N个学生的成绩按从大到小的顺序排序，N个学生的成绩整数用scanf 输入，输入的成绩在[0，100]之间。
排序完成后，输入一个成绩，要求用逐个比较查找的方式找出该成绩是该组中第几个元素的值（即第几名）。
如果该成绩不在数组中，则输出“no this score!”。
要求:1、把排序算法写成函数形式，在主函数中输入N个数据，然后调用排序函数排序。 
    2、在排序过程中尽量减少数据的交换和移动。
    3、把查找算法写成函数形式，在主函数中输入1个数据，然后调用查找函数查找。

输入
输入共有三行：第一行是一个数N（N　< 50）,表示学生的人数； 第二行输入N个学生的成绩； 第三行输入一个数m(你要查找的成绩)

输出
第一行输出N个已经排好序的成绩，每两个成绩之间有一个空格隔开,每１０个数据换一行（由大到小排列）。 第二行输出你要查找的成绩的名次（如果成绩相同，则并列）。
*/
#include <stdio.h>


void select(int arr[],int n) {
    for(int i=0;i<n-1;i++) {
        int max_idx = i;
        for(int j=i+1;j<n;j++) {
            if(arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        if(max_idx != i) {
            int temp = arr[i];
            arr[i] = arr[max_idx];
            arr[max_idx] = temp;
        }
    }
}

int search(int arr[], int n, int m) {
    for(int i=0;i<n;i++) {
        if(arr[i] == m) {
            return i + 1; // 名次从1开始
        }
    }
    return -1; // 未找到
}

int main() {
    int N;
    scanf("%d", &N);
    int scores[50];
    for(int i=0;i<N;i++) {
        scanf("%d", &scores[i]);
    }
    int m;
    scanf("%d", &m);

    select(scores, N);

    for(int i=0;i<N;i++) {
        printf("%d", scores[i]);
        if((i + 1) % 10 == 0 || i == N - 1) {
            printf("\n");
        } else {
            printf(" ");
        }
    }

    int rank = search(scores, N, m);
    if(rank != -1) {
        printf("%d\n", rank);
    } else {
        printf("no this score!\n");
    }

    return 0;
}