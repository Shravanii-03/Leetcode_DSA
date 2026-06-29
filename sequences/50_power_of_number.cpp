#brute
class Solution {
public:
    double myPow(double x, int n) {
        long long temp=n;

        if(n==0 || x==1) return 1;

        if(n<0){
            x=1/x;
            temp=-1*1LL*n;

        }
    double ans=1;

    for(int i=0;i<temp;i++){
        ans*=x;
    }
    return ans;
    }
};


#optimal recurssion
class Solution {
public:
    double power(double x, long long n){
        if(x==1 || n==0){
            return 1;
        }
        if(n==1) return x;

        if(n%2==0){
            return power(x*x, n/2);
        }

        return x*power(x, n-1);
    }
    double myPow(double x, int n) {
        long long  num=n;

        if(num<0){
            return (1/power(x, -1* num));
        }
        return power(x,num);
    }
};