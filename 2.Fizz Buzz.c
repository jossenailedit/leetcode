#include <stdio.h>
int i,k;
void main(){
    printf("Input the number of iterations:");
    scanf("%d",&k);
    for (i=1;i<k;i++){
        if (i%3==0) {
            printf("\tFizz");
        }
        else if (i%5==0) {
            printf("\tBuzz");
        }
        else{
            printf("\t %d",i);
        }

    }
}