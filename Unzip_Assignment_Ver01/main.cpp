#include <QCoreApplication>

#include <iostream>
#include <string>
#include <Assignment_Unzip.hh>
#include <mach-o/dyld.h>
#include <cstring>                       // for using strrchr()

#ifdef WIN32
#include "windows.h"                    // by using GetModuleFileName()
#endif

using namespace std;




int main(){
    int HOWMANY_STU = 15;

    Course_info *stu=new Course_info[HOWMANY_STU];

    for(int i=HOWMANY_STU-1; i>=0; i--){

        stu[i].A_info.Assigment_Comment = "good!";

        stu[i].F_info.C_flag = 1;
        stu[i].F_info.File_Extname = ".exe";
        stu[i].F_info.File_Orname = "/Users/fangmingzhao/course/Project/unziptest.zip";    // maybe we need path of file rather than file's name
        stu[i].F_info.File_dir_N = "/Users/fangmingzhao/course/Project/BD";
        stu[i].F_info.File_dir_Origin = "//Users/fangmingzhao/course/Project/AC";                // given by download
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
    cout << stu[13].S_info.Stu_Index << '\n';
//--------------------------------------------------------------------
// get current directory and store it in current_pro_dir
    uint32_t dir_buf_size = sizeof(current_pro_dir);

    if (_NSGetExecutablePath(current_pro_dir, &dir_buf_size) == 0)
    {
        cout << dir_buf_size << '\n';
        char *p = strrchr(current_pro_dir, '/');
#ifdef WIN32
        char *p = strrchr(current_pro_dir, '\');
#endif
        *p = 0;
        printf("executable path is %s\n", current_pro_dir);
        Get_dir_OK = 1;
    }
    else{
        printf("buffer too small; need size %u\n", dir_buf_size);
        Get_dir_OK = 0;
    }
#ifdef WIN32
    if(!GetModuleFileName(Null, current_pro_dir, 256)){
        printf("executable path is %s\n", current_pro_dir);
        Get_dir_OK = 1;
    }
    else{
        printf("fail to get path information!\n");
        Get_dir_OK = 0;
    }
#endif
// get current directory and store it in current_pro_dir
//--------------------------------------------------------------------

   // for(int i=HOWMANY_STU-1; i>=0; i--){
    int i = 1;
        Assignment_Unzip a(stu[i].S_info.Stu_Index, stu[i].F_info.file_name_valid,
                           stu[i].F_info.file_zip_valid, stu[i].S_info.Stu_ID,
                           stu[i].F_info.File_dir_Origin, current_pro_dir);  // reload your weapon ready to shoot

//        a.A_Check_file(stu[i].F_info.Q_flag, stu[i].F_info.C_flag, stu[i].F_info.File_Extname);       // figure out whether file student submit follow name rule or can be complied

        if(stu[i].F_info.C_flag && stu[i].F_info.Q_flag){                  // if file's name does not follow rule or can't be complied, send mail;
            a.A_Send_mail(stu[i].F_info.C_flag, stu[i].F_info.Q_flag, stu[i].S_info.Stu_Mail_Addr);
      //  }
    }

}
