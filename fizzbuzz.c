/*
A program that counts from 1 to 100
For multiples of three, outputs "Fizz"
For multiples of five, outputs "Buzz"
For multiples of both three and five, outputs "FizzBuzz"
*/
#include <stdio.h>
#include <stdlib.h>

const int mult1 = 3;
const int mult2 = 5;

int main() {
    for (int i = 1; i <= 100; i++)
    {
        if (i % mult1 == 0 && i % mult2 == 0) 
        {
            printf("FizzBuzz\n");
        }
        else if (i % mult1 == 0)
        {
            printf("Fizz\n");
        }
        else if (i % mult2 == 0)
        {
            printf("Buzz\n");
        }
        else 
        {
            printf("%d\n",i);
        }
    }
    
    return 0;
}