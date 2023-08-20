class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
  
        int n = digits.size();
        int a = digits[n-1]+1;
        int c = a/10;
        int d = a%10;

    //   not for all cases.
    // if(c==0){
    //     digits[n-1]=a%10;
    // }
    // else{
    //     digits.push_back(0);
    //     digits[n-1]=c;  
    // }


    // ṃethod 2

    for(int i=n-1; i>=0;i--){
        if(digits[i]!=9){
            digits[i]++;
            break;
        }
        else{
            digits[i]=0;
        }
    }
    if(digits[0]==0){
            digits.push_back(0);
            digits[0]=1;
        }

        return digits;
    }
};
