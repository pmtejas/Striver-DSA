// Pascal traingle find element at given row and column
#include<bits/stdc++.h>
using namespace std;
int ncr(int n,int r){
  long long res=1;
  for (int i = 0; i < r; i++)
  {
        res*=(n-i);
        res/=(i+1);
  }
    return res;
}
int pascal(int row ,int col){
    return ncr(row-1,col-1);
}

int main()
{
    string name;
    cout<<"Enter the name: ";
    cin>>name;
    cout<< "Hello "<<name<<", welcome to the program to find the element at given row and column in pascal triangle"<<endl;
    int testcases;
    cout<<"Enter the number of testcases: ";
    cin>>testcases;
    while(testcases--)
    {
        int row,col;
        cout<<"Enter the row and column: ";
        cin>>row>>col;
        cout<<"The element at row "<<row<<" and column "<<col<<" is: "<<pascal(row,col)<<endl;
    }
    cout << "Thank you " << name<<" for using the program to find element at given row and column" << endl;
    return 0;
}