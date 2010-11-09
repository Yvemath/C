#include<stdio.h>

int main(void) {
  int num = 0, count = 0;
  for (count = 0; count < 15; ++count)
    {
      printf("count = %d",&count);
      num += count;
      printf(", num = %d\nHappy?",&num);
    }
  return(0);
}
