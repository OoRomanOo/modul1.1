#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int k = 1;
    int n = get_int("N:");
    int i = 1;
    do
    {
        k = k * k;
        i++;
        k++;
    }
    while (k < n);
    printf("K:%i\n", i);
}