//Day 3 of learning Arrrays

//Missing number
//TS - O(N^2)
#include <iostream>
using namespace std;

int checkele(int arr[], int n) {
    
    for(int i = 1; i <= n; i++) {
       int  flag = 0;
        for(int j = 0; j < n; j++) {
            if(arr[j] == i) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            return i;
        }
    }
    return n + 1;
}

int main() {
    int arr[] = {1, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int missing = checkele(arr, n);
    
    cout << "The smallest missing positive integer is: " << missing << endl;
    
    return 0;
}

//Using hash

#include <iostream>
using namespace std;


int Missing(vector<int>&arr , int n){
    int hash [n + 1] = {0} ;
    
    
    for( int i = 0 ; i< n ; i++){       //TS - O(N)
        hash[arr[i]] = 1;
    }
    
    for(int i = 0 ; i< n ; i++){        //TS - O(N)
        if(hash[i] == 0){
            return i;
        }
    }
// TS - O(2N)
//SPACE COMPLEX - 0(N)
    return -1;

}

int main() {
    
   vector<int> arr = { 1 ,3 ,4 ,5};
   int n = 5;
   
   int print = Missing(arr , n);
   
  
  cout << print << " ";
   
   
}



//optiomal approach SUMMATION

#include <bits/stdc++.h>
using namespace std;


int Missing(vector<int>&arr , int n){
     int sum = (n * (n + 1))/2;
        int s = 0;
     for( int i = 0; i < n; i++){
         s += arr[i];
     }
     
     int missingnumber = sum - s;
     
     
    return missingnumber;    
}

int main() {
    
   vector<int> arr = { 1 ,3 ,4 ,5};
   int n = 5;
   
   int print = Missing(arr , n);
   
  
  cout << print << " ";
   
   
}


//Maximum consecutive ones

int maximumconsecutive(vector<int> & arr){
    int maxi = 0; //that will count max consecutive elements
    int cnt = 0;

    for( int i = 0; i < arr.size() , i++){
        if(arr[i]== 1){
            cnt++;
        }else {
            cnt = 0;
         maxi = max(maxi , cnt);
        }
       return maxi;
    }
}