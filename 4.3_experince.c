/*
题目描述
给定一个只有小写英文字母组成的字符串，串长为n。请你编写程序求出这个字符串中出现次数最多的字母。

输入
输入有两行：第一行是一个正整数n（ 1 < n < 100）表示字符串的长度。后面一行是一个长度为n的字符串（只由小写字母组成）。测试用例保证出现次数最多的字母只有一个。

输出
输出一行，仅输出出现次数最多的字母。
*/
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char str[101];
    int count[26] = {0};

    scanf("%d", &n);
    scanf("%s", str);

    for (int i = 0; i < n; i++) {
        count[str[i] - 'a']++;
    }

    int max_count = 0;
    char max_char;
    for (int i = 0; i < 26; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            max_char = 'a' + i;
        }
    }

    printf("%c\n", max_char);

    return 0;
}