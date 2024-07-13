#include <stdio.h>

int main (){
    int add (int i, int k);
    int i;
    int k;

    printf("Enter the number : ");
    scanf("%d",&i);
    printf("Enter the second number : ");
    scanf("%d",&k);
    int j = add(i,k);
    printf("The answer is : %d",j);

}
int add (int i,int k){
    return i+k;
}