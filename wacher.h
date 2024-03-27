//
// Created by 17851 on 2024/3/26.
//

#ifndef UNTITLED1_WACHER_H
#define UNTITLED1_WACHER_H
bool watcher(int arraySize,int elementSize,char action){
    switch (action) {
        case ACTION_INCREMENT:
            if(arraySize >= elementSize+1){
                return false;
            }else{
                return true;
            }
    }
}

#endif //UNTITLED1_WACHER_H
