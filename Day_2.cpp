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

/* 
quicksort, mergesort, or heapsort typically has a time complexity of 0(nlogn)
Quicksort :0(nlogn) auxiliary space for the recursive stack if implemented in-place.
Mergesort : 0(n)additional space for the temporary arrays.
Heapsort : 0(1) auxiliary space if implemented in-place.
*/

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

//TO CHECK IF ARRAY IS SORTED OR NOT ?
#include <iostream>
#include <algorithm> 
using namespace std;

int check_sort(int arr[] , int n){
    for(int i = 0; i < n; i++){
        if(arr[i] > arr[i-1]){

        }
        else {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {1 ,2 ,3 ,4 , 6 };
    int n = sizeof(arr) / sizeof(arr[0]) ;
    
   int check = check_sort(arr,n);
   
   if(check == true ){
       cout << "ARRAY IS SORTED ";
       
   }
   else 
    cout << "Array is not sorted";
   
}


/* 
remove  duplicate in an array
Brute force AS SET DOESNT CONTAIN DUPLICATAE VALUE 
 */

//Optimal CODE
#include <iostream>
#include <algorithm> 
using namespace std;

int rem_dup(int arr[] , int n){
    int i  = 0;
    for(int j = 1; j < n; j++){
        if(arr[i] != arr[j]){
            arr[i + 1] = arr[j];
            i++;
        }
        
    }
    return i + 1;
        
}
int main() {
    int arr[] = {1 ,2 ,2 , 2 , 6 };
    int n = sizeof(arr) / sizeof(arr[0]) ;
    
   int check = rem_dup(arr,n);
   
   cout << check;
   
   
}


/* 
left Rotate Array by one places 
 */
#include <iostream>
#include <set>
using namespace std;

//TS: O(n)
void leftrotate(int arr[] , int n){
    int temp = arr[0];
    for(int i = 1 ; i< n ; i++){
            arr[i-1] = arr[i];
        }
        arr[n-1] = temp;
}

int main() {

    int arr[] = {1, 2 , 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    leftrotate(arr, n);
    
   for(int i = 0; i< n ; i++){
       cout << arr[i] << " ";
   }
   cout << endl;
    
}


/* 
Move all the  zeroes at the end
 */

#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n) {
    int temp[n]; // Temporary array to hold non-zero elements
    int j = 0;   // Index for temp array

    // Add non-zero elements to temp array
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp[j++] = arr[i];
        }
    }

    // Fill the rest of temp with zeroes
    while (j < n) {
        temp[j++] = 0;
    }

    // Copy the elements back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveZeroes(arr, n);

    // Print the modified array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

//Optimal solution
// two pointer approach
#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n) {
    int j = 0 ; 
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            // Swap elements
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveZeroes(arr, n);

    // Print the modified array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

// linear search

#include <iostream>
using namespace std;

int linear_search(int arr[], int n , int element) {
    for (int i = 0; i < n; i++) {
        if(arr[i]== element ){
            return i;
        }
        
    }
    return -1;
}

int main() {
    
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
 int element ;
 cin >> element;
   int search = linear_search(arr, n , element );

     if (search!= -1) {
        cout << "Element found at index: " << search << endl;
    } else {
       cout << "Element not found in the array." << endl;
    }

    return 0;
}
