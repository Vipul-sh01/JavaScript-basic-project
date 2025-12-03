import java.util.ArrayList;
import java.util.List;

class Callgirl{
    private String name;
    private int age;

    public Callgirl(String name, int age){
        this.name = name;
        this.age = age;
    }

    public String getName(){
        return name;
    }

    public void setName(String name){
        this.name = name;
    }

    public int getAge(){
        return age;
    }

    public void setAge(int age){
        this.age = age;
    }

    @Override
    public String toString() {
    return "Name: " + name + ", Age: " + age;
}

}


public class Pojo{
    public static void main(String[] args){
        List<Callgirl>girls = new ArrayList<>();
        girls.add(new Callgirl("vipul sharma", 25));
        girls.add(new Callgirl("vipul", 18));

        for(Callgirl Val: girls ){
            System.out.println(Val);
        }
    }
}