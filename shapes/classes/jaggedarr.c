#include<stdio.h>

int sumjaggedmat(int **p, int rows)
{
int sum=0;

for(int i=0;i<rows;i++)
{
    int cols= p[i][0]; // first elemeny column count

for(int j=1;j<=cols;j++)
{
    sum+=p[i][j];
}
}

return 0;

}




int main ()
{

    int row1[]={3,10,20,30};
    int row2[]={ 2,40,50};
 int rows[] ={4,60,70,80,90};


 int *rows[]={row1,row2,rows};

int **pp=rows;

int total=sumjaggedmat(pp,3);

printf("sum %d",total);

printf("row1, element 2 =%d\n" , pp[0][2]);
printf("row3, element 4 = %d\n", pp[2][4]);



return 0;


}