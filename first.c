#include <stdio.h>  //header file
//main function
int main(){
   int x;
   scanf("%d", &x);
   if(x % 2 == 0){
    printf("even");
   }
   else if(x % 2 ==1){
    printf("odd");
   }
   else{
    printf("emty");
   }

    return 0;
}
