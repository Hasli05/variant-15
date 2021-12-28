using namespace std;
#include <iostream>

void printMatrix(int(&a)[4][5])
{
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            cout << a[i][j]<< ", ";
        }
        cout << endl;
    }
}


void fillingMatrix(int(&a)[4][5])
{
    int n;

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            cout << "Enter element in column "<< i + 1 << " and element in line "<< j + 1 << endl;
            cin >> n;
            a[i][j] = n;
        }
        cout << endl;
    }
}


void ValueNegativeNumInMatrix(int(&a)[4][5])
{

    int counter = -1;

    for (int j = 0; j < 4; ++j)
    {
        for (int i = 0; i < 5; ++i)
        {
            if (a[i][j] < 0)
            {
                ++counter;
            }
        }
        cout <<"Negative numbers in "<< j << " column: "<< counter<< endl;
        counter = -1;
    }

}


int main()
{
    int A[4][5]{0};
    int B[4][5]{0};

    cout << "Matrix A" << endl;
    fillingMatrix(A);

    cout << "Matrix A" << endl;
    printMatrix(A);

    ValueNegativeNumInMatrix(A);


    cout << "Matrix B" << endl;
    fillingMatrix(B);

    cout << "Matrix B" << endl;
    printMatrix(B);

    ValueNegativeNumInMatrix(B);

}

