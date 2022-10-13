#include <iostream>
#include <fstream>
using namespace std;
string component[1000][10];
string item[1000][3];
string member[1000][3];
void Displays();
void Add_item();
void read_file_item();
void read_file_member();
void write_file_item();
void write_file_member();
void Reg_member();
void Member_list();
void Sell();
void Process(string code);
int main()
{
    read_file_item();
    read_file_member();
    Displays();
    write_file_item();
    write_file_member();
    return 1;
}
void write_file_item()
{
    ofstream outf;
    outf.open("item", ios_base::out);
    string dummy;
    int loop = 0;
    while (item[loop][0] != dummy)
    {
        int loopin = 0;
        while (loopin < 3)
        {
            string Buffer = "";
            Buffer = Buffer + item[loop][loopin];
            Buffer = Buffer + " ";
            outf << Buffer;
            loopin++;
        }
        outf << endl;
        loop++;
    }
    outf.close();
}
void write_file_member()
{
    ofstream outf;
    outf.open("member", ios_base::out);
    string dummy;
    int loop = 0;
    while (member[loop][0] != dummy)
    {
        int loopin = 0;
        while (loopin < 3)
        {
            string Buffer = "";
            Buffer = Buffer + member[loop][loopin];
            Buffer = Buffer + " ";
            outf << Buffer;
            loopin++;
        }
        outf << endl;
        loop++;
    }
    outf.close();
}
void read_file_item()
{
    ifstream inf;
    inf.open("item");
    string Buffer;
    int loop = 0;
    while (getline(inf, Buffer))
    {
        int loopin = 0, loop_ay = 0;
        string Buffer_string = "";
        while (loopin <= Buffer.size())
        {
            if (Buffer[loopin] == ' ')
            {
                item[loop][loop_ay] = Buffer_string;
                Buffer_string = "";
                loop_ay++;
            }
            else
            {
                Buffer_string = Buffer_string + Buffer[loopin];
            }
            loopin++;
        }
        loop++;
    }
    inf.close();
}
void read_file_member()
{
    ifstream inf;
    inf.open("member");
    string Buffer;
    int loop = 0;
    while (getline(inf, Buffer))
    {
        int loopin = 0, loop_ay = 0;
        string Buffer_string = "";
        while (loopin <= Buffer.size())
        {
            if (Buffer[loopin] == ' ')
            {
                member[loop][loop_ay] = Buffer_string;
                Buffer_string = "";
                loop_ay++;
            }
            else
            {
                Buffer_string = Buffer_string + Buffer[loopin];
            }
            loopin++;
        }
        loop++;
    }
    inf.close();
}
void Displays()
{
    system("clear");
    string border = "=============================================================================================================================================================================================================================================\n";
    string title_bar = "=                                                                                                             WELLCOME PEEWINWASH                                                                                                           =\n";
    string show_manu = "        [A]dd Item    [R]ergister member    [S]ell    [M]ember list                                                                                                                                                                         =\n";
    string list = "=                                                   =                                                                                                 =                               =                                                     =\n";
    string header = "=                  ITEM NO.                         =                                       NAME ITEM                                                 =           Quantity            =                   ITEM PRICE (Baht)                 =\n";
    cout << border << title_bar << border << show_manu << border << header << border;
    int loop = 0;
    while (loop <= 40)
    {
        cout << "=" << setw(26) << component[loop][0] << setw(26) << "=" << setw(49) << component[loop][1] << setw(49) << "=" << setw(16) << component[loop][3] << setw(16) << "=" << setw(27) << component[loop][2] << setw(27) << "=" << endl;
        loop++;
    }
    cout << border;
    Sell();
}
void Sell()
{
    string command;
    cin >> command;
    if (command == "a" || command == "A" || command == ".add")
    {
        Add_item();
    }
    else if (command == "r" || command == "R" || command == ".reg")
    {
        Reg_member();
    }
    else if (command == "s" || command == "S" || command == ".member")
    {
        Displays();
    }
    else
    {
        Process(command);
    }
}
void Process(string code)
{
    
}
void Add_item()
{
    cout << "Enter code item : ";
}