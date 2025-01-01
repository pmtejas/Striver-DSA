// set zeroes
// m=3 n=3
// 1 1 1
// 1 0 1
// 1 1 1
// answer
// 1 0 1
// 0 0 0
// 1 0 1
#include<bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>>&matrix){
    int m=matrix.size();
    int n=matrix[0].size();
    bool firstRowZero=false,firstColZero=false;
    // check if first row has zero
    for (int j = 0; j < n; j++)
    {
        if(matrix[0][j]==0){
            firstRowZero=true;
            break;
        }
    }
    // check if first col has zero
    for (int i = 0; i < m; i++)
    {
        if(matrix[i][0]==0){
            firstColZero=true;
            break;
        }
    }
    // mark zeros on first row and col
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                matrix[0][j]=0;
            }
        }
    }
    // set rows to zero
    for (int i = 1; i < m; i++)
    {
        if(matrix[i][0]==0){
            for (int j = 1; j < n; j++)
            {
                matrix[i][j]=0;
            }
        }
    }
    // set cols to zero
    for (int j = 1; j < n; j++)
    {
        if(matrix[0][j]==0){
            for (int i = 1; i < m; i++)
            {
                matrix[i][j]=0;
            }
        }
    }
    // set first row to zero
    if(firstRowZero){
        for (int j = 0; j < n; j++)
        {
            matrix[0][j]=0;
        }
    }
    // set first col to zero
    if(firstColZero){
        for (int i = 0; i < m; i++)
        {
            matrix[i][0]=0;
        }
    }
}
int main()
{
    string name;
    cout<<"Enter the name: ";
    cin>>name;
    cout<< "Hello "<<name<<", welcome to the program to set zeroes in a matrix"<<endl;
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
        setZeroes(matrix);
        cout<<"The matrix after setting zeroes is: "<<endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    cout<<"Thank you "<<name<<", you completed the program to set zeroes in a matrix "<<endl;
    return 0;
}