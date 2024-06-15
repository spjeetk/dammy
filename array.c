/******** one dimensional ARRAY********/
/*#include<stdio.h>
void main()
{
int marks[5];
5*sizeof(int)
5*4=20

int marks[]={67,54,63,87,98}.......we know the value that time we write this way
int marks[5];..........we dont know the value that time we use this way*/

/*print the value using array with known value
#include<stdio.h>
void main()
{
	int i,marks[5]={78,76,54,87,98};
	for(i=0;i<=4;i++)
	{
		printf("%d\n",marks[i]);
	}
}*/



/*find the percnetage using array*/
#include<stdio.h>
void main()

{ 
  int marks[5],i;
  float per,total=0;
  printf("enter the 5 marks\n");
  for(i=0;i<=4;i++)
  {
  	scanf("%d",&marks[i]);
  }	
  printf("your marks are :---\n");
  for(i=0;i<=4;i++)
  {
  	printf("%d\n",marks[i]);
  }
  for(i=0;i<5;i++)
  {
  	total=total+marks[i];
  }
  per=total*100/500;
  printf("percentage=%.2f\n",per);
}


/*accept 10 percentage from user,then print the how many student are fail or pass
#include<stdio.h>
void main()
{   float per[10];
    float *ptr = &per[0];
    int i,count_pass=0,count_fail=0;
	printf("enter student percentage\n");
	for(i=0;i<10;i++)
	{
		scanf("%f",ptr+i);
	}
	 
	for(i=0;i<10;i++)
	{
		if(*(ptr+i)<=35)
		{
			count_fail++;
		}
		else
		{
			count_pass++;
		}
	}
	printf("pass count=%d\n",count_pass);
		printf("fail count=%d\n",count_fail);
	}*/
	
	
	

/*accept array with 10 element printf prime all prime number from array
#include<stdio.h>
void main()
{
	int prime[10],i,j,count=0;
	printf("enter the number\n");
	for(i=0;i<10;i++)
	{
	  scanf("%d",&prime[i]);
	}
	
	for(i=1;i<=prime[i];i++)
	{
		count=0;
		for(j=1;j<=prime[i];j++)
		{
			if(prime[i]%j==0)
		    count++;
		    
		}
	
		if(count==2)
		printf("prime=%d\n",prime[i]);
	
	}

}*/

/*accept 10 element printf all even number from 
#include<stdio.h>
void main()
{
	int even[10],i,j,count=0;
	printf("enter the number\n");
	for(i=0;i<10;i++)
	{
	  scanf("%d",&even[i]);
	}
    for(i=0;i<10;i++)
	{
		if(even[i]%2==0)
		printf("even number is=%d\n",even[i]);
	}	
	

}*/

/*accept 10 element from user printf all postive number with array

#include<stdio.h>
void main()
{
	int positive[10],i;
	printf("enter the number\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&positive[i]);
	}
	for(i=0;i<10;i++)
	{
		if(positive[i]>0)
		printf("positive number is=%d\n",positive[i]);
	}
	
}
*/
/*accept 10 element printf the count of postive,negative,zero,even,odd,

#include<stdio.h>
void main()
{   
int num[10],i,
count_positive=0,
count_negative=0,
count_zero=0,
count_even=0,
count_odd=0;
	printf("enter the number\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{
		if(num[i]>0)
		{
			count_positive++;
		}
		if(num[i]<0)
		{
			count_negative++;
		}
		if(num[i]==0)
		{
			count_zero++;
		}
		if(num[i]%2==0)
		{
			count_even++;
		}
		if(num[i]%2!=0)
		{
			count_odd++;
		}
	}
	
    printf("positive=%d\n",count_positive);
    printf("negative=%d\n",count_negative);
    printf("zero=%d\n",count_zero);
    printf("even=%d\n",count_even);
    printf("odd=%d\n",count_odd);
}*/

