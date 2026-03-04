#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    for (int i = 0;i < N;i++) {
        if ((i - 2) % 3 == 0 && (i - 4) % 5 == 0 && (i - 5) % 6 == 0 && i % 7 == 0) {
            printf("%d\n",i);
        }
    }
}
