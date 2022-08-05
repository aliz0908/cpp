#include<windows.h>
#include<sqlext.h>
#include<stdio.h>
#define TEST_LEN 50
int main()
{
    char ch='y';
    SQLCHAR word[TEST_LEN+1],description[TEST_LEN+1],synonym[TEST_LEN+1];
    HENV hEnv=NULL;
    HDBC hDBC=NULL;
    HSTMT hStmt=NULL;
    UCHAR szSqlStr[]="select * from oxford  where  word=?";
    UCHAR szDSN[SQL_MAX_DSN_LENGTH]="deepa";
    UCHAR  *szUID=NULL;
    UCHAR *szpasswd=NULL;
    UCHAR szModel1[128];
    UCHAR szModel2[128];
    UCHAR szModel3[128];
    SDWORD cbModel1;
    SDWORD cbModel2;
    SDWORD cbModel3;
    SDWORD cbtest=SQL_NTS;
    RETCODE  retcode;
    printf("\n\t\t*************************\n");
    printf("\n\t\t  WELCOME TO DICTIONARY  \n");
    printf("\n\t\t*************************\n");
    do
    {
        SQLAllocEnv(&hEnv);
        SQLAllocConnect(hEnv,&hDBC);
        retcode=SQLConnect(hDBC,szDSN,SQL_NTS,szUID,SQL_NTS,szpasswd,SQL_NTS);
        if(retcode==SQL_SUCCESS||retcode==SQL_SUCCESS_WITH_INFO)
        {
            retcode=SQLAllocStmt(hDBC,&hStmt);
            retcode=SQLPrepare(hStmt,szSqlStr,sizeof(szSqlStr));
            SQLBindParameter(hStmt,1,SQL_PARAM_INPUT,SQL_C_CHAR
                        SQL_C_CHAR,TEST_LEN,0,word,0,&cbtest);
            SQLBindParameter(hStmt,3,SQL_PARAM_INPUT,SQL_C_CHAR,
                        SQL_C_CHAR,TEST_LEN,0,description,0,&cbtest);
            SQLBindParameter(hStmt,2,SQL_PARAM_INPUT,SQL_C_CHAR,
                     SQL_C_CHAR,TEST_LEN,0,synonym,0,&cbtest);
            printf("\n ENTER THE WORD\n");
            scanf("%s",&word);
            retcode=SQLExecute(hStmt);
    SQLBindCol(hStmt,1,SQL_C_CHAR,szModel1,sizeof(szModel1),&cbModel1);
    SQLBindCol(hStmt,2,SQL_C_CHAR,szModel2,sizeof(szModel2),&cbModel2);
    SQLBindCol(hStmt,3,SQL_C_CHAR,szModel3,sizeof(szModel3),&cbModel3);
    retcode=SQLFetch(hStmt);
    if(retcode==SQL_SUCCESS||retcode==SQL_SUCCESS_WITH_INFO)
    {
        printf("\nWORD:%s\n\nSYNONYM:%s\n\nDESCRIPTION:%s\n\n",szModel1,
        szModel3,szModel2);
        retcode=SQLFetch(hStmt);
    }
    else
        {
            printf("Sorry the word is not present");
        }
    }
        flushall();
        printf("\n DO YOU  WANT TO  CONTINUE[y/n]");
        scanf("%s",&ch);
    }while(ch=='y');
    return 0;
}