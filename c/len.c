#include <stdio.h>
#include <string.h>

int main() {
  char str[100];  // Declare a char array to hold the string
  printf("Enter a string: ");
  scanf("%s", str);  // Read the string from the user
  
  int length = strlen(str);  // Calculate the length of the string using the strlen function
  printf("The length of the string is: %d", length);  // Print the length of the string
  return 0;
}