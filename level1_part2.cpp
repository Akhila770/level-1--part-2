// level 1 quetion 17
//Get two digit number fro user and make the one's digit as 0


#include<stdio.h>
int main()
{
	int a,p,q;
	printf("enter a number:");
	scanf("%d",&a);
	p=a/10;
	q=p*10;
	printf("ourput:%d",q);
}

// level 1 quetion 18
//get two digit number from user and make the tens digit 1?
//code:
#include<stdio.h>
int main()
{
	int n,rem,p;
	printf("enter number : ");
	scanf("%d",&n);
	rem=n%10;
	p=1*10+rem;
	printf("output: %d",p);
}

//level 1, quetion 19
//Get  three digit  number from user and make the one's digt as 2? 
//code:


#include<stdio.h>
int main()
{
	int a,n,q;
	printf("enter number:");
	scanf("%d",&n);
	a=n/10;
	q=a*10+2;
	printf("ourput: %d",q);
}

//level 1, quetion 20
//Get  three digit  number from user and make ten's digit as 0? 
//code:

#include<stdio.h>
int main()
{
	int rem,b,c,n,q;
	printf("enter number:");
	scanf("%d",&n);
	rem=n%10;
	b=n/10;
	c=b/10;
	q=c*100+rem;
	printf("output:%d",q);
}


//level 1, quetion 21
//Get  a number from user and subtract 5 from that number if the number is odd, then print the result.do not use if?
 
//code:

#include<stdio.h>
int main()
{       int n,q;
	printf("enter number:");
	scanf("%d",&n);
	q=n-5;
	(q%2) ? printf("%d",q) : printf(" ");
}

//level 1, quetion 22
//Get  three digit  number from user and subtract 5 from that number if the number ten's position is odd, then print the result. do not use if? 
//code:

#include<stdio.h>
int main()
{
	int rem,b,c,n,q;
	printf("enter number:");
	scanf("%d",&n);
	rem=n-5;
	b=rem/10;
	(b%2) ? printf("%d",rem) : printf("%d",n);
}

//level 1, quetion 23
//Get  two digit  number from user subtract 5 from that number if the sum of digits of the number is odd, then printf the result.do not use if? 
//code:

#include<stdio.h>
int main()
{
	int n,sum,s,p,q;
	printf("enter number:");
	scanf("%d",&n);
	s=n-5;
	p=s%10;
	q=s/10;
	(p+q)?printf("%d",s) : printf("%d",n);
}


//level 1, quetion 24
//Get  three digit  number from user subtract 5 from that number if the one's digit number of the number and 100's are same,then print the result.do not use if?//code:

#include<stdio.h>
int main()
{
	int a,n,p,q;
	printf("enter a number:");
	scanf("%d",&n);
    a=n-5;
    p=a%10;
    q=a/100;
    (p==q) ? printf("%d",a):printf("%d",n);
}


//level 1, quetion 25
//Get  four digit  number from user subtract 5 from that number if the ten's digit number of the number and 100's are same,then print the result.do not use if?//code:

#include<stdio.h>
int main()
{
	int a,n,p,q,rem,b;
	printf("enter a number:");
	scanf("%d",&n);
    a=n-5;
    printf("%d\n",a);
    rem=a%100;
     printf("%d\n",rem);
    p=rem/10;
     printf("%d\n",p);
    b=a/100;
     printf("%d\n",b);
    q=b%10;
     printf("%d\n",q);
    (p==q) ? printf("%d",a):printf("%d",n);
}


//level 1, quetion 26
//Get two digit number from user. if the sum of the digits is 10 then print "success",otherwise print "failure"?
//code:


#include<stdio.h>
int main()
{
	int a,n,p,q,s,b;
	printf("enter a number:");
	scanf("%d",&n);
	p=n/10;
	q=n%10;
	s=p+q;
	(s==10)?printf("success"):printf("failure");
}
	
	
//level 1, quetion 27
//Get three digit number from user. if the sum of the digits is 10 then print "success",otherwise print "failure"?
//code:


#include<stdio.h>
int main()
{
	int a,n,p,q,s,b,c;
	printf("enter a number:");
	scanf("%d",&n);
	p=n%10;
	q=n/10;
	b=q/10;
	c=q%10;
	s=p+b+c;
	(s==10)?printf("success"):printf("failure");
}
	
	
	//level 1 quetion 28
//Get three digit number from user. if the sum of the one's digit and hundred's digit is less than 10 then print "success",otherwise print "failure"?

//code:
#include<stdio.h>
int main()
{
	int n,p,q,s;
	printf("enter a number:");
	scanf("%d",&n);
	p=n%10;
	q=n/100;
	s=p+q;
	(s<10)?printf("success"):printf("failure");
}


