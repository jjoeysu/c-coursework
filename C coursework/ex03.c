#include <stdio.h>
int main(void)
{
    double height;
    char name[20];
    scanf_s("%s",name,20);
    scanf_s("%lf", &height);
    height = height / 100;
    printf("%s,you are %.2fm tall.", name, height);
    return 0;
}