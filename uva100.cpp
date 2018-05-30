#include <stdio.h>

int cycle(int m);

int main() {
    int x, y, max, temp;
    int startX, startY;
    int i;

    while( scanf("%d %d\n", &x, &y) == 2) {
        startX = x;
        startY = y;

        if(x > y){
            temp = x;
            x = y;
            y = temp;
        }

        max = cycle(x);
        for (i = x + 1; i <= y; i++) {
            temp = cycle(i);
            if (temp > max) {
                max = temp;
            }
        }
        printf("%d %d %d\n", startX, startY, max);
    }

    return 0;
}

int cycle(int m)
{
    int i = 1;

    while (m != 1){
        if (m % 2 == 0) {
            m = m/2;
        }
        else {
            m = 3*m + 1;
        }
        i++;
    }
    return i;
}