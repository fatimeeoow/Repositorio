#include <cs50.h>
#include <stdio.h>

void print_even_numbers(int start, int end, int *even_sum);
void print_odd_numbers(int start, int end, int *odd_sum);

int main(void)
{
    int start, end;

    do
    {
        start = get_int("Enter a starting number (positive): ");
    }
    while (start <= 0);

    do
    {
        end = get_int("Enter an ending number (greater than starting number): ");
    }
    while (end <= start);

    printf("Choose an option:\n");
    printf("1) Even numbers in range and their sum\n");
    printf("2) Odd numbers in range and their sum\n");
    printf("3) Even and odd numbers in range and their respective sums\n");

    int option = get_int("Choose an option (1, 2, or 3): ");
    int even_sum = 0;
    int odd_sum = 0;

    switch (option)
    {
        case 1:
            print_even_numbers(start, end, &even_sum);
            printf("Total sum of even numbers: %d\n", even_sum);
            break;

        case 2:
            print_odd_numbers(start, end, &odd_sum);
            printf("Total sum of odd numbers: %d\n", odd_sum);
            break;

        case 3:
            print_even_numbers(start, end, &even_sum);
            printf("Total sum of even numbers: %d\n", even_sum);
            print_odd_numbers(start, end, &odd_sum);
            printf("Total sum of odd numbers: %d\n", odd_sum);
            break;

        default:
            printf("Invalid option selected.\n");
            break;
    }
}

void print_even_numbers(int start, int end, int *even_sum)
{
    printf("Even numbers in the range %d to %d:\n", start, end);
    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
            *even_sum += i;
        }
    }
    printf("\n");
}

void print_odd_numbers(int start, int end, int *odd_sum)
{
    printf("Odd numbers in the range %d to %d:\n", start, end);
    for (int i = start; i <= end; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
            *odd_sum += i;
        }
    }
    printf("\n");
}
