#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <string.h>

#define PI 3.1415926

// 光标定位
void gotoxy(int x, int y) {
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

// 延迟
void delay(int ms) {
    Sleep(ms);
}

// 控制台颜色设置
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// 清屏
void clear() {
    system("cls");
}

// 打字机效果
void typeEffect(const char* text, int delayMs) {
    for (int i = 0; text[i] != '\0'; i++) {
        printf("%c", text[i]);
        fflush(stdout);
        Sleep(delayMs);
    }
    printf("\n");
}

// 渐变色波浪文字动画
void rainbowWaveText(const char* text, int cycles, int amplitude, int speed) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int len = strlen(text);

    for (int t = 0; t < cycles; t++) {
        for (int i = 0; i < len; i++) {
            // 计算波动位置
            int y = (int)(amplitude * sin((i + t) * 0.4)) + 10;
            int x = i + 10;

            // 渐变彩虹颜色
            int color = 1 + (int)(fabs(sin((i + t) * 0.3)) * 14);
            gotoxy(x, y);
            SetConsoleTextAttribute(hConsole, color);
            printf("%c", text[i]);
        }

        Sleep(speed);
        clear();
    }
}

int main() {
    clear();

    setColor(14);
    typeEffect("✨ 正在传递一份温暖的问候 ✨", 70);
    Sleep(1000);
    clear();

    const char* messages[] = {
        "🌸 工作辛苦啦！",
        "💪 希望你多注意身体，别太累～",
        "☕ 记得好好休息，保持好心情！",
        "💖 天天都要开开心心！"
    };

    for (int i = 0; i < 4; i++) {
        setColor(10 + i);
        typeEffect(messages[i], 70);
        Sleep(600);
    }

    Sleep(1000);
    clear();

    // 🌈 彩色渐变波浪动画
    rainbowWaveText("💖 祝你天天开心 💖", 50, 2, 80);

    setColor(11);
    gotoxy(10, 15);
    printf("🌈 — 来自最真诚的祝福 — 🌈\n\n");

    setColor(7);
    system("pause");
    return 0;
}