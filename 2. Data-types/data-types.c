#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    // Declare second integer, double, and String variables.
    int a ;
    double b ;
    char c[100] ;
    // Read and save an integer, double, and String to your variables.
    // Print the sum of both integer variables on a new line.
    scanf("%d",&a);
    printf("%d\n",i+a);
    // Print the sum of the double variables on a new line.
    scanf("%lf\n",&b);    
    printf("%.1lf\n",d+b);
    // Concatenate and print the String variables on a new line
    scanf("%[^\n]%*c", c);
    printf("%s%s",s,c);
    // The 's' variable above should be printed first.

    return 0;
}