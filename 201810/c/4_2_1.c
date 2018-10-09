#include <stdio.h>
#include <stdlib.h>

void do_array(int* array){
  // process...
}

int main(){
  int num[3] = {1, 1, 2};
  
  do_array(num);
  printf("%p\n", num);
  printf("%lu", sizeof(num)/ sizeof(int));
}
