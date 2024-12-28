// Find the largest number in an array
#include<bits/stdc++.h>
using namespace std;
int largestNumber(vector<int> arr, int n)
{
    int max = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    string name;
    cout<<"Enter your name : ";
    cin >> name;
    cout<<"Hello "<<name<<", welcome to the program to find the largest number in an array"<<endl;
    int testcases;
    cout<<"Enter the number of testcases : ";
    cin >> testcases;
    while(testcases--)
    {
        int n;
        cout<<"Enter the size of the array : ";
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cout<<"Enter the element "<<i+1<<" : ";
            cin >> arr[i];
        }
        cout <<"Largest Number is : "<< largestNumber(arr, n) << endl;
    }
    cout<<"Thank you "<<name<<", you completed the program to find the largest number in an array"<<endl;
    
    return 0;
}