#include<stdio.h>
int sumMat(int arr [][3], int rows)
{
    int sum=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    return sum;
}
int main ()
{

int matrix[4][3]={

{1,2,3},
{ 4,5,6},
{ 7,8,9},
{1,3,5}
};

int total=sumMat(matrix,4);
printf("sum = %d\n",total );
return 0;


}