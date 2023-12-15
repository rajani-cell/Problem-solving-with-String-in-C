//C Program to Print the First Letter of Each Word.

#include<stdio.h>
#include<string.h>


int main()
{
   char str[100];
   printf("Enter a sentence :");
   gets(str);

   int len=strlen(str);



   printf("The First Letter of Each Word :");
   for(int i=0; i<len; i++)
   {
    if(i==0 || str[i-1]==' ')
    {
      
      printf("%c",str[i]);

    }
   }





    return 0;
}


