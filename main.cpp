#include <iostream>

using namespace std;

int main()

{

    int year;

    cout << "-------------------------------------------------------------";

    cout << "\n\t\t L E A P   Y E A R "<< endl;

    cout << "-------------------------------------------------------------";

    cout << "\n\tProvide a year to check : ";

    cin >> year;

    if(year % 4 == 0)

    {

        cout<<"\n\t    "<<year<<" is a Leap Year" << endl;

    }

    else

        cout<<"\n\t    "<<year<<" isn't a Leap Year" << endl;

    cout << "-------------------------------------------------------------" << endl;

    return 0;

}


