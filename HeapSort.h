//
// Created by zwp18 on 2022/7/27.
//

#ifndef SORT_HEAPSORT_H
#define SORT_HEAPSORT_H
#include "Sqlist.h"
void HeapSort(Sqlist &A);//堆排序
void BuildMaxHeap(Sqlist &A);//建大根堆
void HeapAdjust(Sqlist &A,int k,int len);//调整堆
#endif //SORT_HEAPSORT_H
