#include <QCoreApplication>
#include <cstdio>
#include <iostream>
#include <string>
#include <Assignment_Unzip.hh>

using namespace std;

int main(){
    int HOWMANY_STU = 15;

    Course_info *stu=new Course_info[HOWMANY_STU];

    for(int i=HOWMANY_STU-1; i>=0; i--){

        stu[i].A_info.Assigment_Comment = "good!";

        stu[i].F_info.C_flag = 1;
        stu[i].F_info.File_Extname = ".exe";
        stu[i].F_info.File_Orname = "/Users/fangmingzhao/course/Project/unziptest.zip";    // maybe we need path of file rather than file's name
        stu[i].F_info.Dir_file_N = "/Users/fangmingzhao/course/Project/BD";
        stu[i].F_info.Dir_file_Or = "//Users/fangmingzhao/course/Project/AC";                // given by download
        stu[i].F_info.Q_flag = 1;
/*      strcat() combine two string together
        we set different directories for every student (this work can be done by download group)



*/
//        stu[i].F_info = {"noway",".txt", "\\new1\\hello", "\\old1\\byebye", 1,1,0,0};

        stu[i].S_info.Stu_Assigment_Grade_Current = 90;
        stu[i].S_info.Stu_Assigment_Grade_Max = 100;
        stu[i].S_info.Stu_Assigment_Grade_Min = 0;
        stu[i].S_info.Stu_ID = 10419999;
        stu[i].S_info.Stu_Index = i;
        stu[i].S_info.Stu_Mail_Addr = "cplusplus@qt.com";
        stu[i].S_info.Stu_Name = "Michael";


    }

    delete[] stu;

    cout.precision(10);
    cout << stu[13].S_info.Stu_Index;
//-------------------------------------------------

   // for(int i=HOWMANY_STU-1; i>=0; i--){
    int i = 1;
        Assignment_Unzip a(stu[i].S_info.Stu_Index, stu[i].F_info.File_Orname, stu[i].F_info.File_Extname, stu[i].F_info.Dir_file_Or, stu[i].F_info.Dir_file_N);  // reload your weapon ready to shoot

        a.A_Check_file(stu[i].F_info.Q_flag, stu[i].F_info.C_flag, stu[i].F_info.File_Extname);       // figure out whether file student submit follow name rule or can be complied

        if(stu[i].F_info.C_flag && stu[i].F_info.Q_flag){                  // if file's name does not follow rule or can't be complied, send mail;
            a.A_Send_mail(stu[i].F_info.C_flag, stu[i].F_info.Q_flag, stu[i].S_info.Stu_Mail_Addr);
      //  }
    }

}
