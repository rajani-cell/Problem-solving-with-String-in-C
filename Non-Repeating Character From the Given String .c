//C Program to Get a Non-Repeating Character From the Given String.

#include<stdio.h>
#include<string.h>

int main()
{
 char str[100];
 printf("Input string :");
 fgets(str,sizeof(str),stdin);
  

 size_t len=strlen(str);
 if(len>0 || str[len-1]=='\n')
 {
    str[len-1]='\0';
    len--;
   
 }
   
   
   
   printf("\nNon-Repeating Character From the Given String =:");
   
   for(int i=0;i<len;i++)
   {
       int non_repeted_element=1;
       for(int j=i+1;j<len;j++)
       {
         if(str[i]==str[j])
         {
           non_repeted_element =0;
           break;

         }

       }

   if(non_repeted_element)
   {
    printf("%c ",str[i]);
   }
   }


   

   return 0;
}
