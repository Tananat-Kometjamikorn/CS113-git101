#include <stdio.h>
#include <stdlib.h>
char name[20];                                      // Array[last] will be '\0' 
int main() {

//************ INPUT FUNCTION ************//

    printf("%s",name);
    int i;
    scanf("%s %d",name,&i);                         // Get input by scanf("format",address); { & = address calling }

    printf("Enter name:");
    gets(name);                                     // Get input by gets(variable); { stored in variable }
    fgets(name, 20, stdin);                         // Get input by fgets(variable,buffer,stream); { buffer = number of character will copy to variable } { stream : default is stdin(standard input or keyboard) }
    printf("name = %s\n",name);

    char number[6];
    fgets(number, 5, stdin);
    int i = atoi(number);                           // Convert string to integer by atoi(variable from gets or fgets);
    printf("number = %s, i = %d\n",number,i);

    char a = getchar();                             //-----------------------------------------------------------//
    char b = getchar();                             // Read one character input and return integer of that ASCII //
    getchar();                                      //-----------------------------------------------------------//

    long l = atol(number);                          // Convert string to long integer by atoi(variable from gets or fgets);
    double d = atof(number);                        // Convert string to double by atoi(variable from gets or fgets);

    puts("string only");                            //-----------------------------------------//
    putchar(100);                                   //           Other print functions         //
    putchar('a');                                   //-----------------------------------------//

    //************BOOLEAN************//             // (Don't have bool keyword but can use with integer or character)
    int found = 1;
    float isExist = 0.0;
    char inOnline = '/0';

    //************ IF && ELSE IF && ElSE ************//  
    if (found)
    {
        printf("1 == True");
    }
    else if (!inOnline)
    {
        printf("0 == False");
    }
    else
    {
        printf("\0 == False");
    }
    
    //************LOOP************//
    fgets(number,5,stdin);
    int i = atoi(number);
    int count = 0;
    while (count < i){                              //-----------------------------------------//     
        printf("%d\n",count);                       //              while loop                 //
        count++;                                    //                                         //
    }                                               //-----------------------------------------//

    for (int j = 0; j < i; j++){                    //-----------------------------------------//
        printf("%d\n",j);                           //               for loop                  //
    }                                               //-----------------------------------------//

    //************infinite loop************//
        while (1){
        }
        for (;;){
        }
    // Can use ( continue; or break; ) in loop
}
