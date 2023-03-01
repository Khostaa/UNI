#include <iostream>
using namespace std;
void Swap(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    cout << "Hello !\n";
    return 0;
}
