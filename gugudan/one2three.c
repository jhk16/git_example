#include "gugudan.h"

void one2three(void)
{
    for(int num = 1; num <= 3; num++)
    {
        for(int i = 1; i <= 9; i++)
            printf("%d X %d = %d\n", num, i, num*i);
    }
}
