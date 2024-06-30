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
//Dutch National flag algo O(n) ,  O(1)

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
//Majority brute force`

int  majority(vector<int>& arr , int n) {
       for(int i = 0; i< n ; i++){
            int cnt = 0;
            for(int j = 0; j< n; j++){
                if(arr[i] == arr[j]){
                    cnt++;
                }
            }
                if(cnt > n / 2) {
                    return arr[i] ;
                }
            }
            return -1;
     
}

//map
#include <map>
int  majority(vector<int>& arr , int n) {
       map<int , int> mp;
       //storing the element with its occurence
       for(int i = 0;  i< n ; i++){
           mp[arr[i]]++;
       }
       
       for (auto it : mp) {
        if (it.second > (n / 2)) {
            return it.first;
        }
    }
       
       
        return -1;
}

//optimal approach Moore’s Voting Algorithm
int majorityElement(vector<int>& nums) {
        int count = 0;
        int element = 0;
        
        for (int num : nums) {
            if (count == 0) {
                element = num;
            }
            
            if (num == element) {
                count++;
            } else {
                count--;
            }
        }
        
        return element;
    }

/*
Subarray : a contigious portion of array & maintain original order.
*/

//Max Subarray Sum Kadane's Algo

int maxSubArraySum(int arr[], int n) {
    int sum = 0;
    int maxi = INT_MIN;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
        if(sum > maxi) {
            maxi = sum;
        }
        if(sum < 0) {
            sum = 0;
        }
    }
    return maxi;  
}

//Best Time to Buy and Sell Stock | DP on Stocks 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0; 

        int mini = prices[0];
        int maxProfit = 0;
        
        for (int i = 1; i < n; ++i) {

            maxProfit = max(maxProfit, prices[i] - mini);
            
            mini = min(mini, prices[i]);
        }
        
        return maxProfit;
    }
};
