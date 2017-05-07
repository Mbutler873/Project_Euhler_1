#include <iostream>

using namespace std;
/*
This program finds the sum of all the multiples of 3 and 5 between 1 and 1000
*/

int main()
{
    //an array to store all the multiples of 3 and 5
    double addins[1000] = {3, 5};
    int index = 2;
    int total = 0;

    //a loop that runs through each integer to check if it
    //is a multiple of 3 or 5
    for(int i = 6; i < 1000; i++)
    {
        //checks integers and adds them to the array
        if(i % 3 == 0 || i % 5 == 0)
        {
            addins[index] = i;
            index++;
        }
    }

    //loops through the array and adds together all of the elements
    for(int i = 0; i < 1000; i++)
    {
        total += addins[i];
    }

    cout << "The answer is " << total << endl;
}
