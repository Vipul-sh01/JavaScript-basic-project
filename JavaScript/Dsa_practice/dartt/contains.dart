void main(){
  List<int>ns = [1,1,2,3,3];
  List<int>u = [];

  for(int i in ns){
    if(!u.contains(i)){ // contains checks if the list already has the element. // It is a method that checks for the presence of an element in the list.
      u.add(i);
    }
  }
  print(u);
}