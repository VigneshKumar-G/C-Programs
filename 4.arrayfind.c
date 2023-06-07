#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,10};
    int b[]={2,3,1,0,5};

    int size=sizeof(a)/sizeof(a[0]);

    int size1=sizeof(b)/sizeof(b[0]);
    int n;
    for (int i=0;i<size;i++){
        for (int j=1;j<size1;j++){
            if(a[i]==b[j])
            {
                n=0;
            }
            if(a[i]!=b[j]){
            }
            if (n=0){

               printf("%d",a[i]);
            }
        }
    }
}
