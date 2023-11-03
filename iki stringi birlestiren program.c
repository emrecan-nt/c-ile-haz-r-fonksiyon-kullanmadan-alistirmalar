// iki stringi birleştiren program
#include<stdio.h>
int main()
{
	char deststr[100],sourcestr[100];
	int i=0,j=0;
	printf("source string giriniz:");
	gets(sourcestr);
	printf("dest string giriniz:");
	gets(deststr);
	while(deststr[i]!='\0')
	
		i++;
	
	while(sourcestr[j]!='\0')
	{
		deststr[i]=sourcestr[j];
		i++;
		j++;
	}
	deststr[i]='\0';
	printf("stringlerin birlesimi:");
	puts(deststr);

	return 0;
}
