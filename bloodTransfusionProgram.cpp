#include <iostream>
#include <string>
using namespace std;

// Function to check basic eligibility based on age and weight
bool ineligibility(int age, int weight)
{
    if (age < 17 && weight < 50)
    {
        cout << "You are not eligible: Age must be at least 17\n"
                "                      Weight must be at least 50kg\n";
        return true;
    }
    else if (age < 17)
    {
        cout << "You are not eligible: Age must be at least 17.\n";
        return true;
    }

    else if (weight < 50)
    {
        cout << "You are not eligible: Weight must be at least 50kg.\n";
        return true;
    }

    return false; // Eligible
}
// Overloaded function to check eligibility when weeks since last donation is considered
bool ineligibility(int age, int weight, int weeks)
{
    if (age < 17 && weight < 50 && weeks < 8)
    {
        cout << "You are not eligible: Age must be at least 17\n"
                "                      Weight must be at least 50kg\n"
                "                      You should wait at least 8 weeks\n";
        return true;
    }
    else if (age < 17 && weight < 50)
    {
        cout << " You are not eligible: Age must be at least 17\n"
                "                       Weight must be at least 50kg\n";
        return true;
    }
    else if (age < 17 && weeks < 8)
    {
        cout << " You are not eligible: Age must be at least 17\n"
                "                       You should wait at least 8 weeks\n";
        return true;
    }
    else if (weight < 50 && weeks < 8)
    {
        cout << " You are not eligible: Weight must be at least 50kg\n"
                "                       You should wait at least 8 weeks\n";
        return true;
    }

    else if (age < 17)
    {
        cout << "You are not eligible: Age must be at least 17.\n";
        return true;
    }
    else if (weight < 50)
    {
        cout << "You are not eligible: Weight must be at least 50kg.\n";
        return true;
    }
    else if (weeks < 8)
    {
        cout << "You must wait at least 8 weeks after previous donation.\n";
        return true;
    }

    return false; // Eligible
}
// Function to validate entered blood type and sign
bool bloodtypecheck(string bloodtype, char sign)
{
    if ((bloodtype == "A" && sign == '+') ||
        (bloodtype == "O" && sign == '+') ||
        (bloodtype == "B" && sign == '+') ||
        (bloodtype == "AB" && sign == '+') ||
        (bloodtype == "A" && sign == '-') ||
        (bloodtype == "O" && sign == '-') ||
        (bloodtype == "B" && sign == '-') ||
        (bloodtype == "AB" && sign == '-'))
    {
        return false;
    }
    else
    {
        return true;
    }
}
// Function to validate normal blood pressure range
bool bloodpressure(float systolicbloodpressure, float diastolicbloodpressure)
{
    if (systolicbloodpressure < 90 || diastolicbloodpressure < 50) // abnormal ranges
    {
        return true;
    }
    else if (systolicbloodpressure > 190 || diastolicbloodpressure > 100) // abnormal ranges
    {
        return true;
    }
    else if ((systolicbloodpressure >= 90 && systolicbloodpressure <= 180) && (diastolicbloodpressure >= 50 && diastolicbloodpressure <= 100)) // normal range
    {
        return false;
    }
    return true;
}
// Function to validate blood sugar level based on time of test
bool diabetes(float sugarlevel, char option) // che4cking sugar level
{
    if (option == 'A' && (sugarlevel >= 80 && sugarlevel <= 140)) // normal range
    {
        return false;
    }
    else if (option == 'B' && (sugarlevel >= 70 && sugarlevel <= 99)) // normal range
    {
        return false;
    }
    // if the entered values are INVALID
    else
    {
        return true;
    }
}
// Function to validate Complete Blood Count (CBC) based on gender
bool completebloodcount(char gender, float hemoglobin, float hematocrit, float RBCs, float Platelets, char pregnancy, float MCV, float MCH, float MCHC, float RDW, float MPV, float neutrophils, float lymphocytes, float monocytes, float eosinophils, float basophils)
{
    if (gender == 'm' || gender == 'M')
    {
        // Range checks for males
        if (hemoglobin < 12.5)
        {
            return true;
        }
        else if (hematocrit < 40 || hematocrit > 42)
        {
            return true;
        }
        else if (RBCs < 4.7 || RBCs > 6.1)
        {
            return true;
        }
        else if (Platelets < .15 || Platelets > .45)
        {
            return true;
        }
        else if (MCV < 80 || MCV > 100)
        {
            return true;
        }
        else if (MCH < 27 || MCH > 33)
        {
            return true;
        }
        else if (MCHC < 32 || MCHC > 36)
        {
            return true;
        }
        else if (RDW < 11.5 || RDW > 14.5)
        {
            return true;
        }
        else if (MPV < 7.5 || MPV > 11.5)
        {
            return true;
        }
        else if (neutrophils < 40 || neutrophils > 75)
        {
            return true;
        }
        else if (lymphocytes < 20 || lymphocytes > 45)
        {
            return true;
        }
        else if (monocytes < 2 || monocytes > 8)
        {
            return true;
        }
        else if (eosinophils < 1 || eosinophils > 6)
        {
            return true;
        }
        else if (basophils < 0 || basophils > 1)
        {
            return true;
        }
    }
    else if (gender == 'f' || gender == 'F')
    {
        // Range checks for females
        if (hemoglobin < 12.0)
        {
            return true;
        }
        else if (hematocrit < 36 || hematocrit > 48)
        {
            return true;
        }
        else if (RBCs < 4.2 || RBCs > 5.4)
        {
            return true;
        }
        else if (Platelets < .15 || Platelets > .45)
        {
            return true;
        }
        else if (MCV < 80 || MCV > 100)
        {
            return true;
        }
        else if (MCH < 27 || MCH > 33)
        {
            return true;
        }
        else if (MCHC < 32 || MCHC > 36)
        {
            return true;
        }
        else if (RDW < 11.5 || RDW > 14.5)
        {
            return true;
        }
        else if (MPV < 7.5 || MPV > 11.5)
        {
            return true;
        }
        else if (neutrophils < 40 || neutrophils > 75)
        {
            return true;
        }
        else if (lymphocytes < 20 || lymphocytes > 45)
        {
            return true;
        }
        else if (monocytes < 2 || monocytes > 8)
        {
            return true;
        }
        else if (eosinophils < 1 || eosinophils > 6)
        {
            return true;
        }
        else if (basophils < 0 || basophils > 1)
        {
            return true;
        }
    }
    return false;
}
// Function to print blood donation compatibility message based on donor blood group
void bloodtypecompatability(string bloodgroup, char sign, string name)
{
    if (bloodgroup == "A" && sign == '+')
    {
        cout << name << "! you can donate blood to a person having A+ or AB+\n";
    }
    else if (bloodgroup == "O" && sign == '+')
    {
        cout << name << "! you can donate blood to a person having O+, A+, B+, AB+\n";
    }
    else if (bloodgroup == "B" && sign == '+')
    {
        cout << name << "! you can donate blood to a person having  B+, AB+\n";
    }
    else if (bloodgroup == "AB" && sign == '+')
    {
        cout << name << "! you can donate blood to a person having AB+\n";
    }
    else if (bloodgroup == "A" && sign == '-')
    {
        cout << name << "! you can donate blood to a person having A+, A-, AB+, AB-\n";
    }
    else if (bloodgroup == "O" && sign == '-')
    {
        cout << name << "! you can donate blood to a person having ANY BLOOD GROUP\n";
    }
    else if (bloodgroup == "B" && sign == '-')
    {
        cout << name << "! you can donate blood to a person having B+, B-, AB+, AB-\n";
    }
    else if (bloodgroup == "AB" && sign == '-')
    {
        cout << name << "! you can donate blood to a person having AB+, AB-\n";
    }
}
int main()
{
    // Variable declarations
    int age, weight, weeks;
    float systolicbloodpressure, diastolicbloodpressure, sugarlevel, hemoglobin, hematocrit, RBCs, Platelets, MCV, MCH, MCHC, RDW, MPV, neutrophils, lymphocytes, monocytes, eosinophils, basophils;
    char choice1, choice2, choice3, choice4, pregnancy, gender, sign, option, choice5;
    string bloodgroup, name;

    // Welcome message
    cout << "************************************************************\n";
    cout << "                 Blood Transfusion Program                  \n";
    cout << "************************************************************\n";
    do
    {
        // Input name, age, and weight
        cout << "Enter your name\n";
        getline(cin, name);
        cout << "Enter your age\n";
        cin >> age;
        cout << "Enter your weight in kg\n";
        cin >> weight;

        // Ask donation history
        cout << "Have you ever donated blood(y/n)\n";
        cin >> choice1;

        // First-time donation eligibility check
        if (choice1 == 'n' || choice1 == 'N')
        {
            if (ineligibility(age, weight))
            {
                goto runagain; // the compiler will skip all the code and goto runagain
            }
            else
            {
                cout << "Let me perform some more checks..\n";
            }
        }
        // Previous donation check
        else if (choice1 == 'y' || choice1 == 'Y')
        {
            cout << "How many weeks ago you last donated blood?\n";
            cin >> weeks;
            if (ineligibility(age, weight, weeks))
            {
                goto runagain; // the compiler will skip all the code and goto runagain
            }
            else
            {
                cout << "Let me perform some more checks...\n";
            }
        }
        // Infectious disease check
        cout << endl;
        cout << "Checking for infectious diseases...\n";
        cout << "Are you positive in any of the following infectious diseases?(y/n)\n"
                "1.HIV\n2.Hepatitis B\n3.Hepatitis C\n4.Syphilis\n5.Malaria\n6.HTLV-I/II\n";
        cin >> choice4;
        if (choice4 == 'y' || choice4 == 'Y')
        {
            cout << "You are medically not able to donate blood\n";
            goto runagain; // the compiler will skip all the code and goto runagain
        }
        else
        {
            cout << "That's good!...\n";
        }
        // Blood pressure check
        cout << "Let me perform some more checks...\n";
        cout << endl;
        cout << "Checking your blood pressure...\n";
        cout << "Enter your systolic(top number) blood pressure\n";
        cin >> systolicbloodpressure;
        cout << "Enter your diastolic(bottom number) blood pressure\n";
        cin >> diastolicbloodpressure;
        cout << "Analyzing your blood pressure...\n";
        if (bloodpressure(systolicbloodpressure, diastolicbloodpressure))
        {
            cout << "Your blood pressure doesn't lie in the normal range you can't donate blood...\n";
            goto runagain; // the compiler will skip all the code and goto runagain
        }
        else
        {
            cout << "Your Blood Pressure lies in normal range...\n";
            cout << "Let me perform some more checks...\n";
        }
        cout << endl;

        // Blood sugar level check
        cout << "Checking your sugar level...\n";
        cout << "Enter your blood sugar level in mg/dL\n";
        cin >> sugarlevel;
        cout << "Enter B if this sugar level is before meal or A if it is after meal\n";
        cin >> option;
        cout << "Analyzing your sugar level ...\n";
        if (diabetes(sugarlevel, option))
        {
            cout << "Your blood sugar level doesn't lie in the normal range you can't donate blood...\n";
            goto runagain;
        }
        else
        {
            cout << "Your Sugar level lies in normal range...\n";
            cout << "Let me perform some more checks...\n";
        }
        cout << endl;
        // CBC check
        cout << "Checking your cbc(complete blood count)...\n";
        cout << "Do you have your complete blood test?(Y/N)\n";
        cin >> choice3;
        if (choice3 == 'n' || choice3 == 'N')
        {
            cout << "Go for a blood test\n";
            goto runagain; // the compiler will skip all the code and goto runagain
        }
        else
        {

            cout << "Provide me details\n";
            cout << "Are you male or Female(M/F)\n";
            cin >> gender;
            if (gender == 'f' || gender == 'F')
            {
                cout << "Are you pregnant?(Y/N)\n";
                cin >> pregnancy;
                if (pregnancy == 'y' || pregnancy == 'Y')
                {
                    cout << "You better not donate blood\n";
                    goto runagain; // the compiler will skip all the code and goto runagain
                }
            }
            // CBC input
            cout << "Enter your hemoglobin level in g/dL\n";
            cin >> hemoglobin;
            cout << "Enter your hematocrit percentage\n";
            cin >> hematocrit;
            cout << "Enter your RBCs  million/μL\n";
            cin >> RBCs;
            cout << "Enter your no of Platelets/(in millions)\n";
            cin >> Platelets;
            cout << "Enter your MCV level in fL\n";
            cin >> MCV;
            cout << "Enter your MCH level in pg\n";
            cin >> MCH;
            cout << "Enter your MCHC level in pg\n";
            cin >> MCHC;
            cout << "Enter your RDW level g/dL\n";
            cin >> RDW;
            cout << "Enter your MPV level\n";
            cin >> MPV;
            cout << "Enter your neutrophils level percentage\n";
            cin >> neutrophils;
            cout << "Enter your lymphocytes level percentage\n";
            cin >> lymphocytes;
            cout << "Enter your monocytes level percentage\n";
            cin >> monocytes;
            cout << "Enter your eosinophils level percentage\n";
            cin >> eosinophils;
            cout << "Enter your basophills level percentage\n";
            cin >> basophils;
        }
        // CBC validation
        cout << "Analyzing your cbc...\n";
        if (completebloodcount(gender, hemoglobin, hematocrit, RBCs, Platelets, pregnancy, MCV, MCH, MCHC, RDW, MPV, neutrophils, lymphocytes, monocytes, eosinophils, basophils))
        {
            cout << "Your CBC report is not normal...\n";
            goto runagain; // the compiler will skip all the code and goto runagain
        }
        else
        {
            cout << "Your CBC report is normal...\n";
            cout << "Let me perform some more checks...\n";
        }
        cout << endl;
    reenter:
        cin.ignore();
        // Blood group check
        cout << "Checking your blood group...\n";
        cout << "Do you know your bloodgroup?(y/n)\n";
        cin >> choice5;
        if (choice5 == 'n' || choice5 == 'N')
        {
            cout << "Go for bloodtyping test then you will be able to donate\n";
            goto runagain; // the compiler will skip all the code and goto runagain
        }
        cin.ignore();
        cout << "What is your blood type?(Enter character only)\n";
        getline(cin, bloodgroup);
        cout << "Enter sign\n";
        cin >> sign;
        if (bloodtypecheck(bloodgroup, sign))
        {
            cout << "INVALID BLOOD GROUP\n";
            cout << "Re-enter blood Group\n";
            goto reenter; // the compiler will prompt the user to reenter bloodgroup
        }
        else
        {
            cout << "All checks done Thanks for your cooperation...\n";
            cout << "According to provided data ";
            bloodtypecompatability(bloodgroup, sign, name);
        }
    runagain:
        cout << "run again(y/n)\n"; // Ask user to run again
        cin >> choice2;
        cin.ignore();
        if (choice2 == 'y' || choice2 == 'Y')
        {
            cout << "Sure! just a second...\n";
        }

    } while (choice2 == 'y' || choice2 == 'Y');
    // End of program
    cout << "*****************Program Terminated*****************";
    return 0;
}