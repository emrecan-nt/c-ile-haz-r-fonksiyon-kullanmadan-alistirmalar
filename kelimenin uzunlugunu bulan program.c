//kullanýcýdan alýnan kelimenin uzunluðunu ekrana yazan program.
#include<stdio.h>
int main()
{
	char str[100];
	int i=0,lenght;
	printf("Bir kelime giriniz:");
	gets(str);
	
	while(str[i] !='\0')
	{
		i++;
		lenght=i;
		
	}
	
	printf("Girilen kelimenin uzunlugu=%d",lenght);
	
	
	return 0;
}
