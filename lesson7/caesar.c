#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 50
#define NUM_LETTERS 26

int mod(int left, int right) {
  int rmdr = left % right;
  return (rmdr < 0) ? rmdr + right : rmdr;
}

int main(){
  int shifts;
  char message[MAX_LEN];

  printf("Please input the message and the number of shifts:\n");
  scanf("%s%d", message, &shifts);

  //Encryption
  for (int i = 0; i < strlen(message); ++i){
    message[i] = mod((message[i] - 'a' + shifts), NUM_LETTERS) + 'a';
  }
  printf("Encrypted message: %s\n", message);

  //Decryption
  for (int i = 0; i < strlen(message); ++i){
    message[i] = mod((message[i] - 'a' - shifts), NUM_LETTERS) + 'a';
  }
  printf("Decrypted message: %s\n", message);
  printf("%d\n", -51%26);
  return 0;
}
