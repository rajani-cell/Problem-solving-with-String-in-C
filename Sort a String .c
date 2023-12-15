//C Program to Sort a String.

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

 for(int i=0;i<len-1;i++)
 {
    for(int j=0;j<len-1-i;j++)
    {
       if(str[j]>str[j+1])
       {
         char temp=str[j];
         str[j]=str[j+1];
         str[j+1]=temp;


       }


    }

 }


printf("\nSorted string = %s",str);
   

 
   return 0;
}
