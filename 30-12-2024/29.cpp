// Print Pascal triangle
#include<bits/stdc++.h>
using namespace std;
vector<int>generateRow(int n){
    long long ans=1;
    vector<int>ansRow;
    ansRow.push_back(ans);
    for (int i = 1; i <= n; i++)
    {
        ans=ans*(n-i+1)/i;
        ansRow.push_back(ans);
    }
    return ansRow;
}
vector<vector<int>>pascalTraingle(int n){
    vector<vector<int>>ans;
    for (int i = 0; i <= n; i++)
    {
        ans.push_back(generateRow(i));
    }
    return ans;
}
int main()
{
    string name;
    cout<<"Enter the name: ";
    cin>>name;
    cout<< "Hello "<<name<<", welcome to the program to print the pascal triangle"<<endl;
    int testcases;
    cout<<"Enter the number of testcases: ";
    cin>>testcases;
    while(testcases--)
    {
        int row;
        cout<<"Enter the number of rows: ";
        cin>>row;
        vector<vector<int>>ans=pascalTraingle(row);
        cout<<"The pascal triangle is: "<<endl;
        int space=row;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < space; j++)
            {
                cout<<" ";
            }
            space--;
            for (int j = 0; j <= i; j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    cout << "Thank you " << name<<" for using the program to print the pascal triangle" << endl;
    return 0;
}