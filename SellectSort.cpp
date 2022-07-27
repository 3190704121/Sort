//
// Created by zwp18 on 2022/7/27.
//

#include "SellectSort.h"
//简单选择排序
void SelectSort(Sqlist &L){
    int i,j,min;
    for(i=0;i<L.length-1;i++){
        min=i;
        for(j=i+1;j<L.length;j++)
            if(L.data[j]<L.data[min])
                min=j;
        swap(L.data[i],L.data[min]);
    }
}