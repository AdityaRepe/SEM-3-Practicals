#include<stdio.h>
#include<conio.h>
void main()
{
    int n,ele;
    printf("Enter the number of elements in array \n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter %d element",(i+1));
        scanf("%d",&a[i]);
    }
    //insertionsort(a,n);
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("Enter element to be searched \n");
    scanf("%d",&ele);
    int mid,lb=0,ub=n-1;
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        if(a[mid]<ele)
            lb=mid+1;
        else if(a[mid]>ele)
            ub=mid-1;
        else
            break;
    }
    printf("Element found at position %d ",(mid+1));

}
void insertionsort(int a[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=a[i];
        for(j=i-1;j>=0&&a[j]>key;j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=key;
    }
}
void quicksort(int a[],int start,int end)
{
    if(start<end)
    {
        int p=partition(a,start,end);
        quicksort(a,start,p-1);
        quicksort(a,p+1,end);
    }
}
int partition(int a[],int start,int end)
{
    int pivot=end,i=start,j=start;
    while(i<end)
    {
        if(a[i]<a[pivot])
        {
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            j++;
        }
        i++;
    }
    int temp=a[j];
    a[j]=a[pivot];
    a[pivot]=temp;

    return j;
}
