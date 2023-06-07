#include <stdio.h>

int main()
{
       int a[]={
        2,3,1,1,4
    };
    int size=sizeof(a)/sizeof(a[0]);
    int result;
    int i=1;
    while(i<size){
          if(a[i]==0){
            result=0;
            break;
            }

            int j=a[i];
            i=i+j;
            result=0;

        if(i==size-1){
            result=1;
            i++;
        }

    }


    if(result==0){
        printf("false");
    }else{
        printf("true");
    }


    return 0;
}
