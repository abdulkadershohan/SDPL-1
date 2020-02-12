#include<bits/stdc++.h>
using namespace std;
void admin_login();
void admin_panel();
void added_Course_in_Current_semester();
void  modify_or_delete_current_semester_course();
void  modify_or_delete_previous_semester_course();
void delete_current_semester_course();
void delete_previous_semester_course();
void modify_current_semester_course();
void modify_previous_semester_course();
void myfunction1(string del);
void myfunction2(string de2);
void myfunction3(string del3);
void  myfunction4(string del4);
void student_befor_login();
void student_login();
void create_account();
void student_panel();
void forget_password();
void cgpa_calculator();
void view_current_semester_course();
void view_privious_semester_course();
void view_student_result();
void view_all_student_result();

int main()
{
    char choice;
    cout<<"------------------------------------------------\n";
    cout<<"Enter 1 For Student Login "<<endl;
    cout<<"Enter 2 For Admin Login "<<endl;
    cin>>choice;
    cout<<"\n\n------------------------------------------------\n";
    if(choice=='1')
    {
        student_befor_login();
    }
    else if(choice =='2')
    {
        system("cls");
        admin_login();
    }
    else
    {
        cout<<"\n\n--------------You Enter Wrong Number Try Again--------------"<<endl;
        return main();

    }
}

