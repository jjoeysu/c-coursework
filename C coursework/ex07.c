#include<stdio.h>
int main(void)
{
	char name[20], gender[10], fruit[10];
	int age;
	printf("Enter your name:");
	scanf_s("%s",name,20);
	printf("Enter your gender (F or M): ");
	scanf_s("%s", gender,10);
	printf("Enter your age: ");
	scanf_s("%d", &age);
	printf("Enter your favorite fruit \
(A for apple, B for banana, and O for orange) :");
	scanf_s("%s", fruit,10);
	printf("Your infos:  %s , %s , %d , %s",
		name, gender, age, fruit);
	return 0;
}