#include <stdio.h>
#include <conio.h>
int  main()
{   
    float i=2,op,num1,num2,result;
    while(i>1){
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Reminder\n6.Exit\nChoose operation:");
        scanf("%f",&op);
        if(op==6){
            break;
        } 
        printf("Enter two numbers:");
        scanf("%f%f",&num1,&num2);
        if(op==1){
            result=num1+num2;
            printf("%f+%f=%f \n\n",num1,num2,result);
            i++;
        }
        else if(op==2){
            result=num1-num2;
            printf("%f-%f=%f \n\n",num1,num2,result);
            i++;
        }
        else if(op==3){
            result=num1*num2;
            printf("%fx%f=%f \n\n",num1,num2,result);
            i++;
        }
        else if(op==4){
            result=num1/num2;
            printf("%f/%f=%f \n\n",num1,num2,result);
            i++;
        }
        else if(op==5){
            result=(int)num1%(int)num2;
            printf("Remainder=%d \n\n",(int)result);
            i++;
        }
    }
    return 0;

}