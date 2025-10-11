//Print a solid square pattern
//#include <stdio.h>
//void main()
//{
//	for(int i=1;i<=4;i++)
//	{
//		for(int j=1;j<=4;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//Print a right-angled triangle pattern
//#include <stdio.h>
//void main()
//{
//	for(int i=1;i<=5;i++)
//	{
//		for(int j=1;j<=i;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//Print an inverted right-angled triangle pattern
//#include <stdio.h>
//void main()
//{ int n=5;
//	for(int i=5;i>=1;i--)
//	{
//		for(int j=1;j<=6-i;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//pyramid pattern
//#include <stdio.h>
//void main()
//{
//	for(int i=1;i<=5;i++)
//	{    
//	    for(int k=1;k<=i;k++)
//	        printf(" ");
//		for(int j=1;j<=6-i;j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//}

//Print an inverted pyramid pattern
//#include <stdio.h>
//void main()
//{
//	for(int i=1;i<=5;i++)
//	{    
//		for(int j=1;j<=i;j++)
//		{
//			printf("%d ",j);
//		}
//		printf("\n");
//	}
//}
//Print a half pyramid using numbers
//#include <stdio.h>
//void main()
//{ int num=1;
//	for(int i=1;i<=4;i++)
//	{    
//		for(int j=1;j<=i;j++)
//		{
//			printf("%d",num);
//			num++;
//		}
//		printf("\n");
//	}
//}

//Print a hollow square pattern
//#include <stdio.h>
//
//int main() {
//    int n = 4;  
//    int i, j;
//
//    for (i = 1; i <= n; i++) {
//        for (j = 1; j <= n; j++) {
//            
//            if (i == 1 || i == n || j == 1 || j == n)
//                printf("* ");
//            else
//                printf("  ");
//        }
//        printf("\n");
//    }
//}

//Print a Floyd’s triangle pattern
//#include <stdio.h>
//void main()
//{
//	for(int i=1;i<=5;i++)
//	{
//		for(int j=1;j<=5;j++)
//		{
//			if(i==1||i==5||j==1||j==5)
//			    printf("* ");
//			else
//			    printf("  ");
//		}
//	printf("\n");
//}
//	
//}

//Print a hollow square with diagonal pattern
//#include <stdio.h>
//void main()
//{
//	for(int i=1;i<=5;i++)
//	{
//		for(int j=1;j<=5;j++)
//		{
//			if(i==1||i==5||j==1||j==5||i==j)
//			    printf("* ");
//			else
//			    printf("  ");
//		}
//	printf("\n");
//}
//	
//}

//Print a pattern of stars in diamond shape
//#include <stdio.h>
//
//int main() 
//{
//    int n = 4;
//    int i, j;
//
//    for (i = 1; i <= n; i++) 
//	{
//        for (j = 1; j <= i; j++) 
//		{
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    for (i = n - 1; i >= 1; i--) {
//        for (j = 1; j <= i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//}

