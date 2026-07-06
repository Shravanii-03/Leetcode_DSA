#optimal
class solution{
public:
bool checkith(int n, int i){
if(n&(1<<i)!=0){
return true;}

}
return false;
};


#brute force
class solution{
public:

bool check(int n, int i){
string binary="";
while(n>0){
if(n%2==1){
binary+='1';}
else binary+='0';
n=n/2;
}
if(i>=binary.size())return false;

return binary[i]=='1';
}

};