#include<stdio.h>

struct stud
{
	int rollno;
	char name[20];
	float p;
}s;

void create(struct stud s[], int n);
void display(struct stud s[], int n);
int insert(struct stud s[], int n);
void search(struct stud s[], int n, int c);
void update(struct stud s[], int n, int c);
int delete(struct stud s[], int n, int c);



int main()
{
	int ch ,c, n;
	int a,b;
	struct stud s[10];
	printf("          --Student Database--        \n"); 
	printf("\nEnter the no. of records you want to enter\n");
	scanf("%d", &n);
	
	do
	{
	 printf("\n::MENU::\n");
	 printf("\n1.Create\n2.Display\n3.Insert\n4.Search\n5.Update\n6.Delete\n\n");
	 printf("Enter choice :");
	 scanf("%d", &ch);
	 
	 switch(ch)
	 {
	  case 1: create(s, n);
	          break;
	  
	  case 2: display(s, n);
	          break;
			 
      case 3: n=insert(s, n);
	          break;
		
	  case 4: printf("Enter the roll no. you want to search  :");
	          scanf("%d", &c);
			  search(s, n, c);
	          break;
	  		  
      case 5: printf("Enter the roll no. you want to modify  :");
	          scanf("%d", &c);
			  update(s, n, c);
			  break; 
			  
	  case 6: printf("Enter the roll no. you want to delete :");
	          scanf("%d", &c); 
	          delete(s, n,c);
	          n--;
	          break;	  			  		  			  
	 }
	}
	while(ch<=6);
	return 0;
}

// Function to create a record
void create(struct stud s[20], int n)
{
 int i, j;
 for(i=0; i<n; i++)
 {
   printf("\nEnter Roll no :");
   scanf("%d", &s[i].rollno);
   for(j=0; j<i ; j++) //j<i to check only previuosly stored numbers
   {
   	 if(s[i].rollno==s[j].rollno)
   	{
   	    printf("Roll No. Already Exist ..Please enter another roo no.\n ");
   	    scanf("%d", &s[i].rollno);
    }
   }
   printf("\nEnter name :");
   scanf("%s", &s[i].name);	
  }
}

// Function to display a record 
void display(struct stud s[20], int n)
{ 
  int i ;	
  printf("\nRoll No\t\tName\n");	
  for(i=0;i<n;i++)
  {
  	printf("\n%d\t\t%s\n", s[i].rollno,s[i].name );
  }
  if(i==0)
  printf("No records to display");
}

//Function to insert data in record
int insert(struct stud s[20], int n)
{
  int N ,i,d,j;
  printf("How many records you want to enter");
  scanf("%d", &d);
  N=n+d;
  for(i=n;i<N;i++)
  {
   printf("Enter Roll No: ");
   scanf("%d",&s[i].rollno);
   for(j=0;j<i;j++)
   {
   	if(s[i].rollno==s[j].rollno);
   	printf("Roll No. Already Exist ..Please enter another Roll No :\t");
   	scanf("%d", &s[i].rollno);
   }
   printf("\nEnter Name :");
   scanf("%s", &s[i].name);	
  } 
  n=N;
  return n;	 
}

//Function to search the required data
void search(struct stud s[20], int n, int c)
{
 int i;
 for(i=0;i<n;i++)
 {
  if(s[i].rollno==c)
  {
  	printf("Roll No. Present\n");
  	printf("\n%d\t\t%s", s[i].rollno,s[i].name);
  	break;
  }	
 }
 if(i==n)
 printf("Roll no. Not Present\n");	
}

//Function to update the data
void update(struct stud s[20], int n, int c)
{
 int i, d, flag=0;
 for(i=0;i<n;i++)
 {
  	if(c==s[i].rollno)
  	{
  	 flag=0;
  	 d=i;
  	 break;
	}
	else
	flag=1;
 }
 if(flag==0)
 {
   printf("Enter Roll No: ");
   scanf("%d",&s[i].rollno);
   printf("\nEnter Name :");
   scanf("%s", &s[i].name);		
 } 	
}

//Function to delete a record
int delete(struct stud s[20], int n, int c)
{
 int i,j,x;
	for(i=0;i<n;i++)
	{
		if(s[i].rollno==c)
		{
			printf("\nRoll no. present\n");
			printf("\n%d\t%s",s[i].rollno,s[i].name);
			printf("\nSure to delete this roll no.\n1.yes\t2.no\n");
			scanf("%d",&x);
			if(x==1)
			{ 
				for(j=i;j<n;j++)
				{
					s[j].rollno=s[j+1].rollno;
					strcpy(s[j].name,s[j+1].name);
				}
				return 0;
			}
			else if(x==2)
			{
				return 1;
			}
			break;
		} 
	}
	if(i==n)
	printf("\nROLL NO. NOT PRESENT\n");		
}


	

