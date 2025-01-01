// Print row of Pascal traingle
#include<bits/stdc++.h>
using namespace std;
void printPascalRow(int n){
    int ans=1;
    cout<<ans<<" ";
    for (int i = 1; i <= n; i++)
    {
        ans=ans*(n-i+1)/i;
        cout<<ans<<" ";
    }
}
int main()
{
    string name;
    cout<<"Enter the name: ";
    cin>>name;
    cout<< "Hello "<<name<<", welcome to the program to print the row of pascal triangle"<<endl;
    int testcases;
    cout<<"Enter the number of testcases: ";
    cin>>testcases;
    while(testcases--)
    {
        int row;
        cout<<"Enter the row: ";
        cin>>row;
        cout<<"The row of pascal triangle is: ";
        printPascalRow(row);
        cout<<endl;
    }
    cout << "Thank you " << name<<" for using the program to print the row of pascal triangle" << endl;
    return 0;
}