#include<stdio.h>
int main()

{
 char ch;
 printf("Enter any character\n");
 scanf("%c", &ch);

 if(ch=='a' || ch=='e' || ch=='i' || ch=='0' || ch=='u')
 {
   printf("character is vowel");
 }

 else
 {
   printf("character is consonant");

 }
    return 0;

}
