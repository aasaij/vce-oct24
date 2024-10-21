
#include <stdio.h>

int main()
{
    double n1, n2, sum;
    scanf("%lf %lf", &n1, &n2);
    sum = n1 + n2;
    if (sum == (long long)sum)
        printf("%lld", (long long)sum);
    else
        printf("%lf", sum);

    return 0;
}
