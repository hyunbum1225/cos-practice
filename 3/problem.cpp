#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int first, second, sum;
    if (argc != 3)
    {
        cout << "Invalid number of arguements\n";
        return 1;
    }

    first = atoi(argv[1]);
    second = atoi(argv[2]);
    
    if (first<second)
    {
        sum = 0;
        while(first <= second)
        {
            sum += first; // sum = sum + first;
            first++; // first =first + 1;
        }
        cout << "sum is: " << sum << endl;
    }
    else{
        cout << "Invalid" << endl;
    }

    return 0;
}