/*
题目描述
一个班有N名学生，每个学生修了五门课。 1）求每个学生的平均成绩，并输出每个学生的学号，每门课程的成绩及平均值。 2）求某门课程的平均分； 1、分别编写2个函数实现以上2个要求。 2、第1个函数用数组名作参数。第2个函数用指针作参数，并在函数体内用指针对数组操作。

输入
第一行：输入N，代表N名学生 下面N行，每行有6个数据分别为：学号，英语成绩，数学成绩，C++成绩，音乐成绩，美术成绩

输出
首先输出N行 每行为学生学号，每门成绩和平均成绩（平均成绩保留一位小数） 最后按顺序输出每门平均成绩（平均成绩保留一位小数）
*/

#include <stdio.h>

#define MAX_STUDENTS 100
#define SUBJECTS 5
void calculate_student_averages(int n, int scores[][SUBJECTS + 1], float student_averages[]) {
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 1; j <= SUBJECTS; j++) {
            sum += scores[i][j];
        }
        student_averages[i] = sum / (float)SUBJECTS;
    }
}

void calculate_subject_averages(int n, int scores[][SUBJECTS + 1], float subject_averages[]) {
    for (int j = 1; j <= SUBJECTS; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += *( *(scores + i) + j);
        }
        subject_averages[j - 1] = sum / (float)n;
    }
}

int main() {
    int n;
    int scores[MAX_STUDENTS][SUBJECTS + 1];
    float student_averages[MAX_STUDENTS];
    float subject_averages[SUBJECTS] = {0};

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i][0]);
        for (int j = 1; j <= SUBJECTS; j++) {
            scanf("%d", &scores[i][j]);
        }
    }

    calculate_student_averages(n, scores, student_averages);
    calculate_subject_averages(n, scores, subject_averages);

    for (int i = 0; i < n; i++) {
        printf("%d ", scores[i][0]);
        for (int j = 1; j <= SUBJECTS; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("%.1f\n", student_averages[i]);
    }

    for (int j = 0; j < SUBJECTS; j++) {
        printf("%.1f ", subject_averages[j]);
    }
    printf("\n");

    return 0;
}
