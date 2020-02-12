#include <stdio.h>
int main()
{
    //**********CALLING ADDRESS**********//
     int x = 100;
     int q = 0144;                                    // เลข 0 นำหน้า == เลขฐาน 8
     int w = 0x64;                                    // เลข 0x นำหน้า == เลขฐาน 16
     printf("x = %d\n",x);
     printf("refernce x = %lu\n",&x);                 // print address(reference)
     printf("refernce x = %p\n",&x);                  // %o = ฐาน8 , %p = เอาไว้ปริ้นaddressเป็นฐาน16

    //**********ARRAY**********//
    // int number[] = {2,3,4,5,6,7};                    //size = 6
    // int number[100];                                 //size = 100
    //int number[100] = {2,3,4,5,6,7};                  //size = 100
    // number[1000] = 200;                              // สามารถแทรกarrayที่ไม่ได้สร้าง และแก้ไขได้ ระวังไปโดนหน่วยความจำตัวอื่น
    // printf("index 1 = %d\n",number[1000]);
    // printf("refernce number[1] = %p\n",&number[1]);
    // printf("refernce number[0] = %p\n",&number[0]);
    // printf("refernce number = %p\n",number + 1);     // address + 1 === address += sizeof(address[0])
    // int number[] = {3,4,5,6,7};

    //**********POINTER**********//
    int *ptr = &x;
    int *arrPtr;
    int number[] = {2,3,4,5,6,7}; 
    // arrPtr = number;                                     // ประกาศไว้เวลาเรียกใช้ไม่ต้องมี '*'
    // arrPtr += 3;                                         // |(Ptr)| | |(Ptr+3)| |
    // *arrPtr = *arrPtr + 3;                               // ใช้ * ดึงค่าของจาก address ที่พอยต์เตอร์ชี้ไปอยู่ออกมาแก้ไขได้
    // printf("arrPtr = %p, * arrPtr = %d\n",arrPtr,*arrPtr);
    // printf("number[2] = %d\n",number[2]);

    // for(int *ptr = number; ptr <= &number[4]; ptr++){
    //     printf("[%p] = %d\n",ptr , *ptr);
    // }
    // int *ptr2 = number;                                  // array === &array[0]
    // for(int i = 0; i < 6; i++){
    //     printf("[%p] = %d\n",ptr2 + i ,*(ptr2 + i));     // ptr2[i] === *(ptr2 + i)
    // }

    //**********GET INPUT BY GETCHAR**********//
    char input[100];
    int count = 0;
    char c;
    // while((c = getchar()) != '\n'){
    //     input[count] = c;
    //     ++count;
    // }
    // input[count] = '\0';
    // for(char *cPtr = input ;*cPtr != '\0' ; cPtr++){
    //     printf("%c\n",*cPtr);
    // }

    //**********GET INPUT BY SCANF**********//
    int i;
    char s[100];
    scanf("%d-%c-%s",&i,&c,s); // รับค่าและไปเก็บที่addressนั้น โดยจะต้องเขียนตามรูปแบบ"
    printf("%d %c %s",i,c,s); 
}
// ห้ามทำ
// &x = 200;        //เปลี่ยนaddressไปที่200
// int *ptr = x;    //เปลี่ยนตัวชี้ไปที่ x