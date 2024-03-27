#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "stdbool.h"
#include "static_veriable.h"
#include "struct_veriable.h"
#include "util_functions.h"
#include "operation_data.h"
#include "static_user_action.h"
#include "copy.h"
#include "wacher.h"

Student *initState();
void appaned(Student payload);

int arraySize = INCREMENT_ARRAY_SIZE_COEFFICIENT;
int elementSize = 0;
Student *studentList
void watchEffect(){
    int userAction=-1;
    printf("****欢迎使用学生管理系统****");
    printf("\n");
    while(true){
        printf("****请输入您的操作****\n");
        printf("输入1新增学生信息\t输入exit表示退出程序");
        scanf("%d",&userAction);
        switch(userAction){
            case ALLOW_CREATE_STUDENT:
                char *userId, *className, *uid, *address, *email;
                int age,userChoice;
                while(true){
                    printf("请输入学生的学号\n");
                    scanf("%s",userId);
                    if(!userId){
                        printf("学生的学号不能为空，请重新输入\n");
                        continue;
                    }
                    break;
                }
                while(true){
                    printf("请输入学生的班级\n");
                    scanf("%s",userId);
                    if(!userId){
                        printf("学生的班级不能为空，请重新输入\n");
                        continue;
                    }
                    break;
                }
                while(true){
                    printf("请输入学生的学号\n");
                    scanf("%s",userId);
                    if(!userId){
                        printf("学生的学号不能为空，请重新输入\n");
                        continue;
                    }
                    break;
                }
                printf("请问您需要输入学生的全部信息吗？1表示需要，0表示不需要：");
                scanf("%d",&userChoice);
                if(userChoice){
                    while(true){
                        printf("请输入学生的地址: \n");
                        scanf("%s",userId);
                        if(!userId){
                            printf("学生的学号不能为空，请重新输入\n");
                            continue;
                        }
                        break;
                    }
                }
        }
    }
}
int main() {
    studentList = initState();
    watchEffect();
    printf("同城交友");
}

Student *initState() {
   return (Student *) malloc(sizeof(Student) * INCREMENT_ARRAY_SIZE_COEFFICIENT);
}

void appaned(Student payload) {
    if (watcher(arraySize, elementSize, ACTION_INCREMENT)) {
        Student *newStudentList = reverseIncrementArraySize(studentList, arraySize);
        copy(studentList, elementSize, newStudentList);
        appendData(newStudentList, elementSize, payload);
        studentList = newStudentList;
        arraySize += INCREMENT_ARRAY_SIZE_COEFFICIENT;
    } else {
        appendData(studentList, elementSize, payload);
    }
    elementSize++;
}