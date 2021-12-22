#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //ToDo:get a number or a float number
    float input_number = 0;
    do
    {
        input_number = get_float("Change owed: ");
    }
    while (input_number <= +0.001);


    //ToDo:multiply by 100
    float DtC = round(input_number * 100);
    printf("%f\n", DtC);

    //ToDo:calculator 25
    int counter25 = 0;
    int cent25 = DtC;
    while (cent25 >= 25)
    {
        counter25++;
        cent25 -= 25;
    }


    //ToDo:calculator 10
    int counter10 = 0;
    int cent10 = cent25;
    while (cent10 >= 10)
    {
        counter10++;
        cent10 -= 10;
    }


    //ToDo:calculator 5
    int counter5 = 0;
    int cent5 = cent10;
    while (cent5 >= 5)
    {
        counter5++;
        cent5 -= 5;
    }


    //ToDo:calculator 1
    int counter1 = 0;
    int cent1 = cent5;
    while (cent1 >= 1)
    {
        counter1++;
        cent1 -= 1;
    }


    //ToDo:All coin used
    int all = (counter25 + counter10 + counter5 + counter1);
    printf("%i\n", all);
}