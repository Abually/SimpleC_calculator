#include <stdio.h>

 int main()

 {

 //variable declaration

 char operation;

 int num1,num2;

 double results;

 

 //code for seeking user input

 printf("Enter operator:");

 scanf("%c",&operation);

 printf("Enter value 1:");

 scanf("%d",&num1);

 printf("Enter value 2:");

 scanf("%d",&num2);

 

 

 

 //conditions

 if(operation=='+')

 {results=num1+num2;

 }

 else if(operation=='-')

 { 

 results=num1-num2;

}

else if(operation=='*')

{

results=num1*num2;}

else if(operation=='/')

{

results=num1/num2;

}

//output 

printf("The Answer:%f",results);

return 0;
}
