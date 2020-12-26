#include<stdio.h>
int main()
{
    int a[5],temp=0,k=0;
    printf("Enter number of time to rotate the array 'k' :\n");
    scanf("%d",&k);
    for(int i=0;i<5;i++)
    {
        printf("Enter element number %d\n",i);
        scanf("%d",&a[i]);
    }
    int f=0;
    int l=4;
    if(k%2==1)
    {
        while(f<l)
        {
            temp = a[f];
            a[f]=a[l];
            a[l]=temp;
            f++;
            l--;
        }
        for(int i=0;i<5;i++)
        {
            printf("%d",a[i]);
        }
    }
    else
    {
        for(int i=4;i>=0;i--)
        {
            printf("%d",a[i]);
        }
    }
}
