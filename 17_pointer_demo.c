#include <stdio.h>

int main() {
    char ch = 'A';
    char* ptr = &ch;

    printf("修改前：%c\n",ch);
    *ptr = 'a';
    printf("修改后：%c",ch);
}