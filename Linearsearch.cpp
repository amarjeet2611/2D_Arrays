#include<iostream>
using namespace std;
bool isPresent(int arr[][4],int target,int row,int col){
 for(int row=0;row<3;row++){
    for(int col=0;col<4;col++){
        if(arr[row][col]==target){
            return 1;
        }
    }
 }
 return 0;
}
int main(){
//create 2D array
int arr[3][4];
//taking input
for(int col=0;col<4;col++){
    for(int row=0;row<3;row++){
        cin>>arr[row][col];
    }
}
//print
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"Enter the element to search"<<endl;
int target;
cin>>target;
if(isPresent(arr,target,3,4)){
    cout<<"Element is present here"<<endl;

}
else{
    cout<<"Not present !";
}



return 0;
}