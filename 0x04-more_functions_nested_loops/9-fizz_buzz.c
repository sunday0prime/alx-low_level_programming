#include <stdio.h>
#include "main.h"

/**
* main - program that prints either number, fizz, buzz or fizzbuzz
* Return: returns 0
*/

int main(void)
{
int num = 1;

while (num++ < 100)
{
if ((num % 3 == 0) && (num % 5 == 0))
{
printf("fizzBuzz");
}
else if ((num % 3) == 0)
{
printf("fizz");
}
else if ((num % 5) == 0)
{
if (num != 100)
{
printf("Buzz");
}
else
{
printf("Buzz");
}
}
num++;
}
return (0);
}

