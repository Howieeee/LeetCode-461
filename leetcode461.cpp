class Solution {
public:
    string to_binary(int num){
        string b;
        while(num){
            b += num%2 +'0';
            num/=2;
        }
        return b;
    }
    int hammingDistance(int x, int y) {
        string s_x,s_y;
        if(x==y)
            return 0;
        
        s_x = to_binary(x);
        s_y = to_binary(y);
        
        int dif;
        if(s_x.size()>= s_y.size()){ //x比較長
            dif = s_x.size() - s_y.size();
            while(dif--){
                s_y+='0';
            }
        }else{//y比較長
            dif = s_y.size() - s_x.size();
            while(dif--)
                s_x += '0';
        }
        int count = 0;
        for(int i=0;i<s_x.size();i++)
            if(s_x[i]!=s_y[i])
                count++;
        
        //cout << s_x << "  "  << s_y;
        
        return count;
        
    }
};
