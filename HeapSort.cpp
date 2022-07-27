//
// Created by zwp18 on 2022/7/27.
//

#include "HeapSort.h"
//堆排序
void HeapSort(Sqlist &A){
    BuildMaxHeap(A);
    for (int i = A.length; i >1; i--) {
        swap(A.data[1],A.data[i]);
        HeapAdjust(A,1,i-1);
    }
}
void BuildMaxHeap(Sqlist &A){
    for (int i = A.length/2; i >0; i--)
        HeapAdjust(A,i,A.length);
}
void HeapAdjust(Sqlist &A,int k,int len){
    A.data[0]=A.data[k];
    for (int i = 2*k; i <=len; i*=2) {
        if(i<len && A.data[i]<A.data[i+1])
            i++;
        if(A.data[0]>A.data[i])
            break;
        else{
            A.data[k]=A.data[i];
            k=i;
        }
    }
    A.data[k]=A.data[0];
}

