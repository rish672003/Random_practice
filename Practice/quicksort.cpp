// #include<bits/stdc++.h>

// using namespace std;


//  int partition(vector<int> &arr, int low , int high){

//     //choose the piovot 
//     int pivot = arr[high];
//     //put i at 0 ;
//     int i = low-1;

//     //trasverse of an array from low to high and move all the smaller element on left side. Elements from low to i are smaller after every iteration
//     for(int j = low;j<=high - 1; j++){
//         if(arr[j]<pivot){
//             i++;
//             swap(arr[i],arr[j]);

//         }
//     }

//     //Move pivot after smaller elemets and return its postion
//     swap(arr[i+1],arr[high]);
//     return i+1;
//  }

//  void quickSort(vector<int> & arr, int low, int high){

//     if(low<high){
//         int pi = partition(arr,low,high);

//         quickSort(arr,low,pi-1);
//         quickSort(arr,pi+1,high);
//     }
//  }
// int main(){

//     vector<int> arr = {10,7,8,9,1,5};
//     int n = arr.size();
//     quickSort(arr,0 , n-1);
//     for(int i=0 ;i<n;i++){
//         cout<< arr[i] << " ";
//     }

//     return 0;
// }


#include<bits/stdc++.h>

using namespace std;


int main(){
    //pick the pivot the correct the place 
    //smaller the left and the larger at the right this is the first step 
    //4 6 2 5 7 9 1 3 
    //after applying in the 
    // 1 3 2 4 


    //psudeocode


    return 0;

}