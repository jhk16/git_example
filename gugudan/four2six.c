#include "gugudan.h"

void four2six(void)
{
    for(int num = 4; num <= 6; num++)
    {
        for(int i = 1; i <= 9; i++)
            printf("%d X %d = %d\n", num, i, num*i);
    }
}
