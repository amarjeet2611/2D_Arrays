#include<iostream>
using namespace std;
//function to print row wise sum
void printSum(int arr[][4],int row,int col){
    cout<<"Printing sum: "<<endl;
    int sum=0;
for(int row=0;row<3;row++){
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
printSum(arr,3,4);


return 0;

}