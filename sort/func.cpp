
#include "func.hpp"
#include<iostream>
void count_sort(int *arr, int n)
{
    int i;
    int j;
    int tmp [50] = {0};
    for(i = 0; i < n; i++)
        tmp[arr[i]]++;
    for(i = 0; i < 50; i++)
        if(tmp[i] != 0)
        {
            for(int k = 0; k < tmp[i]; k++)
            {
                    arr[j] = i;
                    j++;
            }
          }
}
