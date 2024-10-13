#include <stdio.h>

int main(void)
{
        int num = 100;

        while (num >= 0) {
            printf("%d\n", num);
            num -= 2;
        }
        return 0;
}
