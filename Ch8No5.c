#include <stdio.h>
#include <string.h>

int main() {
    printf("-- Convert Verb to Past Tense --\n");
    
    char verb[101];
    printf("\nPlease enter a verb: ");
    scanf("%s", verb); 
    int length = strlen(verb); 

    if (verb[length - 1] == 'e') {
        strcat(verb, "d"); 
    } else if (verb[length - 2] == 's' && verb[length - 1] == 's') {
        strcat(verb, "ed"); 
    } else if (verb[length - 2] == 'g' && verb[length - 1] == 'h') {
        strcat(verb, "ed"); 
    } else {
        printf("\nThe verb has an irregular past tense form."); 
        return 0;
    }
    
    printf("Past tense: %s\n", verb); 

    return 0; 
}