/*132-print all palindrome number
#include<stdio.h>
void main()
{
	int n[5],i,a,temp,r=0;
	printf("enter the number\n");
	for(i=0;i<5;i++)
	{ 
		scanf("%d",&n[i]);
	}
	
	for(i=0;i<5;i++)
	{
		temp=n[i];
		r=0;
		while(temp)
		{
			a=temp%10;
			r=r*10+a;
		    temp=temp/10;
		    
		}
		if(n[i]==r)
		{
			printf("palindrome=%d\n",r);
		}
	}
}*/

/*print  perform addtion of palindrome number check the result addtion is palindrome or not
#include<stdio.h>
void main()
{
	int n[5],i,temp=0,r=0,a,sum=0,d1;
	printf("Enter the number\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&n[i]);
	}
    printf("palindrome are...\n");
	for(i=0;i<5;i++)
	{
		temp=n[i];
		r=0;
		while(temp!=0)
		{
			a=temp%10;
			r=r*10+a;
			temp=temp/10;
		}
		if(n[i]==r)
		{
			printf("palindrome=%d\n",n[i]);
			sum=sum+n[i];
		}
	}
	printf("sum=%d\n",sum);
	d1=sum;
	r=0;
	while(d1!=0)
	{
		a=d1%10;
		r=r*10+a;
		d1=d1/10;
	}
	if(r==sum)
	{
		printf("sum is palindrome\n");
	}
	else
	{
		printf("sum is not palindrome\n");
	}
}*/

/*print all number start with 5 number...
#include<stdio.h>
void main()
{
	int n[10],i,t,r,a;
	printf("enter the number\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<10;i++)
	{
	  t=n[i];
	  r=0;
	  while(t!=0)
	  {
	  	a=t%10;
	    r=r*10+a;
	    t=t/10;
	  }
	  if(r%10==5)
	  {
	  	printf("start with 5 digit=%d\n",n[i]);
	  }
	}
}*/

/*printf all number end with 5....
#include<Stdio.h>
void main()
{
	int n[5],i;
	printf("enter the number\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<5;i++)
	{
		if(n[i]%5==0)
		printf("end with 5 digit number=%d\n",n[i]);
	}
}*/

/*accept 2 difrent with diffrent size,do create the third array for addtion  or multiplication  of both given array
#include<stdio.h>
void main()
{
	int a1[5],a2[5],a3[5],i;
	printf("enter the first array\n");
	for(i=0;i<5;i++)
	{
	    scanf("%d",&a1[i]);
	}
	printf("enter the second array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a2[i]);
	}
	printf("your array are...\n");
	for(i=0;i<5;i++)
	{
		printf(" %d ",a1[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
	 printf(" %d ",a2[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		a3[i]=a1[i]+a2[i];
		
	}
	printf("the sum of both are..\n");
	for(i=0;i<5;i++)
	{
		printf(" %d ",a3[i]);
	}
	for(i=0;i<5;i++)
	{
		a3[i]=a1[i]*a2[i];
	}
	printf("\n");
	printf("the multiplication are..\n");
	for(i=0;i<5;i++)
	{
		
		printf(" %d ",a3[i]);
	}
	printf("\n");
	
	
}*/
/* accept array from user and reverse the array
#include<stdio.h>
void main()
{   int arr[50],n,i,temp=0;
    printf("enter the number\n");
    scanf("%d",&n);
	printf("enter the number you want to reverse\n");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&arr[i]);	
	}
	printf("your array before reverse\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	 for(i=0;i<n/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
	printf("your array ater the reverse\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}*/
