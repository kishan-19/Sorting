#include<conio.h>
#include<stdio.h>
int sorting(int num[],int n);
int main()
{
   int n,i,num[5];
   clrscr();
   printf("--how many number you are enter--\n");
   scanf("%d",&n);
   printf("\nEnter the number\n");
   for(i=0;i<n;i++)
   {
	scanf("%d",&num[i]);
   }
   printf("Before sorting\n");
	for(i=0;i<n;i++)
	{
		printf("\t%d",num[i]);
	}
   sorting(num,n);
   getch();
   return 0;
}
int sorting(int num[],int n)
{
	int i,j,tamp;
  for(i=0;i<n;i++)
  {
	for(j=i+1;j<n;j++)
	{
		if(num[i]>num[j])
		{
		     tamp=num[i];
		     num[i]=num[j];
		     num[j]=tamp;
		}
	}
  }
  printf("\n-after sorting-\n");
  for(i=0;i<n;i++)
  {
	printf("\t%d",num[i]);
  }
  return 0;
}
