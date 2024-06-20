//Day 2 of learning Arrrays
//Largest element in array  brute force  approach

#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array
    sort(arr, arr + n);

    // The maximum element is now the last element in the sorted array
    int maxElement = arr[n - 1];

    cout << "Maximum element in the array is: " << maxElement << endl;

    return 0;
}


// quicksort, mergesort, or heapsort typically has a time complexity of 0(nlogn)
//Quicksort :0(nlogn) auxiliary space for the recursive stack if implemented in-place.
//Mergesort : 0(n)additional space for the temporary arrays.
//Heapsort : 0(1) auxiliary space if implemented in-place.

//optimal Solution 
#include <iostream>
#include <algorithm> 
using namespace std;

int  findMax_Element(int arr[] , int n){
    int Maxelement = arr[0];
    for(int i = 1 ; i < n ; i++){
        if(Maxelement < arr[i] ){
            Maxelement = arr[i];
        }
    }
    return 0;
}


//second largest element in in array

int largest_element(int arr[] , int n){
    int max = arr[0];
    for(int i = 1 ; i < n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

//1pass  TS -- O(n)

int second_largest(int arr[] , int n) {
    int max = largest_element(arr, n);
    int sec_larg = INT_MIN; // using as elements can be negative number .
    for(int i = 0 ; i< n ; i++){
        if(arr[i] > sec_larg && arr[i] != max){
            sec_larg = arr[i];
        }
    }
     return sec_larg;
}
/* 2nd pass )  TS -- O(n)
TIME COMPLEXITY - O(n) + 0(n) = 0(2n)

Optimal CODE  */
int second_largest(int arr[] , int n) {
    int max = arr[0];
    int sec_larg = -1;
    for(int i = 0 ; i< n ; i++){
        if(arr[i] > max){
            sec_larg = max;
            max = arr[i];
        }
     else 
        sec_larg = arr[i];
    }
    return sec_larg;
}

