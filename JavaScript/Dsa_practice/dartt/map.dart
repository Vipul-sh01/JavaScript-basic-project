void main(){
  List<int>a = [1,2,3,4,5];

  List<String>d = a.map((e) => "$e " + "vipul").toList(); // map is a method that transforms each element in the list.
  print(d);

}