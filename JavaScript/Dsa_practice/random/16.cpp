#include<iostream>
using namespace std;

class sayMyname{
    private:
    string name;
    int age;


    void say(string name,int age){
        this->name = name;
        this->age = age;
        cout<<this->name<<" "<<this->age<<endl;
    }


    public:
    int amount;
    
    string getname(){
        return name.toUppercase();
    }

    int getage(){
        return age;
    }

    void setAndSay(string name, int age) {
        say(name, age); 
    }
};

class sayYourname : public sayMyname{

};

int main(){
    sayYourname obj;
    sayMyname obj1;
    obj.setAndSay("vipul", 21);
    cout << obj.getname() << endl;
    cout << obj.getage() << endl;

    int a = obj1.amount = 500;
    obj1.setAndSay("sakshi", 21);
    cout<<a<<endl;

    return 0;
}