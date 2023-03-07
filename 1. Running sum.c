#include <stdio.h>
int i,j,k,n;
int s[1000];
int sm=0;
void main(){
    printf("Enter the Number of inputs");
    scanf("%d",&n);
    printf("Enter the values:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
        sm+=s[i];
    }
    printf("The running sum is:",sm);

}