/*toc check the any number is repeat so print the msg is yes
#include<Stdio.h>
void main()
{
	int n,arr[]={0},i,rem=0;
	printf("enter the number\n");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		if(arr[rem]==1)
		break;
		arr[rem]=1;
		n=n/10;
	}
	if(n>0)
	{
		printf("yes digit is repeat\n");
	}
	else
	{
		printf("digit are no repeat\n");
	}
	
 } */
 /* count the array
 #include<stdio.h>
 void main()
 {
 	int arr[30],i,c=0;
 	printf("enter the array\n");
 	for(i=0;i<5;i++)
 	{
 		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
	for(i=0;i<5;i++)
	{
		if(arr[i]>=0)
		{
			c++;
		}
	}
	printf("count==%d\n",c);
 }*/
 /*write a program accept array print all prime number 
 #include<stdio.h>
 void main()
 {
 	int arr1[10],i,j,count=0,sum=0;
 	printf("enter the array\n");
 	for(i=0;i<10;i++)
 	{
 		scanf("%d",&arr1[i]);
	}
	for(i=0;i<10;i++)
 	{
 		printf("%d\n",arr1[i]);
	}
	for(i=1;i<=arr1[i];i++)
	{
		count=0;
		for(j=1;j<=arr1[i];j++)
		{
			if(arr1[i]%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("prime %d\n",arr1[i]);
			sum=sum+arr1[i];
		}
	}
	printf("the sum of all prime number %d\n",sum);
	
 }*/
 /*write a program find the all palindrome number
 #include<stdio.h>
 void main()
 {
 	int pal[5],i,temp=0,r=0,a;
 	printf("enter the numer\n");
 	for(i=0;i<5;i++)
 	{
 		scanf("%d",&pal[i]);
	}
	printf("original array\n");
	for(i=0;i<5;i++)
 	{
 		printf("%d\n",pal[i]);
	}
	printf("all palindrome number\n");
	for(i=0;i<5;i++)
	{
		temp=pal[i];
		r=0;
		while(temp>0)
		{
			a=temp%10;
			r=r*10+a;
			temp=temp/10;
		}
		if(pal[i]==r)
		{
			printf("%d\n",pal[i]);
		}
	}
 }*/
 /*write a program find the armstrong number using array
 #include<stdio.h>
 void main()
 {
 	int arm[5],i,temp=0,r=0,a;
 	printf("enter the number\n");
 	for(i=0;i<5;i++)
 	{
 		scanf("%d",&arm[i]);
    }
    for(i=0;i<5;i++)
 	{
 		printf("%d\n",arm[i]);
    }
    printf("armstrong number\n");
    for(i=0;i<5;i++)
    {
    	temp=arm[i];
    	r=0;
    	while(temp>0)
    	{
    		a=temp%10;
    		r=r+a*a*a;
    		temp=temp/10;
		}
		if(arm[i]==r)
		{
			printf("%d\n",arm[i]);
		}
	}
    
} */
/* write a program find the all strong number using array
#include<stdio.h>
void main()
{
	int str[5],i,j,temp=0,result=0,a,fact=1;
	printf("enter the array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&str[i]);
	}
	printf("your array:---");
	for(i=0;i<5;i++)
	{
		printf("%d\n",str[i]);
	}
	printf("all strong number\n");
	for(i=0;i<5;i++)
	{
		temp=str[i];
		result=0;
		while(temp>0)
		{
			a=temp%10;
			for(j=1;j<=a;j++)
			{
				fact=fact*j;
			}
			result=result+fact;
			fact=1;
			temp=temp/10;
		
		if(result==str[i])
		{
			printf("all strong number %d\n",str[i]);
		}
	}
	}
}*/
/*write a program accept array find the perfect number***
#include<stdio.h>
void main()
{
	int per[5],i,j,sum=0;
	printf("enter the number\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&per[i]);
	}
	printf("your original array :--");
	for(i=0;i<5;i++)
	{
		printf("%d",per[i]);
	}
	printf("the perfect no is :---");
	for(i=0;i<5;i++)
	{   
	   sum=0;
		for(j=1;j<per[i];j++)
		{
			if(per[i]%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==per[i])
		{
			printf("%d\n",per[i]);
		}
	}
 } */
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

