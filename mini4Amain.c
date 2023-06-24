//Benedict Tan, Arts, benedict.tan@mail.mcgill.ca
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mini4Aphone.c"

int main() {
    int input;
    int number = 0;

    while (1) {
        // Display menu
        printf("Phonebook Menu: (1)Add, (2)Find, (3)List, (4)Quit> ");
        scanf("%d", &input);

        // Take action based on user choice
        switch (input) {
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
                return 0;
            default:
                printf("Please choose a number between 1 and 4.\n");
        }
    }

   return 0;
}

