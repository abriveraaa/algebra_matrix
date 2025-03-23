#include <iostream>

using namespace std;

int main()
{
    // variable declaration
    const int _size = 3;
    int A[_size], B[_size][_size], C[_size];

    // asking user to input data in one dimensional array
    cout << "ARRAY A: " << endl;
    for (int i = 0; i < _size; i++)
    {
        cout << "Enter elements for A[" << i << "]: ";
        cin >> A[i];
    }

    // asking user to input data in multidimensional array
    cout << endl
         << "ARRAY B: " << endl;
    for (int rows = 0; rows < _size; rows++)
    {
        for (int cols = 0; cols < _size; cols++)
        {
            cout << "Enter elements for B[" << rows << "][" << cols << "]: ";
            cin >> B[rows][cols];
        }
    }

    /*
        process: storing elements on rows based on formula :
            C[0] = {(A[0] * B[0][0]) + (A[1] * B[0][1]) + (A[2] * B[0][2])}
            C[1] = {(A[0] * B[1][0]) + (A[1] * B[1][1]) + (A[2] * B[1][2])}
            C[2] = {(A[0] * B[2][0]) + (A[1] * B[2][1]) + (A[2] * B[1][2])}
    */
    for (int rows = 0; rows < _size; rows++)
    {
        C[rows] = 0;
        for (int cols = 0; cols < _size; cols++)
        {
            C[rows] += (A[cols] * B[rows][cols]);
        }
    }

    // printing the one dimensional array
    cout << endl
         << "ARRAY A: " << endl;
    for (int i = 0; i < _size; i++)
    {
        cout << "A[" << i << "] = " << A[i] << "\t";
    }

    // printing the multidimensional array
    cout << endl
         << endl
         << "ARRAY B: " << endl;
    for (int rows = 0; rows < _size; rows++)
    {
        for (int cols = 0; cols < _size; cols++)
        {
            cout << "B[" << rows << "][" << cols << "] = " << B[rows][cols] << "\t";
        }

        cout << endl;
    }

    // printing the matrix algebra
    cout << endl
         << "ARRAY C: " << endl;
    for (int i = 0; i < _size; i++)
    {
        cout << "C[" << i << "] = " << C[i] << "\t";
    }

    return 0;
}