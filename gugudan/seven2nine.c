#include "gugudan.h"

void seven2nine(void)
{
    for(int num = 7; num <= 9; num++)
    {
        for(int i = 1; i <= 9; i++)
            printf("%d X %d = %d\n", num, i, num*i);
    }
}
