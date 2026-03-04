#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <math.h>

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void typeEffect(const char *text, int delay, int color) {
    setColor(color);
    while (*text) {
        printf("%c", *text++);
        fflush(stdout);
        Sleep(delay);
    }
    setColor(7);
}
void rainbowText(const char *text, int delay) {
    int colors[] = {9, 10, 11, 13, 14, 12};
    int len = 6;
    int i = 0;
    while (*text) {
        setColor(colors[i % len]);
        printf("%c", *text++);
        fflush(stdout);
        Sleep(delay);
        i++;
    }
    setColor(7);
}

void playMelody() {
    int melody[] = {262, 294, 330, 392, 392, 330, 294, 262};
    int duration[] = {300, 300, 300, 500, 300, 300, 300, 500};
    for (int i = 0; i < 8; i++) {
        Beep(melody[i], duration[i]);
    }
}

void drawHeart(int frame, int color) {
    setColor(color);
    system("cls");
    printf("\n\n");
    for (float y = 1.5f; y > -1.5f; y -= 0.1f) {
        for (float x = -1.5f; x < 1.5f; x += 0.05f) {
            float a = x * x + y * y - 1;
            if (a * a * a - x * x * y * y * y <= 0.0f)
                printf(frame % 2 == 0 ? "❤" : "♡");
            else
                printf(" ");
        }
        printf("\n");
    }
    Sleep(150);
    setColor(7);
}

int main() {
    system("title 💖终极祝福动画💖");
    system("cls");

    char name[50];
    printf("请输入她的名字：");
    scanf("%s", name);

    system("cls");
    typeEffect("✨ 正在准备专属祝福动画，请稍候... ✨\n", 60, 13);
    Sleep(1000);

    HANDLE hThread = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)playMelody, NULL, 0, NULL);

    for (int i = 0; i < 8; i++) {
        drawHeart(i, 12 + (i % 3));
    }

    Sleep(800);
    system("cls");
    printf("\n\n");

    rainbowText("💖 ", 80);
    typeEffect(name, 120, 11);
    typeEffect(" 辛苦了！\n\n", 120, 14);

    typeEffect("🌷 为人民服务的人永远最美。\n", 70, 10);
    typeEffect("工作很累。\n", 70, 10);
    Sleep(500);
    typeEffect("🌈 但别忘了照顾好自己，让快乐常伴身边。\n", 70, 9);
    Sleep(500);
    typeEffect("💫 希望你每天都有笑容，心中永远充满光～\n\n", 70, 13);
    Sleep(500);

    for (int i = 0; i < 4; i++) {
        system("cls");
        drawHeart(i, 12);
        setColor(10);
        printf("\n\n\t\t✨ %s 天天开心！✨\n", name);
        Sleep(500);
    }

    setColor(14);
    printf("\n\n💌 来自我的特别祝福：愿你幸福如光，笑容不息。\n");
    setColor(7);

    printf("\n按任意键退出程序...");
    getch();
    return 0;
}