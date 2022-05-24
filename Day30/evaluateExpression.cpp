/*
Problem Description
 
 

An arithmetic expression is given by a charater array A of size N. Evaluate the value of an arithmetic expression in Reverse Polish Notation.

Valid operators are +, -, *, /. Each character may be an integer or an operator.



Problem Constraints
1 <= N <= 105



Input Format
The only argument given is character array A.



Output Format
Return the value of arithmetic expression formed using reverse Polish Notation.



Example Input
Input 1:
    A =   ["2", "1", "+", "3", ""]
Input 2:
    A = ["4", "13", "5", "/", "+"]


Example Output
Output 1:
    9
Output 2:
    6


Example Explanation*
Explaination 1:
    starting from backside:
    * : () * ()
    3 : () * (3)
    + : (() + ()) * (3)
    1 : (() + (1)) * (3)
    2 : ((2) + (1)) * (3)
    ((2) + (1)) * (3) = 9
Explaination 2:
    + : () + ()
    / : () + (() / ())
    5 : () + (() / (5))
    13 : () + ((13) / (5))
    4 : (4) + ((13) / (5))
    (4) + ((13) / (5)) = 6

*/


int Solution::evalRPN(vector<string> &str) {
    stack<int> s;
    for(int i=0; i<str.size(); i++){
        if(str[i]=="+" or str[i]=="-" or str[i]=="*" or str[i]=="/"){
            int operand2 = s.top();
            s.pop();
            int operand1 = s.top();
            s.pop();
            int val;
            if(str[i]=="+") val = operand1 + operand2;
            else if(str[i]=="-") val = operand1 - operand2;
            else if(str[i]=="*") val = operand1 * operand2;
            else val = operand1 / operand2;
            s.push(val);
        }
        else s.push(stoi(str[i]));
    }
    return s.top();
}
