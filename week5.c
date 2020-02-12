#include <stdio.h>

//**********FUNCTIONS***********//

int add_ten(int x)                                  // Function definition 
{ 
    x = x + 10;
    return x;
}

int x = 2000;                                       // Global variable

int addTwenty(void);                                // Function declaration

int main()
{
    int x = 90;                                     // Local variable
    int y = add_ten(x);                             // Function call
    printf("x in main = %d\n",x);
    printf("add_ten in main = %d\n",y);
    printf("addTwenty in main = %d\n",addTwenty());
}
int addTwenty()                                     // Function definition from declaration in line 10
{
    printf("x in addTwenty = %d\n",x);              // Function will use local variable first if not found will use global variable
    x += 20;                                        // x = 2000 + 20 from global variable       
    return x;
}
//int x = 3000;                                     // Function will read from last line of definition so this line won't read if declare variable here

// ctrl+d = selection words