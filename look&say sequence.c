#include<stdio.h>
#include<string.h>
int main()
{
    char str[5000]="1";
    char temp[5000];
    int n=5;
    printf("%s\n",str);
    int i=0;
    int count=1;
    while(n--){
        for (int j=0;str[j];j++)
            if(str[j]==str[j+1]){
                count+1;

            }
            else{
                temp[i++]=count+48;
                temp[i++]=str[j];
                count=1;

            printf("%s\n",temp);
            printf(str,temp);
        }

        return 0;
    }
}
