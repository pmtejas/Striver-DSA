#include<bits/stdc++.h>
using namespace std;
int largestNumber(vector<int>&arr){
        int largest=arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    return largest;
}

int main()
{
    vector<int>arr={1,2,3,4,5,6};
    cout<<largestNumber(arr);
    return 0;
}
