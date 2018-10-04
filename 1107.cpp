#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main() {
    int h,l, *cuts, times, flag;
    scanf("%d %d", &h, &l);
    while(h != 0 && l != 0)
    {
        cuts = (int*) malloc (sizeof(int) * l);
        for (int i = 0; i < l; i++)
        {
        scanf("%d", &cuts[i]);
        }
        times = 0;
        for (int x = 1; x <= h;x++)
        {
            flag = 0;
            for (int i = 0; i < l; i++)
            {
                if (cuts[i] >= x)
                {
                    if (flag == 1) flag = 0;
                }
                else
                {
                    if (flag == 0)
                    {
                        flag = 1;
                        times = times + 1;
                    }
                }
            }
        }
        printf("%d\n",times);
        free(cuts);
        scanf("%d %d", &h, &l);
    }
    return 0;
}
