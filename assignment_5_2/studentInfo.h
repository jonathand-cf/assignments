#ifndef STUDENTINFO_H
#define STUDENTINFO_H

#define ID_LENGTH 100
#define NAME_SIZE 50

typedef struct
{
    int studentID;   // Use char array for ID to store it as a string
    char studentName[NAME_SIZE]; // Use char array for the name
    int studentAge;              // Use int for age
} studentInfo_t;

#endif //STUDENTINFO_H