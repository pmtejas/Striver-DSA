// Rotate a matrix
// n=3, m=3
// 1 2 3
// 4 5 6
// 7 8 9
// After rotating the matrix
// 7 4 1
// 8 5 2
// 9 6 3
#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>&matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(),matrix[i].end());
    }
}
int main()
{
    string name;
    cout<<"Enter the name: ";
    cin>>name;
    cout<< "Hello "<<name<<", welcome to the program to rotate a matrix"<<endl;
    int testcases;
    cout<<"Enter the number of testcases: ";
    cin>>testcases;
    while(testcases--)
    {
        int m,n;
        cout<<"Enter the number of rows and columns: ";
        cin>>m>>n;
        vector<vector<int>> matrix(m,vector<int>(n));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<"Enter the element "<<i+1<<" "<<j+1<<" : ";
                cin>>matrix[i][j];
            }
        }
        cout<<"You have entered the matrix as: "<<endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        rotate(matrix);
        cout<<"The rotated matrix is: "<<endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    cout<<"Thank you "<<name<<", you completed the program to rotate a matrix "<<endl;
    return 0;
}