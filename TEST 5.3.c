#include<stdio.h>
#include<string.h>

void count_vowel_consonant(char *str, int *vowels, int *consonants);

int main()
{
    char str[100];
    int vowels = 0, consonants = 0;
   
    printf("Input a string: ");
    scanf("%s", str);
   
    count_vowel_consonant(str, &vowels, &consonants);
   
    printf("Number of vowels : %d\n", vowels);
    printf("Number of consonants : %d\n", consonants);
   
    return 0;
}

void count_vowel_consonant(char *str, int *vowels, int *consonants)
{
    while(*str != '\0')
    {
        if((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
        {
            if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
               *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
            {
                (*vowels)++;
            }
            else
            {
                (*consonants)++;
            }
        }
        str++;
    }
}

//output:
//test cases:

Input a string: HYPOTHECATION
Number of vowels : 5
Number of consonants : 8


Input a string: MATRICULATION
Number of vowels : 6
Number of consonants : 7



Input a string: MANIPULATION
Number of vowels : 6
Number of consonants : 6


Input a string: SEDIMENTATION
Number of vowels : 6
Number of consonants : 7


Input a string: EXPERIMENTATION
Number of vowels : 7
Number of consonants : 8
