//
// Created by 17851 on 2024/3/26.
//

#ifndef UNTITLED1_STRUCT_VERIABLE_H
#define UNTITLED1_STRUCT_VERIABLE_H
#define DEFAULT_AGE 0
#define DEFAULT_ADDRESS NULL
#define DEFAULT_EMAIL NULL
typedef struct studentScore{
    float chinese;
    float math;
    float english;
    float sport;
}studentScore;

typedef struct  Student{
    char *id;
    char *className;
    int age;
    char *uId;
    char *address;
    char *email;
    studentScore *score;
}Student;
#endif //UNTITLED1_STRUCT_VERIABLE_H
