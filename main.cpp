#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <windows.h>
#include <fstream>
#include <dirent.h>
#include <sys/types.h>

using namespace std;

string user,m_word,s_word,d_name;
int pos,l_pos;
int i = 0, a = 0;
std::string name[3];
string mail = "jabruthans@gmail.com";
string abc = "Created By Amalka";
string er = "<Error>";
string ok = "<Ready>";

void help();
void dieS();
void dieR();
void pcName();
void nnh();
void startApp();
void delFile();
void dir();
void intro();
//void open_file(string);
void typing(string);
void play_music(string);
void repeat();
void end();
void exit();

void pcName()
{
    string line0;
    int offset;
    char* search0 = "Host Name . . . . . . . . . . . . :";
    ifstream IPFile;
    system("ipconfig /all > CommandsPC/hostname.txt");

    IPFile.open ("CommandsPC/hostname.txt");
    if(IPFile.is_open())
    {
        while(!IPFile.eof())
        {
            getline(IPFile,line0);
            //if ((offset = line0.find(search0, 0)) != string::npos)
            //{
            //   Host Name . . . . . . . . . . . . : 1
            //line0.erase(0,39);
            name[0] = line0;
            //}
        }
    }
}

//----------------------------------------------------------//

int main()
{
    intro();

    system("cls");
    typing("How can I help you?>");

    repeat();

    return 0;
}

//----------------------------------------------------------//
void repeat()
{
    cout << " \n---> " << name << "/Type Here> ";

    getline(cin,user);

    pos=user.find(" ");
    m_word=user.substr(0,pos);
    l_pos=user.find('\0');
    s_word=user.substr(pos+1,l_pos);
    if (m_word=="open")
    {
    }

    else if (m_word == "play")
    {
        play_music(s_word);

    }
    else if (m_word == "help")
    {
        help();
    }
    else if (m_word == "end")
    {
        exit();
    }
    else if (m_word == "ip")
    {
        string line0;
        int offset;
        char* search0 = "IPv4 Address. . . . . . . . . . . :";
        ifstream IPFile;
        system("ipconfig > CommandsPC/IP.txt");

        IPFile.open ("CommandsPC/IP.txt");
        if(IPFile.is_open())
        {
            while(!IPFile.eof())
            {
                getline(IPFile,line0);
                if ((offset = line0.find(search0, 0)) != string::npos)
                {
                    //   IPv4 Address. . . . . . . . . . . : 1
                    line0.erase(0,39);
                    cout << "---> - IPv4 Address. . . . . . . . . . . : " << line0 << endl;
                }
            }
        }
        repeat();
    }
    else if (m_word == "subm")
    {
        string line0;
        int offset;
        char* search0 = "Subnet Mask . . . . . . . . . . . :";
        ifstream IPFile;
        system("ipconfig > CommandsPC/submask.txt");

        IPFile.open ("CommandsPC/submask.txt");
        if(IPFile.is_open())
        {
            while(!IPFile.eof())
            {
                getline(IPFile,line0);
                if ((offset = line0.find(search0, 0)) != string::npos)
                {
                    //   Subnet Mask . . . . . . . . . . . : 1
                    line0.erase(0,39);
                    cout << "---> - Subnet Mask . . . . . . . . . . . : " << line0 << endl;
                }
            }
        }
        repeat();
    }

    else if (m_word == "hname")
    {
        string line0;
        int offset;
        char* search0 = "Host Name . . . . . . . . . . . . :";
        ifstream IPFile;
        system("ipconfig /all > CommandsPC/hostname.txt");

        IPFile.open ("CommandsPC/hostname.txt");
        if(IPFile.is_open())
        {
            while(!IPFile.eof())
            {
                getline(IPFile,line0);
                if ((offset = line0.find(search0, 0)) != string::npos)
                {
                    //   Host Name . . . . . . . . . . . . : 1
                    line0.erase(0,39);
                    cout << "---> - Host Name . . . . . . . . . . . . : " << line0 << endl;
                    name[0] = line0;
                }
            }
        }
        repeat();
    }
    else if (m_word == "open")
    {
        startApp();
    }
    else if (m_word == "del")
    {
        delFile();
    }
    else if (m_word == "ls")
    {
        dir();
        repeat();
    }
    else if (m_word == "nonevimhele")
    {
        nnh();
        repeat();
    }
    else if (m_word == "offpc")
    {
        dieS();
        repeat();
    }
    else if (m_word == "respc")
    {
        dieR();
        repeat();
    }
    else
    {
        typing("Sorry User, unknown command.....");
        system("sorry.vbs");
        repeat();
    }
}


