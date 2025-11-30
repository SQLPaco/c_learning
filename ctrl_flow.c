#include <stdio.h>

int main() {
    int age = 26;

    // If
    if(age >= 18) {
        printf("You are an adult\n");
    }
    else {
        printf("You are a minor\n");
    }

    // If/ElseIf
    int score = 85;

    if(score >= 90) {
        printf("Grade A\n");
    }
    else if(score >= 80) {
        printf("Grade B\n");
    }
    else if(score >= 70) {
        printf("Grade c");
    }
    else {
        printf("Fail\n");
    }

    //For Loop
    for(int i = 1;
        i <= 5;
        i++) {
            printf("Iteration %d\n",i);
        }

    // // While Loop
    // int i = 1;
    // while(i <= 5) {
    //     printf("Iteration %d\n",i);
    //     i++;
    // }

    // //Do-While Loop
    // int i = 1;
    // do {
    //     printf("Iteration %d\n",i);
    //     i++;
    // } while(i <= 5);

    return 0;
}

