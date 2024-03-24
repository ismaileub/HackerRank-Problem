#include<bits/stdc++.h>    //#include<iostream>
using namespace std;        // #include<sstream>

int main()
{

    string str1, str2;
    getline(cin, str1);

    stringstream ss(str1);
    while(ss >> str2)
    {
        cout<< str2 <<endl;
    }

    return 0;
}

