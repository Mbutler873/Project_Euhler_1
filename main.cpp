#include <iostream>

using namespace std;
/*
This program finds the sum of all the multiples of 3 and 5 between 1 and 1000
*/

int main()
{
    double addins[1000] = {3, 5};
    int index = 2;
    int total = 0;

    for(int i = 6; i < 1000; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            addins[index] = i;
            index++;
        }
    }

    for(int i = 0; i < 1000; i++)
    {
        total += addins[i];
    }

    cout << "The answer is " << total << endl;
}
