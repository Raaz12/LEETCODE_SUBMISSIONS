class Solution {
public:
    int getLucky(string s, int k) {
        
        string  num="";
        
        for (char c : s ) {
            
            int letter_conversion = (c-'0') - 48 ;
            
            while(letter_conversion>0) {
                
                num += char('0' + letter_conversion%10);
                
                letter_conversion /= 10;
                
            }
        }
        int sum;
        while( k-- > 0 ){
            sum = 0;
            for( char d : num  ) {
                sum += d - '0';
            }
            num = to_string(sum);
        }
        return sum;
    }
};