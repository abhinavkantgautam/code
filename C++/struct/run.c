#include<stdio.h>
#include<stdio.h>
int main()
{
  FILE * run;
  run=fopen("hel.docx","w");
  fprintf(run, "hello\n");
  fclose(run);

  return 0;

}
