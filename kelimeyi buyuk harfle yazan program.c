// kullan�c�dan al�nan kelimenin t�m harflerini b�y�k harf yapan program.
#include<stdio.h>
int main()
{
	
	char str[100],upperstr[100];
	int i=0;
	printf("Bir kelime giriniz:");
	gets(str);
	
	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z')
		upperstr[i]=str[i]-32;
		else
		upperstr[i]=str[i];
		i++;	
	}
	 upperstr[i]='\0';
	 printf("Kelimenin buyuk harflerle yazilisi:");
	 puts(upperstr);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
