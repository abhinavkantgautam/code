#include<stdio.h>

int main()
{
  FILE *f1, *f2;
  char ch;

  f1 = fopen("d:\\ak.txt", "r");
  f2 = fopen("d:\\kk.txt", "w");

  if (f1 == NULL || f2 == NULL) {
    printf("File not opened!");
    exit(1);
  }

  while((ch = fgetc(f1)) != EOF)
  {
      fputc(ch,f2);
  }

   printf("copied");
   fclose(f1);
   fclose(f2);
   return 0;
}
