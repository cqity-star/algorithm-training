/*
题目描述
将下面的字符串中的大小写进行转换．
输入
*/

#include <stdio.h>
#include <string.h>
void toggle_case(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }
}

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    toggle_case(str);
    printf("%s\n", str);

    return 0;
}