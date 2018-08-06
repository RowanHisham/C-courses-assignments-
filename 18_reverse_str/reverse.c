#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char * str) {
  //WRITE ME!
  if ((str == NULL) || (*str == '\0'))
    return;
  
  int len = strlen(str);
  char *ptr1 = str;
  char *ptr2 = str + (len-1);
  char temp;
  for(int i=0; i<(len/2); i++)
    {
      temp = *ptr1;
      *ptr1 = *ptr2;
      *ptr2 = temp;
      ptr1++;
      ptr2--;
    }
}

int main(void) {
  char str0[] = "";
  char str1[] = "123";
  char str2[] = "abcd";
  char str3[] = "Captain's log, Stardate 42523.7";
  char str4[] = "Hello, my name is Inigo Montoya.";
  char str5[] = "You can be my wingman anyday!";
  char str6[] = "Executor Selendis! Unleash the full power of your forces! There may be no tomorrow!";
  char * array[] = {str0, str1, str2, str3, str4, str5, str6};
  for (int i = 0; i < 7; i++) {
    reverse(array[i]);
    printf("%s\n", array[i]);
  }
  return EXIT_SUCCESS;
}