void  myfunction4(string del4)
{
    string line,course_code,course_code1,course_code2,course_name,credit,intake,number;
    ifstream f1;
    ofstream f2;
    f1.open("Current Semester Course.txt");
    if(f1.is_open())
    {
        f2.open("temp.txt");
        if(f2.is_open())
        {
            while(getline(f1,line))
            {
                if(line==del4)
                {
                    cout<<"Enter Course Code : ";
                    cin>>course_code1>>course_code2;
                    course_code=course_code1+" "+course_code2;
                    cout<<"Enter Course Name : ";
                    cin>>course_name;
                    cout<<"Enter Credit : ";
                    cin>>credit;
                    cout<<"Enter Intake-Sec : ";
                    cin>>intake;
                    cout<<"Enter Total Number : ";
                    cin>>number;
                    f2<<course_code<<" "<<course_name<<" "<<credit<<" "<<intake<<" "<<number<<endl;
                }
                else
                {
                    f2<<line<<endl;
                }
            }
        }
        else
        {
            cout<<"\n--------------File is not open--------------"<<endl;
        }
    }
    else
    {
        cout<<"\n--------------File is not open--------------"<<endl;
    }
    f1.close();
    f2.close();
    remove("Current Semester Course.txt");
    rename("temp.txt","Current Semester Course.txt");
    ///

}
void myfunction3(string del3)
{
    string line,course_code,course_code1,course_code2,course_name,credit,intake,number;
    ifstream f1;
    ofstream f2;
    f1.open("Previous Course Information.txt");
    if(f1.is_open())
    {
        f2.open("temp.txt");
        if(f2.is_open())
        {
            while(getline(f1,line))
            {
                if(line==del3)
                {
                    cout<<"Enter Course Code : ";
                    cin>>course_code1>>course_code2;
                    course_code=course_code1+" "+course_code2;
                    cout<<"Enter Course Name : ";
                    cin>>course_name;
                    cout<<"Enter Credit : ";
                    cin>>credit;
                    cout<<"Enter Intake-Sec : ";
                    cin>>intake;
                    cout<<"Enter Total Number : ";
                    cin>>number;
                    f2<<course_code<<" "<<course_name<<" "<<credit<<" "<<intake<<" "<<number<<endl;
                }
                else
                {
                    f2<<line<<endl;
                }
            }
        }
        else
        {
            cout<<"\n--------------File is not open--------------"<<endl;
        }
    }
    else
    {
        cout<<"\n--------------File is not open--------------"<<endl;
    }
    f1.close();
    f2.close();
    remove("Previous Course Information.txt");
    rename("temp.txt","Previous Course Information.txt");
    ///
}
void myfunction2(string de2)
{
    char a;
    string line;
    ifstream f1;
    ofstream f2;
    f1.open("Current Semester Course.txt");
    if(f1.is_open())
    {
        f2.open("temp.txt");
        if(f2.is_open())
        {
            while(getline(f1,line))
            {
                if(line==de2)
                {
                    continue;
                }
                else
                {
                    f2<<line<<endl;
                }
            }
        }
        else
        {
            cout<<"\n--------------File is not open--------------"<<endl;
        }
    }
    else
    {
        cout<<"\n--------------File is not open--------------"<<endl;
    }
    f1.close();
    f2.close();
    remove("Current Semester Course.txt");
    rename("temp.txt","Current Semester Course.txt");
    cout<<"\n\nDid You Want to Delete Another Course ?(Y/N) : ";
    cin>>a;
    if(a=='Y' ||a=='y')
    {
        system("cls");
        delete_current_semester_course();
    }
    else if(a=='n'||a=='N')
    {
        cout<<"--------------Enter B For Back--------------";
        cin>>a;
        if(a=='B' || a=='b')
        {
            system("cls");
            modify_or_delete_current_semester_course();
        }
        else
        {
            cout<<"\n-------Wrong Input! Exit The Program!-----"<<endl;
            exit(0);
        }
    }
    else
    {
        cout<<"\n-------Wrong Input! Exit The Program!-----"<<endl;
        exit(0);
    }
}
void myfunction1(string del)
{
    char a;
    string line;
    ifstream f1;
    ofstream f2;
    f1.open("Previous Course Information.txt");
    if(f1.is_open())
    {
        f2.open("temp.txt");
        if(f2.is_open())
        {
            while(getline(f1,line))
            {
                if(line==del)
                {
                    continue;
                }
                else
                {
                    f2<<line<<endl;
                }
            }
        }
        else
        {
            cout<<"\n--------------File is not open--------------"<<endl;
        }
    }
    else
    {
        cout<<"\n--------------File is not open--------------"<<endl;
    }
    f1.close();
    f2.close();
    remove("Previous Course Information.txt");
    rename("temp.txt","Previous Course Information.txt");
    cout<<"\n\nDid You Want to Delete Another Course ?(Y/N) : ";
    cin>>a;
    if(a=='Y' ||a=='y')
    {
        system("cls");
        delete_previous_semester_course();
    }
    else if(a=='n'||a=='N')
    {
        cout<<"--------------Enter B For Back--------------";
        cin>>a;
        if(a=='B' || a=='b')
        {
            system("cls");
            modify_or_delete_previous_semester_course();
        }
        else
        {
            cout<<"\n-------Wrong Input! Exit The Program!-----"<<endl;
            exit(0);
        }
    }
    else
    {
        cout<<"\n-------Wrong Input! Exit The Program!-----"<<endl;
        exit(0);
    }

}
void modify_previous_semester_course()
{
    char a;
    int x;
    string line,course_code,course_code1,course_code2,code1,code2,title,intake,number,credit,deleteline;

    ifstream myfile;
    myfile.open("Previous Course Information.txt");
    if(myfile.is_open())
    {
        cout<<"\n-------------------------------------------------------\n"<<endl;
        cout<<"Enter the Course Code to Modify : ";
        cin>>course_code1>>course_code2;
        course_code=course_code1+" "+course_code2;
        while(myfile>>code1)
        {
            myfile>>code2>>title>>credit>>intake>>number;
            deleteline=code1+" "+code2+" "+title+" "+credit+" "+intake+" "+number;
            if(course_code==code1+" "+code2)
            {
                cout<<"\n------------Course Match ! Processing...."<<endl;
                x=10;
                myfile.close();
                myfunction3(deleteline);
            }
        }
        if(x!=10)
        {
            cout<<"\n--------------Course Not Found !-------------"<<endl;
            cout<<"\n\nEnter 1 For Try Again"<<endl;
            cout<<"Enter 2 For Back"<<endl;
            cin>>a;
            if(a=='1')
            {
                modify_previous_semester_course();
            }
            else if(a=='2')
            {
                modify_or_delete_previous_semester_course();
            }
            else
            {
                cout<<"\n\n----------------Wrong Input Exit !--------------"<<endl;
                exit(0);
            }

        }
        if(x==10)
        {
            cout<<"\n\nWould You Like to Modify Another Course ?(Y/N)"<<endl;
            cin>>a;
            if(a=='y'|| a=='Y')
            {
                modify_previous_semester_course();
            }
            else if(a=='N' || a=='n')
            {
                cout<<"\n----------Enter B For Back---------"<<endl;
                cin>>a;
                if(a=='B' || a=='b')
                {
                    system("cls");
                    modify_or_delete_previous_semester_course();
                }
                else
                {
                    cout<<"\n\n----------------Wrong Input Exit !--------------"<<endl;
                    exit(0);

                }
            }
            else
            {
                cout<<"\n\n----------------Wrong Input Exit !--------------"<<endl;
                exit(0);
            }

        }
    }
    else
    {
        cout<<"\n--------------File is not open--------------"<<endl;
    }

}
void modify_current_semester_course()
{
    int x;
    char a;
    string line,course_code,course_code1,course_code2,code1,code2,title,intake,number,credit,deleteline;

    ifstream myfile;
    myfile.open("Current Semester Course.txt");
    if(myfile.is_open())
    {
        cout<<"\n-------------------------------------------------------\n"<<endl;
        cout<<"Enter the Course Code to Modify : ";
        cin>>course_code1>>course_code2;
        course_code=course_code1+" "+course_code2;
        while(myfile>>code1)
        {
            myfile>>code2>>title>>credit>>intake>>number;
            deleteline=code1+" "+code2+" "+title+" "+credit+" "+intake+" "+number;
            if(course_code==code1+" "+code2)
            {
                cout<<"\n------------Course Match ! Processing...."<<endl;
                x=10;
                myfile.close();
                myfunction4(deleteline);
            }
        }
        if(x!=10)
        {
            cout<<"\n--------------Course Not Found !-------------"<<endl;
            cout<<"\n\nEnter 1 For Try Again"<<endl;
            cout<<"Enter 2 For Back"<<endl;
            cin>>a;
            if(a=='1')
            {
                modify_current_semester_course();
            }
            else if(a=='2')
            {
                modify_or_delete_current_semester_course();
            }
            else
            {
                cout<<"\n\n----------------Wrong Input Exit !--------------"<<endl;
                exit(0);
            }
        }
        if(x==10)
        {
            cout<<"\n\nWould You Like to Modify Another Course ?(Y/N)"<<endl;
            cin>>a;
            if(a=='y'|| a=='Y')
            {
                modify_current_semester_course();
            }
            else if(a=='N' || a=='n')
            {
                cout<<"\n----------Enter B For Back---------"<<endl;
                cin>>a;
                if(a=='B' || a=='b')
                {
                    system("cls");
                    modify_or_delete_current_semester_course();
                }
                else
                {
                    cout<<"\n\n----------------Wrong Input Exit !--------------"<<endl;
                    exit(0);

                }
            }
            else
            {
                cout<<"\n\n----------------Wrong Input Exit !--------------"<<endl;
                exit(0);
            }

        }

    }
    else
    {
        cout<<"\n--------------File is not open--------------"<<endl;
    }
}
void delete_current_semester_course()
{

    int x;
    string line,course_code,course_code1,course_code2,code1,code2,title,intake,number,credit,deleteline;

    ifstream myfile;
    myfile.open("Current Semester Course.txt");
    if(myfile.is_open())
    {
        cout<<"\n-------------------------------------------------------\n"<<endl;
        cout<<"Enter the Course Code to Delete : ";
        cin>>course_code1>>course_code2;
        course_code=course_code1+" "+course_code2;
        while(myfile>>code1)
        {
            myfile>>code2>>title>>credit>>intake>>number;
            deleteline=code1+" "+code2+" "+title+" "+credit+" "+intake+" "+number;
            if(course_code==code1+" "+code2)
            {
                cout<<"\n------------Course Match ! Processing...."<<endl;
                cout<<"\n.........\n.......\n.....\n          DONE !"<<endl;
                x=10;
                myfile.close();
                myfunction2(deleteline);
            }
        }
        if(x!=10)
        {
            cout<<"\n--------------No Course Found !-------------"<<endl;
        }
    }
    else
    {
        cout<<"\n--------------File is not open--------------"<<endl;
    }

}
void delete_previous_semester_course()
{

    int x;
    string line,course_code,course_code1,course_code2,code1,code2,title,intake,number,credit,deleteline;

    ifstream myfile;
    myfile.open("Previous Course Information.txt");
    if(myfile.is_open())
    {
        cout<<"\n-------------------------------------------------------\n"<<endl;
        cout<<"Enter the Course Code to Delete : ";
        cin>>course_code1>>course_code2;
        course_code=course_code1+" "+course_code2;
        while(myfile>>code1)
        {
            myfile>>code2>>title>>credit>>intake>>number;
            deleteline=code1+" "+code2+" "+title+" "+credit+" "+intake+" "+number;
            if(course_code==code1+" "+code2)
            {
                cout<<"\n------------Course Match ! Processing...."<<endl;
                cout<<"\n.........\n.......\n.....\n          DONE !"<<endl;
                x=10;
                myfile.close();
                myfunction1(deleteline);
            }
        }
        if(x!=10)
        {
            cout<<"\n--------------Course Not Found !-------------"<<endl;
        }
    }
    else
    {
        cout<<"\n--------------File is not open--------------"<<endl;
    }
}
void view_all_student_result()
{
    system("cls");
    char a;
    string id,w2,w3,w4;
    ifstream myfile;
    myfile.open("view result.txt");
    if (myfile.is_open())
    {
        cout<<"\n-------------View Data From File---------------\n\n"<<endl;
        while(myfile>>id)
        {

            myfile>>w2>>w3>>w4;
            cout<<"-------------------------------------------------------"<<endl;
            cout<<"Student Id : "<<id<<endl<<"Student Name : "<<w2<<" "<<w3<<endl<<"Student CGPA : "<<w4<<endl;
            cout<<"-------------------------------------------------------"<<endl;
        }
    }
    else
    {
        cout<<"--------------------File Is not Open--------------------"<<endl;
    }
    myfile.close();
    cout<<"Enter B For Back or Any For Exit"<<endl;
    cin>>a;
    if(a=='B' || a=='b')
    {
        system("cls");
        admin_panel();
    }
    else
    {
        exit(0);
    }
    myfile.close();
}

