#include <stdio.h>
#define MAX 'z' 
int main(void) 
{
    char c = 'a'; 
    printf("%2c",c);
    while (c++ < MAX)
        printf("%2c", c);
    printf("\n");
    return 0;
}
/*
 a b c d e f g h i j k l m n o p q r s t u v w x y z

*/