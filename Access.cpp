#include <iostream>
using namespace std;
//Basic Class write
class Students{

    // By default it will be private ok
    //Access Modifier
    private:
    //Data Of User
    string name;
    int age;
    int roll_no;
    string grade;
    public:

    //Funtin Getter and Setter 
    void setName(string s){
        if(s.size() == 0){
            cout<<"Invalid name !"<<endl;
            return;
        }
        name = s;
    }
    void setAge(int a){
        
        age = a;
    }
    void setrollNo(int r){
        roll_no = r;
    }
    void setGrade(string g){
        grade = g;
    }

    //u can access all 
    //Getter function used for access the data 

    void getName(){
        cout<<name;
    }
}; // this symbol should be other may occur error 
int main()
{
    //Object Create using any variable like s1, v1 as u wish 
    Students s1;
    // This is a way  to initialized the value to each variable 
    s1.setName("");
    s1.setAge(20);
    s1.setrollNo(25);
    s1.setGrade("A+");
    s1.getName();
return 0;
}