void view_student_result()
{
    char a;
    string id,fid,w2,w3,w4;
    int x;
    ifstream myfile;
    myfile.open("view result.txt");
    if (myfile.is_open())
    {
        cout<<"Enter The Id to view result: ";
        cin>>id;
        while(myfile>>fid)
        {
            if(fid==id)
            {
                myfile>>w2>>w3>>w4;
                cout<<"-------------------------------------------------------"<<endl;
                cout<<"Student Id : "<<id<<endl<<"Student Name : "<<w2<<" "<<w3<<endl<<"Student CGPA : "<<w4<<endl;
                cout<<"-------------------------------------------------------"<<endl;
                x=1;
            }
        }
        if (x!=1)
        {
            cout<<"\n------------Result Not Found ! Try Again------------"<<endl;
          ///  view_student_result();

        }
        cout<<"\n\nDid You See Result Again ?(Y/N)"<<endl;
        cin>>a;
        if(a=='Y' || a=='y')
        {
            view_student_result();
        }
        else if(a=='N' || a=='n')
        {
            student_panel();
        }
        else
        {
            cout<<"\n\n-------------Wrong Input --------"<<endl;
           cout<<"-------------Exit The Program !--------------"<<endl;
           exit(0);
        }
    }
    else
    {
        cout<<"--------------------File Is not Open--------------------"<<endl;
    }
    myfile.close();
}
void create_account()
{
    string id,password;
    ofstream myfile;
    myfile.open("Student login.txt");
    if (myfile.is_open())
    {
        cout<<"-------------------------------------------"<<endl;
        cout<<"Enter The Id : ";
        cin>>id;
        cout<<"Enter The Password : ";
        cin>>password;
        myfile<<id<<" "<<password;
        system("cls");
        myfile.close();
        cout<<"------------Welcome to Login Panel------------\n\n"<<endl;
        student_login();
    }
    else
    {
        cout<<"--------------------File Is not Open--------------------"<<endl;
    }
}
void student_befor_login()
{
    system("cls");
    cout<<"-----------------Enter B For Back------------\n"<<endl;
    char a;
    cout<<"Enter 1 For Login "<<endl;
    cout<<"Enter 2 For Create Account"<<endl;
    cout<<"Enter 3 For Forget Password"<<endl;
    cin>>a;
    if(a=='1')
    {
        system("cls");
        student_login();
    }
    else if(a=='2')
    {
        system("cls");
        create_account();
    }
    else if(a=='3')
    {
        system("cls");
        forget_password();
    }
    else if(a=='b' || a=='B')
    {
        main();
    }
    else
    {
        system("cls");
        cout<<"\n\n------------You Enter Wrong Number------------\n\n"<<endl;
        student_befor_login();
    }
}

