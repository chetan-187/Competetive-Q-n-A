/*
  => We will use multiple inheritance for this problem statement
*/

#include<bits/stdc++.h>
using namespace std;

// Class For Personal Data
class persData
{
    protected:
        string name;
        string surname;
        string address;
        string mobileNum;
        string dob;

        // Default Constructor
        persData()
        {
            cout << "[You Have Entered The Class Of Personal Data]" << endl;
        }

        // Setting Personal Data
        void setPersData()
        {
            cout << ">> Enter your first name: ";
            cin >> name;

            cout << ">> Enter your surname: ";
            cin >> surname;

            cout << ">> Enter your complete address: ";
            fflush(stdin);
            getline(cin, address);

            mN:

            cout << ">> Enter your 10-digit mobile Num: ";
            cin >> mobileNum;
            if((mobileNum.size())!=10)
            {
                cout << "[!!] Invalid Format, please try again" << endl;
                goto mN;
            }

            dB:

            cout << ">> Enter your Date of Birth in DD-MM-YYYY format: ";
            cin >> dob;
            if((dob.size())!=10)
            {
                cout << "[!!] Invalid Format, please try again" << endl;
                goto dB;
            }
        }

        // Getting Personal Data
        void getPersData()
        {
            cout << "First Name: " << name << endl;
            cout << "Surname: " << surname << endl;
            cout << "Address: " << address << endl;
            cout << "Mobile Number: " << mobileNum << endl;
            cout << "Date Of Birth: " << dob << endl;
        }

};

// Class FOr Professional Data
class profData
{
    protected:
        string nameOfOrganization;
        string jobProfile;
        string project;

        // Default Constructor
        profData()
        {
            cout << "[You Have Entered The Class Of Proffessional Data]" << endl;
        }

        // Setting Professional Data 
        void setProfData()
        {
            cout << ">> Enter the name of organization you work for: ";
            fflush(stdin);
            getline(cin, nameOfOrganization);

            cout << ">> Enter your job profile: ";
            fflush(stdin);
            getline(cin, jobProfile);

            cout << ">> List out some interesting projects you have worked on: ";
            fflush(stdin);
            getline(cin, project);
        }

        // Getting Professional Data
        void getProfData()
        {
            cout << "Name Of Organization: " << nameOfOrganization << endl;
            cout << "Job Profile: " << jobProfile << endl;
            cout << "Projects Done: " << project << endl;   
        }

};

// Class For Academic Data
class acadData
{
    protected:
        string yearOfPassing;
        string cgpa;
        string collegeName;
        string branch;

        // Default Constructor
        acadData()
        {
            cout << "[You Have Entered The Class Of Academic Data]" << endl;
        }

        // Setting Academic Data
        void setAcadData()
        {
            yOP:

            cout << ">> Enter the year of passing in YYYY format: ";
            cin >> yearOfPassing;
            if((yearOfPassing.size())!=4)
            {
                cout << "[!!] Invalid Format, please try again" << endl;
                goto yOP;
            }

            cout << ">> Enter your cgpa: ";
            cin >> cgpa;

            cout << ">> Enter your College name: ";
            fflush(stdin);
            getline(cin, collegeName);

            cout << ">> Enter your branch name: ";
            fflush(stdin);
            getline(cin, branch);
        }

        // Getting Academic Data
        void getAcadData()
        {
            cout << "Year Of Passing: " << yearOfPassing << endl;
            cout << "CGPA: " << cgpa << endl;
            cout << "College Name: " << collegeName << endl;
            cout << "Branch: " << branch << endl;
        }
};

// Main Child Class
class bioData : public persData, public profData, public acadData
{
    public:

        bioData()
        {
            cout << "[You Have Entered The Class Of Bio Data]" << endl;
        }

        // Setting Data
        void setData()
        {
            cout << "\n{Stage-I} Enter your Personal Data => " << endl;
            setPersData();
            cout << "\n{Stage-II} Enter your Professional Data => " << endl;
            setProfData();
            cout << "\n{Stage-III} Enter your Academic Data => " << endl;
            setAcadData();
            cout << "\nStudent Registration Completed Successfully!!!" << endl;
            cout << "Press any key to display the data" << endl;
            getchar();
        }

        // Getting Data
        void getData()
        {
            cout << "{I} Personal Data => " << endl;
            getPersData();
            cout << "\n{II} Professional Data => " << endl;
            getProfData();
            cout << "\n{III} Academic Data => " << endl;
            getAcadData();
        }
};

// Main Function
int main()
{
    bioData student1; // object of class bioData
    student1.setData(); // setting student1 data
    student1.getData(); // getting student1 data
}