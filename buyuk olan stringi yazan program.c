#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int len1, len2;
    int i = 0, same = 1; 

    printf("1. kelimeyi giriniz: ");
    gets(str1);
    printf("2. kelimeyi giriniz: ");
    gets(str2);

    len1 = strlen(str1), len2 = strlen(str2);

    if (len1 != len2)
        printf("Kelimelerin uzunluðu farklý, karþýlaþtýrma yapýlamaz.");
    else {
        while (i < len1) {
            if (str1[i] != str2[i]) { 
                same = 0;
                if (str1[i] > str2[i]) {
                    printf("1. kelime 2. kelimeden daha büyüktür.\n");
                    break; 
                } else if (str1[i] < str2[i]) {
                    printf("2. kelime 1. kelimeden daha büyüktür.\n");
                    break; 
                }
            }
            i++;
        }
    }

    if (same == 1 && i == len1) {
        printf("Kelimeler ayný girilmiþtir.\n");
    }

    return 0;
}

