#include<stdio.h>


int summatrixcon(int *ptr, int rows, int cols)
{
    int (*arr)[3] =(int (*) [3])ptr;

    int sum=0;
    for(int i=0;i<rows;i++)
    { for(int j=0;j<cols;j++)
        {
            sum+=arr[i][j];
        }
    }
    return sum;
}

int main ()
{

int matrix[3][3] = {

{1,2,3},
{4,5,6},
{7,8,9}

};

int total =summatrixcon(&matrix[0][0] ,3,3);
printf("sum = %d\n" , total);

int data [6] = {1,2,3,4,5,6};
total = summatrixcon(data,2,3);
printf("sum = %d\n" , total);

return 0;



}