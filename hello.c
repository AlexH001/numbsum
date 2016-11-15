#include <stdio.h>

int main (void)
{


    int n1, n2, SumOfTwoNums;
    
    printf("Enter two integers: ");

    // two integers entered by user are stored using scanf
    scanf("%d %d", &n1, &n2);

    // store SumOfTwoNums in variable SumOfTwoNums
    SumOfTwoNums = n1 + n2;

    // display output     
    printf("%d + %d = %d", n1, n2, SumOfTwoNums);
	
	// check if the SumOfTwoNums is even or odd, 
    // and print result to screen
    if(SumOfTwoNums % 2 == 0) printf("\n%d is even\n", SumOfTwoNums);
    else printf("\n%d is odd\n", SumOfTwoNums);

    return 0;
}
