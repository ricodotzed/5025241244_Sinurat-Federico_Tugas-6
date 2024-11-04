#include <stdio.h>
#include <string.h>
#include <math.h>

char COLOR_CODES[10][7] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "gray", "white"};

int search(char list[][7], int size, char target[]) {
    for (int i = 0; i < size; i++) {
        if (strcmp(list[i], target) == 0) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    char band1[10], band2[10], band3[10]; 
    char choice; 

    do {
        printf("Enter the colors of the resistor's three bands, starting from\nthe band closest to the end. Use lowercase letters only, NO CAPS.\n");

        printf("Band 1 => ");
        scanf("%s", band1);
        printf("Band 2 => ");
        scanf("%s", band2);
        printf("Band 3 => ");
        scanf("%s", band3);

        int digit1 = search(COLOR_CODES, 10, band1);
        int digit2 = search(COLOR_CODES, 10, band2);
        int multiplierIndex = search(COLOR_CODES, 10, band3);

        if (digit1 == -1) {
            printf("Invalid color: %s\n", band1);
        } else if (digit2 == -1) {
            printf("Invalid color: %s\n", band2);
        } else if (multiplierIndex == -1) {
            printf("Invalid color: %s\n", band3);
        } else {
            
            int resistance_value = (digit1 * 10 + digit2) * pow(10, multiplierIndex);

            if (resistance_value >= 1000) {
                printf("Resistance value: %d kilo-ohms\n", resistance_value / 1000);
            } else {
                printf("Resistance value: %d ohms\n", resistance_value);
            }
        }

        // Ask the user if they want to decode another resistor
        printf("Do you want to decode another resistor?\n");
        printf("=> ");
        scanf(" %c", &choice); 

    } while (choice == 'y' || choice == 'Y'); 

    return 0; 
}
