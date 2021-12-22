#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //ToDo:Prompt for height
    int height = 0;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);


    //ToDo:Print the pyramid
    for (int i = 0 ; i < height ; i++)
    {
        for (int j = height - 1 ; j > i ; j--)
        {
            printf(" ");
        }
        for (int k = height - 1 ; k < height + i ; k++)
        {
            printf("#");
        }
        printf("\n");
    }

}