void forget_password()
{
    char a;
    string id,password;
    string fid;
    ifstream myfile;
    ofstream myfile2;
    myfile.open("Student login.txt");
    if (myfile.is_open())
    {
        cout<<"----------------------------------"<<endl;
        cout<<"Enter Your Id To Forget : ";
        cin>>id;
        myfile>>fid;
        if(fid==id)
        {
            myfile2.open("Student login.txt");
            if(myfile2.is_open())
            {
                system("cls");
                cout<<"Enter Id : ";
                cin>>id;
                cout<<"Enter New Password : ";
                cin>>password;
                myfile2<<id<<" "<<password;
                cout<<"\n\n------------Forget Password Successfully----------------"<<endl;
                myfile2.close();
             cout<<"\n------------Welcome to Login Panel------------\n\n"<<endl;
                student_login();

            }
            else
            {
                cout<<"--------------------File Is not Open--------------------"<<endl;

            }


        }
        else
        {
            cout<<"\n\n\n------------Id didn't Match------------\n\n"<<endl;

        }
        myfile.close();
        cout<<"\nEnter T For Try Again"<<endl;
        cout<<"Enter B For Back"<<endl;
        cin>>a;
        if(a=='T' || a=='t')
        {
             system("cls");
             forget_password();
        }
        else if(a=='b' || a=='B')
        {
            student_befor_login();
        }
        else
        {
            forget_password();
        }
    }
    else
    {
        cout<<"--------------------File Is not Open--------------------"<<endl;
    }

}

