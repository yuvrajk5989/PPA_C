#include <stdio.h>

struct Hello
{
    float f;    // 4
    int Arr[3]; // 12
} hobj;         // 16

int main()
{
    printf("Size of object is : %zu\n", sizeof(hobj));

    return 0;
}