#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int height;
    
    do 
    {
        printf ("Height: ");
        height = get_int();
        if (height == 0)
        return 0;
    
        if (height > 23 || height < 1)
        printf ("Please insert a value between 1 and 23\n");
    }
    while (height > 23 || height < 1);
    
    for (int i = 1; i <= height; i = i + 1)
    {
        for (int s = height - i; s > 0; s = s - 1)
            {
                    printf (" ");
            }
        
        for (int h = 1; h <= i; h = h + 1)
            {
                    printf ("#");
            }
        printf ("  ");    
       
        for (int h = 1; h <= i; h = h + 1)
            {
                    printf ("#");
            }
        
        printf ("\n");   
    }       
    
}
