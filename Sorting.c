#include<stdio.h>
int main()
{
    int arr[10],n,i,j,temp;
    printf("Enter how many Element you want to insert : \n");
    scanf("%d",&n);
    printf("Enter your Element  : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    // Bubble sorting Start
    for(i=0; i<n-1; i++)
    {

        for(j=0; j<n-1; j++)
        {

            if(arr[j]>arr[j+1])
            {

                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
    //Bubble Sorting End
    printf("Accending Order : \n");

    for(i=0; i<n; i++)
    {
        printf("%d\n",arr[i]);
    }
      for(i=0; i<n-1; i++)
    {

        for(j=0; j<n-1; j++)
        {

            if(arr[j+1]>arr[j])
            {

                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]= temp;
            }
        }
    }
      printf("Decending Order : \n");

    for(i=0; i<n; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;


}
