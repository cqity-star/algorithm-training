#include <stdio.h>

int main() {
    int arr[5];

    printf("请分5次逐一输入5个整数：\n");
    for (int i = 0;i < 5;i++) {
        scanf("%d",&arr[i]);
    }
    printf("输入完毕! \n");
    for (int i = 0;i < 5;i++) {
    printf("%d\n",arr[i]);
    }
}