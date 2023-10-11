// C++ program to print
// 2D array using for loop
#include <iostream>
using namespace std;

// Driver code
int main()
{
    int n, m;
    cin >> n >> m;
    // Declaring array
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 3; b++)
        {
            cout << arr[a][b] << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
Input:
3 3
1 2 3
4 5 6
7 8 9

Output:
1 2 3 
4 5 6 
7 8 9 

*/