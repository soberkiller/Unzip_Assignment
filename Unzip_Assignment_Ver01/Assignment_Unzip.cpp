#include "Assignment_Unzip.hh"
#include <QDebug>
#include <JlCompress.h>


using namespace std;
/*
 * int m_Stu_Index, m_file_name_valid, m_file_zip_valid;
const char *m_F_Orname, *m_F_Exname, *m_F_Dir_Origin, *m_F_Dir_New;
const char *m_current_dir;
double m_Stu_ID;
*/
//Assignment_Unzip::Assignment_Unzip(int Stu_Index, const char *F_Orname, const char *F_Exname, const char *F_Dir_Origin, const char *F_Dir_New, const char *current_dir): m_Stu_Index(Stu_Index), m_F_Orname(F_Orname), m_F_Exname(F_Exname), m_F_Dir_Origin(F_Dir_Origin), m_F_Dir_New(F_Dir_New), m_current_dir(current_dir){
/*----------------  ---------------------*/


Assignment_Unzip::Assignment_Unzip(int Stu_Index, int file_name_valid,
                                   int file_zip_valid, double Stu_ID,
                                   const char *F_Dir_Origin, const char *current_dir):m_Stu_Index(Stu_Index),
                                   m_file_name_valid(file_name_valid), m_file_zip_valid(file_zip_valid),
                                    m_Stu_ID(Stu_ID), m_F_Dir_Origin(F_Dir_Origin), m_current_dir(current_dir){
/*----------------  ---------------------*/
}

void Assignment_Unzip::A_Check_file(int &f_c_flag, int &f_q_flag,
                                    const char *F_Dir_New){
/*--------------- reference -------------------------------------------
    // F_Exname = "hehe";
    // cout << F_Exname;
//   const char *zipfilename=NULL;

//    zipfilename = m_F_Orname;               // pass file name


        if(JlCompress::compressDir(zipfilename, m_F_Dir_Old))
        {
            qDebug() << "Created:" << zipfilename;

        }
        else
        {
            qDebug() << "Could not created:" << zipfilename;
        }

----------------------------------------------------------------------*/


/*---------------- get current directory where this program sit ---------------------*/

/*---------------- get current directory where this program sit ---------------------*/

/*---------------- get current directory where this program sit ---------------------*/

/*---------------- get current directory where this program sit ---------------------*/

        QStringList F_List = JlCompress::extractDir(m_F_Orname, m_F_Dir_New);      // here is suppose to have a flag to indicate whether unzipping a file is finished or ok.

}

void Assignment_Unzip::A_Send_mail(int f_c_flag, int f_q_flag, const char *s_mailaddress){

}
