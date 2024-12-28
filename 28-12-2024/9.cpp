// Union of Two Sorted Arrays
#include<bits/stdc++.h>
using namespace std;
vector<int>unionOfTwoSortedArrays(vector<int>&nums1,vector<int>&nums2){
    int n1=nums1.size(),n2=nums2.size(),i=0,j=0;
    vector<int>UnionArr;
    while (i<n1 && j<n2)
    {
        if (nums1[i]<nums2[j])
        {
            if (UnionArr.empty()|| UnionArr.back()!=nums1[i])
            {
                UnionArr.push_back(nums1[i]);
            }
            i++;
        }
        else
        {
            if (UnionArr.empty()|| UnionArr.back()!=nums2[j])
            {
                UnionArr.push_back(nums2[j]);
            }
            j++;
        }
    }
    while (i<n1)
    {
        if (UnionArr.empty()|| UnionArr.back()!=nums1[i])
        {
            UnionArr.push_back(nums1[i]);
        }
        i++;
    }
    while (j<n2)
    {
        if (UnionArr.empty()|| UnionArr.back()!=nums2[j])
        {
            UnionArr.push_back(nums2[j]);
        }
        j++;
    }
    return UnionArr;
}
int main()
{
    string name;
    cout<<"Enter your name : ";
    cin >> name;
    cout<<"Hello "<<name<<", welcome to the program to find the union of two sorted arrays"<<endl;
    int testcases;
    cout<<"Enter the number of testcases : ";
    cin >> testcases;
    while(testcases--)
    {
        int n1,n2;
        cout<<"Enter the size of the first array : ";
        cin >> n1;
        vector<int> arr1(n1);
        for(int i = 0; i < n1; i++)
        {
            cout<<"Enter the element "<<i+1<<" : ";
            cin >> arr1[i];
        }
        cout<<"Enter the size of the second array : ";
        cin >> n2;
        vector<int> arr2(n2);
        for(int i = 0; i < n2; i++)
        {
            cout<<"Enter the element "<<i+1<<" : ";
            cin >> arr2[i];
        }
        cout<<"First array of size "<<arr1.size()<<" is  : ";
        for (int i = 0; i < n1; i++)
        {
            cout<<arr1[i]<<" ";
        }
        cout<<endl;
        cout<<"Second array of size "<<arr2.size()<<" is  : ";
        for (int i = 0; i < n2; i++)
        {
            cout<<arr2[i]<<" ";
        }
        cout<<endl;
        vector<int> UnionArr=unionOfTwoSortedArrays(arr1,arr2);
        cout<<"Union of two sorted arrays is : ";
        for (int i = 0; i < UnionArr.size(); i++)
        {
            cout<<UnionArr[i]<<" ";
        }
        cout<<endl;
    }
    cout<<"Thank you "<<name<<", you completed the program to find the union of two sorted arrays"<<endl;
    
    return 0;
}