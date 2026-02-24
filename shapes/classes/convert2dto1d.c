#include<stdio.h>

int sumMat(int *ptr , int rows, int cols)
{

int sum=0;
for(int i=0;i<rows * cols;i++)
{
    sum+=*(ptr + i );
}
return sum;

}

int main ()
{

int matrix[3][3] = {

{1,2,3},
{3,4,5},
{6,7,8}


};

int total =sumMat(&matrix[0][0],3,3);

printf("%d",total);
return 0;


}