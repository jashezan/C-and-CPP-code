#include<stdio.h>
#include<time.h>

void fnc(int x, int n)
{
    x = n*2 ;
}

int main()
{
    int i, j, x, n;
    clock_t start_time, end_time;
    double time_elapsed;

    // time during loop using
    start_time = clock();

    n = 12345678;
    for (int i = 0; i < 1000000000; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            x = n*2 ;
        }
    }
    end_time = clock();

    time_elapsed = (double) (end_time - start_time) / CLOCKS_PER_SEC;
    printf("Loop Time: %9lf seconds\n", time_elapsed);

    // time during function call
    start_time = clock();

    for (int i = 0; i < 1000000000; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            fnc(x, n);
        }
    }
    end_time = clock();

    time_elapsed = (double) (end_time - start_time) / CLOCKS_PER_SEC;
    printf("Func Time: %9lf seconds\n", time_elapsed);

    return 0;
}
