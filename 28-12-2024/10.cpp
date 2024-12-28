// Intersection of two sorted Arrays
#include<bits/stdc++.h>
using namespace std;
vector<int>intersectionOfTwoSortedArrays(vector<int>&nums1,vector<int>&nums2){
    int n1=nums1.size(),n2=nums2.size(),i=0,j=0;
    vector<int>IntersectionArr;
    while (i<n1 && j<n2)
    {
        if (nums1[i]<nums2[j])
        {
            i++;
        }
        else if (nums1[i]>nums2[j])
        {
            j++;
        }
        else
        {
            IntersectionArr.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    return IntersectionArr;  
}

int main()
{
    string name;
    cout<<"Enter your name : ";
    cin >> name;
    cout<<"Hello "<<name<<", welcome to the program to find the intersection of two sorted arrays"<<endl;
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
        vector<int> result=intersectionOfTwoSortedArrays(arr1,arr2);
        cout<<"Intersection of two sorted arrays is : ";
        for (int i = 0; i < result.size(); i++)
        {
            cout<<result[i]<<" ";
        }
        cout<<endl;
    }
    cout<<"Thank you "<<name<<", you completed the program to find the intersection of two sorted arrays"<<endl;
    
    return 0;
}