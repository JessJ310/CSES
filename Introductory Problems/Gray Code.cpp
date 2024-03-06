#include <iostream>
#include<vector>
#include<string>
#include<cmath>

using namespace std;

void graycode(int n){
    if(n<=0)
        return;
    vector<string> arr;
    arr.push_back("0");
    arr.push_back("1");
    for(int i=2;i<pow(2,n);i*=2){
        for(int j=i-1;j>=0;j--){
            arr.push_back(arr[j]);
        }
        for(int j=0;j<i;j++){
            arr[j]="0"+arr[j];
            arr[j+i]="1"+arr[j+i];
        }
    }
    for(int j=0;j<arr.size();j++){
        cout<<arr[j]<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    graycode(n);
    return 0;
}
