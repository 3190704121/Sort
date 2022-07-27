cmake_minimum_required(VERSION 3.20)
project(Sort)

set(CMAKE_CXX_STANDARD 14)

add_executable(Sort main.cpp InsertSort.cpp InsertSort.h ShellSort.cpp ShellSort.h BubbleSort.cpp BubbleSort.h QuickSort.cpp QuickSort.h SellectSort.cpp SellectSort.h HeapSort.cpp HeapSort.h MergeSort.cpp MergeSort.h RadixSort.cpp RadixSort.h Sqlist.cpp Sqlist.h)
