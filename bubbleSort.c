#include <stdio.h>
#include <stdlib.h>

void Bubble(float A[], int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(A[j]>A[j+1])
                swap(&A[j],&A[j+1]);
        }

    }
}
void swap(float* x, float* y)
{
    float temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int n,i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    float A[n];
    for(i=0;i<n;i++)
    {
        printf("A[%d] = ",i+1);
        scanf("%f",&A[i]);
    }
    Bubble(A,n);
    printf("The sorted array is: \n");
    for(i=0;i<n;i++)
    {
        printf("%.2f\t",A[i]);
    }
    return 0;
}

