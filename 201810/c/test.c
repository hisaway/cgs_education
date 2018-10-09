#include<stdio.h>

void func(int* array, int size){
  // arrayの要素を2乗する
} 

int main(){
  int array[4] = {1, 2, 3, 4}; // できれば動的配列に． 
  func(array, 4);
  
  int i = 0;
  for(i = 0; i < 4; i++){
    printf("%d ", array[i]);
  }
}
