#include<stdio.h>

int main()
{

    char str[]= "house no : 123@ cbe ";
    char temp[30];
    int i;
    int j=0;

    for(i<0;str[i];i++);
        for(;i>=0;i--){

            if(str[i]>=32 && str[i]<=47 && str[i]>=58 && str[i]<=64){

                temp[j]=str[j];
            }
            else{
                temp[j]=str[i];
            }
            printf("%c",temp[j++]);


    }
}
