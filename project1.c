/*----------------------------------------------------------------------------------------------------------------------------------
This is a project for what I learned ~

I Learned: ----------------
- Variables and Data Types
- Control Flows - if else/ifelse/for loops/while loops/do-while loops
-----------------------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>

            int multiply( int monthlysal, int b) {
                return monthlysal * b;
                
            }

int main() {

            char name[25];
            int age;
            int monthlysal;

            printf("What is your name? ");
                scanf("%s", name);
            printf("What is your age? ");
                scanf("%d", &age);
            printf("What is your gross monthly salary? ");
                scanf("%d",&monthlysal);

            printf("Your name is: %s\n ",name);

            if(age < 18) {
                printf("You are a minor.\n ");
            }
            else if(age >= 18 && age <= 35 ) {
                printf("You are a young adult.\n ");
            }
            else if(age >= 36 && age <= 60) {
                printf("Your are an adult.\n ");
            }
            else if (age >= 61) {
                printf("You are a senior.\n ");
            }

            int result = multiply(monthlysal, 12);
            printf("%d is your gross yearly salary.\n", result);

            return 0;
            }