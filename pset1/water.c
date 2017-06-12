#include <cs50.h>
#include <stdio.h>
int main (void)
{

   int minutes;
    do
    {
        printf("Minutes: ");
        minutes = get_int();
        if (minutes == 0)
        {
        printf ("Enter a value above 0!\n");
        }
    }
    while (minutes <= 0);
    int bottles = minutes * 12;
    printf ("Bottles: %i\n", bottles);
}