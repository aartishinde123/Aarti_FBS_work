//3. Print perfect numbers in the given range 1 to n.
//#include <stdio.h>
//void main()
//{
//	for(int j=1;j<=1000;j++)
//	{
//		int no=j;
//	    int sum=0;
//	    for(int i=1;i<no;i++)
//    	{
//		   if(no%i==0)
//		   sum=sum+i;
//	    }
//	    if(sum==no)
//	 {
//	   printf("%d ",j);
//     }
//     
//	}
//	
//}

//2. Print prime numbers in the given range 1 to n.
//#include <stdio.h>
//void main()
//{
//	for(int j=1;j<=1000;j++)
//	{
//		int no=j;
//		int flag=0;
//		for(int i=2;i<no;i++)
//		{
//			if(no%i==0)
//			{
//			flag=1;
//			break;
//			}
//		}
//	      if(flag==0)	
//	       {
//		       printf("%d ",j);
//	        }
//    }
//}

//1. Print armstrong numbers in the given range 1 to n.
//#include <stdio.h>
//
//void main() 
//{
//    int num, temp, digit, sum;
//
//    for (num = 1; num < 1000; num++) 
//    {
//        temp = num;
//        sum = 0;
//
//        while (temp > 0) 
//        {
//            digit = temp % 10;
//            sum = sum + (digit * digit * digit);
//            temp = temp / 10;
//        }
//
//        if (sum == num)
//            printf("%d\n", num);
//    }
//
//    
//}


//4. Print strong numbers in the given range 1 to n.
//#include <stdio.h>
//
//void main() 
//{
//    int num, temp, digit, sum, i, fact;
//
//    for (num = 1; num <= 1000; num++) 
//    {   
//        temp = num;
//        sum = 0;
//
//        while (temp > 0) 
//        {                
//            digit = temp % 10;
//            fact = 1;
//
//            for (i = 1; i <= digit; i++) 
//            {
//                fact = fact * i;
//            }
//
//            sum = sum + fact;
//            temp = temp / 10;
//        }
//
//        if (sum == num)
//            printf("%d ", num);
//    }
//
//    
//}
//5. Write a menu driven program to take a number for user and perform operations as follows.
//
//Press 1.To check number is even or odd.
//2.To check number is prime or not.
//3.To check number is pallindrome or not.
//4.To check number is positive, negative or zero.
//5.To reverse a number.
//6.To find sum of digits.
#include <stdio.h>

int main() 
{
    int num, choice;
    int temp, digit, sum, rev, i, flag;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    if (choice == 1) 
	{
        if (num % 2 == 0)
        
            printf("%d is Even\n", num);
        else
            printf("%d is Odd\n", num);
    }

    
    else if (choice == 2) 
	{
        if (num <= 1)
            printf("%d is not Prime\n", num);
        else {
            flag = 1; 
            for (i = 2; i <= num/2; i++) 
			{ 
                if (num % i == 0) 
				{
                    flag = 0; 
                    break;
                }
            }
            if (flag)
                printf("%d is Prime\n", num);
            else
                printf("%d is not Prime\n", num);
        }
    }

    
    else if (choice == 3) 
	{
        temp = num;
        rev = 0;
        while (temp != 0) {
            digit = temp % 10;
            rev = rev * 10 + digit;
            temp = temp / 10;
        }
        if (rev == num)
            printf("%d is a Palindrome\n", num);
        else
            printf("%d is not a Palindrome\n", num);
    }

    
    else if (choice == 4) 
	{
        if (num > 0)
            printf("%d is Positive\n", num);
        else if (num < 0)
            printf("%d is Negative\n", num);
        else
            printf("The number is Zero\n");
    }


    else if (choice == 5) {
        temp = num;
        rev = 0;
        while (temp != 0) {
            digit = temp % 10;
            rev = rev * 10 + digit;
            temp = temp / 10;
        }
        printf("Reverse of %d is %d\n", num, rev);
    }

    else if (choice == 6) {
        temp = num;
        sum = 0;
        while (temp != 0) {
            digit = temp % 10;
            sum += digit;
            temp = temp / 10;
        }
        printf("Sum of digits of %d is %d\n", num, sum);
    }

    else {
        printf("Invalid choice!\n");
    }

    
}
