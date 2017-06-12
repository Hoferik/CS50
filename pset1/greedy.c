#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void)
{
    float change;
    
    do
  {
    printf ("O hai! How much change is owed?\n");
    change = get_float();
  }
    while (change <= 0);
    
    int coins = 0;
    change = round (change * 100);
    
    while (change > 0)
  {
    if (change - 25 >= 0)
    {
        change = change - 25; 
        coins = coins + 1;
    }
    else if (change - 10 >= 0)
    {
        change = change - 10;
        coins = coins + 1;
    }
    else if (change - 5 >= 0)
    {
        change = change - 5;
        coins = coins + 1;
    }
    else if (change - 1 >= 0)
    {
        change = change - 1;
        coins = coins + 1;
    }
  }
    
    printf ("%i\n", coins);
    
}
