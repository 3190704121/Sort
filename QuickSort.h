//
// Created by zwp18 on 2022/7/27.
//

#ifndef SORT_QUICKSORT_H
#define SORT_QUICKSORT_H

#include "Sqlist.h"

ElemType Partition(Sqlist &A,int low,int high);//分区函数
void QuickSort(Sqlist &A,int low,int high);//快速排序

#endif //SORT_QUICKSORT_H