/*********** two dimensional array*******/
/*print matrix with array using nested loop
#include<stdio.h>
void main()
{
	int arr[3][3],i,j;
	printf("enter the number\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("your matrix are...\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",arr[i][j]);
		}
		printf("\n");
	}
}
*/
/*accept two matrix array 3 by 3 perform addition,subtraction
#include<stdio.h>
void main()
{
	int a1[3][3],a2[3][3],add[3][3],sub[3][3],i,j;
	printf("enter the first array\n");
	for(i=0;i<3;i++)
	{   
	  for(j=0;j<3;j++)
	  {
		scanf("%d",&a1[i][j]);
	  }
	}
	printf("enter the second array\n");
	for(i=0;i<3;i++)
	{   
	  for(j=0;j<3;j++)
	  {
		scanf("%d",&a2[i][j]);
	  }
	}
	printf("your first array are...\n");
	for(i=0;i<3;i++)
	{   
	  for(j=0;j<3;j++)
	  {
		printf(" %d ",a1[i][j]);
	  }
	  printf("\n");
	}
	
	printf("your second array are...\n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	  printf(" %d ",a2[i][j]);	
	}
	  printf("\n");	
	}
	
	for(i=0;i<3;i++)
	{   
	for(j=0;j<3;j++)
	{
		add[i][j]=a1[i][j]+a2[i][j];
	}
	}
	printf("the addition of both are..\n");
	for(i=0;i<3;i++)
	{   
	for(j=0;j<3;j++)
	{
		printf(" %d ",add[i][j]);
	}
	printf("\n");
	}
	
	for(i=0;i<3;i++)
	{   
	for(j=0;j<3;j++)
	{
		sub[i][j]=a1[i][j]-a2[i][j];
	}
	printf("\n");
	}
	printf("the subtraction are..\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",sub[i][j]);
		}
	printf("\n");
	}
	
}*/


/*-accept two matrix array 3 by 3 perform multiplication
#include<stdio.h>
void main()
{
	int a1[3][3],a2[3][3],i=0,j=0,k=0,mul[3][3],sum=0;
	printf("enter the first array number\n");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	  	scanf("%d",&a1[i][j]);
      }
    }
    printf("enter the second array number\n");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	  	scanf("%d",&a2[i][j]);
      }
      
    }
    printf("your first array number\n");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	  	printf(" %d ",a1[i][j]);
      }
      printf("\n");
    }
    printf("your second array number\n");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	  	printf(" %d ",a2[i][j]);
      }
      printf("\n");
    }
for(i=0;i<3;i++)
  {
  	for(j=0;j<3;j++)
  	{  
  	  	
  	  	for(k=0;k<3;k++)
  	  	{
  	  		sum=sum+a1[i][k]*a2[k][j];
  	  	
	    }
	    mul[i][j]=sum;
	    sum=0;
	}
 }
 printf("multiplication\n");
 for(i=0;i<3;i++)
 {
 	for(j=0;j<3;j++)
 	{
 		printf("%d ",mul[i][j]);
	}
	 printf("\n");
 }	
}*/
/* to

 check given matrix is identical or not
#include<Stdio.h>
void main()
{
	int a1[3][3],a2[3][3],sub[3][3],i,j,count=0;
	printf("enter the first array\n");
	for(i=0;i<3;i++)
	{   
	  for(j=0;j<3;j++)
	  {
		scanf("%d",&a1[i][j]);
	  }
	}
	printf("enter the second array\n");
	for(i=0;i<3;i++)
	{   
	  for(j=0;j<3;j++)
	  {
		scanf("%d",&a2[i][j]);
	  }
	}
	printf("your first array are...\n");
	for(i=0;i<3;i++)
	{   
	  for(j=0;j<3;j++)
	  {
		printf(" %d ",a1[i][j]);
	  }
	  printf("\n");
	}
	
	printf("your second array are...\n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	  printf(" %d ",a2[i][j]);	
	}
	  printf("\n");	
	}
	for(i=0;i<3;i++)
	{   
	for(j=0;j<3;j++)
	{
		sub[i][j]=a1[i][j]-a2[i][j];
	}
	printf("\n");
	}
	printf("the subtraction are..\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",sub[i][j]);
		}
	printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if((i==j&&sub[i][j]==1)||(i!=j&&sub[i][j]!=0))
			count;
			else
			count++;
		}
	}
    if(count==0)
    printf("this is identity\n");
    else
    printf("this is not identity\n");
	
}*/
/*to check 2 given matrix is is identical or not second logic
#include<Stdio.h>
void main()
{
	int a1[3][3],a2[3][3],sub[3][3],i,j,count_s1=0,count_s2=0;
	printf("enter the first array\n");
	for(i=0;i<3;i++)
	{   
	  for(j=0;j<3;j++)
	  {
		scanf("%d",&a1[i][j]);
	  }
	}
	printf("enter the second array\n");
	for(i=0;i<3;i++)
	{   
	  for(j=0;j<3;j++)
	  {
		scanf("%d",&a2[i][j]);
	  }
	}
	printf("your first array are...\n");
	for(i=0;i<3;i++)
	{   
	  for(j=0;j<3;j++)
	  {
		printf(" %d ",a1[i][j]);
	  }
	  printf("\n");
	}
	
	printf("your second array are...\n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	  printf(" %d ",a2[i][j]);	
	}
	  printf("\n");	
	}
	for(i=0;i<3;i++)
	{   
	for(j=0;j<3;j++)
	{
		sub[i][j]=a1[i][j]-a2[i][j];
	}
	printf("\n");
	}
	printf("the subtraction are..\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",sub[i][j]);
		}
	printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j&&sub[i][j]==1)
			count_s1++;
			else if(i!=j&&sub[i][j]==0)
			count_s2++;
		}
	}
    if(count_s1==3&&count_s2==6)
    printf("this is identity\n");
    else
    printf("this is not identity\n");
	
}*/
/*to check matrix identitcal or not
#include<Stdio.h>
void main()
{
	int a1[3][3],i,j,count_s1=0,count_s2=0;
	printf("enter the first array\n");
	for(i=0;i<3;i++)
	{   
	  for(j=0;j<3;j++)
	  {
		scanf("%d",&a1[i][j]);
	  }
	}
	printf("your first array are...\n");
	for(i=0;i<3;i++)
	{   
	  for(j=0;j<3;j++)
	  {
		printf(" %d ",a1[i][j]);
	  }
	  printf("\n");
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j&&a1[i][j]==1)
			count_s1++;
			else if(i!=j&&a1[i][j]==0)
			count_s2++;
		}
	}
    if(count_s1==3&&count_s2==6)
    printf("this is identity\n");
    else
    printf("this is not identity\n");
	
}*/


