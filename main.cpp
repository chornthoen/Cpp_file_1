
//input file
/*
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream out;
    char *filename = "test.txt";
    out.open(filename, ios::out);
    if (!out.is_open()){
        cout << "Error opening file "<< endl;
        exit(0);
    }
    out<<"This is a C++ = "<<filename<< endl;
    out<<"This is java  = "<<filename<<endl;
    out.close();
    return 0;
}
*/
//read file
/*
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ofstream out;
    char *filename = "test.txt";
    out.open(filename, ios::out);
    if (!out.is_open()){
        cout << "Error opening file "<< endl;
        exit(0);
    }
    out<<"This is a C++ "<< endl;
    out<<"This is java "<<endl;
    out.close();


    ifstream in;
    char *filename1 = "test.txt";
    in.open(filename1, ios::in);
    if (!in.is_open()){
        cout << "Error opening file "<< endl;
        exit(0);
    }
    string line;
    while (getline(in, line)){
        cout <<"Open file "<<filename1<<" of "<< line << endl;
    }
    in.close();
    return 0;
}
*/

/*
 *
 *
 *
 *
 *
 *
 *
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ofstream out;
    char *filenameInput = "example.txt";
    out.open(filenameInput, ios::out);

    string name;
    cout<<"Input name: ";
    getline(cin, name);
    if (name=="stop"){
        cout<<"The program is stop";
        exit(0);
    }
    out<<name<< endl;
    out.close();


    ifstream in;
    char *filenameRead = "example.txt";
    in.open(filenameRead, ios::in);

    string line;
    while (getline(in, line)){
        cout<<endl;
        cout<<"Reading file of "<<filenameRead << endl;
        cout << line << endl;
    }
    in.close();
    return 0;
}*/


//input username and write into text file if a user input stop then stop the program

/*
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ofstream out;
    char *filenameInput = "example.txt";
    out.open(filenameInput, ios::out);

    string name="Hello my good friend";
    out<<name<< endl;
    out.close();

    ifstream in;
    char *filenameRead = "example.txt";
    in.open(filenameRead, ios::in);

    string line;
    while (getline(in, line)){
        cout<<endl;
        cout<<"Reading file of "<<filenameRead << endl;
        cout << line << endl;
    }
    in.close();
    return 0;
}*/
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream rf;
    rf.open("example.txt",ios::out);
    char c;
    cout <<"content of file"<<endl;
    ifstream in;
    char *filenameRead = "example.txt";
    in.open(filenameRead, ios::in);

    string line;
    while (getline(in, line)){
        cout<<endl;
        cout<<"Reading file of "<<filenameRead << endl;
        cout << line << endl;
    }
    in.close();
    //1
    rf.seekg(9L,ios::beg);
    c=rf.get();
    cout <<"c="<<c <<endl;
    //2
    rf.seekg(8L,ios::cur);
    c=rf.get();
    cout <<"c=" <<c <<endl;

    rf.seekg(-8L, ios::end);
    c=rf.get();
    cout <<"c="<<c<<endl;
    //6.
    rf.seekg(-13,ios::cur);
    c=rf.get();
    cout <<"c=" <<c <<endl;

    rf.close();
}

