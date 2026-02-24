#include<stdio.h>

int sumMatcon(int (*arr)[3] , int rows,int cols)
{

int sum=0;
for(int i=0;i<rows;i++)
{
    for(int j=0;j<cols;j++)
    {
        sum+=arr[i][j];
    }
}

return sum;

}

int main()
{


int matrix[3][3]=
{
    {1,2,3},
    {2,3,4},
    {3,5,6}

};

int total=sumMatcon(matrix,3,3);
printf("%d",total);
return 0;


}
