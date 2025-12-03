void main(){
  List<int>a = [1,2,3,4,5];

  int s = 0;
  a.forEach((e){ // forEach is a method that applies a function to each element in the list. why this is not a loop?
    // It is not a loop because it is a higher-order function that takes a function as an argument and applies it to each element of the list.
    s = s+e;
  });

  print(s);
}