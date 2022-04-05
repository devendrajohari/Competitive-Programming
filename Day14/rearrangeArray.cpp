/*
Rearrange a given array so that Arr[i] becomes Arr[Arr[i]] with O(1) extra space.

Example:

Input : [1, 0]
Return : [0, 1]
*/

void Solution::arrange(vector<int> &A) {
    int n = A.size();
    for(int i=n; i<2*n; i++){
        A.push_back(A[A[i-n]]);
    }
    A.erase(A.begin(), A.begin()+n);
}
