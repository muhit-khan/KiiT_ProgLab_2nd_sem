#include <stdio.h>
 
int findSum(int A[], int N)
{
    if (N <= 0)
        return 0;
    return (findSum(A, N - 1) + A[N - 1]);
}
int main()
{
    int N;
    printf("Enter size of the array: ");
    scanf("%d", &N);
    int A[N];
    printf("Enter elements in the array: ");
    for(int i=0; i<N; i++) 
    {
        scanf("%d", &A[i]);
    }
    printf("SUM = %d", findSum(A, N));
    return 0;
}