
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
   char Name[50];
   scanf("%s", Name);
   // Extract the first word
   char *word = strtok(Name, "_");
   // Run a loop through the string to extract all other words
   while(word!= NULL ) {
      printf( "\"%s\",",word ); //printing each word
      word = strtok(NULL, "_");
   }
   return 0;
}