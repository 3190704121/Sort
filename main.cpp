
#include "stdio.h"
#include "InsertSort.h"
#include "Sqlist.h"
#include "ShellSort.h"
#include "SellectSort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "HeapSort.h"
#include "MergeSort.h"
#include "RadixSort.h"

int main(){
    Sqlist L;
    random(L);
//    InsertSort(L);//测试直接插入排序
//    InsertSort_2(L);//测试折半插入排序
//    ShellSort(L);//测试希尔排序
//    BubbleSort(L);//测试冒泡排序
//    QuickSort(L,0,L.length);//测试快速排序
//    SelectSort(L);//测试简单选择排序
//    HeapSort(L);//测试堆排序
//    MergeSort(L,1,L.length);//测试归并排序
    print(L);
    return 0;
}


