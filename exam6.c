#include<stdio.h>
#include<string.h>
main()
{
    char s1[100],s2[100];  
   
    printf("Enter the string : ");
    gets(s1);
    
    strcpy(s2,s1);
    strrev(s2);
    
    if(!strcmp(s1,s2))
    {
	
 	    printf("String Is Palindrome");
 	}
    else
    {
        printf("String Is Not Palindrome");
    }

}
