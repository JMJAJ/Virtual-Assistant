#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<windows.h>
#include <fstream>

using namespace std;

string user,m_word,s_word;
int pos,l_pos;
int i = 0;
string mail = "jabruthans@gmail.com";

void help();
void intro();
//void open_file(string);
void typing(string);
void play_music(string);
void repeat();
void end();
void exit();

//----------------------------------------------------------//

int main()
{
    intro();

    system("cls");
    cout << "\n";
    typing("How can I help you? >");

    repeat();

    return 0;
}

//----------------------------------------------------------//

void repeat()
{
    cout << " \n---> Type Here > ";

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
        system("ipconfig > IP.txt");

        IPFile.open ("IP.txt");
        if(IPFile.is_open())
        {
            while(!IPFile.eof())
            {
                getline(IPFile,line0);
                if ((offset = line0.find(search0, 0)) != string::npos)
                {
                    //   IPv4 Address. . . . . . . . . . . : 1
                    line0.erase(0,39);
                    cout << "      - IPv4 Address. . . . . . . . . . . : " << line0 << "\n" << endl;
                }
            }
        }
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
    cout << "     Commands:\n\t - help: contact me on my e-mail " + mail << endl;
    cout << "\t - end: end program" << endl;
    cout << "\t - play: play song [Easte eggs - (intro, gay)]" << endl;
    cout << "\t - ip: find your local IP Address" << endl;
    repeat();
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
        typing("Sucessful....");
    }
    else
    {
        typing("Error....");
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
    system("exit.vbs");
    exit(0);
}


/*
void open_file(string open_file)
{
    if (open_file)
    {
        system("open_file.vbs");
        typing("Opening the file " + open_file);
        system("");
    }
}
*/
