//Print numbers from 1 to 10
//Output: 1 2 3 4 5 6 7 8 9 10
//#include <stdio.h>
//void main() 
//{
//    int i;
//    for(i = 1; i <= 10; i++) 
//	{
//        printf("%d ", i);
//    }
//}
//Print table for given number.
//Input: n = 5
//Output: 5 10 15 20 25 30 35 40 45 50
//#include <stdio.h>
//void main() 
//{
//    int n, i;
//    printf("Enter a number: ");
//    scanf("%d", &n);
//    
//    for(i = 1; i <= 10; i++) 
//	{
//        printf("%d ", n * i);
//    }
//}
//Sum of numbers in given range.
//Find sum of numbers from start to end.
//Input: start = 1, end = 5
//Output: 15
//#include <stdio.h>
//void main() 
//{
//    int start, end, sum = 0, i;
//    printf("Enter start and end values: ");
//    scanf("%d %d", &start, &end);
//
//    for(i = start; i <= end; i++) 
//	{
//        sum = sum + i;
//    }
//
//    printf("Sum = %d", sum);
//}
//Check the given number is prime or not.
//#include <stdio.h>
//void main() 
//{
//    int n, i, count = 0;
//
//    printf("Enter number: ");
//    scanf("%d", &n);
//
//    for(i = 1; i <= n; i++) {
//        if(n % i == 0)
//            count++;
//    }
//
//    if(count == 2)
//        printf("Prime");
//    else
//        printf("Not Prime");
//}
//#include <stdio.h>
//void main() 
//{
//    int n, sum = 0;
//    int r1,r2,r3,q1;
//
//    printf("Enter number: ");
//    scanf("%d", &n);
//
//     
//
//    while(n > 0) {
//        r1 = n % 10;
//		q1 = n / 10;
//		r2 = q1 % 10;
//		r3 = q1 / 10;         
//        sum = (r1*r1*r1)+(r2*r2*r2)+(r3*r3*r3);  
//                
//    }
//
//    if(sum == n)
//        printf("Armstrong");
//    else
//        printf("Not Armstrong");
//}
//Check the given number is Perfect number or not.
//#include <stdio.h>
//void main() {
//    int n, i, sum = 0;
//
//    printf("Enter number: ");
//    scanf("%d", &n);
//
//    for(i = 1; i < n; i++) 
//	{
//        if(n % i == 0)
//            sum = sum + i;
//    }
//
//    if(sum == n)
//        printf("Perfect");
//    else
//        printf("Not Perfect");
//}
//Find factorial of given number.
//#include <stdio.h>
//void main() {
//    int n, i;
//    int fact = 1;
//
//    printf("Enter number: ");
//    scanf("%d", &n);
//
//    for(i = 1; i <= n; i++) {
//        fact = fact * i;
//    }
//
//    printf("Factorial = %d", fact);
//}
//Check the given number is Strong number or not.
//#include <stdio.h>
//void main() {
//    int n, temp, r, sum = 0, fact, i;
//
//    printf("Enter number: ");
//    scanf("%d", &n);
//
//    temp = n;  
//
//    while(n > 0) {
//        r = n % 10;      
//        fact = 1;
//
//    
//        for(i = 1; i <= r; i++) {
//            fact = fact * i;
//        }
//
//        sum = sum + fact;
//        n = n / 10;     
//    }
//
//    if(sum == temp)
//        printf("Strong");
//    else
//        printf("Not Strong");
//}
//
////Check the given number is Palindrome number or not.
//#include <stdio.h>
//void main() {
//    int n, temp, rev = 0, r;
//
//    printf("Enter number: ");
//    scanf("%d", &n);
//
//    temp = n;  
//
//    while(n > 0) {
//        r = n % 10;          
//        rev = rev * 10 + r;  
//        n = n / 10;           
//    }
//
//    if(rev == temp)
//        printf("Palindrome");
//    else
//        printf("Not Palindrome");
//}
//Find Sum of first and last digit of given number
//#include <stdio.h>
//void main() {
//    int n, first, last, temp;
//
//    printf("Enter number: ");
//    scanf("%d", &n);
//
//    temp = n;
//    last = n % 10;  
//
//    
//    while(n >= 10) {
//        n = n / 10;
//    }
//    first = n;  
//
//    printf("Sum of first and last digit = %d", first + last);
//}
//




