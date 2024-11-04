#include <stdio.h>
#include <string.h>

int main() {
    printf("-- Consonants and Vowels Check --\n");
    
    char word[101];
    printf("Enter the sentence: ");
    fgets(word, sizeof(word), stdin);

    int consonant = 0, vowel = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        if (strchr("aiueoAIUEO", word[i])) {
            vowel++;
        } else if ((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z')) {
            consonant++;
        }
    }
    
    printf("\nConsonants: %d\nVowels: %d\n", consonant, vowel);

    return 0;
}
