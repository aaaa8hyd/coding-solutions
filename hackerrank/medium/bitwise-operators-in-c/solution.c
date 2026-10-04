#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) 
{
    int i, j, a = 0, o = 0, x = 0;

    for (i = 1; i <= n; i++) 
    {
        for (j = i + 1; j <= n; j++) 
        {
            if ((i & j) < k && (i & j) > a)
                a = i & j;

            if ((i | j) < k && (i | j) > o)
                o = i | j;

            if ((i ^ j) < k && (i ^ j) > x)
                x = i ^ j;
        }
    }

    printf("%d\n%d\n%d\n", a, o, x);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    calculate_the_maximum(n, k);

    return 0;
}
