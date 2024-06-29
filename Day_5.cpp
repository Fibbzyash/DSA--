//Sort an array of 0's 1's & 2's  o(2N)

#include <iostream>
#include <vector>
using namespace std;

vector<int> sortColors(vector<int>& nums) {
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 0){
            cnt0++;
        }
        else if(nums[i] == 1){
            cnt1++;
        }
        else if(nums[i] == 2){
            cnt2++;
        }
    }
    
    vector<int> sortedArray;
    for(int i = 0; i < cnt0; i++){
        sortedArray.push_back(0);
    }
    for(int i = 0; i < cnt1; i++){
        sortedArray.push_back(1);
    }
    for(int i = 0; i < cnt2; i++){
        sortedArray.push_back(2);
    }
    
    return sortedArray;
}

int main() {
    vector<int> arr = {2, 0, 1, 2, 0, 1};
    
    vector<int> sortedArr = sortColors(arr);
    
    cout << "Sorted array: ";
    for(int num : sortedArr){
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
//Dutch National flag algo

void sortnums(vector<int>& nums) {
        int low = 0 ,  mid = 0  , high = nums.size() - 1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low] , nums[mid]);
                low++ , mid++ ;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else {
                swap(nums[mid] , nums[high]);
                high--;
            }

        }
}