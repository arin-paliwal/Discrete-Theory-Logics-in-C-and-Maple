//cardinality_and_power_set_elements
#include <stdio.h>
#include <math.h>

void count(int *arr1, int n)
{
    int count = 0,d=0;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0, k = n; j < k + 1; j++)
        { 
            if (i != j)
                if (arr1[i] == arr1[j])
                    count++;
        }
        if (count == 0)
            d++;
    }
    printf("cardinality is %d", d);
    printf("\n\n");
    printf("No of Power Set in a given Set will be is %0.0f", pow(2, d));
    printf("\n\n");
}
int main()
{
    int arr1[100], n;
    int i, j, k;
    printf("Input the number of elements to be stored in the Set: ");
    scanf("%d", &n);
    printf("Input %d elements in the Set :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }
    count(arr1, n);
}



// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// #define ROW 8
// #define COL 256
// void main()
// {
//   int i,j,k,num,temp,flag;
//   int table[COL][ROW]={0};
//   char set[ROW][20];
//   printf("\nEnter the number of set elements: ");
//   scanf("%d",&num);
//   printf("\nEnter any %d elements:\n",num);
//   for(i=0;i<num;i++)
//   {  
//     fflush(stdin);
//     gets(set[i]);
   
//   }
//   for(i=0;i<pow(2,num);i++)
//   {
//     temp=i;
//     for(j=0;j<num;j++)
//     {
//       table[i][j]=temp%2;
//       temp=temp/2;
//     }
//   }
//   int ans=pow(2,num);
//   printf("NUMBER OF ELEMENTS IN POWER SET IS = %d ",ans);
//   printf("\nThe power set is:\n\n");
//   for(i=0;i<pow(2,num);i++)
//   {
//     printf("\n\n{");
//     for(j=0;j<num;j++)
//     {
//       flag=0;
//       if(table[i][j]==1)
//       {
//     for(k=j+1;k<num;k++)
//       if(table[i][k]==1)
//         flag=1;
//     if(flag==1)
//       printf(" %s ,",set[j]);
//     else
//       printf(" %s  ",set[j]);
//       }
//     }
//     printf("}");
//   }
//   getch();

// }
