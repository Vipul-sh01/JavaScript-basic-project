class MyApp{
  final String name;
  MyApp(this.name);

  void sayGreed(name){
    print('hello ${name}');
  }
}


void main(){
  final MyApp myApp = MyApp('vikash');
  myApp.sayGreed('vipul');
}