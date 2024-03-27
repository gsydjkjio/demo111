//
// Created by 17851 on 2024/3/26.
//

#ifndef UNTITLED1_UTIL_FUNCTIONS_H
#define UNTITLED1_UTIL_FUNCTIONS_H
Student* reverseIncrementArraySize(Student *dirtArray,int size){
    return (Student *)malloc(sizeof (Student)*(size * INCREMENT_ARRAY_SIZE_COEFFICIENT));
}

#endif //UNTITLED1_UTIL_FUNCTIONS_H