void student_login()
{
    char a;
    string id,password;
    string fid,fpassword;
    ifstream myfile; ///reading from file
    myfile.open("Student login.txt");
    if (myfile.is_open())
    {
        cout<<"----------------------------------"<<endl;
        cout<<"Enter Your Id : ";
        cin>>id;
        cout<<"Enter Your Password : ";
        cin>>password;
        myfile>>fid>>fpassword;
        if(fid==id && fpassword==password)
        {
            student_panel();
        }
        else
        {
            cout<<"\n\n------------Your password does not match------------\n\n"<<endl;
            cout<<"Enter 1 For Try Again"<<endl;
            cout<<"Enter 2 For Forget Password "<<endl;
            cout<<"Enter B For back"<<endl;
            cin>>a;
            if(a=='1')
            {
                system("cls");
                student_login();
            }
            else if(a=='2')
            {
                system("cls");
                forget_password();
            }
            else if(a=='b' || a=='B')
            {
                student_befor_login();
            }
            else
            {
                cout<<"\n-----------Wrong Input Try Again !-----------------"<<endl;
                student_login();
            }
        }
        myfile.close();
    }
    else
    {
        cout<<"--------------------File Is not Open--------------------"<<endl;
    }


}
void view_current_semester_course()
{
    char a;
    string code1,code2,title,Credit,intake,number;
    ifstream myfile;
    myfile.open("Current Semester Course.txt");
    if(myfile.is_open())
    {
        cout<<"\n-------------------------------------------------------\n"<<endl;
        while(myfile>>code1)
        {
            myfile>>code2>>title>>Credit>>intake>>number;
            cout<<"Course Code : "<<code1<<" "<<code2<<endl;
            cout<<"Course name : "<<title<<endl;
            cout<<"Course Credit : "<<Credit<<endl;
            cout<<"Intake-Sec : "<<intake<<endl;
            cout<<"Total Number : "<<number<<endl;
            cout<<"-------------------------------------------------"<<endl;

        }
        myfile.close();

    }
    else
    {
        cout<<"\n--------------File is not open--------------"<<endl;
    }
    cout<<"\nEnter B For Back Or Any For exit"<<endl;
    cin>>a;
    if(a=='b' || a=='B')
    {
        system("cls");
        student_panel();
    }
    else
    {
        cout<<"\n\n--------------Exit Out--------------"<<endl;
        exit(0);
    }
}
void cgpa_calculator()
{
    int n,count_=1,number;
    double cgpa_=0,sum=0;
    char a;
    cout<<"------------------------------------------------"<<endl;
    cout<<"How Many Subject ?"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"\nEnter The Number of Subject  "<<count_<<" :: ";
        cin>>number;
        if(number >=80)
        {
            sum+=4;
        }
        else if(number >=75)
        {
            sum+=3.75;
        }
        else if(number >=70)
        {
            sum+=3.5;
        }
        else if(number >=65)
        {
            sum+=3.25;
        }
        else if(number >=60)
        {
            sum+=3.00;
        }
        else if(number >=55)
        {
            sum+=2.75;
        }
        else if(number >=50)
        {
            sum+=2.50;
        }
        else if(number >=45)
        {
            sum+=2.25;
        }
        else if(number >=40)
        {
            sum+=2.00;
        }
        else
        {
            cout<<"Fail !"<<endl;
            break;
        }
        count_++;
    }
    cgpa_=sum/n;
    cout<<"\nYour CGPA is :: "<<cgpa_<<endl;
    cout<<"Did You Want to Calculate Again ? (Y/N)"<<endl;
    cin>>a;
    if(a=='Y' || a=='y')
    {
        system("cls");
        cgpa_calculator();
    }
    else if(a=='n' || a=='N')
    {
        system("cls");
        student_panel();
    }
    else
    {
        cout<<"\n\n--------------You Enter Wrong Number--------------"<<endl;
        exit(0);
    }
}
void view_privious_semester_course()
{
    char a;
    string code1,code2,title,Credit,intake,number;
    ifstream myfile;
    myfile.open("Previous Course Information.txt");
    if(myfile.is_open())
    {
        cout<<"\n-------------------------------------------------------\n"<<endl;
        while(myfile>>code1)
        {
            myfile>>code2>>title>>Credit>>intake>>number;
            cout<<"Course Code : "<<code1<<" "<<code2<<endl;
            cout<<"Course name : "<<title<<endl;
            cout<<"Course Credit : "<<Credit<<endl;
            cout<<"Intake-Sec : "<<intake<<endl;
            cout<<"Total Number : "<<number<<endl;
            cout<<"-------------------------------------------------"<<endl;

        }
        myfile.close();
    }
    else
    {
        cout<<"\n----------File is not open----------"<<endl;
    }
    cout<<"\nEnter B For Back Or Any For exit"<<endl;
    cin>>a;
    if(a=='b' || a=='B')
    {
        system("cls");
        student_panel();
    }
    else
    {
        cout<<"\n\n--------------Exit Out--------------"<<endl;
        exit(0);
    }
}
void student_panel()
{
    system("cls");
    char a;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"Enter 1 For Calculate Your CGPA"<<endl;
    cout<<"Enter 2 For view Current Semester Course"<<endl;
    cout<<"Enter 3 For view Previous Semester Course"<<endl;
    cout<<"Enter 4 For view result"<<endl;
    cout<<"Enter 5 For Logout"<<endl;
    cin>>a;
    if (a=='1')
    {
        system("cls");
        cgpa_calculator();
    }
    else if(a=='2')
    {
        system("cls");
        view_current_semester_course();

    }
    else if(a=='3')
    {
        system("cls");
        view_privious_semester_course();
    }
    else if(a=='4')
    {
        view_student_result();
    }
    else if(a=='5')
    {
        cout<<"\n\n----------Logout Successful--------------"<<endl;
        exit(0);
    }
    else
    {
        cout<<"\n\n--------------You Enter Wrong Number--------------"<<endl;
        student_panel();
    }
}
void admin_login()
{
    string id,password;
    char a;
    cout<<"Enter Admin ID : ";
    cin>>id;
    cout<<"Enter Admin Password : ";
    cin>>password;
    if(id=="1234" || password=="Admin")
    {
        cout<<"\n\n-------------LOGIN IS SUCCESSFUL--------------\n\n\n"<<endl;
        admin_panel();
    }
    else
    {
        cout<<"\n\n----------You Enter Wrong Password --------------"<<endl;
        cout<<"Try Again ? (Y/N)"<<endl;
        cin>>a;
        if(a=='Y' || a=='y')
        {
            system("cls");
            admin_login();
        }
        else if(a=='n' || a=='N')
        {
            cout<<"--------------Exit The Program--------------"<<endl;
            exit(0);
        }
        else
        {
            cout<<"\n\n--------------You Enter Wrong Number--------------"<<endl;
            cout<<"--------------Exit The Program--------------"<<endl;
            exit(0);
        }
    }
}
void  admin_panel()
{
    char choice;
    cout<<"Enter 1 For Added Course In Current Semester"<<endl;
    cout<<"Enter 2 For Modify/Delete Current Semester Course "<<endl;
    cout<<"Enter 3 Fro Modify/Delete Previous Semester Course "<<endl;
    cout<<"Enter 4 For View All Students Result"<<endl;
    cout<<"Enter 5 For Exit"<<endl;
    cin>>choice;
    if(choice=='1')
    {
        system("cls");
        added_Course_in_Current_semester();
    }
    else if(choice=='2')
    {
        modify_or_delete_current_semester_course();
    }
    else if(choice=='3')
    {
        modify_or_delete_previous_semester_course();
    }
    else if(choice=='4')
    {
        view_all_student_result();
    }
    else if(choice=='5' || choice =='4')
    {
        exit(0);
    }
    else
    {
        cout<<"\n\n--------------You Enter Wrong Number Try Again--------------\n\n"<<endl;
        admin_panel();
    }
}
void added_Course_in_Current_semester()
{
    int n;
    string intake_Sec;
    char course_name[100],course_code[10];
    char a;
    double credit,total_number;
    ofstream myfile;
    myfile.open("Current Semester Course.txt");
    if(myfile.is_open())
    {
        cout<<"-----------------------------------------------"<<endl;
        cout<<"\nHow Many Course ?"<<endl;
        cin>>n;
        cin.ignore();///cin read two press of enter key
        while(n--)
        {
            cout<<"Enter Course Code : ";
            cin.getline(course_code,10);
            cout<<"Enter Course Name : ";
            cin.getline(course_name,100);
            cout<<"Enter Credit : ";
            cin>>credit;
            cout<<"Intake-Sec : ";
            cin>>intake_Sec;
            cout<<"Enter Total Number : ";
            cin>>total_number;
            cin.ignore();
            cout<<"\n\n\n-------------------------------------"<<endl;
            myfile<<course_code<<" "<<course_name<<" "<<credit<<" "<<intake_Sec<<" "<<total_number<<endl;
        }
        myfile.close();
    }
    else
    {
        cout<<"\nFile is not open !"<<endl;
    }
    cout<<"Did You Forget to added any Course ?(Y/N)"<<endl;
    cin>>a;
    if(a=='y' || a=='Y')
    {
        cout<<"How Many Course ?"<<endl;
        cin>>n;
        cin.ignore();
        myfile.open("Current Semester Course.txt",ios::app);
        if(myfile.is_open())
        {
            while(n--)
            {
                cout<<"Enter Course Code : ";
                cin.getline(course_code,10);
                cout<<"Enter Course Name : ";
                cin.getline(course_name,100);
                cout<<"Enter Credit : ";
                cin>>credit;
                cout<<"Intake-Sec : ";
                cin>>intake_Sec;
                cout<<"Enter Total Number : ";
                cin>>total_number;
                cin.ignore();
                cout<<"\n\n\n-------------------------------------"<<endl;
                myfile<<course_code<<"| "<<course_name<<"| "<<credit<<"| "<<total_number<<"|"<<endl;
            }
            myfile.close();
            cout<<"\nEnter B For Back Or Any For exit"<<endl;
            cin>>a;
            if(a=='b' || a=='B')
            {
                system("cls");
                admin_panel();
            }
            else
            {
                cout<<"--------------Exit The Program--------------"<<endl;
                exit(0);
            }
        }
        else
        {
            cout<<"\nFile is not open !"<<endl;
        }
    }
    else if (a=='n' || a=='N')
    {
         system("cls");
        admin_panel();
    }
    else
    {
        cout<<"\n-----------Wrong Input Exit------------"<<endl;
        exit(0);
    }
}
void  modify_or_delete_current_semester_course()
{
    system("cls");
    char a;
    cout<<"------------Enter B For Back !--------"<<endl;
    cout<<"\n---------------------------------------------------"<<endl;
    cout<<"Enter 1 For Delete Course in Current Semester"<<endl;
    cout<<"Enter 2 For Modify Course in Current Semester"<<endl;
    cin>>a;
    if(a=='1')
    {
        delete_current_semester_course();
    }
    if(a=='2')
    {
        modify_current_semester_course();
    }
    else if(a=='b' || a=='B')
    {
        system("cls");
        admin_panel();
    }
    else
    {
        modify_or_delete_current_semester_course();
    }
}
void modify_or_delete_previous_semester_course()
{
    system("cls");
    char a;
    cout<<"------------Enter B For Back !--------"<<endl;
    cout<<"\n---------------------------------------------------"<<endl;
    cout<<"Enter 1 For Delete previous in Current Semester"<<endl;
    cout<<"Enter 2 For Modify previous in Current Semester"<<endl;
    cin>>a;
    if(a=='1')
    {
        delete_previous_semester_course();
    }
    if(a=='2')
    {
        modify_previous_semester_course();
    }
    else if(a=='b' || a=='B')
    {
        system("cls");
        admin_panel();
    }
    else
    {
        modify_or_delete_previous_semester_course();
    }
}

