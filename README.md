# Phonebook Application README

The Phonebook Application is a simple program implemented in C that allows users to manage a phonebook. It provides functionality to add records, find records by name, list all records, and save the phonebook to a CSV file. The application is divided into two main files: `mini4Bmain.c` and `mini4Amain.c`, along with their corresponding `mini4Bphone.c` and `mini4Aphone.c` files.

## Compilation and Execution

To compile and run the Phonebook Application, follow these steps:

1. Compile the program: Run the following command in your terminal or command prompt:

   ```
   gcc mini4Bmain.c mini4Bphone.c -o phonebook
   ```

   ```
   gcc mini4Amain.c mini4Aphone.c -o phonebook
   ```

2. Run the program: Execute the compiled binary:

   ```
   ./phonebook
   ```

3. Use the menu options to interact with the phonebook:
   - **Add** (1): Add a new record to the phonebook. Enter the name, birthdate, and phone number when prompted.
   - **Find** (2): Search for a record by name. Enter the name you want to search for, and the program will display the record if found.
   - **List** (3): Display all records in the phonebook.
   - **Quit** (4): Exit the program.

## File Structure

The Phonebook Application consists of the following files:

- `mini4Bmain.c`: Contains the main function for the program. It provides the user interface and menu options for interacting with the phonebook. This file includes `mini4Bphone.c`.
- `mini4Bphone.c`: Implements the phonebook functionality, including adding records, finding records, listing records, loading records from a CSV file, and saving records to a CSV file.
- `mini4Amain.c`: Contains an alternative version of the main function for the program. It provides the user interface and menu options using a different approach. This file includes `mini4Aphone.c`.
- `mini4Aphone.c`: Implements the phonebook functionality using a fixed-size array to store records. It includes functions for adding records, finding records, listing records, loading records from a CSV file, and saving records to a CSV file. It is maxed out at 10 records.

## Phonebook Functionality

Both versions of the Phonebook Application offer the following functionality:

- **Add Record**: Allows the user to add a new record to the phonebook by providing the name, birthdate, and phone number.
- **Find Record**: Enables the user to search for a record by name in the phonebook. If the record is found, its details are displayed.
- **List Records**: Displays all the records in the phonebook, showing the name, birthdate, and phone number for each entry.
- **Quit**: Exits the program and saves the phonebook to the `phonebook.csv` file.

## CSV File Operations

The Phonebook Application uses a CSV file, `phonebook.csv`, to store the phonebook records. The file operations include:

- `loadCSV` (implemented in `mini4Bphone.c`): Loads the records from the `phonebook.csv` file into the phonebook array when the program starts.
- `saveCSV` (implemented in both `mini4Bphone.c` and `mini4Aphone.c`): Saves the phonebook array to the `phonebook.csv` file when the program quits.

Make sure the `phonebook.csv` file is present in the same directory as the executable program for proper file operations.

## Limitations

- Both versions of the Phonebook Application have limitations in

 terms of the maximum number of records they can store. The `mini4Bphone.c` version supports dynamic memory allocation, allowing for more records, while the `mini4Aphone.c` version uses a fixed-size array, limiting the maximum number of records to 10.
- The program assumes that the `phonebook.csv` file is correctly formatted with each record on a separate line and fields separated by commas.

Feel free to choose the version (`mini4Bmain.c` or `mini4Amain.c`) that suits your needs and compile/run the corresponding files.
