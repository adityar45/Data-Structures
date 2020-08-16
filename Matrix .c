#include<stdio.h>

void add(int a[10][10],int b[10][10], int r1, int c1, int r2, int c2);
void sub(int a[10][10],int b[10][10], int r1, int c1, int r2, int c2);
void mult(int a[10][10],int b[10][10], int r1, int c1, int r2void, int c2);
void trans(int a[10][10], int b[10][10] ,int r1, int c1 , int r2, int c2);
void saddle(int a[10][10], int b[10][10] ,int r1, int c1 , int r2, int c2);

int main()
{
  int a[10][10], b[10][10], r1, c1, r2, c2, i,j,choice, num;

  printf("Enter the number of rows and columns of 1st matrix :");
	scanf("%d %d", &r1,&c1);
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
		  printf("Enter elements -[%d][%d] :", i, j);
		  scanf("%d", &a[i][j]);	
		}
	}
	
	printf("Enter the number of rows and columns of 2nd matrix  :");
	scanf("%d %d", &r2,&c2);
	
    for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
		  printf("Enter elements -[%d][%d] :", i, j);
		  scanf("%d", &b[i][j]);	
		}
	}
	
	printf("The First Matrix is :\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
		  printf("\t %d ", a[i][j]);	
		}
		printf("\n");
	}
	
	printf("The Second Matrix is :\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
		  printf("\t %d ", b[i][j]);	
		}
		printf("\n");
	}
	
	
  do
  {
   printf("::MENU::\n");
   printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Transpose\n5.Saddle Point\n6.Exit\n");
   printf("Your choice");
   scanf("%d", &choice);
   switch(choice)
   {
    case 1:if ((r1 != r2) && (c1 != c2))
          {
            printf("Addition not possible");
            break;
          }

          else
          {
           add(a,b,r1,c1,r2,c2);
           break;
          }


    case 2: if ((r1 != r2) && (c1 != c2))
            {
          printf("Subtraction not possible");
          break;
            }

          else
         {
          sub(a,b,r1,c1,r2,c2);
          break;
         }


    case 3: if(r1 != c2)
           {
             printf("Multiplication not possible");
             break;
           }

           else
           {
            mult(a,b,r1,c1,r2,c2);
            break;
           }
           
    case 4:
           trans(a,b,r1,c1,r2,c2);
           break;
		   
    case 5: 
	       saddle(a,b,r1,c1,r2,c2);
		   break;     
    case 6 :
    	default :
        printf("Improper choice . Please try again ");
        break;
	  	   
    }
    printf("Do you wish to continue?\nPress 1 to continue or else any key to exit\n");
    printf("Your choice: ");
    scanf("%d",&num);
    
  }while(num<=6); 
  return 0;
  
}
    
    //Function for addition of matrix 
    void add(int a[10][10],int b[10][10],int r1,int c1,int r2, int c2)
    {
    	int m3[r1][c1],i,j;

    	for(i=0;i<r1;i++)
    		{
    			for(j=0;j<c1;j++)
    			{
    				m3[i][j]=a[i][j]+b[i][j];
    			}
    		}
    	printf("\n\nAddition of matrices is : \n\n");
    	for(i=0;i<r1;i++)
    	{
    		for(j=0;j<c1;j++)
    		{
    			printf("\t%d",m3[i][j]);
    		}
    		printf("\n");
    	}

    }
    
    //Function for subtraction of matrix
    void sub(int a[10][10], int b[10][10], int r1,int c1,int r2, int c2)
    {
    		int m3[r1][c1],i,j;

    	for(i=0;i<r1;i++)
    		{
    			for(j=0;j<c1;j++)
    			{
    				m3[i][j]=a[i][j]-b[i][j];
    			}
    		}
    	printf("\n\nSubtraction of matrices is : \n\n"); 
    	for(i=0;i<r1;i++)
    	{
    		for(j=0;j<c1;j++)
    		{
    			printf("\t%d",m3[i][j]);
    		}
    		printf("\n");
    	}
	}
	
	//Function for multiplication of matrix
	void mult(int a[10][10],int b[10][10], int r1, int c1, int r2, int c2)
	{
	  int m3[r1][c2], i,j,k;
	  
	  for(i=0;i<r1;i++)
	  {
	  	for(j=0;j<c1;j++)
	  	{
	  	  m3[i][j]=0;
	  	  
		  for(k=0;k<r2;k++)
		  
		  m3[i][j]+=a[i][k]*b[k][j];
				
		}
	  }	
	 	
	
	
	 printf("Multiplication of matrices is :  \n\n");
	 for(i=0;i<r1;i++)
	 {
	   for(j=0;j<c1;j++)
	  {
	  	printf("\t%d", m3[i][j]);
	  }
	  printf("\n");
	 }
    
   }
   
   //Function for transpose of matrix
   void trans(int a[10][10], int b[10][10] ,int r1, int c1 , int r2, int c2)
   {
   	 int i,j,ch, m3[10][10];
   	 printf("\n1.Transpose of 1st matrix\n2.Transpose of 2nd matrix ");
   	 scanf("%d", &ch);
   	 
   	 switch(ch)
   	 {
   	  case 1: 
	  for(i=0;i<r1;i++)
	  {
	  	for(j=0;j<c1;j++)
	  	{
	  	 m3[j][i]=a[i][j];
		}
	  }
	  
	  //printing 1st matrix
	  printf("Transpose of 1st matrix is :\n");
	  for(i=0;i<r1;i++)
	  {
	  	for(j=0;j<c1;j++)
	  	{
	  	 printf("\t%d", m3[i][j]);
		}
		printf("\n");
	  }
	  break;
	  
	  
	  case 2: 
	  for(i=0;i<r2;i++)
	  {
	  	for(j=0;j<c2;j++)
	  	{
	  	 m3[j][i]=b[i][j];
		}
	  }
	  
	  //printing 2nd matrix
	  printf("Transpose of 2nd matrix is :\n");
	  for(i=0;i<r2;i++)
	  {
	  	for(j=0;j<c2;j++)
	  	{
	  	 printf("\t%d", m3[i][j]);
		}
		printf("\n");
	  }
	 }
   	 
   } 
   
   //Function for saddle point  
   void saddle(int a[10][10], int b[10][10] ,int r1, int c1 , int r2, int c2)
   {
   
   int i,j,k,min,max,col,ch;


	printf("\n\n1:For Saddle in Matrix 1\n2:For Saddle in Matrix 2\n");
	scanf("%d",&ch);
	switch(ch)
	{

         //calculating saddle point for matrix 1

	case 1:
	for(i=0;i<r1;i++)
	{
		min=a[i][0];
		for(j=0;j<c1;j++)
		{
			if(a[i][j]<=min)
			{
				min=a[i][j];
				col=j;
			}
		}
		max=a[0][col];
		for(k=0;k<r1;k++)
		{
			if(a[k][col]>=max)
			{
				max=a[k][col];
			}
		}
		if(min==max)
		{
			printf("\n\nIn Matrix 1 (%d,%d) is saddle point having value %d.\n",i+1,col+1,max);
		}
	}
	break;
    
       //calculating saddle point for matrix 2
    case 2 :
    for(i=0;i<r1;i++)
	{
	 min=b[i][0];
	  for(j=0;j<c1;j++)
	  {
	   if(b[i][j] <= min)
	   {
	   	min = b[i][j];
	   	col=j;
	   }	
	  }
	  max=b[0][col];
	  for(k=0;k<r2;k++)
	  {
	  	if(b[k][col] >= max)
	  	{
	  	 max = b[k][col];	
		}
	  }
	  if(min==max)
	  {
	  	printf("\nIn Matrix 2 (%d,%d) is saddle point having value %d \n ", i+1 , col+1 , min);
	  }
	}
	break;
	}
}
