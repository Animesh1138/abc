/* Perimeter of triangle */
#include<stdio.h>
int Peri(int,int,int);
int main()
{
    int a,b,c,Perimeter,n;
    printf("Tell number of times to enter side : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {  
        printf("Enter sides of triangle");
        scanf("%d %d %d",&a,&b,&c);
        Perimeter=Peri(a,b,c);
        printf("Perimeter of %d Triangle = %d \n",i,Perimeter);
    }
}
int Peri(int x,int y,int z)
{
    int P;
    P=x+y+z;
    return P;
}