#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter size of set A\n");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter element of set A\n");
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("Enter size of set B\n");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter element of set B\n");
    for (int i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    printf("{");
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf(" (%d , %d) ", a[i], b[j]);
        }
    }
    printf("}");
    return 0;
}