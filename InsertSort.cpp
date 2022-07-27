//
// Created by zwp18 on 2022/7/27.
// 插入排序
//

#include "InsertSort.h"


void InsertSort(Sqlist &A){
    int i,j;
    for (i = 2; i < A.length; i++) {
        if(A.data[i]<A.data[i-1]){
            A.data[0]=A.data[i];
            for (j = i-1; A.data[0] <A.data[j] ; --j)
                A.data[j+1]=A.data[j];
            A.data[j+1]=A.data[0];
        }
    }
}

void InsertSort_2(Sqlist &A){
    int i,j,low,high,mid;
    for (i = 2; i<=A.length ; i++) {
        A.data[0]=A.data[i];
        low=1;high=i-1;
        while (low<=high){
            mid=(low+high)/2;
            if(A.data[mid]>A.data[0])
                high=mid-1;
            else
                low=mid+1;
        }
        for (j = i-1; j>=high+1;--j)
            A.data[j+1]=A.data[j];
        A.data[j+1]=A.data[0];
    }
}
