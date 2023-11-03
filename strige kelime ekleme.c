#include<stdio.h>
int main()
{
char str[100],newstr[100],mainstr[100];
int i=0,j=0;
int pos;
printf("bir kelime giriniz:");
gets(str);
printf("pozisyon giriniz");
scanf("%d",&pos);
while(i<pos)
{
	newstr[j]=str[i];
	i++;
	j++;
}

printf("ekleyeceginiz kelimeyi giriniz:");
scanf("%s",&mainstr);
i=0;
while(mainstr[i]!='\0')
{
	newstr[j]=mainstr[i];
	i++;
	j++;
	
}
i=pos;
while(str[i]!='\0')
{
	newstr[j]=str[i];
	i++;
	j++;
}
newstr[j]='\0';
printf("yeni kelime=%s",newstr);



	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
