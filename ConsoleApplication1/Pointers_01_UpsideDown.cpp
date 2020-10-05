#include <string>
#include "Pointers_01_UpsideDown.h"
#include <iostream>

void UpsideDown(std::string inputString) {
    std::string s = inputString;
    int n = s.size();
    char* a = new char[n + 1];
    // string to char array 
    std::copy(s.begin(), s.end(), a);

    int i = 0;  
    int j = n - 1;
    char buf;  
    for (; i < j; ++i, --j)
    {
        buf = a[i];
        a[i] = a[j];
        a[j] = buf;
    }
    for (i = 0; i < n; ++i)
    {
        printf("%c\x20", a[i]);
    }
    printf("\n");
}