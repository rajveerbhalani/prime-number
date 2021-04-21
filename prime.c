#include<stdio.h>
 int primen( int num , int i);
int main()
{
int num , prime;
	printf(" ENTER A POSITIVE NUMBERS  :-");
	scanf("%d",&num);
	prime =primen(num,num/2);
if (prime==1)
{ 
  printf("%d is a prime number");
}
else
{ printf("%d is not a prime number");
}
return 0;
}

 int primen( int num , int i)
 { if(i==1)
   {return 1;
    }
    else
    {if(num%i==0)
    {return 0;
	}
	else 
	{
	primen(num,i-1);
	}
	}
 }
