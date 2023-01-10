#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number = get_long("Insert credit card number: ");

    int i=0; //Number of digits
    long n = number;
    while(n>=1)
    {
        n= n/10;
        i++;
    }
    n = number;

    int sum1 = 0;
    int sum2 =0;
    int d = n%10;

    for (int a=0; a < i; a++)
    {
        n = 0.1*(n-d);
        if (a%2!=0)
        {
            printf("%i ", 2*d);
            sum1 += (2*d)%10 + 0.1*((2*d)-((2*d)%10));
        }
        else
        {
            sum2 += d;
        }
        d=n%10;
    }

    printf("\n%i\n", sum1);
    printf("%i\n", sum2);

    if ((sum1 + sum2)%10==0)
    {
        printf("Approved Checksum\n");
    }
    else
    {
        printf("INVALID\n");
    }

}


