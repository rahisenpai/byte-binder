// void selection_sort(int arr[], int n){
//     int i, idx;
//     for (i = 0; i < n - 1; i++) {
//         idx = find_min(arr, i, n);
//         if (idx != i) {
//             swap(arr, i, idx);
//         }
//     }
// }

// int find_min(int arr[], int start, int end){
//     int i, min, idx;
//     min = arr[start];
//     idx = start;
//     for (i = start + 1; i < end; i++) {
//         if (arr[i] < min) {
//             min = arr[i];
//             idx = i;
//         }
//     }
//     return idx;
// }

// void swap(int arr[], int i, int j){
//     int tmp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = tmp;
// }

void selection_sort_r(int arr[], int pos, int n){
    int idx;
    if (pos >= n - 1) {
        return;
    }
    idx = find_min(arr, pos, n);
    if (idx != pos) {
        swap(arr, pos, idx);
    }
    selection_sort(arr, pos+1, n);
}

int find_min(int arr[], int start, int end){
    int i, min, idx;
    min = arr[start];
    idx = start;
    for (i = start + 1; i < end; i++) {
        if (arr[i] < min) {
            min = arr[i];
            idx = i;
        }
    }
    return idx;
}
void swap(int arr[], int i, int j){
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}