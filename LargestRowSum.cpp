#include<iostream>
#include<limits.h>
using namespace std;
int largestRowSum(int arr[][4],int row,int col){
    int maxi=INT_MIN;
int num=-1;
for(int row=0;row<3;row++){
    int sum=0;
    for(int col=0;col<4;col++){
sum+=arr[row][col];
 }
 if(sum>maxi){
    maxi=sum;
    num=row;
 }
}
cout<<"the maximum sum is "<<maxi<<endl;
return num;
}


//function to print row wise sum
void printSum(int arr[][4],int row,int col){
    cout<<"Printing sum: "<<endl;

for(int row=0;row<3;row++){
    int sum=0;
    for(int col=0;col<4;col++){
sum+=arr[row][col];


    }
    cout<<sum<<" ";
}
}
int main(){
//create 2D array
int arr[3][4];
//taking input
cout<<"Enter the elements in the array: "<<endl;

for(int col=0;col<4;col++){
    for(int row=0;row<3;row++){
        cin>>arr[row][col];
    }
}
//print
cout<<"Printing the elements: "<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
//printSum(arr,3,4);

cout<<"Max row is at index"<<largestRowSum(arr,3,4)<<endl;

return 0;

}