#include <iostream>
using namespace std;

void reachHome(int src, int dest)
{

    cout << "Source: " << src << " " << "Destination: " << dest << endl;
    // base case
    if (src == dest)
    {
        cout << " Reach at destination" << endl;
        return;
    }

    // processing next step by one
    src++;

    // recursive call
    reachHome(src, dest);
}

int main()
{

    int dest = 10;
    int src = 1;

    cout << endl;

    reachHome(src, dest);
}