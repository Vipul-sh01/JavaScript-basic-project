typedef opertiond = Function (int a, int b);

int calculate(int a, int b, opertiond op){
  return a+b;
}

void main(){
  print(calculate(2, 4, (x,y) => x+y));
}