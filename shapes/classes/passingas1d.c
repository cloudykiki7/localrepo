#include<stdio.h>

int sumMatptr(int *ptr,int rows,int cols)
{
    int sum=0;

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            sum+=*(ptr +i * cols + j);
        }
    }

    return 0;
}



int main ()
{
int mat[3][3]=
{
    {1,2,3},
    {2,3,4},
    {4,5,6}
};

int total=sumMatptr(&mat[0][0],3,3);
printf("%d", total);

return 0;


}