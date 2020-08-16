 #include<stdio.h>
 int length(char a[]);

int main()
{
	char a1[20],a2[20],b1[20],b2[20],a[20];
	int ch,c,d;
	
	printf("Enter the first string :\n");
	scanf("%s", a1);
	
	printf("Enter the second string :\n");
	scanf("%s", a2);
	
	printf("The First String is : %s \n", a1);
	
	printf("The Second String is : %s \n", a2);
	
    do
	{
     printf("::MENU::\n");
     printf("1.Length\n2.Palindrome\n3.Comparison\n4.Copy\n5.Reverse\n6.Concatenation\n7.Substring");
     printf("Your choice :");
     scanf("%d", &ch);
     switch(ch)
     {
      case 1: c=length(a1);
              d=length(a2);
              printf("The length of first string is : %d\n", c);
              printf("The length of second string is : %d\n", d);
     	      break;
     	      
      case 2:d=palindrome(a1);  
	         if(d==0)
			 printf("%s is not a palindrome\n", a1);
			 else if(d==1)
			 printf("%s is a palindrome\n", a1);
			 c=palindrome(a2);
			 if(c==0)
			 printf("%s is not a palindrome\n", a2);
			 else if(c==1)
			 printf("%s is a palindrome\n", a2);
			 break;
			 
	  case 3:d=comps(a1,a2);
	         if(d==0)
			 printf("Both strings are different\n ");
			 else if(d==1)
			 printf("Both strings are same\n");
			 break;
			 
	  case 4:copys(a1,a);
			printf("\nCopied String is %s\n",a);
			copys(a2,a);
			printf("\nCopied String is %s\n",a);
			break;		 
     
	   case 5:rev(a1);
	          printf("Reverse of 1st string is : %s\n", a1);
			  rev(a2);
			  printf("Reverse of 2nd string is : %s\n", a2);
			  break;
			  
	    case 6:concs(a1,a2);
		       printf("The concatenated string is : %s\n\n", a1);
				break;		   	
	 		 	 		 	
	 }
	}while(ch<=7);
}
     	
	// Function for length of string 
	int length(char a[])
	{
	  int i,s=0;
	  for(i=0;a[i]!='\0';i++)
	  s+=1;
	  return s;
	}
    
    //Function to check Palindrome
   int palindrome(char a[])                            
    {
     int i=0,j=0;
	 while(a[j]!='\0')
	 {
	  j++;	
     }
	 j--;     // i had written j-1; error occured showed not a palindrome . 
	 while(i<j)
	 {
	   if(a[i]!=a[j])
	   {
	   return 0;
       }
	   i++;
	   j--;  	
     }
	 return 1;	
	}
	
	//Function for comparison
	int comps(char a[], char b[])
	{
	 int i=0,j=0;
	 while(a[i]!='\0')
	 {
	 	if(a[i]!=b[j])
	 	return 0;
	 	i++;
	 	j++;
	 }
	 return 1;	
	}
    
    //Function to copy string
    int copys(char a[],char b[])
    {
      int i=0;
	  for(i=0;a[i]!='\0';i++)
	  {
	  	b[i]=a[i];
	  }
	  b[i]='\0';	
	}
	
	//Function to reverse a string
	int rev(char a[])
	{
	  int i=0,j=0;
	  char temp;
	  while(a[j]!='\0')
	  {
	  	j++; 
	  }	
	  j--;
	  while(i<j)
	  {
	  	temp=a[i];
	  	a[i]=a[j];
	  	a[j]=temp;
	  	i++;
	  	j--;
	  }
	  return 1;	
	}
	
	//Function for conatenation of string
	int concs(char a[], char b[])
	{
	  int i=0,j=0;
	  while(a[i]!='\0')
	  {
	  	i++;
      }
	  while(b[j]!='\0')
	  {
	  	a[i]=b[j];
	  	i++;
	  	j++;
	  }
	  a[i]='\0';	
	}
