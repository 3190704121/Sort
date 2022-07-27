//
// Created by zwp18 on 2022/7/27.
//

#include <cstdlib>
#include "MergeSort.h"
//归并排序
void MergeSort(Sqlist &A,int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        MergeSort(A,low,mid);
        MergeSort(A,mid+1,high);
        Merge(A,low,mid,high);
    }
}


void Merge(Sqlist &A,int low,int mid,int high){
    int i,j,k;
    ElemType *B=(ElemType *)malloc((A.length+1)*sizeof (ElemType));
    for (k = low; k <=high; k++)
        B[k]=A.data[k];
    for (i = low,j=mid+1,k=low; k <=high; k++){
        if(B[i]<B[j])
            A.data[k]=B[i++];
        else
            A.data[k]=B[j++];
    }
    while (i<=mid)
        A.data[k++]=B[i++];
    while (j<=high)
        A.data[k++]=B[j++];
}