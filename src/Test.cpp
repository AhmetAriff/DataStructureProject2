#include<iostream>
#include<fstream>
#include<string.h>
#include<sstream>
using namespace std;

int main(){

ifstream in;
    in.open("deneme.txt");
    while (!in.eof())
    {
        string line;
        getline(in, line);
        if (in.fail())
        {
            break;
        }
        
        stringstream ss;
        ss << line;
        int sonraki;
     
        while (bool(ss>>sonraki)==true)
        {
                   s1->ekle(sonraki);  
        }
       
       

        cout << *s1;
        cout << line << endl;
       

    }
}