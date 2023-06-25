#include <stdio.h>
#include <stdlib.h>

void fun1(void);
void fun2(void);

int main(void)
{
    int iCounter;

    printf("\nCalling fun1\n");
    for (iCounter = 0; iCounter < 3; iCounter++)
        fun1();

    printf("\nCalling fun2\n");
    for (iCounter = 0; iCounter < 3; iCounter++)
        fun2();

    exit(0);
}

void fun1(void)
{
    int iNo = 10;

    iNo++;

    printf("In fun1, iNo = %d\n", iNo);
}

void fun2(void)
{
    static int iNo = 10;
    
    iNo++;

    printf("In fun2, iNo = %d\n", iNo);
}