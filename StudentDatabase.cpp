#include<bits/stdc++.h>
using namespace std;
long long btech_no=9921103001;
long long bba_no=  9922103001;
long long bcom_no =9923103001;
class student{
    public:
    string name;
    long long roll_no;
    int age;
    string course;

    student(){

    }
    void addStudent(){
        cout<<"Enter name of student -> ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter the age -> ";
        cin>>age;
        cout<<"Enter the desired course -> ";
        cin>>course;
        if(course=="BTech"){
            roll_no=btech_no++;
        }
        else if(course=="BBA"){
            roll_no=bba_no++;
        }
        else if(course=="BCom"){
            roll_no=bcom_no++;
        }
        else{
            cout<<"Invalid course";
            return;
        }
        cout<<"Student added successfully"<<endl;
        cout<<"Roll Number Alloted --> "<<roll_no<<endl;;
    }
    void display_info(){
        cout<<endl<<name;
        cout<<endl<<age;
        cout<<endl<<course;
        cout<<endl<<roll_no;
    }
    
};

int main(){
    vector<student>db;
    int option=0;
    int num=1;
    while(num==1){
        cout<<endl<<num++<<") Add Student";
        cout<<endl<<num++<<") Search Student by Roll Number";
        cout<<endl<<num++<<") Delete Student by Roll Number";
        cout<<endl<<num++<<") Display All Students";
        cout<<endl<<num++<<") Exit"<<endl;
        cin>>option;
        num=1;
        if(option==1){
            student s;
            s.addStudent();
            db.push_back(s);
        }
        if(option == 2){
            cout<<"Enter the roll number to be searched ->";
            long long s_roll;
            bool found=false;
            cin>>s_roll;
            for(int i=0;i<db.size();i++){
                if(db[i].roll_no==s_roll){
                    cout<<"Student Found";
                    db[i].display_info();
                    found=true;
                    break;
                }
                
            }
            if(!found){
                cout<<"Student Not Found";
                }
        }
        if(option==3){
            
            cout<<"Enter the roll number to be deleted ->";
            long long d_roll;
            bool found=false;
            cin>>d_roll;
            for(int i=0;i<db.size();i++){
                if(db[i].roll_no==d_roll){
                    cout<<"Student Deleted";
                    db[i].erase();
                    found=true;
                    break;
                }
                
            }
            if(!found){
                cout<<"Student Not Found";
                }
        }
        if(option==5){
            return 0;
        }
    }
    return 0;
}