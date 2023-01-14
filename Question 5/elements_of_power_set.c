#include <stdio.h>
#include <math.h>
int main()
{
    int size, i, j, count;
    printf("Enter size of array: ");
    scanf("%d", &size);int arr[size];int freq[1000];
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
 
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    int c=0;
    for(i=0; i<size; i++)
    {
        if(freq[i] > 0)
        {
            c++;
        }
    }
    printf("c=%d\n",c);
    int x=pow(2,c);
    printf("Number of Power Set Elements = %d",x);

    return 0;
}