#include <stdio.h>

void addTen(int *arr, int n){                           // void addten(int arr[],int n){                 _________________
    for(int i = 0;i < n; i++){                          //      for(int i = 0;i < n; i++){              |                 |
        printf("[%p] = %d\n",arr + i,*(arr+i));         //      printf("[%d] = %d\n",arr + i,arr[i]);   |-----------------|
        *(arr+i) += 10;                                 //      arr[i] += 10;                           |  Same Function  |
    }                                                   //      }                                       |-----------------|
}                                                       // }                                            |_________________|

int addTwenty(int *n)                                   // Get address and pointed by n
{
    *n += 20;                                           // Variable with that pointed += 20
    return 1;
}
int main()
{
    int numbers[] = {1,2,3,4,5};                            // (numbers || &numbers[0]) are the same
    int n = 5;
    addTen(&numbers[0],n);                                  // Send address to function that have pointer
    for(int i = 0;i < n; i++){
        printf("main[%p] = %d\n",numbers+i,*(numbers+i));   // address + i mean address + sizeof(i)
    }
    addTwenty(&n);
    addTwenty(&numbers[4]);
    printf("n = %d\n",n);
    printf("numbers[4]=%d",numbers[4]);
}