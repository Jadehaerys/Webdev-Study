#include <stdio.h>

int odd(int input);
int even(int input);
int prime(int input);

int main(void){

int choice, input;

do{
printf("Enter a positive integer: ");
scanf("%d", &input);
}while(input <=0);

do{
printf("\n----MENU----\n1---Even\n2---Odd\n3---Prime\n4---Exit\n");
scanf("%d", &choice);

switch (choice){

case 1:
odd(input);

break;

case 2:
even(input);
break;

case 3:
prime(input);

break;

case 4:
printf("Exiting Program...");
break;

default:
printf("Invalid input!");
}
} while(choice !=4);

}

int odd(int input){
int i;
for(i = 2; i <= input; i+=2){
printf("%d, ", i);
}

}
int even(int input){
int i;
for(i = 1; i<= input; i+=2){
printf("%d, ", i);
}

}
int prime(int input){
int i;
for (i = 2; i <= input; i++)
{
int isPrime = 1;
for (int j = 2; j < i; j++)
{
if(i%j == 0){
isPrime = 0;
break;
}
}
if(isPrime == 1){
printf("%d, ", i);
}
}

}