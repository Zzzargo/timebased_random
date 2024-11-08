#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    printf("Cate numere doriti? (0-255) ");
    time_t t0 = time(NULL);
    time_t t1 = time(NULL);
    int a;
    int start = t0;
    srand(time(NULL));

    scanf("%d", &a);
    while (t1 < start + a)
    {
        t1 = time(NULL);
        if(t1 != t0)
        {
            printf("%d\n", rand());
            t0 = t1;
        }
    }
}