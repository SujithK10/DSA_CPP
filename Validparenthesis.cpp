 bool isValid(string s) {
   
        stack< char > stack;
        bool f=1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                stack.push(s[i]);
               
            }
            else
            {  if(!stack.empty())
                {
                if(s[i]==')')
                {
                    if(stack.top()=='(' )
                        stack.pop();
                    else
                    {f=0;
                    break;}
                }
                
                if(s[i]=='}')
                {
                    if(stack.top()=='{')
                        stack.pop();
                    else
                    {
                        f=0;
                        break;
                    }
                }
                if(s[i]==']')
                {
                    if(stack.top()=='[')
                        stack.pop();
                    else
                    {
                        f=0;
                        break;
                    }
                }
                }
             else
             {
                f=0;
                break;
             }
            
            }
        }
       
        
        return (f && stack.empty());
        
    }
    
