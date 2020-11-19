#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
   FILE *fp;
   //char c;
   char str[100];
   
   fp = fopen("sample. txt", "r");
   if (fp == NULL)
   {
      return -1;
   }
   
   //while((c = fgetc(fp)) != EOF ){
   //   printf("%c",c);
   //}
   while(fgets(str, 100, fp) != NULL){
      printf("%s", str);
   }
   
   fclose(fp);

   return 0;
}
