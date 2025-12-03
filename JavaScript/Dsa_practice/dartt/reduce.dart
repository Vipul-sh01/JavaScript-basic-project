void main(){
  List<int>a = [1,2,3,5,6];

  var b = a.reduce((a,b) => a+b); // reduce is higher order function Combines all elements into a single value
  print(b);
}