/*
题目描述
分离字符串中的不同字符单独成行输出
输入
多组测试数据,每组测试数据仅一行字符串(不含空格,字符串长度小于等于200).
输出
分离字符串中的数字、字母、特殊字(分离的时候字符顺序不要变).
输出为三行:第一行为字母,第二行为数字,第三行为特殊字符.
*/

#include <stdio.h>
#include <string.h>

void separate_characters(const char str[]) {
    int len = strlen(str);
    
 
    for (int i = 0; i < len; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            putchar(str[i]);
        }
    }
    printf("\n");
    

    for (int i = 0; i < len; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            putchar(str[i]);
        }
    }
    printf("\n");

    for (int i = 0; i < len; i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))) {
            putchar(str[i]);
        }
    }
    printf("\n");
}

int main() {
    char str[201];

    while (fgets(str, sizeof(str), stdin)) {
        str[strcspn(str, "\n")] = 0;  
        separate_characters(str);
    }

    return 0;
}