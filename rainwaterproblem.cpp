stack<int>index;
    int ans=0,current=0;
    while(current<A.size())
    {
        while(!index.empty() && A[current]>A[index.top()])
        {
             int top=index.top();index.pop();
                if(index.empty())
                    break;
                int distance=current-index.top()-1;
                int space=min(A[current],A[index.top()])-A[top];
                ans=ans+distance*space;
                
            
        }
        index.push(current);
        current++;
    }
    return ans;
    
    //Yeh hum khudh kiye they par garmi mein
