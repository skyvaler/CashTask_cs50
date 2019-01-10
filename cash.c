#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float n;
    do
    {
        printf("Change owed: ");    //promt user to input the number
        n = get_float();
        while (n < 0)
        {
            printf("Change owed: ");
            n = get_float();
        }
    }
    while (n < 0);
    n = (int)round(n * 100);        //if user input coins, converted them
    int sum = 0;
    while (n >= 25)                 //minuses cash by 25
    {
        sum++;
        n -= 25;
    }
    while (n >= 10 && n < 25)       //minuses cash by 10
    {
        sum++;
        n -= 10;
    }

    while (n >= 5 && n < 10)        //minuses cash by 5
    {
        sum++;
        n -= 5;
    }
    while (n >= 1 && n < 5)         //minuses cash by 1
    {
        sum++;
        n -= 1;
    }
    printf("%i\n", sum);            //get the summary of cash
    return 0;                       // program execute successfully
}