//level quetion 29
//Get four digit number from user. if the sum of the ten's digit and hundred's digit is greater than 10 then print "success",otherwise print "failure"?

//code:
#include<stdio.h>
int main()
{
	int n,p,q,s,rem,b;
	printf("enter a number:");
	scanf("%d",&n);
	rem=n%100;
	p=rem/10;
	q=n/100;
	b=q%10;
	s=p+b;
	(s>10)?printf("success"):printf("failure");
}


//level quetion 30
//Get four digit number from user. if the sum of the ten's digit and hundred's digit is equal to 10 and one of the digits is more than 7 print "success",otherwise print "failure"?

//code:
#include<stdio.h>
int main()
{
	int n,p,q,s,rem,b;
	printf("enter a number:");
	scanf("%d",&n);
	rem=n%100;
	p=rem/10;
	q=n/100;
	b=q%10;
	s=p+b;
	(s==10 && (p>7 || b>7))?printf("success"):printf("failure");
}


// level 1 quetion 31
/* Get three digit number from user. If the sum of the digits is less than 10, then print the sum, otherwise
 add the digits of the sum. if the sum of the digits is less than 10, then print the sum,
 otherwise add the digits of the sum, and peint the sum
 NOTE: The result should be always single digit only. */
 
 //code
 #include<stdio.h>
 int main()
 {
 	int n,a,b,sum,c,d,p,q,r,s,t,u,v;
 	printf("enter THree digit number: ");
 	scanf("%d",&n);
 	a=n%10;
 	b=n/10;
 	c=b/10;
 	d=b%10;
 	sum=a+c+d;
 	p=n+sum; //123
 	q=p%10;
 	t=p/10;
 	r=t/10;
 	s=t%10;
 	u=r+s+q;
 	v=(u<10)?u:(u+p); 
 	(sum<10)?printf("%d",sum):printf("%d",v);
 	
 }
 
 
 //level quetion 32
/*Get two 2 digit numbers from user. if the sum of the numbers is less than 100,
then print the sum,otherwise print the difference.*/
//code:
#include<stdio.h>
int main()
{
	int a,b,s,d;
	printf("enter value of a:");
	scanf("%d",&a);
	printf("enter value of b:");
	scanf("%d",&b);
	s=a+b;
	d=a-b;
	(s<100)?printf("sum:%d",s):printf("difference:%d",d);
}

// level 1 question 33
//Get two 2 digit numbers from user. print the sum of digits of the biggest number?

 //code
 #include<stdio.h>
 int main()
 {
 	int a,b,s1,s2,p,q,r,s;
 	printf("enter value of a:");
 	scanf("%d",&a);
 	printf("enter value of b:");
 	scanf("%d",&b);
 	// sum of a digits
 	p=a/10;
 	q=a%10;
 	s1=p+q;
 	//sumof b digits
 	r=b/10;
 	s=b%10;
 	s2=r+s;
 	(a>b)?printf("%d",s1):printf("%d",s2);
 }
 
 // level 1 question 34
/* Get two 3 digit numbers from user. print the difference between the one's digit 
and hundered's digit of the number whose ten's digit is bigger than other number's 
ten's digit?   */
#include<stdio.h>
int main()
{
	int a,b,ones,hundreds,p,q,r,s;
	printf("enter three digit number:");
	scanf("%d",&a);
	printf("enter three digit number:");
	scanf("%d",&b);
	p=a/10;
	q=p%10;
	r=b/10;
	s=r%10;
	if(q>s)
	{
	   ones=a%10;
	   hundreds=a/100;
	   printf("difference:%d",ones-hundreds);
	}
	else
	{
		ones=b%10;
	   hundreds=b/100;
	   printf("difference:%d",ones-hundreds);
	}
}

//level 1 question 35
/*Get two 3 digit numbers from user. Add the one's and hundred's digits of both the numbers.
print the sum of all the digits of the number whose sum of one's and hundred's digit is bigger*/

//code:
#include<stdio.h>
int main()
{
	int a,b,p,q,r,s;
	printf("enter three digit number:");
	scanf("%d",&a);
	printf("enter three digit number:");
	scanf("%d",&b);
	int a_ones=a%10;
	int a_hundreds=a/100;
	int a_sum=a_ones+a_hundreds;
	int b_ones=a%10;
	int b_hundreds=a/100;
	int b_sum=b_ones+b_hundreds;
	if(a_sum>b_sum)
	{
		p=a%10;
		q=a/10;
		r=q/10;
		s=q%10;
		int sum_a=p+r+s;
		printf("sum:%d",sum_a);
	}
	else
	{
		p=b%10;
		q=b/10;
		r=q/10;
		s=q%10;
		int sum_b=p+r+s;
		printf("sum:%d",sum_b);
	}
}

