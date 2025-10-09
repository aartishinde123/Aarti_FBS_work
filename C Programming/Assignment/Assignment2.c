//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.
//#include <stdio.h>
//
//void main() 
//{
//	
//    int num1, num2, result;
//    char op;
//
//    printf("Enter first number: ");
//    scanf("%d", &num1);
//
//    printf("Enter second number: ");
//    scanf("%d", &num2);
//
//    printf("Enter operator (+, -, *, /, %%): ");
//    scanf(" %c", &op);  
//
//    if (op == '+')
//        result = num1 + num2;
//    else  
//	if (op == '-')
//        result = num1 - num2;
//    else 
//	if (op == '*')
//        result = num1 * num2;
//    else 
//	if (op == '/')
//        result = num1 / num2;
//    else 
//	if (op == '%')
//        result = num1 % num2;
//    else 
//	{
//        printf("Invalid operator!");
//        
//    }
//
//    printf("Result = %d", result);
//
//}
//Accept three sides of a triangle from the user and determine whether the triangle is equilateral, isosceles, or scalene.
//#include <stdio.h>
//void main() 
//{
//    int side1, side2, side3;
//
//    printf("Enter three sides of triangle: ");
//    scanf("%d %d %d", &side1, &side2, &side3);
//
//    if (side1 == side2 && side2 == side3)
//        printf("Equilateral triangle");
//    else 
//	if (side1 == side2 || side2 == side3 || side1 == side3)
//        printf("Isosceles triangle");
//    else
//        printf("Scalene triangle");
//}
//Write a program to find greatest of three numbers using nested if-else.
//#include <stdio.h>
//void main() 
//{
//    int a, b, c;
//
//    printf("Enter three numbers: ");
//    scanf("%d %d %d", &a, &b, &c);
//
//    if (a > b) 
//	{
//        if (a > c)
//            printf("%d is the greatest number", a);
//        else
//            printf("%d is the greatest number", c);
//    } 
//	else 
//	{
//        if (b > c)
//            printf("%d is the greatest number", b);
//        else
//            printf("%d is the greatest number", c);
//    }
//}
//Ask the user to enter marks.Then show the result based on these rules:If marks are more than 75 ? show "Distinction"If marks are more than 65 ? show "First Class"If marks are more than 55 ? show "Second Class"If marks are 40 or more ? show "Pass Class"If marks are less than 40 ? show "Fail"
//#include <stdio.h>
//void main() 
//{
//    int marks;
//
//    printf("Enter your marks: ");
//    scanf("%d", &marks);
//
//    if (marks > 75)
//        printf("Distinction");
//    else if (marks > 65)
//        printf("First Class");
//    else if (marks > 55)
//        printf("Second Class");
//    else if (marks >= 40)
//        printf("Pass Class");
//    else
//        printf("Fail");
//}
//Accept the price from user. Ask the user if he is a student (user may say y or n). If he is a student and he has purchased more than 500 than discount is 20% otherwisediscount is 10%.But if he is not a student then if he has purchased more than 600discount is 15% otherwise there is not discount.
//#include <stdio.h>
//void main()
//{
//    float price, discount, finalPrice;
//    char student;
//
//    printf("Enter the price: ");
//    scanf("%f", &price);
//
//    printf("Are you a student? (y/n): ");
//    scanf(" %c", &student);  
//
//    if (student == 'y')
//	 {
//        if (price > 500)
//            discount = price * 0.20;
//        else
//            discount = price * 0.10;
//    } else {
//        if (price > 600)
//            discount = price * 0.15;
//        else
//            discount = 0;
//    }
//
//    finalPrice = price - discount;
//
//    printf("Discount = %f\n", discount);
//    printf("Final Price = %f\n", finalPrice);
//}
//Accept a number and check if it is divisible by 3, 5, or both.
//#include <stdio.h>
//void main() 
//{
//    int num;
//    printf("Enter a number: ");
//    scanf("%d", &num);
//
//    if (num % 3 == 0 && num % 5 == 0)
//        printf("Divisible by both");
//    else 
//	if (num % 3 == 0)
//        printf("Divisible by 3 but not by 5");
//    else 
//	if (num % 5 == 0)
//        printf("Divisible by 5 but not by 3");
//    else
//        printf("Divisible by None");
//}
//Accept the age and check if the person is:Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)
#include <stdio.h>
void main() 
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age <= 12)
        printf("Child");
    else 
	if (age >= 13 && age <= 19)
        printf("Teenager");
    else 
	if (age >= 20 && age <= 59)
        printf("Adult");
    else
        printf("Senior");
}