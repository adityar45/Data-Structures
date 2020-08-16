#include<stdio.h>
#include<string.h>

int main()
{
	int n,ch,ans,pos,i;
	char a[10][10],key[10];
	printf("\nEnter how many entries u want :");
	scanf("%d", &n);
	printf("\nEnter the elements in ascending order :\n");
	for(i=0;i<n;i++)
	{
	 scanf("%s", a[i]);	
	}
	
	do
	{
	 printf("\n-----MENU------\n");
	 printf("1.Search (Without Recursion)\n2.Search (With Recursion)");
	 printf("\nYour Choice :");
	 scanf("%d", &ch);
	 switch(ch)
	 {
	  case 1: pos=binarySearch(a,n);
	          if(pos==-1)
			  {
			   printf("Element not found \n\n");	
			  }
			  else
			  {
			   printf("Element found at position --> %d \n", pos+1);	
			  }
			  break;
			  
	   case 2: printf("Enter the key ==");
	           scanf("%s", &key);
	           pos=binaryRec(a,0,n,key);
	          if(pos==-1)
			  {
			   printf("Element not found\n\n");	
			  }
			  else
			  {
			   printf("Element found at position --> %d \n", pos+1);	
			  }
			  break;
			  
	    default : printf("Incorrect choice\n");		  		  	
	 }
	 printf("Do you want to continue ? 1.Yes 2.No :");
	 scanf("%d", &ans);	
	}while(ans==1);
	return 0;
}

// Function for Binary Non-Recursive method
int binarySearch(char a[10][10], int n)
{
 int l,r,mid;
 char key[10];
 printf("Enter the elements you want to search  :");
 scanf("%s", &key);
 l=0;
 r=n-1;
 while(l<=r)
 {
  mid=(l+r)/2;
  if(strcmp(a[mid],key)==0)
  return mid;
  if(strcmp(a[mid],key)<0)
  l=mid+1; 
  if(strcmp(a[mid],key)>0)
  r=mid-1; 	
 }
 return -1;	
}

//Function for Binary Recursive method
int binaryRec(char a[10][10],int l,int r,char key[10])
{
 int mid;
 if(l<=r)
 {
  mid=(l+r)/2;
  if(strcmp(a[mid],key)==0)
  return mid;
  if(strcmp(a[mid],key)<0)
  return binaryRec(a,mid+1,r,key);
  if(strcmp(a[mid],key)>0)
  return binaryRec(a,l,mid-1,key);
 }
 return -1;	
}
