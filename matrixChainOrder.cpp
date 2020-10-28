#include <bits/stdc++.h>
using namespace std;
int matrixChain(int  p[],int i, int j)
{
    if(i==j) 
    {
        return 0;
    }
    int k;
    int min = INT_MAX;
    int count;
    for(k=i;k<j;k++)
    {
        count = matrixChain(p,i,k)+matrixChain(p,k+1,j)+p[i-1]*p[k]*p[j];
        if(count<min)
        {
            min = count;
        }
    }
    return min;
}
int main()
{
    int arr[] = {10,100,5,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Minimum no of scaler multiplication is: "<<matrixChain(arr,1,n-1);
    return 0;

}