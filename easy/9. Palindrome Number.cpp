class Solution {
public:
    bool isPalindrome(int x){
    if(x<0 || x!=0 && x%10 ==0 ) {
        return false;
    }
    int i=0;
    while(x > i){
        i = i*10 + x%10;
        x/=10;
    }
    if(x==i || x==i/10){ // x == i/10 是判斷奇數位
        return true;
    }
    else return false;
}
};
