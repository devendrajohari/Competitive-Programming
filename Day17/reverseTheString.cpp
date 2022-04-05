/*
Reverse the str
*/

string Solution::solve(string A) {
    vector<string> words;
    int i=0;
    int n = A.size();
    while(i<n){
        if(A[i]==' '){
            i++;
            continue;
        }else{
            string temp="";
            while(i<n && A[i]!=' '){
                temp = temp + A[i];
                i++;
            }
            words.push_back(temp);
        }
    }
    reverse(words.begin(), words.end());
    string res="";
    for(int j=0; j<words.size(); j++){
        res = res + ' ' + words[j];
    }
    return res.substr(1, res.size());
}