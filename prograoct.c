#include <cs50.h>
#include <stdio.h>

int main(void)
{
    for (int i=0; i<=100; i++)
    {
        if ((i+1) %2 == 0)
        {
            printf("%d es par\n", (i+1));
        }
        else
        {
            printf("%d es impar\n",(i+1));
        }
    }

}
