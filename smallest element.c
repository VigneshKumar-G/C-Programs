#include<stdio.h>

int main()
{
    int a,k;

    int arr[10],n,j;
    scanf("%d",&n);

    for(int j=0;j<n;j++)

        scanf("%d",&arr[j]);

    if(arr[0]< arr[1])
    {
        a = arr[0];
        k = arr[1];
    }
    else
    {
        a = arr[1];
        k=arr[0];
    }
  for (int j=1;j<n;j++)
  {
      if (arr[j] < a)
      {
          k=a;
          a=arr[j];
      }
      else if (arr[j] < k)
      {
          k = arr[j];
      }

      printf("%d",k);
  }

    return 0;

}
