#include <stdio.h>

int main(){}
void reverse(char s[])
  {
      int tmp;
      static int i = 0;
  
      if (*s == '\0')
      {
          i--;
          return;
      }
  
      else 
      {
          i++;
          reverse(s + 1);
      }
      if (i > 0)
      {
          tmp = *s;
          *s = *(s - i);
          *(s - i) = tmp;
          i -= 2;
      }
  }