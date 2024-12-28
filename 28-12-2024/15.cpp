// Sort Colors(Dutch National Flag Problem)
// arr[] ={0,1,1,0,1,2,1,2,0,0,0}
#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int>&nums){
    int low=0,mid=0,high=nums.size()-1;
    while (mid<=high)
    {
        if (nums[mid]==0)
        {
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}
int main()
{
    string name;
    cout<<"Enter your name : ";
    cin >> name;
    cout<<"Hello "<<name<<", welcome to the program to sort colors in an array"<<endl;
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
        cout<<"You have entered the array as : ";
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        sortColors(arr);
        cout<<"The sorted array is : ";
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    cout<<"Thank you "<<name<<", you completed the program to sort colors using Dutch National flag Algorithm in an array"<<endl;
    return 0;
}