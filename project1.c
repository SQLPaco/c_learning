/*----------------------------------------------------------------------------------------------------------------------------------
This is a project for what I learned ~

I Learned: ----------------
- Variables and Data Types
- Control Flows if else/ifelse/for loops/while loops/do-while loops
-----------------------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>

int main() {

    char name[25];
    int age;
    float monthlysal;

    printf("What is your name?");
        scanf("%s", name);
    printf("What is your age?");
        scanf("%d", age);
    printf("What is your monthly salary?");
        scanf("%.2f",monthlysal);

    if(age < 18) {
        printf("You are a minor.");
    }
    else if(age >= 18 && age <= 35 ) {
        printf("You are a young adult.");
    }
    else if(age >= 36 && age <= 60) {
        printf("Your are an adult");
    }
    else if (age >= 61) {
        printf("You are a senior");
    }

    return 0;
}