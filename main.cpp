#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "colormod.h"
using namespace std;
Color::Modifier red(Color::FG_RED);
Color::Modifier def(Color::FG_DEFAULT);
string component[1000][10];
string item[1000][3];
string member[1000][3];
// set size Display
int size1 = 38;     // size of component Def = 38
int size2 = 26;     // size of item Def = 26
int size3 = 49;     // size of member Def = 49
int size4 = 16;     // size of component Def = 16
int size5 = 27;     // size of item Def = 27
int size6 = 100;    // size of member Def = 100
int size7 = 125;    // size of member Def = 125
int size8 = 160;    // size of member Def = 160
int size9 = 110;    // size of member Def = 110
int size10 = 237;   // size of member Def = 237
int size11 = 118;   // size of member Def = 118
int size12 = 170;   // size of member Def = 170
int size13 = 52;    // size of member Def = 52
int size14 = 98;    // size of member Def = 98
int size15 = 32;    // size of member Def = 32
int size16 = 54;    // size of member Def = 54
int Big_num = 36;   // size of component Def = 36
int line_show = 40; // size of component Def = line_show
// ----------------
int sum = 0;
int Process_sell_change(string money);
string Big_num_con(string num);
void exit();
void border();
void title_bar();
void show_manu();
void l_i_s_t();
void header();
void header_add_item();
void member_list_show();
void Process_sell_memeber(string phone);
void Displays(int show);
void reset_component();
void Add_item();
void read_file_item();
void read_file_member();
void write_file_item();
void write_file_member();
void Reg_member();
void Member_list();
void Sell();
void Process(string code);
void Display_Price_Position_1(int dis_p);
void Display_Price_Position_2(int dis_p);
void Display_Price_Position_3(int dis_p);
void Display_Price_Position_4(int dis_p);
void Display_Price_Position_5(int dis_p);
void Display_Price_Position_6(int dis_p);
void convert(int D);
void set_size();
void exit()
{
    cout<<red<<"Thank you for using this program"<<def<<endl;
}
string Big_num_con(string num)
{
    string show = "";
    if (num == "T")
    {
        for (int l = 0; l < Big_num; l++)
        {
            show += "*";
        }
    }
    else if (num == "L")
    {
        int Temp1;
        int Temp2;
        int Temp3;
        if (Big_num % 3 != 0)
        {
            Temp1 = Big_num / 3;
            Temp2 = Big_num / 3;
            Temp3 = Big_num / 3;
            do
            {
                Temp1++;
            } while (Temp1 + Temp2 + Temp3 != Big_num);
        }
        else
        {
            Temp1 = Big_num / 3;
            Temp2 = Big_num / 3;
            Temp3 = Big_num / 3;
        }
        for (int l = 0; l < Temp1; l++)
        {
            show += "*";
        }
        for (int l = 0; l < Temp2; l++)
        {
            show += " ";
        }
        for (int l = 0; l < Temp3; l++)
        {
            show += " ";
        }
    }
    else if (num == "M")
    {
        int Temp1;
        int Temp2;
        int Temp3;
        if (Big_num % 3 != 0)
        {
            Temp1 = Big_num / 3;
            Temp2 = Big_num / 3;
            Temp3 = Big_num / 3;
            do
            {
                Temp2++;
            } while (Temp1 + Temp2 + Temp3 != Big_num);
        }
        else
        {
            Temp1 = Big_num / 3;
            Temp2 = Big_num / 3;
            Temp3 = Big_num / 3;
        }
        for (int l = 0; l < Temp1; l++)
        {
            show += " ";
        }
        for (int l = 0; l < Temp2; l++)
        {
            show += "*";
        }
        for (int l = 0; l < Temp3; l++)
        {
            show += " ";
        }
    }
    else if (num == "R")
    {
        int Temp1;
        int Temp2;
        int Temp3;
        if (Big_num % 3 != 0)
        {
            Temp1 = Big_num / 3;
            Temp2 = Big_num / 3;
            Temp3 = Big_num / 3;
            do
            {
                Temp3++;
            } while (Temp1 + Temp2 + Temp3 != Big_num);
        }
        else
        {
            Temp1 = Big_num / 3;
            Temp2 = Big_num / 3;
            Temp3 = Big_num / 3;
        }
        for (int l = 0; l < Temp1; l++)
        {
            show += " ";
        }
        for (int l = 0; l < Temp2; l++)
        {
            show += " ";
        }
        for (int l = 0; l < Temp3; l++)
        {
            show += "*";
        }
    }
    else if (num == "V")
    {
        int Temp1;
        int Temp2;
        int Temp3;
        if (Big_num % 3 != 0)
        {
            Temp1 = Big_num / 3;
            Temp2 = Big_num / 3;
            Temp3 = Big_num / 3;
            do
            {
                Temp2++;
            } while (Temp1 + Temp2 + Temp3 != Big_num);
        }
        else
        {
            Temp1 = Big_num / 3;
            Temp2 = Big_num / 3;
            Temp3 = Big_num / 3;
        }
        for (int l = 0; l < Temp1; l++)
        {
            show += "*";
        }
        for (int l = 0; l < Temp2; l++)
        {
            show += " ";
        }
        for (int l = 0; l < Temp3; l++)
        {
            show += "*";
        }
    }
    else if (num == "O")
    {
        for (int l = 0; l < Big_num; l++)
        {
            show += " ";
        }
    }

    return show;
}
void member_list_show()
{
    cout << "=" << setw(size2) << "MEMBER PHONE" << setw(size2) << "=" << setw(size3) << "MEMBER NAME" << setw(size3) << "=" << setw(size5) << "MEMBER POINT" << setw(size5) << "=" << setw(size4) << "Status" << setw(size4) << "=" << endl;
}
void header_add_item()
{
    cout << "=" << setw(size2) << "ITEM NO." << setw(size2) << "=" << setw(size3) << "NAME ITEM" << setw(size3) << "=" << setw(size5) << "ITEM PRICE (Baht)" << setw(size5) << "=" << setw(size4) << "Status" << setw(size4) << "=" << endl;
}
void header()
{
    cout << "=" << setw(size2) << "ITEM NO." << setw(size2) << "=" << setw(size3) << "NAME ITEM" << setw(size3) << "=" << setw(size4) << "Quantity" << setw(size4) << "=" << setw(size5) << "ITEM PRICE (Baht)" << setw(size5) << "=" << endl;
}
void l_i_s_t()
{
    cout << "=" << setw(size13) << "=" << setw(size14) << "=" << setw(size15) << "=" << setw(size16) << "=" << endl;
}
void show_manu()
{
    cout << "       [A]dd Item    [R]ergister member    [S]ell    [M]ember list" << setw(size12) << endl;
}
void title_bar()
{
    cout << "=" << setw(size11) << "WELLCOME PEEWINWASH" << setw(20) << setw(size11) << "=" << endl;
}
void border()
{
    string bd = "";
    for (int i = 0; i < size10; i++)
    {
        bd += "=";
    }
    cout << bd << endl;
}
void set_size()
{
    int percen;
    cout << "Set size of component (best Recomant Between 72 - 100) : ";
    cin >> percen;
    size1 = (size1 * percen) / 100;
    size2 = (size2 * percen) / 100;
    size3 = (size3 * percen) / 100;
    size4 = (size4 * percen) / 100;
    size5 = (size5 * percen) / 100;
    size6 = (size6 * percen) / 100;
    size7 = (size7 * percen) / 100;
    size8 = (size8 * percen) / 100;
    size9 = (size9 * percen) / 100;
    size10 = (size10 * percen) / 100;
    size11 = (size11 * percen) / 100;
    size12 = (size12 * percen) / 100;
    size13 = (size13 * percen) / 100;
    size14 = (size14 * percen) / 100;
    size15 = (size15 * percen) / 100;
    size16 = (size16 * percen) / 100;
    Big_num = (Big_num * percen) / 100;
    #ifdef _WIN32
    line_show = (line_show * (percen-10)) / 100;
    #else
    line_show = (line_show * (percen)) / 100;
    #endif
}
int main()
{
    set_size();
    read_file_item();
    read_file_member();
    Displays(1);
    write_file_item();
    write_file_member();
    return 1;
}
void reset_component()
{
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            component[i][j] = "";
        }
    }
}
void convert(int D)
{
    if (D < 10)
    {
        Display_Price_Position_6(D % 10);
        Display_Price_Position_5(-1);
        Display_Price_Position_4(-1);
        Display_Price_Position_3(-1);
        Display_Price_Position_2(-1);
        Display_Price_Position_1(-1);
    }
    else if (D < 100)
    {
        Display_Price_Position_6(D % 10);
        Display_Price_Position_5((D / 10) % 10);
        Display_Price_Position_4(-1);
        Display_Price_Position_3(-1);
        Display_Price_Position_2(-1);
        Display_Price_Position_1(-1);
    }
    else if (D < 1000)
    {
        Display_Price_Position_6(D % 10);
        Display_Price_Position_5((D / 10) % 10);
        Display_Price_Position_4((D / 100) % 10);
        Display_Price_Position_3(-1);
        Display_Price_Position_2(-1);
        Display_Price_Position_1(-1);
    }
    else if (D < 10000)
    {
        Display_Price_Position_6(D % 10);
        Display_Price_Position_5((D / 10) % 10);
        Display_Price_Position_4((D / 100) % 10);
        Display_Price_Position_3((D / 1000) % 10);
        Display_Price_Position_2(-1);
        Display_Price_Position_1(-1);
    }
    else if (D < 100000)
    {
        Display_Price_Position_6(D % 10);
        Display_Price_Position_5((D / 10) % 10);
        Display_Price_Position_4((D / 100) % 10);
        Display_Price_Position_3((D / 1000) % 10);
        Display_Price_Position_2((D / 10000) % 10);
        Display_Price_Position_1(-1);
    }
    else
    {
        Display_Price_Position_6(D % 10);
        Display_Price_Position_5((D / 10) % 10);
        Display_Price_Position_4((D / 100) % 10);
        Display_Price_Position_3((D / 1000) % 10);
        Display_Price_Position_2((D / 10000) % 10);
        Display_Price_Position_1((D / 100000) % 10);
    }
}
void Display_Price_Position_1(int dis_p)
{
    if (dis_p == 0)
    {
        component[500][0] = Big_num_con("T");
        component[501][0] = Big_num_con("T");
        component[502][0] = Big_num_con("V");
        component[503][0] = Big_num_con("V");
        component[504][0] = Big_num_con("V");
        component[505][0] = Big_num_con("V");
        component[506][0] = Big_num_con("V");
        component[507][0] = Big_num_con("V");
        component[508][0] = Big_num_con("V");
        component[509][0] = Big_num_con("V");
        component[510][0] = Big_num_con("V");
        component[511][0] = Big_num_con("V");
        component[512][0] = Big_num_con("V");
        component[513][0] = Big_num_con("V");
        component[514][0] = Big_num_con("T");
        component[515][0] = Big_num_con("T");
    }
    else if (dis_p == 1)
    {
        component[500][0] = Big_num_con("R");
        component[501][0] = Big_num_con("R");
        component[502][0] = Big_num_con("R");
        component[503][0] = Big_num_con("R");
        component[504][0] = Big_num_con("R");
        component[505][0] = Big_num_con("R");
        component[506][0] = Big_num_con("R");
        component[507][0] = Big_num_con("R");
        component[508][0] = Big_num_con("R");
        component[509][0] = Big_num_con("R");
        component[510][0] = Big_num_con("R");
        component[511][0] = Big_num_con("R");
        component[512][0] = Big_num_con("R");
        component[513][0] = Big_num_con("R");
        component[514][0] = Big_num_con("R");
        component[515][0] = Big_num_con("R");
    }
    else if (dis_p == 2)
    {
        component[500][0] = Big_num_con("T");
        component[501][0] = Big_num_con("T");
        component[502][0] = Big_num_con("T");
        component[503][0] = Big_num_con("R");
        component[504][0] = Big_num_con("R");
        component[505][0] = Big_num_con("R");
        component[506][0] = Big_num_con("T");
        component[507][0] = Big_num_con("T");
        component[508][0] = Big_num_con("T");
        component[509][0] = Big_num_con("T");
        component[510][0] = Big_num_con("L");
        component[511][0] = Big_num_con("L");
        component[512][0] = Big_num_con("L");
        component[513][0] = Big_num_con("T");
        component[514][0] = Big_num_con("T");
        component[515][0] = Big_num_con("T");
    }
    else if (dis_p == 3)
    {
        component[500][0] = Big_num_con("T");
        component[501][0] = Big_num_con("T");
        component[502][0] = Big_num_con("T");
        component[503][0] = Big_num_con("R");
        component[504][0] = Big_num_con("R");
        component[505][0] = Big_num_con("R");
        component[506][0] = Big_num_con("T");
        component[507][0] = Big_num_con("T");
        component[508][0] = Big_num_con("T");
        component[509][0] = Big_num_con("R");
        component[510][0] = Big_num_con("R");
        component[511][0] = Big_num_con("R");
        component[512][0] = Big_num_con("T");
        component[513][0] = Big_num_con("T");
        component[514][0] = Big_num_con("T");
        component[515][0] = Big_num_con("T");
    }
    else if (dis_p == 4)
    {
        component[500][0] = Big_num_con("V");
        component[501][0] = Big_num_con("V");
        component[502][0] = Big_num_con("V");
        component[503][0] = Big_num_con("V");
        component[504][0] = Big_num_con("V");
        component[505][0] = Big_num_con("V");
        component[506][0] = Big_num_con("T");
        component[507][0] = Big_num_con("T");
        component[508][0] = Big_num_con("T");
        component[509][0] = Big_num_con("R");
        component[510][0] = Big_num_con("R");
        component[511][0] = Big_num_con("R");
        component[512][0] = Big_num_con("R");
        component[513][0] = Big_num_con("R");
        component[514][0] = Big_num_con("R");
        component[515][0] = Big_num_con("R");
    }
    else if (dis_p == 5)
    {
        component[500][0] = Big_num_con("T");
        component[501][0] = Big_num_con("T");
        component[502][0] = Big_num_con("T");
        component[503][0] = Big_num_con("L");
        component[504][0] = Big_num_con("L");
        component[505][0] = Big_num_con("L");
        component[506][0] = Big_num_con("T");
        component[507][0] = Big_num_con("T");
        component[508][0] = Big_num_con("T");
        component[509][0] = Big_num_con("R");
        component[510][0] = Big_num_con("R");
        component[511][0] = Big_num_con("R");
        component[512][0] = Big_num_con("T");
        component[513][0] = Big_num_con("T");
        component[514][0] = Big_num_con("T");
        component[515][0] = Big_num_con("T");
    }
    else if (dis_p == 6)
    {
        component[500][0] = Big_num_con("T");
        component[501][0] = Big_num_con("T");
        component[502][0] = Big_num_con("T");
        component[503][0] = Big_num_con("L");
        component[504][0] = Big_num_con("L");
        component[505][0] = Big_num_con("L");
        component[506][0] = Big_num_con("T");
        component[507][0] = Big_num_con("T");
        component[508][0] = Big_num_con("T");
        component[509][0] = Big_num_con("V");
        component[510][0] = Big_num_con("V");
        component[511][0] = Big_num_con("V");
        component[512][0] = Big_num_con("V");
        component[513][0] = Big_num_con("V");
        component[514][0] = Big_num_con("T");
        component[515][0] = Big_num_con("T");
    }
    else if (dis_p == 7)
    {
        component[500][0] = Big_num_con("T");
        component[501][0] = Big_num_con("T");
        component[502][0] = Big_num_con("T");
        component[503][0] = Big_num_con("R");
        component[504][0] = Big_num_con("R");
        component[505][0] = Big_num_con("R");
        component[506][0] = Big_num_con("R");
        component[507][0] = Big_num_con("R");
        component[508][0] = Big_num_con("R");
        component[509][0] = Big_num_con("R");
        component[510][0] = Big_num_con("R");
        component[511][0] = Big_num_con("R");
        component[512][0] = Big_num_con("R");
        component[513][0] = Big_num_con("R");
        component[514][0] = Big_num_con("R");
        component[515][0] = Big_num_con("R");
    }
    else if (dis_p == 8)
    {
        component[500][0] = Big_num_con("T");
        component[501][0] = Big_num_con("T");
        component[502][0] = Big_num_con("T");
        component[503][0] = Big_num_con("V");
        component[504][0] = Big_num_con("V");
        component[505][0] = Big_num_con("V");
        component[506][0] = Big_num_con("T");
        component[507][0] = Big_num_con("T");
        component[508][0] = Big_num_con("T");
        component[509][0] = Big_num_con("V");
        component[510][0] = Big_num_con("V");
        component[511][0] = Big_num_con("V");
        component[512][0] = Big_num_con("V");
        component[513][0] = Big_num_con("V");
        component[514][0] = Big_num_con("T");
        component[515][0] = Big_num_con("T");
    }
    else if (dis_p == 9)
    {
        component[500][0] = Big_num_con("T");
        component[501][0] = Big_num_con("T");
        component[502][0] = Big_num_con("T");
        component[503][0] = Big_num_con("V");
        component[504][0] = Big_num_con("V");
        component[505][0] = Big_num_con("V");
        component[506][0] = Big_num_con("T");
        component[507][0] = Big_num_con("T");
        component[508][0] = Big_num_con("T");
        component[509][0] = Big_num_con("R");
        component[510][0] = Big_num_con("R");
        component[511][0] = Big_num_con("R");
        component[512][0] = Big_num_con("T");
        component[513][0] = Big_num_con("T");
        component[514][0] = Big_num_con("T");
        component[515][0] = Big_num_con("T");
    }
    else
    {
        component[500][0] = Big_num_con("O");
        component[501][0] = Big_num_con("O");
        component[502][0] = Big_num_con("O");
        component[503][0] = Big_num_con("O");
        component[504][0] = Big_num_con("O");
        component[505][0] = Big_num_con("O");
        component[506][0] = Big_num_con("O");
        component[507][0] = Big_num_con("O");
        component[508][0] = Big_num_con("O");
        component[509][0] = Big_num_con("O");
        component[510][0] = Big_num_con("O");
        component[511][0] = Big_num_con("O");
        component[512][0] = Big_num_con("O");
        component[513][0] = Big_num_con("O");
        component[514][0] = Big_num_con("O");
        component[515][0] = Big_num_con("O");
    }
}
void Display_Price_Position_2(int dis_p)
{
    if (dis_p == 0)
    {
        component[500][1] = Big_num_con("T");
        component[501][1] = Big_num_con("T");
        component[502][1] = Big_num_con("V");
        component[503][1] = Big_num_con("V");
        component[504][1] = Big_num_con("V");
        component[505][1] = Big_num_con("V");
        component[506][1] = Big_num_con("V");
        component[507][1] = Big_num_con("V");
        component[508][1] = Big_num_con("V");
        component[509][1] = Big_num_con("V");
        component[510][1] = Big_num_con("V");
        component[511][1] = Big_num_con("V");
        component[512][1] = Big_num_con("V");
        component[513][1] = Big_num_con("V");
        component[514][1] = Big_num_con("T");
        component[515][1] = Big_num_con("T");
    }
    else if (dis_p == 1)
    {
        component[500][1] = Big_num_con("R");
        component[501][1] = Big_num_con("R");
        component[502][1] = Big_num_con("R");
        component[503][1] = Big_num_con("R");
        component[504][1] = Big_num_con("R");
        component[505][1] = Big_num_con("R");
        component[506][1] = Big_num_con("R");
        component[507][1] = Big_num_con("R");
        component[508][1] = Big_num_con("R");
        component[509][1] = Big_num_con("R");
        component[510][1] = Big_num_con("R");
        component[511][1] = Big_num_con("R");
        component[512][1] = Big_num_con("R");
        component[513][1] = Big_num_con("R");
        component[514][1] = Big_num_con("R");
        component[515][1] = Big_num_con("R");
    }
    else if (dis_p == 2)
    {
        component[500][1] = Big_num_con("T");
        component[501][1] = Big_num_con("T");
        component[502][1] = Big_num_con("T");
        component[503][1] = Big_num_con("R");
        component[504][1] = Big_num_con("R");
        component[505][1] = Big_num_con("R");
        component[506][1] = Big_num_con("T");
        component[507][1] = Big_num_con("T");
        component[508][1] = Big_num_con("T");
        component[509][1] = Big_num_con("T");
        component[510][1] = Big_num_con("L");
        component[511][1] = Big_num_con("L");
        component[512][1] = Big_num_con("L");
        component[513][1] = Big_num_con("T");
        component[514][1] = Big_num_con("T");
        component[515][1] = Big_num_con("T");
    }
    else if (dis_p == 3)
    {
        component[500][1] = Big_num_con("T");
        component[501][1] = Big_num_con("T");
        component[502][1] = Big_num_con("T");
        component[503][1] = Big_num_con("R");
        component[504][1] = Big_num_con("R");
        component[505][1] = Big_num_con("R");
        component[506][1] = Big_num_con("T");
        component[507][1] = Big_num_con("T");
        component[508][1] = Big_num_con("T");
        component[509][1] = Big_num_con("R");
        component[510][1] = Big_num_con("R");
        component[511][1] = Big_num_con("R");
        component[512][1] = Big_num_con("T");
        component[513][1] = Big_num_con("T");
        component[514][1] = Big_num_con("T");
        component[515][1] = Big_num_con("T");
    }
    else if (dis_p == 4)
    {
        component[500][1] = Big_num_con("V");
        component[501][1] = Big_num_con("V");
        component[502][1] = Big_num_con("V");
        component[503][1] = Big_num_con("V");
        component[504][1] = Big_num_con("V");
        component[505][1] = Big_num_con("V");
        component[506][1] = Big_num_con("T");
        component[507][1] = Big_num_con("T");
        component[508][1] = Big_num_con("T");
        component[509][1] = Big_num_con("R");
        component[510][1] = Big_num_con("R");
        component[511][1] = Big_num_con("R");
        component[512][1] = Big_num_con("R");
        component[513][1] = Big_num_con("R");
        component[514][1] = Big_num_con("R");
        component[515][1] = Big_num_con("R");
    }
    else if (dis_p == 5)
    {
        component[500][1] = Big_num_con("T");
        component[501][1] = Big_num_con("T");
        component[502][1] = Big_num_con("T");
        component[503][1] = Big_num_con("L");
        component[504][1] = Big_num_con("L");
        component[505][1] = Big_num_con("L");
        component[506][1] = Big_num_con("T");
        component[507][1] = Big_num_con("T");
        component[508][1] = Big_num_con("T");
        component[509][1] = Big_num_con("R");
        component[510][1] = Big_num_con("R");
        component[511][1] = Big_num_con("R");
        component[512][1] = Big_num_con("T");
        component[513][1] = Big_num_con("T");
        component[514][1] = Big_num_con("T");
        component[515][1] = Big_num_con("T");
    }
    else if (dis_p == 6)
    {
        component[500][1] = Big_num_con("T");
        component[501][1] = Big_num_con("T");
        component[502][1] = Big_num_con("T");
        component[503][1] = Big_num_con("L");
        component[504][1] = Big_num_con("L");
        component[505][1] = Big_num_con("L");
        component[506][1] = Big_num_con("T");
        component[507][1] = Big_num_con("T");
        component[508][1] = Big_num_con("T");
        component[509][1] = Big_num_con("V");
        component[510][1] = Big_num_con("V");
        component[511][1] = Big_num_con("V");
        component[512][1] = Big_num_con("V");
        component[513][1] = Big_num_con("V");
        component[514][1] = Big_num_con("T");
        component[515][1] = Big_num_con("T");
    }
    else if (dis_p == 7)
    {
        component[500][1] = Big_num_con("T");
        component[501][1] = Big_num_con("T");
        component[502][1] = Big_num_con("T");
        component[503][1] = Big_num_con("R");
        component[504][1] = Big_num_con("R");
        component[505][1] = Big_num_con("R");
        component[506][1] = Big_num_con("R");
        component[507][1] = Big_num_con("R");
        component[508][1] = Big_num_con("R");
        component[509][1] = Big_num_con("R");
        component[510][1] = Big_num_con("R");
        component[511][1] = Big_num_con("R");
        component[512][1] = Big_num_con("R");
        component[513][1] = Big_num_con("R");
        component[514][1] = Big_num_con("R");
        component[515][1] = Big_num_con("R");
    }
    else if (dis_p == 8)
    {
        component[500][1] = Big_num_con("T");
        component[501][1] = Big_num_con("T");
        component[502][1] = Big_num_con("T");
        component[503][1] = Big_num_con("V");
        component[504][1] = Big_num_con("V");
        component[505][1] = Big_num_con("V");
        component[506][1] = Big_num_con("T");
        component[507][1] = Big_num_con("T");
        component[508][1] = Big_num_con("T");
        component[509][1] = Big_num_con("V");
        component[510][1] = Big_num_con("V");
        component[511][1] = Big_num_con("V");
        component[512][1] = Big_num_con("V");
        component[513][1] = Big_num_con("V");
        component[514][1] = Big_num_con("T");
        component[515][1] = Big_num_con("T");
    }
    else if (dis_p == 9)
    {
        component[500][1] = Big_num_con("T");
        component[501][1] = Big_num_con("T");
        component[502][1] = Big_num_con("T");
        component[503][1] = Big_num_con("V");
        component[504][1] = Big_num_con("V");
        component[505][1] = Big_num_con("V");
        component[506][1] = Big_num_con("T");
        component[507][1] = Big_num_con("T");
        component[508][1] = Big_num_con("T");
        component[509][1] = Big_num_con("R");
        component[510][1] = Big_num_con("R");
        component[511][1] = Big_num_con("R");
        component[512][1] = Big_num_con("T");
        component[513][1] = Big_num_con("T");
        component[514][1] = Big_num_con("T");
        component[515][1] = Big_num_con("T");
    }
    else
    {
        component[500][1] = Big_num_con("O");
        component[501][1] = Big_num_con("O");
        component[502][1] = Big_num_con("O");
        component[503][1] = Big_num_con("O");
        component[504][1] = Big_num_con("O");
        component[505][1] = Big_num_con("O");
        component[506][1] = Big_num_con("O");
        component[507][1] = Big_num_con("O");
        component[508][1] = Big_num_con("O");
        component[509][1] = Big_num_con("O");
        component[510][1] = Big_num_con("O");
        component[511][1] = Big_num_con("O");
        component[512][1] = Big_num_con("O");
        component[513][1] = Big_num_con("O");
        component[514][1] = Big_num_con("O");
        component[515][1] = Big_num_con("O");
    }
}
void Display_Price_Position_3(int dis_p)
{
    if (dis_p == 0)
    {
        component[500][2] = Big_num_con("T");
        component[501][2] = Big_num_con("T");
        component[502][2] = Big_num_con("V");
        component[503][2] = Big_num_con("V");
        component[504][2] = Big_num_con("V");
        component[505][2] = Big_num_con("V");
        component[506][2] = Big_num_con("V");
        component[507][2] = Big_num_con("V");
        component[508][2] = Big_num_con("V");
        component[509][2] = Big_num_con("V");
        component[510][2] = Big_num_con("V");
        component[511][2] = Big_num_con("V");
        component[512][2] = Big_num_con("V");
        component[513][2] = Big_num_con("V");
        component[514][2] = Big_num_con("T");
        component[515][2] = Big_num_con("T");
    }
    else if (dis_p == 1)
    {
        component[500][2] = Big_num_con("R");
        component[501][2] = Big_num_con("R");
        component[502][2] = Big_num_con("R");
        component[503][2] = Big_num_con("R");
        component[504][2] = Big_num_con("R");
        component[505][2] = Big_num_con("R");
        component[506][2] = Big_num_con("R");
        component[507][2] = Big_num_con("R");
        component[508][2] = Big_num_con("R");
        component[509][2] = Big_num_con("R");
        component[510][2] = Big_num_con("R");
        component[511][2] = Big_num_con("R");
        component[512][2] = Big_num_con("R");
        component[513][2] = Big_num_con("R");
        component[514][2] = Big_num_con("R");
        component[515][2] = Big_num_con("R");
    }
    else if (dis_p == 2)
    {
        component[500][2] = Big_num_con("T");
        component[501][2] = Big_num_con("T");
        component[502][2] = Big_num_con("T");
        component[503][2] = Big_num_con("R");
        component[504][2] = Big_num_con("R");
        component[505][2] = Big_num_con("R");
        component[506][2] = Big_num_con("T");
        component[507][2] = Big_num_con("T");
        component[508][2] = Big_num_con("T");
        component[509][2] = Big_num_con("T");
        component[510][2] = Big_num_con("L");
        component[511][2] = Big_num_con("L");
        component[512][2] = Big_num_con("L");
        component[513][2] = Big_num_con("T");
        component[514][2] = Big_num_con("T");
        component[515][2] = Big_num_con("T");
    }
    else if (dis_p == 3)
    {
        component[500][2] = Big_num_con("T");
        component[501][2] = Big_num_con("T");
        component[502][2] = Big_num_con("T");
        component[503][2] = Big_num_con("R");
        component[504][2] = Big_num_con("R");
        component[505][2] = Big_num_con("R");
        component[506][2] = Big_num_con("T");
        component[507][2] = Big_num_con("T");
        component[508][2] = Big_num_con("T");
        component[509][2] = Big_num_con("R");
        component[510][2] = Big_num_con("R");
        component[511][2] = Big_num_con("R");
        component[512][2] = Big_num_con("T");
        component[513][2] = Big_num_con("T");
        component[514][2] = Big_num_con("T");
        component[515][2] = Big_num_con("T");
    }
    else if (dis_p == 4)
    {
        component[500][2] = Big_num_con("V");
        component[501][2] = Big_num_con("V");
        component[502][2] = Big_num_con("V");
        component[503][2] = Big_num_con("V");
        component[504][2] = Big_num_con("V");
        component[505][2] = Big_num_con("V");
        component[506][2] = Big_num_con("T");
        component[507][2] = Big_num_con("T");
        component[508][2] = Big_num_con("T");
        component[509][2] = Big_num_con("R");
        component[510][2] = Big_num_con("R");
        component[511][2] = Big_num_con("R");
        component[512][2] = Big_num_con("R");
        component[513][2] = Big_num_con("R");
        component[514][2] = Big_num_con("R");
        component[515][2] = Big_num_con("R");
    }
    else if (dis_p == 5)
    {
        component[500][2] = Big_num_con("T");
        component[501][2] = Big_num_con("T");
        component[502][2] = Big_num_con("T");
        component[503][2] = Big_num_con("L");
        component[504][2] = Big_num_con("L");
        component[505][2] = Big_num_con("L");
        component[506][2] = Big_num_con("T");
        component[507][2] = Big_num_con("T");
        component[508][2] = Big_num_con("T");
        component[509][2] = Big_num_con("R");
        component[510][2] = Big_num_con("R");
        component[511][2] = Big_num_con("R");
        component[512][2] = Big_num_con("T");
        component[513][2] = Big_num_con("T");
        component[514][2] = Big_num_con("T");
        component[515][2] = Big_num_con("T");
    }
    else if (dis_p == 6)
    {
        component[500][2] = Big_num_con("T");
        component[501][2] = Big_num_con("T");
        component[502][2] = Big_num_con("T");
        component[503][2] = Big_num_con("L");
        component[504][2] = Big_num_con("L");
        component[505][2] = Big_num_con("L");
        component[506][2] = Big_num_con("T");
        component[507][2] = Big_num_con("T");
        component[508][2] = Big_num_con("T");
        component[509][2] = Big_num_con("V");
        component[510][2] = Big_num_con("V");
        component[511][2] = Big_num_con("V");
        component[512][2] = Big_num_con("V");
        component[513][2] = Big_num_con("V");
        component[514][2] = Big_num_con("T");
        component[515][2] = Big_num_con("T");
    }
    else if (dis_p == 7)
    {
        component[500][2] = Big_num_con("T");
        component[501][2] = Big_num_con("T");
        component[502][2] = Big_num_con("T");
        component[503][2] = Big_num_con("R");
        component[504][2] = Big_num_con("R");
        component[505][2] = Big_num_con("R");
        component[506][2] = Big_num_con("R");
        component[507][2] = Big_num_con("R");
        component[508][2] = Big_num_con("R");
        component[509][2] = Big_num_con("R");
        component[510][2] = Big_num_con("R");
        component[511][2] = Big_num_con("R");
        component[512][2] = Big_num_con("R");
        component[513][2] = Big_num_con("R");
        component[514][2] = Big_num_con("R");
        component[515][2] = Big_num_con("R");
    }
    else if (dis_p == 8)
    {
        component[500][2] = Big_num_con("T");
        component[501][2] = Big_num_con("T");
        component[502][2] = Big_num_con("T");
        component[503][2] = Big_num_con("V");
        component[504][2] = Big_num_con("V");
        component[505][2] = Big_num_con("V");
        component[506][2] = Big_num_con("T");
        component[507][2] = Big_num_con("T");
        component[508][2] = Big_num_con("T");
        component[509][2] = Big_num_con("V");
        component[510][2] = Big_num_con("V");
        component[511][2] = Big_num_con("V");
        component[512][2] = Big_num_con("V");
        component[513][2] = Big_num_con("V");
        component[514][2] = Big_num_con("T");
        component[515][2] = Big_num_con("T");
    }
    else if (dis_p == 9)
    {
        component[500][2] = Big_num_con("T");
        component[501][2] = Big_num_con("T");
        component[502][2] = Big_num_con("T");
        component[503][2] = Big_num_con("V");
        component[504][2] = Big_num_con("V");
        component[505][2] = Big_num_con("V");
        component[506][2] = Big_num_con("T");
        component[507][2] = Big_num_con("T");
        component[508][2] = Big_num_con("T");
        component[509][2] = Big_num_con("R");
        component[510][2] = Big_num_con("R");
        component[511][2] = Big_num_con("R");
        component[512][2] = Big_num_con("T");
        component[513][2] = Big_num_con("T");
        component[514][2] = Big_num_con("T");
        component[515][2] = Big_num_con("T");
    }
    else
    {
        component[500][2] = Big_num_con("O");
        component[501][2] = Big_num_con("O");
        component[502][2] = Big_num_con("O");
        component[503][2] = Big_num_con("O");
        component[504][2] = Big_num_con("O");
        component[505][2] = Big_num_con("O");
        component[506][2] = Big_num_con("O");
        component[507][2] = Big_num_con("O");
        component[508][2] = Big_num_con("O");
        component[509][2] = Big_num_con("O");
        component[510][2] = Big_num_con("O");
        component[511][2] = Big_num_con("O");
        component[512][2] = Big_num_con("O");
        component[513][2] = Big_num_con("O");
        component[514][2] = Big_num_con("O");
        component[515][2] = Big_num_con("O");
    }
}
void Display_Price_Position_4(int dis_p)
{
    if (dis_p == 0)
    {
        component[500][3] = Big_num_con("T");
        component[501][3] = Big_num_con("T");
        component[502][3] = Big_num_con("V");
        component[503][3] = Big_num_con("V");
        component[504][3] = Big_num_con("V");
        component[505][3] = Big_num_con("V");
        component[506][3] = Big_num_con("V");
        component[507][3] = Big_num_con("V");
        component[508][3] = Big_num_con("V");
        component[509][3] = Big_num_con("V");
        component[510][3] = Big_num_con("V");
        component[511][3] = Big_num_con("V");
        component[512][3] = Big_num_con("V");
        component[513][3] = Big_num_con("V");
        component[514][3] = Big_num_con("T");
        component[515][3] = Big_num_con("T");
    }
    else if (dis_p == 1)
    {
        component[500][3] = Big_num_con("R");
        component[501][3] = Big_num_con("R");
        component[502][3] = Big_num_con("R");
        component[503][3] = Big_num_con("R");
        component[504][3] = Big_num_con("R");
        component[505][3] = Big_num_con("R");
        component[506][3] = Big_num_con("R");
        component[507][3] = Big_num_con("R");
        component[508][3] = Big_num_con("R");
        component[509][3] = Big_num_con("R");
        component[510][3] = Big_num_con("R");
        component[511][3] = Big_num_con("R");
        component[512][3] = Big_num_con("R");
        component[513][3] = Big_num_con("R");
        component[514][3] = Big_num_con("R");
        component[515][3] = Big_num_con("R");
    }
    else if (dis_p == 2)
    {
        component[500][3] = Big_num_con("T");
        component[501][3] = Big_num_con("T");
        component[502][3] = Big_num_con("T");
        component[503][3] = Big_num_con("R");
        component[504][3] = Big_num_con("R");
        component[505][3] = Big_num_con("R");
        component[506][3] = Big_num_con("T");
        component[507][3] = Big_num_con("T");
        component[508][3] = Big_num_con("T");
        component[509][3] = Big_num_con("T");
        component[510][3] = Big_num_con("L");
        component[511][3] = Big_num_con("L");
        component[512][3] = Big_num_con("L");
        component[513][3] = Big_num_con("T");
        component[514][3] = Big_num_con("T");
        component[515][3] = Big_num_con("T");
    }
    else if (dis_p == 3)
    {
        component[500][3] = Big_num_con("T");
        component[501][3] = Big_num_con("T");
        component[502][3] = Big_num_con("T");
        component[503][3] = Big_num_con("R");
        component[504][3] = Big_num_con("R");
        component[505][3] = Big_num_con("R");
        component[506][3] = Big_num_con("T");
        component[507][3] = Big_num_con("T");
        component[508][3] = Big_num_con("T");
        component[509][3] = Big_num_con("R");
        component[510][3] = Big_num_con("R");
        component[511][3] = Big_num_con("R");
        component[512][3] = Big_num_con("T");
        component[513][3] = Big_num_con("T");
        component[514][3] = Big_num_con("T");
        component[515][3] = Big_num_con("T");
    }
    else if (dis_p == 4)
    {
        component[500][3] = Big_num_con("V");
        component[501][3] = Big_num_con("V");
        component[502][3] = Big_num_con("V");
        component[503][3] = Big_num_con("V");
        component[504][3] = Big_num_con("V");
        component[505][3] = Big_num_con("V");
        component[506][3] = Big_num_con("T");
        component[507][3] = Big_num_con("T");
        component[508][3] = Big_num_con("T");
        component[509][3] = Big_num_con("R");
        component[510][3] = Big_num_con("R");
        component[511][3] = Big_num_con("R");
        component[512][3] = Big_num_con("R");
        component[513][3] = Big_num_con("R");
        component[514][3] = Big_num_con("R");
        component[515][3] = Big_num_con("R");
    }
    else if (dis_p == 5)
    {
        component[500][3] = Big_num_con("T");
        component[501][3] = Big_num_con("T");
        component[502][3] = Big_num_con("T");
        component[503][3] = Big_num_con("L");
        component[504][3] = Big_num_con("L");
        component[505][3] = Big_num_con("L");
        component[506][3] = Big_num_con("T");
        component[507][3] = Big_num_con("T");
        component[508][3] = Big_num_con("T");
        component[509][3] = Big_num_con("R");
        component[510][3] = Big_num_con("R");
        component[511][3] = Big_num_con("R");
        component[512][3] = Big_num_con("T");
        component[513][3] = Big_num_con("T");
        component[514][3] = Big_num_con("T");
        component[515][3] = Big_num_con("T");
    }
    else if (dis_p == 6)
    {
        component[500][3] = Big_num_con("T");
        component[501][3] = Big_num_con("T");
        component[502][3] = Big_num_con("T");
        component[503][3] = Big_num_con("L");
        component[504][3] = Big_num_con("L");
        component[505][3] = Big_num_con("L");
        component[506][3] = Big_num_con("T");
        component[507][3] = Big_num_con("T");
        component[508][3] = Big_num_con("T");
        component[509][3] = Big_num_con("V");
        component[510][3] = Big_num_con("V");
        component[511][3] = Big_num_con("V");
        component[512][3] = Big_num_con("V");
        component[513][3] = Big_num_con("V");
        component[514][3] = Big_num_con("T");
        component[515][3] = Big_num_con("T");
    }
    else if (dis_p == 7)
    {
        component[500][3] = Big_num_con("T");
        component[501][3] = Big_num_con("T");
        component[502][3] = Big_num_con("T");
        component[503][3] = Big_num_con("R");
        component[504][3] = Big_num_con("R");
        component[505][3] = Big_num_con("R");
        component[506][3] = Big_num_con("R");
        component[507][3] = Big_num_con("R");
        component[508][3] = Big_num_con("R");
        component[509][3] = Big_num_con("R");
        component[510][3] = Big_num_con("R");
        component[511][3] = Big_num_con("R");
        component[512][3] = Big_num_con("R");
        component[513][3] = Big_num_con("R");
        component[514][3] = Big_num_con("R");
        component[515][3] = Big_num_con("R");
    }
    else if (dis_p == 8)
    {
        component[500][3] = Big_num_con("T");
        component[501][3] = Big_num_con("T");
        component[502][3] = Big_num_con("T");
        component[503][3] = Big_num_con("V");
        component[504][3] = Big_num_con("V");
        component[505][3] = Big_num_con("V");
        component[506][3] = Big_num_con("T");
        component[507][3] = Big_num_con("T");
        component[508][3] = Big_num_con("T");
        component[509][3] = Big_num_con("V");
        component[510][3] = Big_num_con("V");
        component[511][3] = Big_num_con("V");
        component[512][3] = Big_num_con("V");
        component[513][3] = Big_num_con("V");
        component[514][3] = Big_num_con("T");
        component[515][3] = Big_num_con("T");
    }
    else if (dis_p == 9)
    {
        component[500][3] = Big_num_con("T");
        component[501][3] = Big_num_con("T");
        component[502][3] = Big_num_con("T");
        component[503][3] = Big_num_con("V");
        component[504][3] = Big_num_con("V");
        component[505][3] = Big_num_con("V");
        component[506][3] = Big_num_con("T");
        component[507][3] = Big_num_con("T");
        component[508][3] = Big_num_con("T");
        component[509][3] = Big_num_con("R");
        component[510][3] = Big_num_con("R");
        component[511][3] = Big_num_con("R");
        component[512][3] = Big_num_con("T");
        component[513][3] = Big_num_con("T");
        component[514][3] = Big_num_con("T");
        component[515][3] = Big_num_con("T");
    }
    else
    {
        component[500][3] = Big_num_con("O");
        component[501][3] = Big_num_con("O");
        component[502][3] = Big_num_con("O");
        component[503][3] = Big_num_con("O");
        component[504][3] = Big_num_con("O");
        component[505][3] = Big_num_con("O");
        component[506][3] = Big_num_con("O");
        component[507][3] = Big_num_con("O");
        component[508][3] = Big_num_con("O");
        component[509][3] = Big_num_con("O");
        component[510][3] = Big_num_con("O");
        component[511][3] = Big_num_con("O");
        component[512][3] = Big_num_con("O");
        component[513][3] = Big_num_con("O");
        component[514][3] = Big_num_con("O");
        component[515][3] = Big_num_con("O");
    }
}
void Display_Price_Position_5(int dis_p)
{
    if (dis_p == 0)
    {
        component[500][4] = Big_num_con("T");
        component[501][4] = Big_num_con("T");
        component[502][4] = Big_num_con("V");
        component[503][4] = Big_num_con("V");
        component[504][4] = Big_num_con("V");
        component[505][4] = Big_num_con("V");
        component[506][4] = Big_num_con("V");
        component[507][4] = Big_num_con("V");
        component[508][4] = Big_num_con("V");
        component[509][4] = Big_num_con("V");
        component[510][4] = Big_num_con("V");
        component[511][4] = Big_num_con("V");
        component[512][4] = Big_num_con("V");
        component[513][4] = Big_num_con("V");
        component[514][4] = Big_num_con("T");
        component[515][4] = Big_num_con("T");
    }
    else if (dis_p == 1)
    {
        component[500][4] = Big_num_con("R");
        component[501][4] = Big_num_con("R");
        component[502][4] = Big_num_con("R");
        component[503][4] = Big_num_con("R");
        component[504][4] = Big_num_con("R");
        component[505][4] = Big_num_con("R");
        component[506][4] = Big_num_con("R");
        component[507][4] = Big_num_con("R");
        component[508][4] = Big_num_con("R");
        component[509][4] = Big_num_con("R");
        component[510][4] = Big_num_con("R");
        component[511][4] = Big_num_con("R");
        component[512][4] = Big_num_con("R");
        component[513][4] = Big_num_con("R");
        component[514][4] = Big_num_con("R");
        component[515][4] = Big_num_con("R");
    }
    else if (dis_p == 2)
    {
        component[500][4] = Big_num_con("T");
        component[501][4] = Big_num_con("T");
        component[502][4] = Big_num_con("T");
        component[503][4] = Big_num_con("R");
        component[504][4] = Big_num_con("R");
        component[505][4] = Big_num_con("R");
        component[506][4] = Big_num_con("T");
        component[507][4] = Big_num_con("T");
        component[508][4] = Big_num_con("T");
        component[509][4] = Big_num_con("T");
        component[510][4] = Big_num_con("L");
        component[511][4] = Big_num_con("L");
        component[512][4] = Big_num_con("L");
        component[513][4] = Big_num_con("T");
        component[514][4] = Big_num_con("T");
        component[515][4] = Big_num_con("T");
    }
    else if (dis_p == 3)
    {
        component[500][4] = Big_num_con("T");
        component[501][4] = Big_num_con("T");
        component[502][4] = Big_num_con("T");
        component[503][4] = Big_num_con("R");
        component[504][4] = Big_num_con("R");
        component[505][4] = Big_num_con("R");
        component[506][4] = Big_num_con("T");
        component[507][4] = Big_num_con("T");
        component[508][4] = Big_num_con("T");
        component[509][4] = Big_num_con("R");
        component[510][4] = Big_num_con("R");
        component[511][4] = Big_num_con("R");
        component[512][4] = Big_num_con("T");
        component[513][4] = Big_num_con("T");
        component[514][4] = Big_num_con("T");
        component[515][4] = Big_num_con("T");
    }
    else if (dis_p == 4)
    {
        component[500][4] = Big_num_con("V");
        component[501][4] = Big_num_con("V");
        component[502][4] = Big_num_con("V");
        component[503][4] = Big_num_con("V");
        component[504][4] = Big_num_con("V");
        component[505][4] = Big_num_con("V");
        component[506][4] = Big_num_con("T");
        component[507][4] = Big_num_con("T");
        component[508][4] = Big_num_con("T");
        component[509][4] = Big_num_con("R");
        component[510][4] = Big_num_con("R");
        component[511][4] = Big_num_con("R");
        component[512][4] = Big_num_con("R");
        component[513][4] = Big_num_con("R");
        component[514][4] = Big_num_con("R");
        component[515][4] = Big_num_con("R");
    }
    else if (dis_p == 5)
    {
        component[500][4] = Big_num_con("T");
        component[501][4] = Big_num_con("T");
        component[502][4] = Big_num_con("T");
        component[503][4] = Big_num_con("L");
        component[504][4] = Big_num_con("L");
        component[505][4] = Big_num_con("L");
        component[506][4] = Big_num_con("T");
        component[507][4] = Big_num_con("T");
        component[508][4] = Big_num_con("T");
        component[509][4] = Big_num_con("R");
        component[510][4] = Big_num_con("R");
        component[511][4] = Big_num_con("R");
        component[512][4] = Big_num_con("T");
        component[513][4] = Big_num_con("T");
        component[514][4] = Big_num_con("T");
        component[515][4] = Big_num_con("T");
    }
    else if (dis_p == 6)
    {
        component[500][4] = Big_num_con("T");
        component[501][4] = Big_num_con("T");
        component[502][4] = Big_num_con("T");
        component[503][4] = Big_num_con("L");
        component[504][4] = Big_num_con("L");
        component[505][4] = Big_num_con("L");
        component[506][4] = Big_num_con("T");
        component[507][4] = Big_num_con("T");
        component[508][4] = Big_num_con("T");
        component[509][4] = Big_num_con("V");
        component[510][4] = Big_num_con("V");
        component[511][4] = Big_num_con("V");
        component[512][4] = Big_num_con("V");
        component[513][4] = Big_num_con("V");
        component[514][4] = Big_num_con("T");
        component[515][4] = Big_num_con("T");
    }
    else if (dis_p == 7)
    {
        component[500][4] = Big_num_con("T");
        component[501][4] = Big_num_con("T");
        component[502][4] = Big_num_con("T");
        component[503][4] = Big_num_con("R");
        component[504][4] = Big_num_con("R");
        component[505][4] = Big_num_con("R");
        component[506][4] = Big_num_con("R");
        component[507][4] = Big_num_con("R");
        component[508][4] = Big_num_con("R");
        component[509][4] = Big_num_con("R");
        component[510][4] = Big_num_con("R");
        component[511][4] = Big_num_con("R");
        component[512][4] = Big_num_con("R");
        component[513][4] = Big_num_con("R");
        component[514][4] = Big_num_con("R");
        component[515][4] = Big_num_con("R");
    }
    else if (dis_p == 8)
    {
        component[500][4] = Big_num_con("T");
        component[501][4] = Big_num_con("T");
        component[502][4] = Big_num_con("T");
        component[503][4] = Big_num_con("V");
        component[504][4] = Big_num_con("V");
        component[505][4] = Big_num_con("V");
        component[506][4] = Big_num_con("T");
        component[507][4] = Big_num_con("T");
        component[508][4] = Big_num_con("T");
        component[509][4] = Big_num_con("V");
        component[510][4] = Big_num_con("V");
        component[511][4] = Big_num_con("V");
        component[512][4] = Big_num_con("V");
        component[513][4] = Big_num_con("V");
        component[514][4] = Big_num_con("T");
        component[515][4] = Big_num_con("T");
    }
    else if (dis_p == 9)
    {
        component[500][4] = Big_num_con("T");
        component[501][4] = Big_num_con("T");
        component[502][4] = Big_num_con("T");
        component[503][4] = Big_num_con("V");
        component[504][4] = Big_num_con("V");
        component[505][4] = Big_num_con("V");
        component[506][4] = Big_num_con("T");
        component[507][4] = Big_num_con("T");
        component[508][4] = Big_num_con("T");
        component[509][4] = Big_num_con("R");
        component[510][4] = Big_num_con("R");
        component[511][4] = Big_num_con("R");
        component[512][4] = Big_num_con("T");
        component[513][4] = Big_num_con("T");
        component[514][4] = Big_num_con("T");
        component[515][4] = Big_num_con("T");
    }
    else
    {
        component[500][4] = Big_num_con("O");
        component[501][4] = Big_num_con("O");
        component[502][4] = Big_num_con("O");
        component[503][4] = Big_num_con("O");
        component[504][4] = Big_num_con("O");
        component[505][4] = Big_num_con("O");
        component[506][4] = Big_num_con("O");
        component[507][4] = Big_num_con("O");
        component[508][4] = Big_num_con("O");
        component[509][4] = Big_num_con("O");
        component[510][4] = Big_num_con("O");
        component[511][4] = Big_num_con("O");
        component[512][4] = Big_num_con("O");
        component[513][4] = Big_num_con("O");
        component[514][4] = Big_num_con("O");
        component[515][4] = Big_num_con("O");
    }
}
void Display_Price_Position_6(int dis_p)
{
    if (dis_p == 0)
    {
        component[500][5] = Big_num_con("T");
        component[501][5] = Big_num_con("T");
        component[502][5] = Big_num_con("V");
        component[503][5] = Big_num_con("V");
        component[504][5] = Big_num_con("V");
        component[505][5] = Big_num_con("V");
        component[506][5] = Big_num_con("V");
        component[507][5] = Big_num_con("V");
        component[508][5] = Big_num_con("V");
        component[509][5] = Big_num_con("V");
        component[510][5] = Big_num_con("V");
        component[511][5] = Big_num_con("V");
        component[512][5] = Big_num_con("V");
        component[513][5] = Big_num_con("V");
        component[514][5] = Big_num_con("T");
        component[515][5] = Big_num_con("T");
    }
    else if (dis_p == 1)
    {
        component[500][5] = Big_num_con("R");
        component[501][5] = Big_num_con("R");
        component[502][5] = Big_num_con("R");
        component[503][5] = Big_num_con("R");
        component[504][5] = Big_num_con("R");
        component[505][5] = Big_num_con("R");
        component[506][5] = Big_num_con("R");
        component[507][5] = Big_num_con("R");
        component[508][5] = Big_num_con("R");
        component[509][5] = Big_num_con("R");
        component[510][5] = Big_num_con("R");
        component[511][5] = Big_num_con("R");
        component[512][5] = Big_num_con("R");
        component[513][5] = Big_num_con("R");
        component[514][5] = Big_num_con("R");
        component[515][5] = Big_num_con("R");
    }
    else if (dis_p == 2)
    {
        component[500][5] = Big_num_con("T");
        component[501][5] = Big_num_con("T");
        component[502][5] = Big_num_con("T");
        component[503][5] = Big_num_con("R");
        component[504][5] = Big_num_con("R");
        component[505][5] = Big_num_con("R");
        component[506][5] = Big_num_con("T");
        component[507][5] = Big_num_con("T");
        component[508][5] = Big_num_con("T");
        component[509][5] = Big_num_con("T");
        component[510][5] = Big_num_con("L");
        component[511][5] = Big_num_con("L");
        component[512][5] = Big_num_con("L");
        component[513][5] = Big_num_con("T");
        component[514][5] = Big_num_con("T");
        component[515][5] = Big_num_con("T");
    }
    else if (dis_p == 3)
    {
        component[500][5] = Big_num_con("T");
        component[501][5] = Big_num_con("T");
        component[502][5] = Big_num_con("T");
        component[503][5] = Big_num_con("R");
        component[504][5] = Big_num_con("R");
        component[505][5] = Big_num_con("R");
        component[506][5] = Big_num_con("T");
        component[507][5] = Big_num_con("T");
        component[508][5] = Big_num_con("T");
        component[509][5] = Big_num_con("R");
        component[510][5] = Big_num_con("R");
        component[511][5] = Big_num_con("R");
        component[512][5] = Big_num_con("T");
        component[513][5] = Big_num_con("T");
        component[514][5] = Big_num_con("T");
        component[515][5] = Big_num_con("T");
    }
    else if (dis_p == 4)
    {
        component[500][5] = Big_num_con("V");
        component[501][5] = Big_num_con("V");
        component[502][5] = Big_num_con("V");
        component[503][5] = Big_num_con("V");
        component[504][5] = Big_num_con("V");
        component[505][5] = Big_num_con("V");
        component[506][5] = Big_num_con("T");
        component[507][5] = Big_num_con("T");
        component[508][5] = Big_num_con("T");
        component[509][5] = Big_num_con("R");
        component[510][5] = Big_num_con("R");
        component[511][5] = Big_num_con("R");
        component[512][5] = Big_num_con("R");
        component[513][5] = Big_num_con("R");
        component[514][5] = Big_num_con("R");
        component[515][5] = Big_num_con("R");
    }
    else if (dis_p == 5)
    {
        component[500][5] = Big_num_con("T");
        component[501][5] = Big_num_con("T");
        component[502][5] = Big_num_con("T");
        component[503][5] = Big_num_con("L");
        component[504][5] = Big_num_con("L");
        component[505][5] = Big_num_con("L");
        component[506][5] = Big_num_con("T");
        component[507][5] = Big_num_con("T");
        component[508][5] = Big_num_con("T");
        component[509][5] = Big_num_con("R");
        component[510][5] = Big_num_con("R");
        component[511][5] = Big_num_con("R");
        component[512][5] = Big_num_con("T");
        component[513][5] = Big_num_con("T");
        component[514][5] = Big_num_con("T");
        component[515][5] = Big_num_con("T");
    }
    else if (dis_p == 6)
    {
        component[500][5] = Big_num_con("T");
        component[501][5] = Big_num_con("T");
        component[502][5] = Big_num_con("T");
        component[503][5] = Big_num_con("L");
        component[504][5] = Big_num_con("L");
        component[505][5] = Big_num_con("L");
        component[506][5] = Big_num_con("T");
        component[507][5] = Big_num_con("T");
        component[508][5] = Big_num_con("T");
        component[509][5] = Big_num_con("V");
        component[510][5] = Big_num_con("V");
        component[511][5] = Big_num_con("V");
        component[512][5] = Big_num_con("V");
        component[513][5] = Big_num_con("V");
        component[514][5] = Big_num_con("T");
        component[515][5] = Big_num_con("T");
    }
    else if (dis_p == 7)
    {
        component[500][5] = Big_num_con("T");
        component[501][5] = Big_num_con("T");
        component[502][5] = Big_num_con("T");
        component[503][5] = Big_num_con("R");
        component[504][5] = Big_num_con("R");
        component[505][5] = Big_num_con("R");
        component[506][5] = Big_num_con("R");
        component[507][5] = Big_num_con("R");
        component[508][5] = Big_num_con("R");
        component[509][5] = Big_num_con("R");
        component[510][5] = Big_num_con("R");
        component[511][5] = Big_num_con("R");
        component[512][5] = Big_num_con("R");
        component[513][5] = Big_num_con("R");
        component[514][5] = Big_num_con("R");
        component[515][5] = Big_num_con("R");
    }
    else if (dis_p == 8)
    {
        component[500][5] = Big_num_con("T");
        component[501][5] = Big_num_con("T");
        component[502][5] = Big_num_con("T");
        component[503][5] = Big_num_con("V");
        component[504][5] = Big_num_con("V");
        component[505][5] = Big_num_con("V");
        component[506][5] = Big_num_con("T");
        component[507][5] = Big_num_con("T");
        component[508][5] = Big_num_con("T");
        component[509][5] = Big_num_con("V");
        component[510][5] = Big_num_con("V");
        component[511][5] = Big_num_con("V");
        component[512][5] = Big_num_con("V");
        component[513][5] = Big_num_con("V");
        component[514][5] = Big_num_con("T");
        component[515][5] = Big_num_con("T");
    }
    else if (dis_p == 9)
    {
        component[500][5] = Big_num_con("T");
        component[501][5] = Big_num_con("T");
        component[502][5] = Big_num_con("T");
        component[503][5] = Big_num_con("V");
        component[504][5] = Big_num_con("V");
        component[505][5] = Big_num_con("V");
        component[506][5] = Big_num_con("T");
        component[507][5] = Big_num_con("T");
        component[508][5] = Big_num_con("T");
        component[509][5] = Big_num_con("R");
        component[510][5] = Big_num_con("R");
        component[511][5] = Big_num_con("R");
        component[512][5] = Big_num_con("T");
        component[513][5] = Big_num_con("T");
        component[514][5] = Big_num_con("T");
        component[515][5] = Big_num_con("T");
    }
    else
    {
        component[500][5] = Big_num_con("O");
        component[501][5] = Big_num_con("O");
        component[502][5] = Big_num_con("O");
        component[503][5] = Big_num_con("O");
        component[504][5] = Big_num_con("O");
        component[505][5] = Big_num_con("O");
        component[506][5] = Big_num_con("O");
        component[507][5] = Big_num_con("O");
        component[508][5] = Big_num_con("O");
        component[509][5] = Big_num_con("O");
        component[510][5] = Big_num_con("O");
        component[511][5] = Big_num_con("O");
        component[512][5] = Big_num_con("O");
        component[513][5] = Big_num_con("O");
        component[514][5] = Big_num_con("O");
        component[515][5] = Big_num_con("O");
    }
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
void Displays(int show)
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    border();
    title_bar();
    border();
    show_manu();
    border();
    if (show == 1)
    {
        header();
        border();
        int loop = 0;
        while (loop <= line_show)
        {
            cout << "=" << setw(size2) << component[loop][0] << setw(size2) << "=" << setw(size3) << component[loop][1] << setw(size3) << "=" << setw(size4) << component[loop][3] << setw(size4) << "=" << setw(size5) << component[loop][2] << setw(size5) << "=" << endl;
            loop++;
        }
        border();
        cout << endl;
        cout << "  " << component[500][0] << setw(size1) << component[500][1] << setw(size1) << component[500][2] << setw(size1) << component[500][3] << setw(size1) << component[500][4] << setw(size1) << component[500][5] << setw(size1) << endl;
        cout << component[501][0] << setw(size1) << component[501][1] << setw(size1) << component[501][2] << setw(size1) << component[501][3] << setw(size1) << component[501][4] << setw(size1) << component[501][5] << setw(size1) << endl;
        cout << component[502][0] << setw(size1) << component[502][1] << setw(size1) << component[502][2] << setw(size1) << component[502][3] << setw(size1) << component[502][4] << setw(size1) << component[502][5] << setw(size1) << endl;
        cout << component[503][0] << setw(size1) << component[503][1] << setw(size1) << component[503][2] << setw(size1) << component[503][3] << setw(size1) << component[503][4] << setw(size1) << component[503][5] << setw(size1) << endl;
        cout << component[504][0] << setw(size1) << component[504][1] << setw(size1) << component[504][2] << setw(size1) << component[504][3] << setw(size1) << component[504][4] << setw(size1) << component[504][5] << setw(size1) << endl;
        cout << component[505][0] << setw(size1) << component[505][1] << setw(size1) << component[505][2] << setw(size1) << component[505][3] << setw(size1) << component[505][4] << setw(size1) << component[505][5] << setw(size1) << endl;
        cout << component[506][0] << setw(size1) << component[506][1] << setw(size1) << component[506][2] << setw(size1) << component[506][3] << setw(size1) << component[506][4] << setw(size1) << component[506][5] << setw(size1) << endl;
        cout << component[507][0] << setw(size1) << component[507][1] << setw(size1) << component[507][2] << setw(size1) << component[507][3] << setw(size1) << component[507][4] << setw(size1) << component[507][5] << setw(size1) << endl;
        cout << component[508][0] << setw(size1) << component[508][1] << setw(size1) << component[508][2] << setw(size1) << component[508][3] << setw(size1) << component[508][4] << setw(size1) << component[508][5] << setw(size1) << endl;
        cout << component[509][0] << setw(size1) << component[509][1] << setw(size1) << component[509][2] << setw(size1) << component[509][3] << setw(size1) << component[509][4] << setw(size1) << component[509][5] << setw(size1) << endl;
        cout << component[510][0] << setw(size1) << component[510][1] << setw(size1) << component[510][2] << setw(size1) << component[510][3] << setw(size1) << component[510][4] << setw(size1) << component[510][5] << setw(size1) << endl;
        cout << component[511][0] << setw(size1) << component[511][1] << setw(size1) << component[511][2] << setw(size1) << component[511][3] << setw(size1) << component[511][4] << setw(size1) << component[511][5] << setw(size1) << endl;
        cout << component[512][0] << setw(size1) << component[512][1] << setw(size1) << component[512][2] << setw(size1) << component[512][3] << setw(size1) << component[512][4] << setw(size1) << component[512][5] << setw(size1) << endl;
        cout << component[513][0] << setw(size1) << component[513][1] << setw(size1) << component[513][2] << setw(size1) << component[513][3] << setw(size1) << component[513][4] << setw(size1) << component[513][5] << setw(size1) << endl;
        cout << component[514][0] << setw(size1) << component[514][1] << setw(size1) << component[514][2] << setw(size1) << component[514][3] << setw(size1) << component[514][4] << setw(size1) << component[514][5] << setw(size1) << endl;
        cout << component[515][0] << setw(size1) << component[515][1] << setw(size1) << component[515][2] << setw(size1) << component[515][3] << setw(size1) << component[515][4] << setw(size1) << component[515][5] << setw(size1) << endl;
        Sell();
    }
    else if (show == 2)
    {
        string phone, money;
        cout << setw(size6) << "Total = " << setw(size1) << sum << setw(size1) << endl;
        cout << setw(size6) << "Phone member : " << setw(size1);
        cin >> phone;
        Process_sell_memeber(phone);
        cout << setw(size6) << "Name : " << setw(size1) << component[200][1] << setw(size1) << endl;
        cout << setw(size6) << "Point : " << setw(size1) << component[200][2] << setw(size1) << endl;
        cout << setw(size6) << "Receive Money : " << setw(size1);
        cin >> money;
        cout << setw(size6) << "Change : " << setw(size1) << Process_sell_change(money) << setw(size1) << endl;
        border();
        cout << endl;
        cout << red << "  " << component[500][0] << setw(size1) << component[500][1] << setw(size1) << component[500][2] << setw(size1) << component[500][3] << setw(size1) << component[500][4] << setw(size1) << component[500][5] << setw(size1) << endl;
        cout << component[501][0] << setw(size1) << component[501][1] << setw(size1) << component[501][2] << setw(size1) << component[501][3] << setw(size1) << component[501][4] << setw(size1) << component[501][5] << setw(size1) << endl;
        cout << component[502][0] << setw(size1) << component[502][1] << setw(size1) << component[502][2] << setw(size1) << component[502][3] << setw(size1) << component[502][4] << setw(size1) << component[502][5] << setw(size1) << endl;
        cout << component[503][0] << setw(size1) << component[503][1] << setw(size1) << component[503][2] << setw(size1) << component[503][3] << setw(size1) << component[503][4] << setw(size1) << component[503][5] << setw(size1) << endl;
        cout << component[504][0] << setw(size1) << component[504][1] << setw(size1) << component[504][2] << setw(size1) << component[504][3] << setw(size1) << component[504][4] << setw(size1) << component[504][5] << setw(size1) << endl;
        cout << component[505][0] << setw(size1) << component[505][1] << setw(size1) << component[505][2] << setw(size1) << component[505][3] << setw(size1) << component[505][4] << setw(size1) << component[505][5] << setw(size1) << endl;
        cout << component[506][0] << setw(size1) << component[506][1] << setw(size1) << component[506][2] << setw(size1) << component[506][3] << setw(size1) << component[506][4] << setw(size1) << component[506][5] << setw(size1) << endl;
        cout << component[507][0] << setw(size1) << component[507][1] << setw(size1) << component[507][2] << setw(size1) << component[507][3] << setw(size1) << component[507][4] << setw(size1) << component[507][5] << setw(size1) << endl;
        cout << component[508][0] << setw(size1) << component[508][1] << setw(size1) << component[508][2] << setw(size1) << component[508][3] << setw(size1) << component[508][4] << setw(size1) << component[508][5] << setw(size1) << endl;
        cout << component[509][0] << setw(size1) << component[509][1] << setw(size1) << component[509][2] << setw(size1) << component[509][3] << setw(size1) << component[509][4] << setw(size1) << component[509][5] << setw(size1) << endl;
        cout << component[510][0] << setw(size1) << component[510][1] << setw(size1) << component[510][2] << setw(size1) << component[510][3] << setw(size1) << component[510][4] << setw(size1) << component[510][5] << setw(size1) << endl;
        cout << component[511][0] << setw(size1) << component[511][1] << setw(size1) << component[511][2] << setw(size1) << component[511][3] << setw(size1) << component[511][4] << setw(size1) << component[511][5] << setw(size1) << endl;
        cout << component[512][0] << setw(size1) << component[512][1] << setw(size1) << component[512][2] << setw(size1) << component[512][3] << setw(size1) << component[512][4] << setw(size1) << component[512][5] << setw(size1) << endl;
        cout << component[513][0] << setw(size1) << component[513][1] << setw(size1) << component[513][2] << setw(size1) << component[513][3] << setw(size1) << component[513][4] << setw(size1) << component[513][5] << setw(size1) << endl;
        cout << component[514][0] << setw(size1) << component[514][1] << setw(size1) << component[514][2] << setw(size1) << component[514][3] << setw(size1) << component[514][4] << setw(size1) << component[514][5] << setw(size1) << endl;
        cout << component[515][0] << setw(size1) << component[515][1] << setw(size1) << component[515][2] << setw(size1) << component[515][3] << setw(size1) << component[515][4] << setw(size1) << component[515][5] << setw(size1) << def << endl;
        border();
        cout << " Confirm ? (Y/N) : ";
        string confirm;
        cin >> confirm;
        sum = 0;
        reset_component();
        Displays(1);
    }
    else if (show == 3)
    {
        border();
        cout << setw(size7) << " Register Member" << endl;
        cout << endl;
        cout << setw(size6) << "Name : ";
        string name;
        cin >> name;
        cout << setw(size6) << "Phone : ";
        string phone;
        cin >> phone;
        cout << setw(size6) << "Confirm ? (Y/N) : ";
        string confirm;
        cin >> confirm;
        if (confirm == "Y" || confirm == "y")
        {
            int loop = 0;
            string dummy;
            while (member[loop][0] != dummy)
            {
                loop++;
            }
            member[loop][0] = phone;
            member[loop][1] = name;
            member[loop][2] = "0";
            write_file_member();
            read_file_member();
            border();
            cout << setw(size7) << "Register Success" << endl;
            border();
            cout << setw(size7) << "Name : " << member[loop][1] << endl;
            cout << setw(size7) << "Phone : " << member[loop][0] << endl;
            border();
            cout << setw(size7) << "Press Enter to continue...";
            cin.ignore();
            cin.get();
            Displays(1);
        }
        else
        {
            Displays(1);
        }
    }
    else if (show == 4)
    {
        int loop_add = 0;
        string dummy;
        while (item[loop_add][0] != dummy)
        {
            component[loop_add][0] = item[loop_add][0];
            component[loop_add][1] = item[loop_add][1];
            component[loop_add][2] = item[loop_add][2];
            component[loop_add][3] = "Confirm";
            loop_add++;
        }
        header_add_item();
        border();
        int loop = 0;
        while (loop <= line_show)
        {
            cout << "=" << setw(size2) << component[loop][0] << setw(size2) << "=" << setw(size3) << component[loop][1] << setw(size3) << "=" << setw(size5) << component[loop][2] << setw(size5) << "=" << setw(size4) << component[loop][3] << setw(size4) << "=" << endl;
            loop++;
        }
        border();
        cout << setw(size7) << " Add Item ( INPUT Character [X] in Item Code For Exit )" << endl;
        cout << endl;
        cout << setw(size6) << "Item Code : ";
        string code;
        cin >> code;
        if (code == "X" || code == "x")
        {
            reset_component();
            Displays(1);
        }
        cout << setw(size6) << "Item Name : ";
        string name;
        cin >> name;
        cout << setw(size6) << "Item Price : ";
        string price;
        cin >> price;
        cout << " Confirm ? (Y/N) : ";
        string confirm;
        cin >> confirm;
        if (confirm == "Y" || confirm == "y")
        {
            item[loop_add][0] = code;
            item[loop_add][1] = name;
            item[loop_add][2] = price;
            write_file_item();
            read_file_item();
            border();
            cout << setw(size7) << "Add Item Success" << endl;
            border();
            cout << setw(size7) << " Item Code : " << item[loop_add][0] << endl;
            cout << setw(size7) << "Item Name : " << item[loop_add][1] << endl;
            cout << setw(size7) << "Item Price : " << item[loop_add][2] << endl;
            border();
            cout << setw(size7) << "Press Enter to continue...";
            cin.ignore();
            cin.get();
            reset_component();
            Displays(4);
        }
        else
        {
            reset_component();
            Displays(4);
        }
    }
    else if (show == 5)
    {
        int page_in = 1;
        int page_end;
        int loop_member = 0;
        string dummy;
        while (member[loop_member][0] != dummy)
        {
            component[loop_member][0] = member[loop_member][0];
            component[loop_member][1] = member[loop_member][1];
            component[loop_member][2] = member[loop_member][2];
            component[loop_member][3] = "Confirm";
            loop_member++;
        }
        if (loop_member % line_show == 0)
        {
            page_end = loop_member / line_show;
        }
        else
        {
            page_end = (loop_member / line_show) + 1;
        }
        int loop_show_member_list = 0;
    jump:
        member_list_show();
        border();
        while (loop_show_member_list <= line_show * page_in)
        {
            cout << "=" << setw(size2) << component[loop_show_member_list][0] << setw(size2) << "=" << setw(size3) << component[loop_show_member_list][1] << setw(size3) << "=" << setw(size5) << component[loop_show_member_list][2] << setw(size5) << "=" << setw(size4) << component[loop_show_member_list][3] << setw(size4) << "=" << endl;
            loop_show_member_list++;
        }
        border();
        cout << setw(size7) << "Page " << page_in << " OF " << page_end << endl;
        cout << setw(size8) << "( INPUT Character [X] in Item Code For Exit { OR } INPUT NUMBER OF PAGE )" << endl;
        cout << endl;
        cout << setw(size9) << "Command : ";
        string code;
        cin >> code;
        if (code == "X" || code == "x")
        {
            reset_component();
            Displays(1);
        }
        else if (code == "1")
        {
            loop_show_member_list = 0;
            page_in = 1;
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
            border();
            title_bar();
            border();
            show_manu();
            border();
            goto jump;
        }
        else
        {
            if (code[0] == '1' || code[0] == '2' || code[0] == '3' || code[0] == '4' || code[0] == '5' || code[0] == '6' || code[0] == '7' || code[0] == '8' || code[0] == '9' || code[0] == '0')
            {

                loop_show_member_list = (line_show * stoi(code) - line_show);
                page_in = stoi(code);
                #ifdef _WIN32
                    system("cls");
                #else
                    system("clear");
                #endif
                border();
                title_bar();
                border();
                show_manu();
                border();
                goto jump;
            }
        }
    }
}
void Sell()
{
    string command;
    cin >> command;
    if (command == "a" || command == "A" || command == ".add")
    {
        reset_component();
        Displays(4);
    }
    else if (command == "r" || command == "R" || command == ".reg")
    {
        reset_component();
        Displays(3);
    }
    else if (command == "s" || command == "S" || command == ".member")
    {
        reset_component();
        Displays(2);
    }
    else if (command == "m" || command == "M" || command == ".memberlist")
    {
        reset_component();
        Displays(5);
    }
    else if (command == "x" || command == "X" || command == ".exit")
    {
        reset_component();
        exit();
    }
    else
    {
        Process(command);
    }
}
void Process(string code)
{
    int loop = 0;
    while (loop < 1000)
    {
        if (item[loop][0] == code)
        {
            int loopin = 0;
            while (component[loopin][0] != "")
            {
                loopin++;
            }
            component[loopin][0] = item[loop][0];
            component[loopin][1] = item[loop][1];
            component[loopin][3] = "1";
            component[loopin][2] = item[loop][2];
            sum = sum + stoi(item[loop][2]);
            convert(sum);
            Displays(1);
        }
        loop++;
    }
    Displays(1);
}
void Process_sell_memeber(string phone)
{
    int loop = 0;
    while (loop < 1000)
    {
        if (member[loop][0] == phone)
        {
            component[200][1] = member[loop][1];
            component[200][2] = member[loop][2];
        }
        loop++;
    }
}
int Process_sell_change(string money)
{
    sum = stoi(money) - sum;
    convert(sum);
    return sum;
}
void Add_item()
{
    cout << "Enter code item : ";
}