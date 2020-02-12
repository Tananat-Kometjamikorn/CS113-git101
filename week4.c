#include <stdio.h>

      
int main() {
    //*********LOGICAL OPERATOR*********//\
    // ____________________
    // Relational Operators
    // --------------------
    // >       |     Greater than 
    // >=      |     Equal or Greater than 
    // <       |     Less than
    // <=      |     Equal or less than
    // ==      |     Equal
    // !=      |     Not equal
    // __________________
    // Logical Operators
    // ------------------
    // &&      |     And
    // ||      |     Or
    // !       |     Not
    // __________________

    //**********SWITCH CASE*************//
//     switch (expression) {       //|                     
//       case const-expr:          //|  const-expr = ใส่ค่าคงที่ซึ่งเปลี่ยนแปลงไม่ได้             
//          statements             //|  statement  = ให้ใส่สิ่งที่ต้องการจะทำ                   
//          break;                 //|  ถ้าไม่break switch case จะทำงานต่อไปเรื่อยๆ คล้ายลูป    
//       case const-expr:          //|                                                   
//          statements             //|                                                   
//          break;                 //|                                                   
//       default:                  //|  default คือเมือไม่ตรงกับเงื่อนไขข้างบนเลยจะทำ statement ในนี้
//          statements             //|
//    }

    int n_digits = 0;
    int n_non_digits = 0;
    int ch;
    while ((ch=getchar()) != EOF) {         // EOF == End Of File (press enter key)
       switch (ch) {
          case '0': case '1': case '2': case '3': 
          case '4': case '5': case '6': case '7':
          case '8': case '9':
             n_digits++;
             break;
          default: 
             n_non_digits++;
             break;
       }   
    }
    printf("Numberic: %d, Non-Numberic: %d\n", n_digits, n_non_digits);

    //*********DO WHILE LOOP*********//     ต่างจาก while loop ตรงที่จะทำก่อน 1 ครั้ง
    // do {                         //      แล้วค่อยมาเช็คว่า เงื่อนไขเป็นเท็จหรือไม่
    //    statement                 //
    // } while (expression);        //

    //*********RECURSION*********// ฟังก์ชั่นที่เรียกใช้ตนเองได้
    long factorial(long n){
    if (n == 0) return 1;
    else return n * factorial(n-1);
    }
    long n;
    n = 5;
    printf("%ld! = %ld\n", n, factorial(n));
    
    return 0;
}
