


#include <iostream>
#include <fstream>
#include "func.hpp"
using namespace std;
 
int main()
{
    ifstream fin("/Users/gratchuvalsky/Desktop/data.txt");
    //ofstream fout("output.txt");
    int n, k = 0;
    cout<<"Enter number of elements:\n";
    cin>>n;
    int* arr = new int[n];
    if (!fin.good())
    {
        cout << "error!" << endl;
    }
    else
    {
        k = 0;
        while (fin >> n)
        {
            arr[k++] = n;
        }
        cout << "massive:" << endl;
        for (int i = 0; i < k; i++)
        {
            cout << arr[i] << " ";
        }
    }
    count_sort(arr, 3);
    cout << "rezult\n";
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    fin.close();
    //fout.close();
    cin.get();
    return 0;
}
