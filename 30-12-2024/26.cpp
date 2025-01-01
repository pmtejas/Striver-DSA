#include <bits/stdc++.h>
using namespace std;
vector<int> spiralTraversal(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int top = 0, bottom = n - 1;
    int left = 0, right = m - 1;
    vector<int> ans;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            ans.push_back(matrix[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main()
{
    string name;
    cout << "Enter the name: ";
    cin >> name;
    cout << "Hello " << name << ", welcome to the program to spiral traverse a matrix" << endl;
    int testcases;
    cout << "Enter the number of testcases: ";
    cin >> testcases;
    while (testcases--)
    {
        int m, n;
        cout << "Enter the number of rows and columns: ";
        cin >> m >> n;
        vector<vector<int>> matrix(m, vector<int>(n));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "Enter the element " << i + 1 << " " << j + 1 << " : ";
                cin >> matrix[i][j];
            }
        }
        cout << "You have entered the matrix as: " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        vector<int> ans = spiralTraversal(matrix);
        cout << "The spiral traversal of the matrix is: ";
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    cout << "Thank you " << name << ", you completed the program to spiral traverse a matrix " << endl;
    return 0;
}