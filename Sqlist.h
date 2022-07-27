//
// Created by zwp18 on 2022/7/27.
//

#ifndef SORT_SQLIST_H
#define SORT_SQLIST_H

typedef int ElemType;
#define Maxsize 20

typedef struct{
    ElemType data[Maxsize];
    int length;
}Sqlist;

void swap(ElemType &a,ElemType &b);//交换位置
void print(Sqlist L);
void random(Sqlist &L);
#endif //SORT_SQLIST_H
