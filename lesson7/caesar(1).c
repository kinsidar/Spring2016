#include <stdio.h>
#include <string.h>

int main(){
  char message[50];
  int shifts;
  scanf("%s %d", message, &shifts);

  if (shifts > 25) shifts = shifts % 26;
  
  //Encryption
  int i;
  for (i = 0; i < strlen(message); ++i){
    message[i] = message[i] + shifts;
    if (message[i] > 'z' || message[i] < 'a')
      message[i] = message[i] - 26; 
  }
  printf("Encrypted message: %s\n", message);

  //Decryption
  for (i = 0; message[i] != '\0'; ++i){
    message[i] = message[i] - shifts;
    if (message[i] < 'a')
      message[i] = message[i] + 26;
  }
  printf("Decrpyted message: %s\n", message);
}