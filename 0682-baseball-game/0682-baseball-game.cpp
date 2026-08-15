class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stack;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
                int top1=stack.top();stack.pop();
                int top2=stack.top();
                stack.push(top1);
                stack.push(top1+top2);
            }
            else if(operations[i]=="D"){
                stack.push(2*stack.top());
            }
            else if(operations[i]=="C"){
                stack.pop();
            }
            else{
                stack.push(stoi(operations[i]));
            }
        }
       int total=0;
       while(!stack.empty()){
        total+=stack.top();
        stack.pop();
       }
       return total;
    }
};