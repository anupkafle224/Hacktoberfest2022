#include <stdio.h>
#include <stdlib.h>

void swap(float* x,float * y)
{
    float temp;
    temp = *x;
    *x = *y;
    *y = temp;

}
void selection(float A[], int n)
{
    int i,j,min;
    for(i=0;i<n-1;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[min])
                min = j;
        }
        swap(&A[min],&A[i]);
    }
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
    selection(A,n);
    printf("The sorted array is: \n");
    for(i=0;i<n;i++)
    {
        printf("%.2f\t",A[i]);
    }
    return 0;
}
