#include <stdio.h>
int main() 
{
    short z = 1;                            // Store an integer                                         | Size = 2 byte | %hd
    int a = 100;                            // Store an integer                                         | Size = 4 byte | %d
    long b = 100;                           // Store an integer                                         | Size = 4 byte | %ld
    unsigned int c = 4000000;               // Store an unsigned integer                                | Size = 4 byte | %u
    long long int d = 999999;               // Store an integer (64 bit)                                | Size = 8 byte | %lld
    float e = 0.1;                          // Store a number with floating point                       | Size = 4 byte | %f
    double f = 45.22;                       // Store a number with floating point (Double precision)    | Size = 8 byte | %lf
    char p = 'a';                           // Store a character                                        | Size = 1 byte | %c
    char name[] = "Zen";                    // Store an array of character (String)                     | Size = ? byte | %s
    
    double ans1 = 1/2;                      // int/int = int (Doesn't calculate remainder)                  
    double ans2 = 1.0/2;                    // (float/int || int/float || float/float) = float 
    printf("Hello World\n");
    printf("%hd\n",z);
    printf("%d %ld\n",a,b);
    printf("%llu\n",c);
    printf("%lld\n",d);
    printf("%.2lf\n",e);
    printf("%lf\n",f);
    printf("%c\n",p);
    printf("%s\n",name);
    printf("%lf\n" ,ans1);
    printf("%lf\n",ans2);
}