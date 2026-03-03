#include <stdio.h>

int main() {
    int n;
    char name[16];

    printf("请输入你想打招呼的总人数；");
    scanf("%d",&n);
    
    for (int i = 0;i < n; i++) {
        printf("请输入你想打招呼的人的名字，不超过五个汉字；");
        scanf("%15s",name);
        printf("%s,你好\n",name);
    }

    printf("你已经打完所有招呼");
}