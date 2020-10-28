#include<iostream>
using namespace std;
int matrixChain(int  p[],int i, int j)
{
    if(i==j) return 0;
    int k, min=9999, count;
    for(k=i;k<j;k++)
    {
        count = matrixChain(p,k,i)+matrixChain(p,k+1,j)+matrixChain(p,i,k)+p[i-1]+p[k]+p[j];
        if(count<min)
        {
            min = count;
        }
    }
    return min;
}
int main()
{
    int arr[] = {1,5,2,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Minimum no of scaler multiplication is: "<<matrixChain(arr,1,n-1);
    return 0;

}