void help()
{
    cout << "     Commands:\n      - help: contact me on my e-mail " << mail << "or you write '\?'" << endl;
    cout << "\t" << ok << " - end: end program" << endl;
    cout << "\t" << ok << " - play: play song [Easte eggs - (intro, gay)]" << endl;
    cout << "\t" << ok << " - ip: find your local IP Address" << endl;
    cout << "\t" << ok << " - subm: find your local Subnet Mask" << endl;
    cout << "\t" << ok << " - hname: find your pc name" << endl;
    cout << "\t" << er << " - del: delete file, exam. del <fileName>" << endl;
    cout << "\t" << ok << " - ls: searches the contents of a folder (this folder) :)" << endl;
    cout << "\t" << er << " - cls: clear command block" << endl;
    cout << "\t" << ok << " - offpc: turn off your PC (30 seconds)" << endl;
    cout << "\t" << ok << " - respc: restart your PC (30 seconds)" << endl;
    repeat();
}

void nnh()
{
    cout << "Vymysli si sam tu funkci ty blondsko blba\n" << abc << endl;
}

void dieS()
{
    system("shutdown -s -t 30");
    for (a = 30; a >= 0; a-=1)
    {
        system("cls");
        cout << "---> PC - off: ";
        cout << a << " second/s\n";
        if (a == 0)
        {
            cout << "Good bye\n";
            exit();
        }
        //turn off command: shutdown -a
    }
}

void dieR()
{
    system("shutdown -r -t 30");
    for (a = 30; a >= 0; a-=1)
    {
        system("cls");
        cout << "---> PC - res: ";
        cout << a << " second/s\n";
        if (a == 0)
        {
            cout << "Good bye\n";
            exit();
        }
        //turn off command: shutdown -a
    }
}

void dir()
{

    DIR *dir;
    struct dirent *ls;

    dir = opendir(".");

    if ((dir = opendir("c:\\Users\\Brudy\\Desktop\\Sublime Text\\C++\\Assistant\\")) != NULL)
    {
        while ((ls = readdir(dir)) != NULL)
        {
            printf ("%s\n", ls->d_name);
        }
        closedir (dir);
    }
    else
    {
        perror ("");
        exit();
    }
}

void delFile()
{
    char filename[] = "C:\\";
    if (remove(filename) != 0)
    {
        perror("File deletion failed");
    }
    else
        cout << "File deleted successfully";
}

void startApp()
{
    char filename[100];
    cin >> filename[0];
    system("start");
    repeat();
}

void remove()
{
    char filename1[] = "/Assistant/CommandsPC/submask.txt";
    char filename2[] = "/Assistant/CommandsPC/IP.txt";
    char filename3[] = "/Assistant/CommandsPC/hostname.txt";
    if (remove(filename1) != 0)
    {
        perror("File deletion failed");
    }
    else
        cout << "File deleted successfully";

    if (remove(filename2) != 0)
    {
        perror("File deletion failed");
    }
    else
        cout << "File deleted successfully";

    if (remove(filename3) != 0)
    {
        perror("File deletion failed");
    }
    else
        cout << "File deleted successfully";
}

void typing(string msg)
{
    int i;
    if (msg != "Hello User")
        cout << "\n---> ";
    for(i = 0 ; msg[i] != '\0'; i++)
    {
        cout << msg[i];
        Sleep(50);
    }
}

void intro()
{
    int n;

    for(i=0; i<=100; i+=10)
    {
        system("cls");
        cout << "\n\n\n\n\n\t\t\t\t\tLoading .....  ";
        cout << i << "%";
        Sleep(1+i);
    }
    cout << "\n\n\t\t\t\t";
    n = i;
    if (i == n)
    {
        typing("Project Jxint connecting....");
        typing("Successful....");
    }
    else
    {
        typing("Project Jxint connecting....");
        typing("Error....\n");
        system("error.vbs");
        exit();
    }
    Sleep(200);
    system("cls");
    cout << "\n\n\n\n\n\n\t\t\t\t\t     ";
    typing("Hello User");
    cout << "\n";
    system("welcome.vbs");

}

void play_music(string play_fname)
{
    system("cls");
    if (play_fname == "intro")
    {
        system("playing.vbs");
        typing("Song, which play now, is called " + play_fname + "\n");
        system("start songs/intro.mp3");
        repeat();
    }
    else if (play_fname == "gay")
    {
        system("playing.vbs");
        typing("Song, which play now, is called " + play_fname + "\n");
        system("start songs/gay.mp3");
        repeat();
    }
    else if (play_fname == "coffin")
    {
        system("playing.vbs");
        typing("Song, which play now, is called " + play_fname + "\n");
        system("start songs/coffin.mp3");
        repeat();
    }
    else
    {
        system("error.vbs");
        typing("Error : There is no such file here...\n");
        repeat();
    }
}

/*
void end()
{
    system("end.vbs");
    exit(0);
}
*/
void exit()
{
    remove();
    system("exit.vbs");
    exit(0);
}


