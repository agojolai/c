#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

main()// a program about strings; telling if a word is a palindrome or not
{ 
	int x;
	char word2[20], word1[20];
	char words[80];
	
	
	printf("Enter the word or phrase\n");
	gets(word1);
	strcpy(word2, word1);
	strrev(word2);
	if(strcmp(word1,word2)== 0)
		puts("palindrome");
	else
		puts("not a palindrome");
  
} 
