//
// Created by zwp18 on 2022/7/27.
//

#include "BubbleSort.h"



void BubbleSort(Sqlist &A){
    bool flag;
    for (int i = 0; i < A.length-1; i++) {
        flag= false;
        for (int j = A.length-1; j>i ; j--)
            if(A.data[j-1]>A.data[j]){
                swap(A.data[j-1],A.data[j]);
                flag= true;
            }
        if(flag== false)
            return;
    }
}