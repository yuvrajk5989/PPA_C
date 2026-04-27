#include <stdio.h>

int no = 11; // Global Variable (Data)

void fun()
{
    int i = 51; // Local Variable of fun (Stack)

    printf("Inside fun : %d\n", i);  // 51
    printf("Inside fun : %d\n", no); // 11
}

int main()
{
    int i = 21; // Local Variable of main (Stack)

    printf("Inside main : %d\n", i);  // 21
    printf("Inside main : %d\n", no); // 11

    fun();

    return 0;
}