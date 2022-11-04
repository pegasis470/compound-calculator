/* including the nessery header files*/
#include <stdio.h>
#include <math.h>
/* following function takes 2 inputs and prints addtion */
void add()
{
    float a,b;
    printf("Enter two numbers to add\n");
    scanf("%f %f",&a,&b);
    printf("The addition is %f",a+b);
}
/* following function takes 2 inputs and prints substraction */
void sub()
{
    float a,b;
    printf("Enter two numbers to substract \n");
    scanf("%f %f",&a,&b);
    printf("The substraction is %f",a-b);

}
/* following function takes 2 inputs and prints multiplication */
void multiply()
{
    float a,b;
    printf("Enter two numbers to multiply \n");
    scanf("%f %f",&a,&b);
    printf("The multiplication is %f",a*b);
}
/* following function takes 2 inputs and prints division and/or (if any) remainder*/
void divide()
{
    float a,b,remaindier;
    printf("enter two numbers to divide\n");
    scanf("%f %f",&a,&b);
    int div=a/b;
    remaindier=a-(b*div);
    if(remaindier!=0){
    printf("result of division is %2f and remainder is %2f\n",a/b,remaindier);
    }
    else
    {
       printf("result of division is %2f\n",a/b);
    }
}
/* following function takes first input asking the number of elements and that many inputs to print the avrage of all entered elements */
/* First input not bing included in the avrage*/
void avg()
{
    printf("enter number of elements: ");
    int n;
    scanf("%d",&n);
    float no, sum=0;
    for(int i=0;i<n;i++){
            printf("enter number  ");
            scanf("%f",&no);
            sum=sum+no;
    }
    printf("the avrage is %f",sum/n);
}
/* following function takes 1 input and prints the factorial of the enterd number */
void fac()
{
    float result=1  ,num;
    printf("Enter the number ");
    scanf("%f",&num);
    for(int i=1;i<=num;i++){
        result=result*i;

    }
    printf("the factorial is %f",result);
}
/* folowing is the main function to start execustion */
int main()
{
    printf("choose the operation from the following\n");
    printf("type + for addition \n type - for substraction \n type * for multiplication \n type / for division\n type # for finding avrage\n type ! for factorial\n");
    char choice;
    scanf("%c",&choice);
    switch (choice)     /* switch/case is used to call indivisual functions */
    {
        case '+':
            add();
            break;
        case '-':
            sub();
            break;
        case '*':
            multiply();
            break;
        case '/':
            divide();
            break;
        case '#':
            avg();
            break;
        case '!':
            fac();
            break;            
        default:
            printf("Error invalid choice %c is not defined",choice);
            break;
    }
}
