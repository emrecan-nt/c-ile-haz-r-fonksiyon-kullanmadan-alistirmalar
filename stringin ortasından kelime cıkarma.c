//stringin ortas�ndan kelime c�karma
#include<stdio.h>
int main()
{
	int i,m,n,j=0;
	char str[100],newstr[100];
	printf("bir kelime giriniz:");
	gets(str);
	printf("kelimenin kac�nc� harfinden c�karacaksin:");
	scanf("%d",&m);
	i=m;
	printf("kelimeden kac harf c�karacaksin:");
	scanf("%d",&n);
	while(str[i]!='\0' && n>0)
	{
		newstr[j]=str[i];
		i++;
		j++;
		n--;
	}
	newstr[j]='\n';
	printf("c�kar�lan kelime=");
	puts(newstr);
	
	return 0;
	
}
