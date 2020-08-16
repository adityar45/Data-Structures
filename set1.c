#include<stdio.h>
// Function to accept the 2 sets.
int AcceptSET( int n1 , int n2 , int a[] , int b[] )
{

printf("Enter the size of 1st set\n");
scanf("%d" , &n1);
printf("Enter the 1st set :\n");
for(int i=0 ; i<n1 ; i++)
{
  scanf("%d", &a[i]);
}
printf("Enter the size of 2nd set\n");
scanf("%d" , &n2);
printf("Enter the 2nd set :\n");
for(int j=0 ; j<n2 ; j++)
{
  scanf("%d" , &b[j]);
}
}
// Function to Display 2 sets.
void DisplaySET( int n1 , int n2, int a[] , int b[])
{

  printf("The first set is :");
  printf("{");
  for(int i=0 ; i<n1 ; i++)
  {
    printf("%d" , a[i]);
  }
  printf("}\n");
  printf("The second set is :");
  printf("{");
  for(int j=0 ; j<n2 ; j++)
  {
    printf("%d" , b[j]);
  }
  printf("}\n");

}
//Function to display Union of 2 sets.
void ShowUNION(int a[],int b[] ,int n1,int n2)
{
  int i=0 ;
  int j=0;
  while(i<n1 && j<n2)
  {
  if( a[i] < b[j] )
  {
   printf("%d" , a[i]);
   i++;
  }
  else if (a[i] > b[j])
  {
    printf("%d" , b[j]);
  }
   else
   printf("%d" , a[i++]);
   j++;
  }
  while(i < n1)
  printf("%d",a[i++]);
  while(j < n2)
  printf("%d",b[j++]);

}

 int main()
 {
   int a[] = { 1, 2, 3, 4, 5};
   int b[] = { 2, 3, 5, 7};
   int n1 = sizeof(a);
   int n2 = sizeof(b);

   int AcceptSET(int n1,int n2,int a,int b);
   void DisplaySET(int n1,int n2,int a,int b);
   void ShowUNION(int a,int b,int n1,int n2);


 }
