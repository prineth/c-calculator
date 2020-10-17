#include <stdio.h>

int main()
{
//    char operator;
//    double first, second;
//    printf("insert an operator (+, -, *,/) ");
//    scanf("%c", &operator);
//    printf("insert two operands: ");
//    scanf("%lf %lf", &first, &second);
//
//    switch (operator)
//    {
//    case '+':
//        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
//        break;
//    case '-':
//        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
//        break;
//    case '*':
//        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
//        break;
//    case '/':
//        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
//        break;
//        // operator doesn't match any case constant
//    default:
//        printf("Error! operator is not correct");
//    }
//




//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//#include <stdlib.h>
//
//int main()
//{
//    int num1;
//    int num2;
//    char 'opr';
//
//    printf("Enter number 01 : \n");
//    scanf("%d",&num1);
//
//    printf("Enter Number 02 :  \n");
//    scanf("%d",&num2);
//
//    printf("Your operator : \n");
//    scanf("%c",&'opr');
//
//    if ('opr'== '+')
//        sum = num1+num2;
//        printf("Sum is: %d", sum);
//
//
//
//        int expo,base,power=1,i;
//        printf("Enter base : ");
//        scanf("%d",&base);
//        printf("Enter exponent :");
//        scanf("%d",&expo);
//        for(i=0;i<expo;i++)
//        {
//            power=power*base;
//        }
//        printf("power = %d",power);

///factorial

//    int no,fact=1,i;
//    printf("Enter a number : ");
//    scanf("%d",&no);
//    for(i=no;i>0;i--)
//    {
//        fact=fact*i;
//    }
//    printf("Factorial = %d",fact);

///separate

//    int no,remain=0,total=0;
//    printf("Enter a number ");
//    scanf("%d",&no);
//
//    while(no>0)
//    {
//        remain=no%10;   ///1
//        total=total+remain;    ///6
//        no=no/10;   ///0
//
//
//    }
//    printf("\n");
//    printf("sum = %d ",total);

///
/*The following source code is used to calculate and display;
1.Scalar Sum
2.Scalar Product
3.Vector Sum
4.Vector Product
*/

    int U[5],V[5],W[5],sumU=0,sumV=0,sp=0;
    //input
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter a Value into the element %d of Array U ",i+1);
        scanf("%d",&U[i]);
        printf("Enter a Value into the element %d of Array V ",i+1);
        scanf("%d",&V[i]);
    }
// //   Scalar sum
//    for(i=0;i<5;i++)
//    {
//        sumU=sumU+U[i];
//        sumV=sumV+V[i];
//    }
//    printf("Scalar Sum of Array U %d \n",sumU);
//    printf("Scalar Sum of Array V %d \n",sumV);
   // scalar product
//    for(i=0;i<5;i++)
//    {
//        W[i]=U[i]*V[i];
//        sp=sp+W[i];
//    }
//    printf("Scalar Product is %d \n",sp);
 //   Vector Sum
//    printf("Vector Sum is \n");
//    for(i=0;i<5;i++)
//    {
//         W[i]=U[i]+V[i];
//         printf("%d \n",W[i]);
//    }
    //Vector Product
    printf("Vector Product is \n");
    for(i=0;i<5;i++)
    {
         W[i]=U[i]*V[i];
         printf("%d \n",W[i]);
    }





    return 0;
}
