#pragma once
#pragma warning(disable : 4996) // ignores the scanf issue

#include <stdio.h>
#include "func_declaration.h"
#include "func_code.h"


int main()
{
    int a, b;
    
    printf("Enter the first number: ");
    scanf("%d", &a);
    
    printf("Enter the second number: ");
    scanf("%d", &b);
    
    newLine();
    printf("Addition result is: %5d", add(a, b));
    newLine();
    printf("Subtraction result is: %5d", sub(a, b));
    newLine();
    printf("Multiplication result is: %5d", multi(a, b));
    newLine();
    printf("Diairesi result is: %5.2f", diairesi(a,b));
    newLine();
    printf("Division result is: %5d", division(a,b));
    newLine();
    printf("Modulus result is: %5d", modulus(a,b));
    newLine();
    printf("Power result is: %5ld", power(a,b));
    newLine();
    printf("Expression1 result is: %5.2f", expr1(a, b));
    newLine();
    printf("Expression2 result is: %5.2f", expr2(a, b));
    
    return 0;
}



