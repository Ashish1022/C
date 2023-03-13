#include<stdio.h>

void Addition(float a,float b);
void Substraction(float a,float b);
void Multiplication(float a,float b);
void Division(float a,float b);
void Factorial(int n);
void Even_Odd(int n);

int main(){
    int choice,number;
    float num1,num2;
    do{

    printf("Press 1 for Addiotion \n");
    printf("Press 2 for Substraction \n");
    printf("Press 3 for Multiplication \n");
    printf("Press 4 for Division \n");
    printf("Press 5 for Factorial \n");
    printf("Press 6 for Even/Odd \n");
    scanf("%d",&choice);
    if(choice != 5 && choice!= 6){
        printf("Enter the first Number : ");
        scanf("%f",&num1);
        printf("Enter the second Number : ");
        scanf("%f",&num2);

        if(choice==1){
            Addition(num1,num2);
        }
        else if(choice==2){
            Substraction(num1,num2);
        }
        else if(choice==3){
            Multiplication(num1,num2);
        }
        else if(choice==4){
            Division(num1,num2);
        }

    }
    else if(choice==5){
        printf("Enter the number : ");
        scanf("%d",&number);
        Factorial(number);
    }
    else if(choice == 6){
        printf("Enter the number : ");
        scanf("%d",&number);
        Even_Odd(number);
        
    }
    } while (choice != 7);
    
    return 0;
}


void Addition(float a,float b){
    float answer = a+b;
    printf("The Answer is : %f\n",answer);
}
void Substraction(float a,float b){
    float answer = a-b;
    printf("The Answer is : %f\n",answer);
}
void Multiplication(float a,float b){
    float answer = a*b;
    printf("The Answer is : %f\n",answer);
}
void Division(float a,float b){
    float answer = a/b;
    printf("The Answer is : %f\n",answer);
}
void Factorial(int n){
    int fact;
    fact = 1;
    if(n == 0 || n==1){
        printf("The factorial is 1");
    }
    else{
        for(int i=1;i<=n;i++){
            fact = fact*i;
        }
        printf("The factorial of given number is %d \n",fact);
    }
}
void Even_Odd(int n){
    if(n%2==0){
        printf("Its's a Even Number\n");
    }
    else{
        printf("Its's a Odd Number\n");

    }
}