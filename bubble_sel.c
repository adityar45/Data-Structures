#include<stdio.h>
#include<string.h>



int main()
{
  int n,ch,i,ans;
  char a[10][10];    
  printf("Enter how many numbers you want to sort : ");
  scanf("%d", &n);
  printf("\nEnter the valid elements that to be sorted  :\n");
  for(i=0;i<n;i++)
  {
  	scanf("%s", &a[i]);
  }
  do
  {
  	printf("\n-------MENU-------\n");
  	printf("1.Bubble Sort (For Ascending Order)\n2.Selection sort(For Descending Order)\n");
  	printf("Your Choice : ");
  	scanf("%d", &ch);
  	switch(ch)
  	{
  	 case 1: bubblesort(a,n);
	         break;
			 
     case 2: selectionsort(a,n);
	         break;	
	
	 default: printf("\nEnter correct choice");
    }
     
     printf("\nDo you want to continue ? 1.Yes 2.No ==\t");
     scanf("%d", &ans); 		          	 		 	
	
  }
 	while(ans==1);
   return 0;
}



// Bubble sort for Ascending order
void bubblesort(char a[10][10], int n)
{
 int i,j,k;
 char temp[10];
 for(i=0;i<n-1;i++)
 {
  for(j=0;j<n-1-i;j++)
  { 	
   if(strcmp(a[j],a[j+1])>0)     // if a[j+1]<a[j]
   {
    strcpy(temp,a[j]);
	strcpy(a[j],a[j+1]);
	strcpy(a[j+1],temp);	
   }	
  }	
}
 for(k=0;k<n;k++)
 printf("%s\t", a[k]);
}

// Selection sort for Descending order
void selectionsort(char a[10][10], int n)
{
 int min,i,j,l=0,k;
	char temp[10];
	
	for(i=0;i<n-1;i++)
	{
		min=i;
		
		for(j=i+1;j<n;j++)
		{
			if(strcmp(a[j],a[min])>0)
			{
				min=j;	
			}
			
		}
		if(min!=i)
		{
			strcpy(temp,a[min]);
			strcpy(a[min],a[i]);
			strcpy(a[i],temp);
		}
	}
	
	for(k=0;k<n;k++)
	{
		printf("%s \t",a[k]);
	}
}
