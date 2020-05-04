#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();

    //highest value it can be
    int lowestAbsTemp = n == 0 ? 0 : 5526;
    int closestToZero = n == 0 ? 0 : 5526;  

    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();

        //Assign positive value
        if(abs(t) == abs(closestToZero)){ 
            closestToZero = (t < closestToZero) ? closestToZero : t;
        }
        
        if(abs(t) < abs(lowestAbsTemp)){
            lowestAbsTemp = abs(t);
            closestToZero = t;
        } 

    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << closestToZero << endl;
}