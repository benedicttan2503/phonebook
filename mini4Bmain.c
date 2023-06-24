//Benedict Tan, Arts, benedict.tan@mail.mcgill.ca
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mini4Bphone.c"

int main() {
    int size;
    int number = 0;
    int choice;
    // The size of the phonebook
    printf("Size of phonebook: ");
    scanf("%d", &size);
    // Allocating memory 
    phonebook = (struct PHONE_RECORD*) malloc(size * sizeof(struct PHONE_RECORD));
    if (phonebook == NULL) {
        printf("Array to large! Program terminated.\n");
        return 1;}

    while (1) {
        printf("Phonebook Menu: (1)Add, (2)Find, (3)List, (4)Quit> ");
        scanf("%d", &choice);

        // Take action based on user choice
        switch (choice) {
            case 1:
                addRecord(&number);
                saveCSV(number);
                break;
            case 2:
                findRecord(number);
                break;
            case 3:
                listRecords(number);
                break;
            case 4:
                saveCSV(number);
                free(phonebook);
                return 0;
            default:
                printf("Please choose a number between 1 and 4.\n");
        }
    }
}

