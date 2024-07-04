//Rearrange Array Elements by Sign
//TS =(0)n

void rearrange(int arr[], int n) {
    int pos[n / 2];
    int neg[n / 2];
    int posIndex = 0, negIndex = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            pos[posIndex++] = arr[i];
        } else {
            neg[negIndex++] = arr[i];
        }
    }

    
    int index = 0;
    posIndex = 0;
    negIndex = 0;
    
    while (posIndex < n / 2 && negIndex < n / 2) {
        arr[index++] = pos[posIndex++];
        arr[index++] = neg[negIndex++];
    }
}
//selected sE