#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program to produce random nums
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int num = n % 10;
if (num < 0)
{
num = num * -1;
}
else
{
num = num;
}

if (num > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, num);
}
else if (num == 0)
{
printf("Last digit of %d is %d and is 0\n", n, num);
}
else if (num < 6 && num != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
}
return (0);
}
