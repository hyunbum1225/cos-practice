#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{

    int pass = 0;
    char x[20];
    cout << "Enter the password ";
    cin >> x;

    if (strcmp(x, "thegeekstuff")){
        cout << "Wrong password" << endl;
    } else{
        cout << "Correct Password" << endl;
        pass = 1;
    }

    if(pass) {
        cout << "Root privilieges given to the user" << endl;
    }
    cout << "x (" << (void* )x << ") =" << x << endl;
    cout << "x (" << (void *)&pass << ")= " << pass << endl;
    return 0;
}
