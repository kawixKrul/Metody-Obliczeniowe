#include <stdio.h>

float compute_series_float()
{
    float x0 = 11.0 / 2.0, x1 = 61.0 / 11.0, res;

    for (int i = 2; i <= 34; ++i)
    {
        printf("%f\n", res);
        res = 111.0 - (1130.0 - 3000.0 / x0) / x1;
        x0 = x1;
        x1 = res;
    }

    return res;
}

double compute_series_double()
{
    double x0 = 11.0 / 2.0, x1 = 61.0 / 11.0, res;

    for (int i = 2; i <= 34; ++i)
    {
        printf("%f\n", res);
        res = 111.0 - (1130.0 - 3000.0 / x0) / x1;
        x0 = x1;
        x1 = res;
    }

    return res;
}

long double compute_series_long_double()
{
    long double x0 = 11.0 / 2.0, x1 = 61.0 / 11.0, res;

    for (int i = 2; i <= 34; ++i)
    {
        printf("%Lf\n", res);
        res = 111.0 - (1130.0 - 3000.0 / x0) / x1;
        x0 = x1;
        x1 = res;
    }

    return res;
}

int main(int argc, char *argv[])
{

    printf("FLOAT: %f\n\n", compute_series_float());
    printf("DOUBLE: %f\n\n", compute_series_double());
    printf("LONG DOUBLE: %Lf\n\n", compute_series_long_double());
    return 0;
}