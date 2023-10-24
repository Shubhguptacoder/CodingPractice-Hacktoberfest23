#include <iostream>
using namespace std;

int pivot(int nums[], int n)
{
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + nums[i];
    }
    long long leftsum = 0;
    long long rightsum = sum;
    for (int i = 0; i < n; i++)
    {
        rightsum = rightsum - nums[i];
        if (leftsum == rightsum)
        {
            return i;
        }
        leftsum = leftsum + nums[i];
    }
    return -1;
}

int main()
{
    int arr[5] ;
    for(int i=0;i<5;i++)
    {
    cin>>arr[i];
    }
    
   int d= pivot(arr, 5);
   cout<<"pivot index is"<<d<<endl;
}
