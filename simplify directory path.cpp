string Solution::simplifyPath(string A) {
    
      stack<string> s1; 
  
   
    string dir; 
  
     
    string res; 
  
    
    res.append("/"); 
  
    
    int len_A = A.length(); 
  
    for (int i = 0; i < len_A; i++) { 
  
         
        dir.clear(); 
  
       
        while (A[i] == '/') 
            i++; 
            while (i < len_A && A[i] != '/') { 
            dir.push_back(A[i]); 
            i++; 
        } 
  
      
        if (dir.compare("..") == 0) { 
            if (!s1.empty())  
                s1.pop();             
        } 
  
       
        else if (dir.compare(".") == 0)  
            continue; 
          
         
        else if (dir.length() != 0)  
            s1.push(dir);         
    } 
  
    
    stack<string> s2; 
    while (!s1.empty()) { 
        s2.push(s1.top()); 
        s1.pop(); 
    } 
  
    
    while (!s2.empty()) { 
        string temp = s2.top(); 
          
    
        if (s2.size() != 1) 
         res.append(temp + "/"); 
        else
            res.append(temp); 
  
        s2.pop(); 
    } 
  
    return res; 
}
