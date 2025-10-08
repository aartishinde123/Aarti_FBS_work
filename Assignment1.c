//Write a program to check whether a number is even or odd
//#include <stdio.h>
//void main()
//{
//	int no=6;
//	if(no%2==0)
//	{
//		printf("no is even");
//	}
//	else
//	{
//		printf("no is odd");
//	}
//}
//Write a program to check given 3 digit number is pallindrome or not.
//#include <stdio.h>
//void main()
//{
//	int no=456;
//	int r1,r2,r3,rev;
//	int q1;
//	r1=no%10;
//	q1=no/10;
//	r2=q1%10;
//	r3=q1/10;
//	rev=r1*100+r2*10+r3;
//	printf("rev%d",rev);
//	if(rev==no)
//	{
//	printf("palindrome");
//	}
//	else
//	{
//	printf(" not palindrome");	
//	}
//}
//Write a program to check whether a given year is a leap year
//#include <stdio.h>
//void main()
//{
//	int year=1957;
//	if(year%4==0&&year%100!=0||year%400==0)
//	{
//		printf("year is leap");
//	}
//	else
//	{
//	printf("year is not leap");	
//	}
//	
//}
//Write a program to check whether a given character is a vowel or consonant.
//#include <stdio.h>
//void main()
//{
//	char ch='d';
//	if (ch =='a'|| ch =='e'|| ch =='i'|| ch =='o'|| ch =='u'||  ch =='A'|| ch =='E'|| ch =='I'|| ch =='O'|| ch =='U')
//	{
//		printf("%c is a vowel.\n",ch);
//	}
//	else
//	{
//		printf("%c is a consonant.",ch);
//	}
//}
	
//Write a program to check whether a person is eligible to vote (age = 18)
//#include <stdio.h>
//void main()
//{
//	int age = 21;
//	if( age >= 18)
//	{
//		printf("person is eligible for vote");
//		
//	}
//	else
//	{
//	printf("person is not eligible for vote");
//			
//	}
//
//}
//Write a program to check whether a given character is uppercase or lowercase
//#include <stdio.h>
//void main()
//{
//	char ch='a';
//	if(ch>='A' && ch<='Z')
//	{
//		printf("%c is an uppercase letter",ch);
//	}
//	else
//	{
//	    printf("%c is an lowercase letter",ch);	
//	}
//	
//}
//Calculating total salary based on basic. If basic <=5000 da, ta and hra will be10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%respectively.
//#include <stdio.h>
//
//void main() {
//    float basic, da, ta, hra, total_salary;
//
//    printf("Enter basic salary: ");
//    scanf("%f", &basic);
//
//    if (basic <= 5000) {
//        da = 0.10 * basic;   
//        ta = 0.20 * basic;   
//        hra = 0.25 * basic;  
//    } else {
//        da = 0.15 * basic;   
//        ta = 0.25 * basic;   
//        hra = 0.30 * basic;  
//    }
//
//    total_salary = basic + da + ta + hra;
//
//    printf("Total Salary = %f", total_salary);
//
//    
//}
//
