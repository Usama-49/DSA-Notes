#include <iostream>
using namespace std;
main()
{
    //? Rectangular pattern 8X5 ...
    /*    for(int c=1; c<=5; c++){

        for (int r=1; r<=8; r++){
            cout<<"*";
        }
        cout<<endl;
    } */

    //? Hollow Rectangular Pattern 5X4 ...
    /*
    for(int c=1; c<=4; c++){
    for (int r=1; r<=5; r++){
        if(c==1 || c==4 || r ==1 || r==5){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
    }*/
    //? Rectangular pattern for 4 Rows ...
    for (int r = 1; r <= 4; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            cout << "*";
        }
        cout << endl;
    }
}