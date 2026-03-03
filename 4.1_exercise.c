/*
题目描述
设计函数，实现字符串的倒序输出。(函数)
*/
#include <stdio.h>
#include <string.h>

void reverse_string(const char str[]) {
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");
}

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    reverse_string(str);

    return 0;
}
