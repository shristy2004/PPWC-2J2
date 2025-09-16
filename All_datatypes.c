#include <stdio.h>
int main(){
//INTEGER CONSTANTS//
short s=7;
int a=14;
printf("Integers: %d\n",s);
//FLOATING POINT CONSTANTS//
float f=20.55;
double d=100.01;
printf("Float:%.2f\n",f);
printf("Double: %.3f\n",d);
//Character datatypes//
char c='S';
printf("Character: %c\n",c);
//ARRAYS //
int arr[5] = {10, 20, 30, 40, 50};
printf("Array elements:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);   // Print each element
    }

    return 0;
}






}
