#include<stdio.h>

int main()
{
    int temp=0,k=0,n=0;
    printf("Enter number of elements in the array :\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter number of time to rotate the array 'k' :\n");
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Before rotation of the array :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    
    int j=0;
    while(j!=k)
    {
        temp = a[0];
        for(int i=0;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=temp;
        j++;
    }
    
    printf("After %d left rotations of the array :\n",k);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
