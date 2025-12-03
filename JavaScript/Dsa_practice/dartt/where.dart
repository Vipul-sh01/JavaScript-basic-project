void main(){
  List<int> a = [1,2,3,4,5];
  
  var b = a.where((e)=> e>3).toList(); // where is higher order fuction that is used it for fillter the element from list based on condtion;
  print(b);

  var s = 0;
  b.forEach((e){ // forEach is used used for applised fuction of each element in list;
    s = s+e;
  });

  print(s);

  List<String>d = b.map((e) => "$e " + "vipul").toList(); // map is used for the transformed the each element for the list and return the list;
  print(d);

  List<String>f = [];
  for(int i = 0; i<b.length; i++){
    f.add("${b[i]} Vipul");
  }
  print(f);
}