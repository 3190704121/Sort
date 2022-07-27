//
// Created by zwp18 on 2022/7/27.
//

#include "Sqlist.h"
#include "stdio.h"
#include <cstdlib>

void swap(ElemType &a,ElemType &b){
    ElemType temp;
    temp=a;
    a=b;
    b=temp;
}

void print(Sqlist L){
    for (int i = 1; i < Maxsize-1; ++i) {
        printf("%d\t",L.data[i]);
    }
    printf("\n");
}
void random(Sqlist &L){
    L.length=0;
    for (int i = 1; i < Maxsize; ++i) {
        L.data[i]=rand()%99;
        L.length++;
    }
    print(L);
}