/* to check upper tronglular or not 
#include<Stdio.h>
void main()
{
	int a1[3][3],i,j,count_s1=0;
	printf("enter the first array\n");
	for(i=0;i<3;i++)
	{   
	  for(j=0;j<3;j++)
	  {
		scanf("%d",&a1[i][j]);
	  }
	}
	printf("your first array are...\n");
	for(i=0;i<3;i++)
	{   
	  for(j=0;j<3;j++)
	  {
		printf(" %d ",a1[i][j]);
	  }
	  printf("\n");
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i>j&&a1[i][j]==0)
			count_s1++;
		}
	}
    if(count_s1==3)
    printf("upper trianglular\n");
    else
    printf("not upper trinangular\n");
	
}*/

/* to check lower triangular 
#include<Stdio.h>
void main()
{
	int a1[3][3],i,j,count_s1=0;
	printf("enter the first array\n");
	for(i=0;i<3;i++)
	{   
	  for(j=0;j<3;j++)
	  {
		scanf("%d",&a1[i][j]);
	  }
	}
	printf("your first array are...\n");
	for(i=0;i<3;i++)
	{   
	  for(j=0;j<3;j++)
	  {
		printf(" %d ",a1[i][j]);
	  }
	  printf("\n");
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i<j&&a1[i][j]==0)
			count_s1++;
		}
	}
    if(count_s1==3)
    printf("lower trianglular\n");
    else
    printf("not lower trinangular\n");
	
}*/
/*
void main()
{
    char s[100];
    int i,used[26]={0},total=0;
    
    
    printf("\n Enter the String:\n");
    gets(s);
    
    for(i=0;s[i]!='\0';i++)
    {
        if('a'<=s[i] && s[i]<='z')
        {
            total+=!used[s[i]-'a'];
            used[s[i]-'a']=1;
        }
        else if('A'<=s[i] && s[i]<='Z')
        {
            total+=!used[s[i]-'A'];
            used[s[i]-'A']=1;
        }
    }
    
    if(total==26)
    {
        printf("\n The Entered String is a Pangram String.");
    }
    else
    {
        printf("\n The Entered String is not a Pangram String.");
    }
    
}*/


























	
	
	
	
	
	
	
















