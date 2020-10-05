// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Source.h"
#include "Pointers_01_UpsideDown.h"
#include "Pointers_02_BubbleSort.h"
#include "Pointers_03_CountWords.h"
#include "Pointers_04_SortWords.h"

int main()
{
    //Baglæns 
    UpsideDown("Hej Goddag");

    //Sortering 
    int sortArray[] = {10,22,3,4,54};
    int elementsCount = sizeof(sortArray) / sizeof(sortArray[0]);
    BubbleSort1(sortArray, elementsCount);

    //Tæl ord 
    int countworkd = CountWordNumber("one little two little three little boys");
    printf("Count Word: %d\n", countworkd);

    //Sorter ord
    SortWords();


    std::cout << "End!\n";
}