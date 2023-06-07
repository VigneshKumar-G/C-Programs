#include<stdio.h>
#include<string.h>
int main()
{
int n,i,j,count;
char str[1000]="1",t[10000];
scanf("%d",&n);
while(n--)
{
printf("%s\n",str);
i=0,count=1;
for(j=0;str[j];j++)
{
     if(str[j]==str[j+1])
         count++;
     else
     {
         t[i++]=count+48;
         t[i++]=str[j];
         count=1;
     }
}
t[i]=NULL;
strcpy(str,t);
}
return 0;
}

