/*
Given an array of integers A.  There is a sliding window of size B which 

is moving from the very left of the array to the very right. 

You can only see the w numbers in the window. Each time the sliding window moves 

rightwards by one position. You have to find the maximum for each window. 

The following example will give you more clarity.

The array A is [1 3 -1 -3 5 3 6 7], and B is 3.

Window position	Max
———————————-	————————-
[1  3  -1] -3  5  3  6  7	3
1 [3  -1  -3] 5  3  6  7	3
1  3 [-1  -3  5] 3  6  7	5
1  3  -1 [-3  5  3] 6  7	5
1  3  -1  -3 [5  3  6] 7	6
1  3  -1  -3  5 [3  6  7]	7
Return an array C, where C[i] is the maximum value of from A[i] to A[i+B-1].

Note: If B > length of the array, return 1 element with the max of the array.




Input Format

The first argument given is the integer array A.
The second argument given is the integer B.
Output Format

Return an array C, where C[i] is the maximum value of from A[i] to A[i+B-1]
For Example

Input 1:
    A = [1, 3, -1, -3, 5, 3, 6, 7]
    B = 3
Output 1:
    C = [3, 3, 5, 5, 6, 7]

*/


vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    deque<int> dq;
    int n = A.size();
    vector<int> ans;
    for(int i=0; i<n; i++){
        if((!dq.empty()) and (dq.front()==(i-B))){
            dq.pop_front();
        }
        while((!dq.empty()) and (A[i]>A[dq.back()])){
            dq.pop_back();
        }
        dq.push_back(i);
        if((i+1) >= B){
            ans.push_back(A[dq.front()]);
        }
    }
    return ans;


    /*
    Vector approach
    
    int n = A.size();
    vector<int> lmx(n), rmx(n);
    for(int i=0; i<n; i++){
        if(i%B==0) lmx[i] = A[i];
        else lmx[i] = max(lmx[i-1], A[i]);
    }

    for(int i=n-1; i>=0; i--){
        if((i+1)%B==0 or i==n-1) rmx[i] = A[i];
        else rmx[i] = max(rmx[i+1], A[i]);
    }

    vector<int> ans;
    for(int i=0; i<=(n-B); i++){
        ans.push_back(max(rmx[i], lmx[i+B-1]));
    }
    return ans;

    
    */
}
