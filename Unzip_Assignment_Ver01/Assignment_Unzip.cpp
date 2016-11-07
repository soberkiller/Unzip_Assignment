#include "Assignment_Unzip.hh"
#include <QDebug>
#include <JlCompress.h>


using namespace std;

Assignment_Unzip::Assignment_Unzip(int S_Index, const char *F_Orname, const char *F_Exname, const char *F_Dir_Old, const char *F_Dir_New): m_Index(S_Index), m_F_Orname(F_Orname), m_F_Exname(F_Exname), m_F_Dir_Old(F_Dir_Old), m_F_Dir_New(F_Dir_New){ }

void Assignment_Unzip::A_Check_file(int &f_c_flag, int &f_q_flag, const char *F_Exname){
    // F_Exname = "hehe";
    // cout << F_Exname;
    const char *zipfilename=NULL;

    zipfilename = m_F_Orname;               // pass file name
/*    void Compress_Dir(QString Zipfile, QString Directory)
    {
        if(JlCompress::compressDir(zipfilename, m_F_Dir_Old))
        {
            qDebug() << "Created:" << zipfilename;

        }
        else
        {
            qDebug() << "Could not created:" << zipfilename;
        }
//    }
*/
    void Decompress_Dir(QString Zipfile, QString NewDirectory)
    {
        QStringList F_List = JlCompress::extractDir(Zipfile,NewDirectory);
    }

}


void Assignment_Unzip::A_Send_mail(int f_c_flag, int f_q_flag, const char *s_mailaddress){

}
