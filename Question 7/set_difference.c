//set difference
#include <stdio.h>
int main()
{
    int len1, len2;
    printf("Enter the length of first set\n");
    scanf("%d",&len1);
    printf("Enter the length of second set\n");
    scanf("%d",&len2);

    int a[len1], b[len2], result1[1000], k = 0, p = 0, result2[1000];
    printf("Enter the elements of first set\n");
    for (int i = 0; i < len1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the elements of second set\n");
    for (int i = 0; i < len2; i++)
    {
        scanf("%d", &b[i]);
    }
    int flag;
    for (int i = 0; i < len1; i++)
    {
        flag = 0;
        for (int j = 0; j < len2; j++)
        {
            if (a[i] == b[j])
            {
                flag++;
            }
        }
        if (flag == 0)
        {
            result1[k] = a[i];
            k++;
        }
    }
    for (int i = 0; i < len1; i++)
    {
        flag = 0;
        for (int j = 0; j < len2; j++)
        {
            if (b[i] == a[j])
                flag = 1;
        }
        if (flag == 0)
        {
            result2[p] = b[i];
            p++;
        }
    }
    printf("\n");
    printf("Set Differnce A-B\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", result1[i]);
    }
    printf("\n");
    printf("Set Differnce B-A\n");
    for (int i = 0; i < p; i++)
    {
        printf("%d ", result2[i]);
    }
    return 0;
}