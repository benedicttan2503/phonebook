//Benedict Tan, Arts, benedict.tan@mail.mcgill.ca
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct for the phonebook
struct PHONE_RECORD {
    char name[50];
    char birthdate[12];
    char phone[15];
} *phonebook;

// Adding records to the phonebook
int addRecord(int *number) {
    phonebook = (struct PHONE_RECORD*) realloc(phonebook, (*number+1)*sizeof(struct PHONE_RECORD));	 if (phonebook == NULL) {
        printf("Array to large! Program terminated.\n");
        return 1;}
    // Input by user
    printf("Name: ");
    scanf(" %[^\n]", phonebook[*number].name);
    printf("Birth: ");
    scanf(" %[^\n]", phonebook[*number].birthdate);
    printf("Phone: ");
    scanf(" %[^\n]", phonebook[*number].phone);
    // Update number of records
    (*number)++;
    return 0;}

// Finding a record in the phonebook
int findRecord(int number) {
    // Checks to see if the phonebook exits
    if (number == 0) {
        printf("Phonebook.csv does not exist.\n");
        return 1;}

    // Takes the input of the name the user wants to search for.
    char name[50];
    printf("Find name: ");
    scanf(" %[^\n]", name);

    // It then searches for it in the phonebook.
    int exists = 0;
    for (int i = 0; i < number; i++) {
        if (strcmp(phonebook[i].name, name) == 0) {
            printf("----NAME--------- ------BIRTH------ -----PHONE-------\n");
            printf("%-17s %-17s %-17s\n", phonebook[i].name, phonebook[i].birthdate, phonebook[i].phone);
            exists = 1;
            break; } }

    //If the name does not exist, it prints an error message and returns 1.
    if (exists == 0) {
        printf("Does not exist\n");
        return 1; }

    return 0;
}

// List phonebook records
int listRecords(int number) {
    // Checks to see if phonebook exists
    if (number == 0) {
        printf("Phonebook.csv does not exist.\n");
        return 1; }

    // Display all the records in the phonebook
    printf("----NAME--------- ------BIRTH------ -----PHONE-------\n");
    for (int i = 0; i < number; i++) {
        printf("%-17s %-17s %-17s\n", phonebook[i].name, phonebook[i].birthdate, phonebook[i].phone);
    }

    return 0;}

// Loads the phonebook in the CSV.
int loadCSV(int *number) {
    // Opens the csv file.
    FILE *fp = fopen("phonebook.csv", "r");
    if (fp == NULL) {
        return 1;}
    // Goes through the file looking for the phonebook.
    char line[100];
    int num = 0;
    while (fgets(line, sizeof(line), fp) != NULL) {
        sscanf(line, "%[^,],%[^,],%s", phonebook[num].name, phonebook[num].birthdate, phonebook[num].phone);
        num++;}
    *number = num;
    fclose(fp);
    return 0;}
//Saves the phonebook in the CSV.
int saveCSV(int number) {
// Opens the file
FILE *fp = fopen("phonebook.csv", "w");
if (fp == NULL) {
return 1;}
// Write into the file
for (int i = 0; i < number; i++) {
    fprintf(fp, "%s,%s,%s\n", phonebook[i].name, phonebook[i].birthdate, phonebook[i].phone);
}
fclose(fp);
return 0;}

