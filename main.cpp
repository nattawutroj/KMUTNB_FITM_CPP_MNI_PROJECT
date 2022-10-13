#include<iostream>
using namespace std;
string component[1000][10];
void Displays();
void Add_item();
int main()
{
    Displays();
    char manu;
    cin.get(manu);
    if(manu == 'a')
    {
       Add_item();
    }
    else
    {

    }
    return 1;
}
void Displays()
{
    system("clear");
    string border    = "=============================================================================================================================================================================================================================================\n";
    string title_bar = "=                                                                                                             WELLCOME PEEWINWASH                                                                                                           =\n";
    string show_manu = "        [A]dd Item    [R]ergister member    [S]ell    [M]ember list                                                                                                                                                                         =\n";
    string list    = "=                                                   =                                                                                                 =                               =                                                     =\n";
    cout<<border<<title_bar<<border<<show_manu<<border;
    int loop = 0;
    while(loop <= 40)
    {
        cout<<list;
        loop++;
    }
    cout<<border;
}
void Add_item()
{
    cout<<"Enter code item : ";
}