#include <stdio.h>

//this program does not allocate any memory
// int main(void)
// {
//   char *s = NULL;
//   printf("s: ");
//   scanf("%s", s);
//   printf("s: %s\n", s);
// }

//this program allocates amount of memory but anything larger than size 4 would create an error
int main(void)
{
  char s[4];
  printf("s: ");
  scanf("%s", s);
  printf("s: %s\n", s);
}
