class Solution {
    void evaluate(stack<char>& oper, stack<char>& operand){
        char op=oper.top();//Get the operator at the top
        oper.pop();

        bool ans;//always true 

        if(op=='|'){ //ye operator liye h
            ans=false;//always false krna h
            while(operand.top()!='('){
                ans |=(operand.top()=='t');
                operand.pop();
            }
        operand.pop();//nikal lege 
        }
    else if(op=='&'){
        ans =true;//for initial and operator is always true
        while(operand.top()!='('){
            ans &=(operand.top()=='t');
            operand.pop();
        }
        operand.pop();
    } 
    else if(op=='!'){
        ans=(operand.top()=='t');
        ans = !ans;
        operand.pop();
        operand.pop();
    }
    if(ans)operand.push('t');
    else operand.push('f');
    }
public:
    bool parseBoolExpr(string expression) {
        stack<char>oper,operand;
        int index=0;

        while(expression[index]){
            if(expression[index]=='!' || expression[index]=='&' || expression[index]=='|'){
                oper.push(expression[index]);//push operators
            }
            else if(expression[index]=='t' || expression[index]=='f'){
                operand.push(expression[index]);//push operands
            }
            else if(expression[index]=='('){
                operand.push(expression[index]);//push opening parathenis
            }
            else if(expression[index]==')'){
                evaluate(oper, operand);//evaluate when closing paranthesis is closed
            }
            index++;
        }
        return operand.top()=='t';
    }
};
