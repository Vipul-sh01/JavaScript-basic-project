 #include<iostream>
 using namespace std;


 class count{
   public:
   int fun(int n){
      if(n==0){
         return 0;
      }
      cout<<n<<" ";
      fun(n-1);
      
   }
 };

 int main(){
    int n;
    cin>>n;
    count obj;
    obj.fun(n);
 }