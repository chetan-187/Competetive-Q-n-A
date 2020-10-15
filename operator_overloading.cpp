#include<bits/stdc++.h>
using namespace std;

#define Max_Size 50

// String Class
class String
{
    char str[Max_Size];
    char cpy[Max_Size];

    public:

    // function declarations
    void operator+ (String mystr);
    void operator* (int num);
    void operator= (String mystr);
    void operator== (String mystr);

    // friend function
    friend istream& operator >> (istream &cin, String &str);
    friend ostream& operator << (ostream &cout, const String &str);
};

// + , *, =, == operators overloading
void String :: operator+(String mystr)
{
   strcat(str,mystr.str);
   cout << "String Concatenation Complete: " << str << endl;
}

void String :: operator*(int num)
{
    char cpy[Max_Size];
    strcpy(cpy, str);
    for(int i=1;i<num;i++)
    {
        strcat(str,cpy);
    }
    cout << "String Multiplication Complete: " << str << endl;
}

void String :: operator= (String mystr)
{
    strcpy(str,mystr.str);
    cout << "String Copy Complete: " << mystr.str << ", " << str << endl;
}

void String :: operator== (String mystr)
{
    if(strcmp(str,mystr.str)==0)
        cout << "String Are Equal" << endl;
    else
        cout << "Strings Are Not Equal" << endl;
}

// input/output functions overloading
istream& operator >> (istream &cin, String &str)
{
    cout << ">> Enter the String: " << endl;
    cin >> str.str;
    return cin;
}

ostream& operator << (ostream &cout, const String &str)
{
    cout << "The String you want to cout is: " << str.str << endl;
    return cout;
}

int main()
{
    int chk, num;
    String s1, s2; // object declaration

    B:

    // String Input
    cout << "First String => " << endl;
    cin >> s1;
    cout << "Second String => " << endl;
    cin >> s2;

    A: 

    // Main-Menu
    cout << "\n>> Please enter one of the following option: " << endl;
    cout << "1: Concatenation of both strings \t 2: Multiply a num to String 1 \t 3: Multiply a num to String 2" << endl;
    cout << "4: Copy String 1 val to String 2 \t 5: Copy String 2 val to String 1 \t 6: Comparison of both Strings" << endl;
    cout << "7: Display String 1 \t 8: Display String 2 \t 9: Reset both Strings \t 10: Exit the program" << endl;
    cin >> chk;

    // Switch case for main-menu
    switch(chk)
    {
        case 1:
            s1 + s2;
            goto A;
        case 2:
            cout << "Enter the number by which you want to multiply to String 1: " << endl;
            cin >> num;
            s1 * num;
            goto A;
        case 3:
            cout << "Enter the number by which you want to multiply to String 2: " << endl;
            cin >> num;
            s2 * num;
            goto A;
        case 4:
            s2 = s1;
            goto A;
        case 5:
            s1 = s2;
            goto A;
        case 6:
            s1 == s2;
            goto A;
        case 7:
            cout << s1 << endl;
            goto A;
        case 8:
            cout << s2 << endl;
            goto A;
        case 9:
            cout << "Reseting..." << endl;
            goto B;
        case 10:
            cout << "Exiting..." << endl;
            exit(0);
        default:
            cout << "[!!] Invalid Input, Try Again..." << endl;
            goto A;
    }   
}