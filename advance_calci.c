#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,n,m,z,x,p,c,t,d,u;
	double result;
	char ch;
	double pie=3.14;
	printf("Enter a proper oprator(+,-,*,/,%,^,$,~):");
	scanf("%c",&ch);

	
	switch(ch)
	{ 
		case '+':
			printf("Enter the value of a and b:");
			scanf("%lf %lf",&a,&b);
			printf("The sum of %0.1lf and %0.1lf is %0.2lf\n",a,b,a+b);
			break;
		case '-':	
			printf("Enter the value of a and b:");
			scanf("%lf %lf",&a,&b);
			printf("The differnce of %0.1lf and %0.1lf is %0.2lf",a,b,a-b);
			break;
		case '*':	
			printf("Enter the value of a and b:");
			scanf("%lf %lf",&a,&b);
			printf("The product of %0.1lf and %0.1lf is %0.2lf\n",a,b,a*b);
			break;
		case '/':
			printf("Enter the value of a and b:");
			scanf("%lf %lf",&a,&b);
			printf("The division of %0.1lf and %0.1lf gives %0.2lf\n",a,b,a/b);
			break;
		case '%':
			printf("Enter the number attained:");
			scanf("%lf",&n);
			printf("Enter total number:");
			scanf("%lf",&m);
			result=(n/m)*100;
			printf("%0.1lf is %0.2lf percent of %0.1lf\n",n,result,m);
		case '^':
			printf("Enter the number:");
			scanf("%lf",&a);
			printf("Enter the power:");
			scanf("%lf",&b);
			x=pow(a,b);
			printf("The output of %0.1lf as the power of %0.1lf is %0.2lf",b,a,pow(a,b));
			break;	
		case '$':
			printf("Enter the number you want square root of:");
			scanf("%lf",&p);
			z=sqrt(p);
			printf("The square root of %0.1lf is %0.2lf",p,z);
			break;
	    case '~':
			printf("Enter the angle you want to find sine value:");
			scanf("%lf",&t);
			u=sin(t);
			printf("The value of sin function having angle %0.2lf is %0.4lf",t,u);
			break;
		case '!':
			printf("Enter the angle you want the cosine of:");
			scanf("%lf",&c);
			printf("The cosine of %0.4lf is %0.4lf",c,cos(c));	
			break;	
		case '#':
			printf("Enter the angle you want tan value of:");
			scanf("%lf",&d);
			printf("The tan of %0.4lf is %0.4lf",d,tan(d));
			break;	
	}

	return 0;
}

