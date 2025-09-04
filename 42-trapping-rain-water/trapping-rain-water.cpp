class Solution {
public:
    int trap(vector<int>& height) {
     stack <int> st;
     stack <int> st2;
     int ptr=0; int ans=0;
    
    for (int i=0; i<height.size(); i++){
        int x =i-ptr; x*=height[ptr];
        while (!st.empty()&&(height[ptr]<=height[i])){
            x-=height[st.top()];
            st.pop();
            if (st.empty()){
                ans+=x;
                ptr=i;
                break;
            }
         }
            st.push(i);
    }



        vector<int> v;
        int s = st.size();
        for (int i=0; i<s; i++){
            int num=height[st.top()];
            v.push_back(num);
            st.pop();
        }
       ptr=0;
        for (int i=0; i<v.size();i++){
            int x =i-ptr; x*=v[ptr];
            while (!st2.empty()&&(v[ptr]<=v[i])){
                      x-=v[st2.top()];
                      st2.pop();
                      if (st2.empty()){
                          ans+=x;
                          ptr=i;
                      }
                }
                st2.push(i);
        }
        
        return ans;


    }
};