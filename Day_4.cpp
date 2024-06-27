//Day 4 learning of dsa
// search element comes 1s rather than 2 or more

int bruteforce(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int num = arr[i];
        int cnt = 0;
        for(int j = 0; j < n; j++) {
            if(num == arr[j]) {
                cnt++;
            }
        }
        if(cnt == 1) { // Check if the element appears exactly once
            return 1; // Return 1 if a unique element is found
        }
    }
    return -1; // Return -1 if no unique element is found
}

//TS = 2 loops and linear search = O(n^2)

/*Xor approach
a) Xor of two same number resulted 0;
b) xor with 0 result the number itself
TS = 0(N)
*/

int optimal(int arr[] , int n){
    for(int i = 0; i < n; i++){
    int xorr;
    for(int i = 0; i< n ; i++){
        xorr = xorr ^ arr[i];
    }
    return xorr ;
    } 
}


//two sum 0(N^2)
pair<int, int> twosum(vector<int>& arr, int target) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                return {i, j};
            }
        }
    }
    return {-1, -1}; 
}



pair<int, int> twosum(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    sort(arr.begin(), arr.end());
    
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return {left, right};
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    
    return {-1, -1};
}

pair<int, int> twosum(vector<int>& arr, int target) {
    unordered_map<int, int> num_map; 
    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];
        if (num_map.find(complement) != num_map.end()) {
            return {num_map[complement], i};
        }
        num_map[arr[i]] = i;
    }
    return {-1, -1};
}
