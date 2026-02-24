#include<stdio.h>
int main () {


int r=3;
int c=3;
int a[3][3];

for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
}


for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
}



int b[9];
int k=0;

for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        b[k]=a[i][j];
        k++;
    }
    printf("\n");
}

for(int i=0;i<3*3;i++)
{
    printf("%d ",b[i]);
}
printf("\n");




}