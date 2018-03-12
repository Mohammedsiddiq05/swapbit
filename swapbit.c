#include<stdio.h>
int main()
{
int i,k;
printf("\nenter the i:");
scanf("%d",&i);
printf("\nenter the value k:");
scanf("%d",&k);
printf("\n before swapping");
printf("\n%d %d",i,k);
printf("\n after swapping");
i=i^k;
k=i^k;
i=i^k;
printf("\n%d %d",i,k);
return 0;
}
