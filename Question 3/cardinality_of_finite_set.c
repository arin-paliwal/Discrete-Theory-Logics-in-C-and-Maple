#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of array\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int result[__INT_MAX__],flag=0,k=0;
    /*for(int i=0;i<n;i++){ flag=0;
        for(int j=0;j<n;j++){
            if ((a[i]==a[j]) && (i!=j))
            flag++;
        }
        if (flag==0){
            result[k]=a[i];
            k++;
        }
    }*/
    int max=0;
    for(int i=0;i<n;i++){
        if (a[i]>max)
        max=a[i];
    }
    printf("%d",max);
    for(int i=0;i<max;i++){
        result[i]=0;
    }
    for(int i=0;i<n;i++){
        result[a[i]]++;
    }
    for(int i=0;i<n;i++){
        printf("%d ",result[i]);
    } printf("\n");
    for(int i=0;i<n;i++){
        if (result[i]==1)
        k++;
        //else if (result[i])
    }
    printf("No.of unique element = %d",k);
}