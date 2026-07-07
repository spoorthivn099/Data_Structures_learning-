//implementation of tri diagonal matrix
//main diagonal elements = i==j
//upper diagonal elements = i==j-1
//lower diagonal elements = i==j+1
//total number of elements in tri diagonal matrix = 3n-2
#include<stdio.h>
void set(int A[],int i,int j,int n,int x)
{
    if(i-j==1)
        A[i-2]=x;
    else if(i-j==0)
        A[n-1+i-1]=x;
    else if(i-j==-1)
        A[2*n-1+i-1]=x;
}
int get(int A[],int i,int j,int n)
{
    if(i-j==1)
        return A[i-2];
    else if(i-j==0)
        return A[n-1+i-1];
    else if(i-j==-1)
        return A[2*n-1+i-1];
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
    int A[3*n-2];
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
