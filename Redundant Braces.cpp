int Solution::braces(string A) {
    stack<int> s;
    
    for(int i=0;A[i] !='\0';i++)
    {
        
        if(A[i] == ')')
        {
            char top = s.top();
            s.pop();
            bool flag = true;
            
            while(top != '(')
            {
                
                if(top == '+' || top =='-' || top == '*' || top =='/')
             flag = false;
             top = s.top();
                s.pop();
            }
            if(flag == true)
        {
            return true;
        }
        }
        else
         s.push(A[i]);
        
        
    }
    return false;
      
}

