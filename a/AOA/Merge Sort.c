#include<stdio.h>
void merge(int a[],int low,int mid,int high){
    int k,i,j,h;
    int b[100];
    h=low;
    i=low;
    j=mid+1;
    while((h<=mid) && (j<=high)){
        if(a[h]<=a[j]){
            b[i]=a[h];
            h++;
        }
        else{
            b[i]=a[j];
            j++;
        }
        i++;
    }

    if(h>mid){
        for(k=j;k<=high;k++){
            b[i]=a[k];
            i++;
        }
    }

    else{
        for(k=h;k<=high;k++){
            b[i]=a[k];
            i++;
        }
    }

    for(k=low;k<=high;k++){
        a[k]=b[k];
    }


}

void mergeSort(int a[],int l,int h){
  if(l<h){
    int mid=(l+h)/2;
    mergeSort(a,l,mid);
    mergeSort(a,mid+1,h);
    merge(a,l,mid,h);
  }
}


int main(){
    int n,i;
    printf("Enter the no. of elements :- \n ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements to be sorted :- \n");
    for(i=0;i<n;i++){
            printf("Enter %d element  ",(i+1));
        scanf("%d",&a[i]);
    }
    mergeSort(a,0,n-1);
    printf("The sorted array is :- \n");
    for (i=0 ; i< n ; i++){
        printf("%d\n",a[i]);
    }
   return 0;
}



