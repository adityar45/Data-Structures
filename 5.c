#include<stdio.h>

int quicksort(int[],int,int);
int partition(int[],int,int);
int n;

int main()
{
  int a[30],i;
  printf("Enter the no. of elements");
  scanf("%d", &n);
  printf("Enter the elements");
  for(i=0;i<n;i++)
  {
  	scanf("%d", &a[i]);
  }	
  quicksort(a,0,n-1);
  printf("\n\n");
  printf("Sorted array is :");
  for(i=0;i<n;i++)
  {
  	printf("\t%d", a[i]);
  }
}

int quicksort(int a[],int lb, int ub)
{
 int j;
 if(lb<ub)
 {
  j=partition(a,lb,ub);
  quicksort(a,lb,j-1);
  quicksort(a,j+1,ub);	
 }
 return 0;	
}

int partition(int a[],int lb, int ub)
{
 int v,i,j,temp;
 v=a[lb];
 i=lb;  //i=0
 j=ub+1;	 // j=n
 
 do
 {
 	do
 	{
 	  i++;
    }
    while(a[i]<v&&i<=ub);
    
    do
    {
      j--;	
	}
	while(a[j]>v);
	
	if(i<j)
	{
	 temp=a[i];
	 a[i]=a[j];
	 a[j]=temp;	
	}
  }
  while(i<j);
  
  a[lb]=a[j];
  a[j]=v;
  printf("\n--------");
  printf("\nPivot : %d", v);
  printf("\nList: ");
  for(i=0;i<n;i++)
  printf("\t%d", a[i]);
  return j;
  
  
	
}




