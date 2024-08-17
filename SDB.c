// SDB.c
#include "SDB.h"
#include <stdio.h>

static student database[MAX_STUDENTS];
static uint8 used_size = 0;

boolean SDB_IsFull() {
    if (used_size == MAX_STUDENTS)
        return TRUE;
    else
        return FALSE;
}

uint8 SDB_GetUsedSize() {
    return used_size;
}

boolean SDB_AddEntry() {
    if (SDB_IsFull())
        return FALSE;

    student new_student;

    printf("Enter Student ID: ");
    scanf("%d", &new_student.Student_ID);
    
    if (SDB_IsIdExist(new_student.Student_ID))
        return FALSE;

    printf("Enter Student Year: ");
    scanf("%d", &new_student.Student_year);
    printf("Enter Course 1 ID: ");
    scanf("%d", &new_student.Course1_ID);
    printf("Enter Course 1 Grade: ");
    scanf("%d", &new_student.Course1_grade);
    printf("Enter Course 2 ID: ");
    scanf("%d", &new_student.Course2_ID);
    printf("Enter Course 2 Grade: ");
    scanf("%d", &new_student.Course2_grade);
    printf("Enter Course 3 ID: ");
    scanf("%d", &new_student.Course3_ID);
    printf("Enter Course 3 Grade: ");
    scanf("%d", &new_student.Course3_grade);

    database[used_size++] = new_student;

    return TRUE;
}

boolean SDB_DeleteEntry(uint32 id) {
    for (uint8 i = 0; i < used_size; i++) {
        if (database[i].Student_ID == id) {
            database[i] = database[--used_size];
            return TRUE;
        }
    }
    return FALSE;
}

boolean SDB_ReadEntry(uint32 id) {
    for (uint8 i = 0; i < used_size; i++) {
        if (database[i].Student_ID == id) {
            printf("Student ID: %d\n", database[i].Student_ID);
            printf("Student Year: %d\n", database[i].Student_year);
            printf("Course 1 ID: %d, Grade: %d\n", database[i].Course1_ID, database[i].Course1_grade);
            printf("Course 2 ID: %d, Grade: %d\n", database[i].Course2_ID, database[i].Course2_grade);
            printf("Course 3 ID: %d, Grade: %d\n", database[i].Course3_ID, database[i].Course3_grade);
            return TRUE;
        }
    }
    return FALSE;
}

void SDB_GetList(uint8 *count, uint32 *list) {
    *count = used_size;
    for (uint8 i = 0; i < used_size; i++) {
        list[i] = database[i].Student_ID;
    }
}

boolean SDB_IsIdExist(uint32 id) {
    for (uint8 i = 0; i < used_size; i++) {
        if (database[i].Student_ID == id)
            return TRUE;
    }
    return FALSE;
}
