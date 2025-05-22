# Student Database (SDB) Application

## Overview
This is a simple Student Database (SDB) management application implemented in C. The application allows users to manage student records through a command-line interface by adding, reading, deleting, and querying student data.

## Features
- Add a new student entry.
- Get the current number of student records in the database.
- Read student data by Student ID.
- Retrieve a list of all stored Student IDs.
- Check if a particular Student ID exists.
- Delete a student record by Student ID.
- Check if the database is full.
- Exit the application gracefully.

## Project Structure
- `SDB.h` and related source files: Contains the database API for student management.
- `SDBAPP.c`: User interface for interacting with the student database via the console.

## Usage

1. Compile the project using a compatible C compiler.
2. Run the executable.
3. Follow the on-screen menu options:

```
1. To add entry, enter 1
2. To get used size in database, enter 2
3. To read student data, enter 3
4. To get the list of all student IDs, enter 4
5. To check if ID exists, enter 5
6. To delete student data, enter 6
7. To check if database is full, enter 7
8. To exit, enter 0
Enter your choice: 
```

4. Input the required data when prompted.

## Example

- Adding a student:
```
Enter your choice: 1
Student added successfully.
```

- Reading a student:
```
Enter your choice: 3
Enter Student ID to read: 12345
Student data: [details here]
```

- Exiting:
```
Enter your choice: 0
Exiting...
```

## Requirements
- Standard C compiler (e.g., GCC)
- Standard input/output libraries.

## Author
Youssef Hany
Embedded C Developer

---

Feel free to customize and expand the functionality as needed!
