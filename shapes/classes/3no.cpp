#include<stdio.h>
#include<stdbool.h>
#define max 3

int m,n;
int matrix[max][max];
int condition[max][max];


int prime(int n)
{
if(n<2)
return 0;
for(int i=2;i*i<=n;i++)
{
    if(n%i==0)
    return 0; 
}

return 1; 

}


void  countvalidpath()
{

int validpath=0;
int currentr=0;
int currentc=0;
int sum= matrix[currentr][currentc];
int step=1;
int valid=1;

if(currentc+1<n)
{
    currentc++;
    sum=sum+matrix[currentr][currentc];
    step++;
    int evenodd= sum % 2;
    int sumMod= sum % 7;

switch(condition[currentr][currentc])
{

case 1: if((!prime(step)))
valid=0;
break;
case 2 :if(evenodd!=0)
valid=0;
break;
case 3: if(currentc<=currentr)
valid=0;
break;
case 4: if(step % (sumMod+2)!=0)
valid=0;
break;
}
}

if(valid && currentr+1 <m) {
        currentr++;
        sum =sum + matrix[currentr][currentc];
        step++;
        int evenodd = sum % 2;
        int sumMod= sum % 7;

        switch(condition[currentr][currentc]) {
            case 1: if((!prime(step))) valid=0; break;
            case 2: if(evenodd != 0) valid=0; break;
            case 3: if(currentc <= currentr) valid=0; break;
            case 4: if(step % (sumMod + 2) != 0) valid=0; break;
        }
    }

    if(valid) validpath++;

 currentr=0;
 currentc=0;
 sum = matrix[currentr][currentc];
 step=1;
 valid=1;

if(currentr+1<m)
{
    currentr++;
    sum=sum+matrix[currentr][currentc];
    step++;
    int evenodd= sum % 2;
    int sumMod= sum % 7;

        switch(condition[currentr][currentc]) {
            case 1: if(!prime(step)) 
            valid=0;
             break;
            case 2: if(evenodd != 0) 
            valid=0;
             break;
            case 3: if(currentc <= currentr)
             valid=0; 
             break;
            case 4: if(step % (sumMod + 2) != 0) 
            valid=0;
             break;
        }
    }

if(valid && currentc+1 < n) {
        currentc++;
        sum =sum + matrix[currentr][currentc];
        step++;
        int evenodd = sum % 2;
        int sumMod= sum % 7;

        switch(condition[currentr][currentc]) {
            case 1: if(!prime(step)) valid=0; break;
            case 2: if(evenodd != 0) valid=0; break;
            case 3: if(currentc <= currentr) valid=0; break;
            case 4: if(step % (sumMod + 2) != 0) valid=0; break;
        }
    }

    if(valid) validpath++;

    printf("%d\n",validpath);
}

int main ()
{

scanf("%d %d",&m,&n);


// value

for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        scanf("%d",&matrix[i][j]);
    }
}

// condition


for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        scanf("%d",&condition[i][j]);
    }
}

countvalidpath();

return 0;

}


























