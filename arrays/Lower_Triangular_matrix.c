//Implementation of Lower Triangular Matrix 
//number of elements in lower triangular matrix = n(n+1)/2
//i>=j= i(i+1)/2 + j
#include<stdio.h>
void set(int A[],int i,int j,int n,int x)
{
    if(i>=j)
        A[i*(i-1)/2 + j-1]=x;
}
int  get(int A[],int i,int j,int n)
{
    if(i>=j)
        return A[i*(i-1)/2 + j-1];
    else
        return 0;
}
void display(int A[],int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {

                printf("%d ",get(A,i,j,n));
        }
        printf("\n");
    }
}
int main()
{
    int n,i,j,x;
    printf("Enter the order of  matrix: ");
    scanf("%d",&n);
    int A[n*(n+1)/2];
    printf("Enter all elements: \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&x);
            set(A,i,j,n,x);
        }
    }
    printf("The matrix is: \n");
    display(A,n);
    return 0;
}
