// SDB.h
#ifndef SDB_H
#define SDB_H

#include "STD.h"

#define MAX_STUDENTS 10

typedef struct SimpleDb
{
    uint32 Student_ID;
    uint32 Student_year;
    uint32 Course1_ID;
    uint32 Course1_grade;
    uint32 Course2_ID;
    uint32 Course2_grade;
    uint32 Course3_ID;
    uint32 Course3_grade;
} student;

boolean SDB_IsFull();
uint8 SDB_GetUsedSize();
boolean SDB_AddEntry();
boolean SDB_DeleteEntry(uint32 id);
boolean SDB_ReadEntry(uint32 id);
void SDB_GetList(uint8 *count, uint32 *list);
boolean SDB_IsIdExist(uint32 id);

#endif
