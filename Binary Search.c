#include<stdio.h>
#include<conio.h>

int binarysearch(int [],int ,int,int);
void main()
{
    int n;
    printf("Enter the no. of elements in array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements in sorted order \n",n);
    for(int i=0;i<n;i++)
    {
        printf("Enter %d element \n",(i+1));
        scanf("%d",&a[i]);
    }
    int lb=0,ub=n-1;
    int ele;
    printf("Enter element to be searched \n");
    scanf("%d",&ele);
    int x=binarysearch(a,lb,ub,ele);
    if(x==0)
        printf("Element not found\n");
    else
        printf("Element found at %d",(x+1));
}

int binarysearch(int a[],int lb,int ub,int x)
{
    if(lb==ub)
    {
        if(x==a[lb])
            return lb;
        else
            return 0;
    }
    else
    {
        int mid=(lb+ub)/2;
        if(x==a[mid])
            return mid;
        else if(x<a[mid])
            return binarysearch(a,lb,mid-1,x);
        else
            return binarysearch(a,mid+1,ub,x);
    }
}

