//
// Created by 17851 on 2024/3/26.
//

#ifndef UNTITLED1_COPY_H
#define UNTITLED1_COPY_H
void copy(Student *oldArray, int size, Student *targetArray) {
    for (int index = 0; index < size; index++) {
        targetArray[index] = oldArray[index];
    }
}

#endif //UNTITLED1_COPY_H
