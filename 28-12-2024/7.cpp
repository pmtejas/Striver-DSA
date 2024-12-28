// Rotate an array by left by k places
#include<bits/stdc++.h>
using namespace std;
void leftRotateByKPlaces(vector<int>&nums,int k){
    int n=nums.size();
    k=k%n;
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
    reverse(nums.begin(),nums.end());
}

int main()
{
    string name;
    cout<<"Enter your name : ";
    cin >> name;
    cout<<"Hello "<<name<<", welcome to the program to rotate an array by left by k places"<<endl;
    int testcases;
    cout<<"Enter the number of testcases : ";
    cin >> testcases;
    while(testcases--)
    {
        int n,k;
        cout<<"Enter the size of the array : ";
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cout<<"Enter the element "<<i+1<<" : ";
            cin >> arr[i];
        }
        cout<<"Enter the value of k to rotate an array to the left : ";
        cin >> k;
        cout<<"Array before rotating left by "<<k<<" places is : ";
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        leftRotateByKPlaces(arr,k);
        cout<<"Array after rotating left by "<<k<<" places is : ";
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    cout<<"Thank you "<<name<<", you completed the program to rotate an array by left by k places"<<endl;
    
    return 0;
}