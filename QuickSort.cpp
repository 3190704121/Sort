//
// Created by zwp18 on 2022/7/27.
//

#include "QuickSort.h"

int Partition(Sqlist &A, int low, int high) {
    ElemType pivot=A.data[low];
    while (low<high) {
        while (low < high && A.data[high] >= pivot)
            high--;
        A.data[low] = A.data[high];
        while (low < high && A.data[low] <= pivot)
            low++;
        A.data[high] = A.data[low];
    }
    A.data[low] = pivot;
    return low;
}

void QuickSort(Sqlist &A,int low,int high){
    if(low<high){
        int pivotpos=Partition(A,low,high);
        QuickSort(A,low,pivotpos-1);
        QuickSort(A,pivotpos+1,high);
    }
}