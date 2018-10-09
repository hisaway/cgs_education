#include <stdio.h>

void add( int num){
 num += 1;
}

int main(void){
  int num = 6;
  
  add(num);
  
  printf("%d\n", num);
  printf("%p", &num);
}
