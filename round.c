#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    i=(n/10)*10;
    j=i+10;

    if((n-i)>=(j-n)){
        printf("%d",j);
    }

        else{
            printf("%d",i);
        }

}



