//
// Created by zwp18 on 2022/7/27.
//

#include "ShellSort.h"
void ShellSort(Sqlist &A){
    int j;
    for (int dk =A.length/2; dk >=1 ; dk=dk/2) {
        for (int i = dk+1; i <=A.length ; ++i) {
            if(A.data[i]<A.data[i-dk]){
                A.data[0]=A.data[i];
                for (j = i-dk; j >0&&A.data[0]<A.data[j] ; j-=dk)
                    A.data[j+dk]=A.data[j];
                A.data[j+dk]=A.data[0];
            }
        }
    }
}