#include <stdio.h>
#include <cs50.h>
void natural(int n);

int main(void)
{
    natural(50);

}


void natural(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%i", natural(n-1));

}