#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * The program generate ramdompassword 
 * to crack 
 * @password hfhfj
 * @charset gdgygfdb
 * @stand
 */

#define PASSWORD_LENGTH 10

int main() {
  char password[PASSWORD_LENGTH + 1]; /* +1 for null terminator*/
  const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

  srand(time(NULL));

  for (int i = 0; i < PASSWORD_LENGTH; i++) {
    password[i] = charset[rand() % sizeof(charset)];
  }

  password[PASSWORD_LENGTH] = '\0';

  printf("Generated password: %s\n", password);

  return 0;
}
