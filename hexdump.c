#include <stdio.h>

void hexdump(char *buffer, unsigned int length) {
  int i=0;
  printf("%p   ", buffer);
  for(i=0; i<length; i++){
    if(i%16 == 0 && i!=0){
      printf("\n%p   ", &buffer[i]);
    }
    printf("%02x ", buffer[i]);
  }
  printf("\n");
}

char dummy_buffer[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
//char db[256];
void main() {
  hexdump(dummy_buffer, 32);
}
