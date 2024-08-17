// SDBAPP.c
#include "SDB.h"
#include <stdio.h>

void SDB_action(uint8 choice) {
    uint32 id;
    uint8 count;
    uint32 list[MAX_STUDENTS];

    switch (choice) {
        case 1:
            if (SDB_AddEntry())
                printf("Student added successfully.\n");
            else
                printf("Failed to add student.\n");
            break;
        case 2:
            printf("Used size: %d\n", SDB_GetUsedSize());
            break;
        case 3:
            printf("Enter Student ID to read: ");
            scanf("%d", &id);
            if (!SDB_ReadEntry(id))
                printf("Student not found.\n");
            break;
        case 4:
            SDB_GetList(&count, list);
            printf("Student IDs:\n");
            for (uint8 i = 0; i < count; i++)
                printf("%d ", list[i]);
            printf("\n");
            break;
        case 5:
            printf("Enter Student ID to check: ");
            scanf("%d", &id);
            if (SDB_IsIdExist(id))
                printf("Student ID exists.\n");
            else
                printf("Student ID does not exist.\n");
            break;
        case 6:
            printf("Enter Student ID to delete: ");
            scanf("%d", &id);
            if (SDB_DeleteEntry(id))
                printf("Student deleted successfully.\n");
            else
                printf("Student ID does not exist.\n");
            break;
        case 7:
            if (SDB_IsFull())
                printf("Database is full.\n");
            else
                printf("Database is not full.\n");
            
            break;
        case 0:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }
}

void SDB_APP() {
    uint8 choice;
    do {
        printf("\n1. To add entry, enter 1\n");
        printf("2. To get used size in database, enter 2\n");
        printf("3. To read student data, enter 3\n");
        printf("4. To get the list of all student IDs, enter 4\n");
        printf("5. To check if ID exists, enter 5\n");
        printf("6. To delete student data, enter 6\n");
        printf("7. To check if database is full, enter 7\n");
        printf("8. To exit, enter 0\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");

        SDB_action(choice);
    } while (choice != 0);
}
