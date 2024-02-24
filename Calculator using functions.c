#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
return a-b;
}
int prod(int a,int b)
{
return a*b;
}
int div(int a,int b)
{
return a/b;
}
int rem(int a,int b)
{
    return a%b;
}
int power(int base,int exponent)
{
    int result=1;
    for(int i=0;i<exponent;i++)
    {
        result*=base;
    }
    return result;
}
int fact(int a)
{
    if(a<0){
printf("ERROR!!\n Factorial of negative number does not exist.\n");
return -1;
    }
    else
    {
        int result=1;
        for(int i=1;i<=a;i++)
        {
            result*=i;
        }
        return result;
    }
}
int main()
{
int num1,num2;
char op;

printf("If you want to ADD,Enter 1\n");
printf("If you want to SUBTRACT,Enter 2\n");
printf("If you want to MUTIPLY,Enter 3\n");
printf("If you want to DIVIDE,Enter 4\n");
printf("If you want REMAINDER,Enter 5\n");
printf("If you want POWER,Enter 6\n");
printf("If you want FACTORIAL,Enter 7\n");
scanf("%c",&op);
op=getchar();
switch(op)
{
case '1':
    printf("Enter two numbers\n");
printf("Enter 1st number\n");
scanf("%d",&num1);
printf("Enter 2nd number\n");
scanf("%d",&num2);

    printf("%d+%d=%d\n",num1,num2,sum(num1,num2));
    break;
    case '2':
   printf("Enter two numbers\n");
printf("Enter 1st number\n");
scanf("%d",&num1);
printf("Enter 2nd number\n");
scanf("%d",&num2);

    printf("%d-%d=%d\n",num1,num2,sub(num1,num2));
    break;
    case '3':

   printf("Enter two numbers\n");
printf("Enter 1st number\n");
scanf("%d",&num1);
printf("Enter 2nd number\n");
scanf("%d",&num2);

    printf("%d*%d=%d\n",num1,num2,prod(num1,num2));
    break;
    case '4':

   printf("Enter two numbers\n");
printf("Enter 1st number\n");
scanf("%d",&num1);
printf("Enter 2nd number\n");
scanf("%d",&num2);


    printf("%d/%d=%d\n",num1,num2,div(num1,num2));
    break;
    case '5':

   printf("Enter two numbers\n");
printf("Enter 1st number\n");
scanf("%d",&num1);
printf("Enter 2nd number\n");
scanf("%d",&num2);

    printf("%d%d=%d\n",num1,num2,rem(num1,num2));
    break;
    case '6':

   printf("Enter two numbers\n");
printf("Enter 1st number\n");
scanf("%d",&num1);
printf("Enter 2nd number\n");
scanf("%d",&num2);


    printf("%d^%d=%d\n",num1,num2,power(num1,num2));
    break;
    case '7':

    printf("Enter number\n");
scanf("%d",&num1);

    printf("%d!%d=%d\n",num1,fact(num1));
    break;

}
return 0;
}
