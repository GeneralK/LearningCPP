// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector> // Vector
#include <algorithm> // Sorting Vector
#include <numeric> // Listing Vector
#include <iterator> // Copy Vector info into txt
#include <fstream> // For reading & writing files
#include <unordered_set> // For filtering words

using namespace std;
int showMenu();

int main() {
    int choice = 0;
    string WordAdd = "0";
    string line;
    
    do{
        system("cls");
        cout << "Main Menu" << endl;
        cout << "=============" << endl;
        cout << "[1] Display List" << endl;
        cout << "[2] Append to List" << endl;
        cout << "[3] Provide Possible Words" << endl; //wip
        cout << "[4] Sort List" << endl; 
        cout << "\n";
        cout << "Input: ";

        cin >> choice;

        switch (choice) {
        case 1: {
            system("cls"); //To clear screen, C++ does not innately have the capability. It is compiler specific.

            ifstream file("Wordle.txt");
            if (file.is_open())
            {
                while (getline(file, line))
                {
                    cout << line << '\n';
                }
                file.close();
                system("pause");
                break;
            }

            else cout << "Unable to open file";
            break;
        };
        case 2: {
            system("cls");
            ofstream file("Wordle.txt", fstream::app);
            cout << "Insert to TxT: ";
            cin >> WordAdd;
            file << WordAdd << "\n";
            file.close();
            break;
        };
        case 3: {
            system("cls");
            ifstream file("Wordle.txt");
            vector<string> v;

            if (file.is_open())
            {
                while (getline(file, line))
                {
                    // Normalize to lowercase
                    for (char& c : line) {
                        c = tolower(c);
                    }
                    v.push_back(line);
                }
            };
            file.close();
            int secMenuChoice = 0;
            string grnYrwLett = "";
            while ((secMenuChoice = showMenu()) != 0){
            if (secMenuChoice == 1) {
                cout << "Enter Letters: ";
                cin >> grnYrwLett;
                system("pause");
            }
            else if (secMenuChoice == 2) {

            }
            else if (secMenuChoice == 3) {
                unordered_set<char> allowed(grnYrwLett.begin(), grnYrwLett.end()); // removes duplicate in variable
                vector<string> result;
                for (const string& word : v) {
                    bool valid = true;

                    for (char c : allowed) {  //apparently you can do char c: grnYrwLett. But this is more specific with intention using unordered set?
                        if (word.find(c) == string::npos) {  //search for character c inside word. returns npos if c not exist.
                            valid = false;
                            break;
                        }
                    }

                    if (valid) result.push_back(word);
                }
                for (const auto& word : result) { 
                cout << word << " ";
            }
            cout << "\n";
            system("pause");
                
            }
            else {
                cout << "we outta ideas man. Try again";
                system("pause");
            }
            }

            /*
            add in a part
            to filter words
            */

            //Dislpays Vector Content
            //for (const auto& word : v) { 
            //    cout << word << " ";
            //}
            //cout << "\n";
            //system("pause");
            break;
        };
        case 4: {
            system("cls");
            ifstream file("Wordle.txt");
            vector<string> v;

            if (file.is_open())
            {
                while (getline(file, line))
                {
                    v.push_back(line);
                }
                file.close();
                sort(v.begin(), v.end());
                ofstream file("Wordle.txt", fstream::trunc); // trunk clears out text file
                ostream_iterator<string> VecTTxt(file, "\n");
                copy(begin(v), end(v), VecTTxt);
                system("pause");
                break;
            };
            break;
        };
        default:{
            printf("Type Xi\n");
            // wip - clear screen return to top. 
            break;
        }
        }
    } while (choice != 0);

    return 0;
}
int showMenu() {
    int secGetChoice = 0;
    system("cls");
    cout << "Actions" << endl;
    cout << "=============" << endl;
    cout << "[1] Green & Yellow Letter" << endl;
    cout << "[2] Filter Out Grey Letter" << endl; //Wip - not as important right now. Might be worth in the future.
    cout << "[3] Show Words" << endl; //wip
    cout << "[4] Cancel" << endl;
    cout << "\n";
    cout << "Input: ";
    cin >> secGetChoice;
    return secGetChoice;
};

    


/*
*   deque<string> fileWords;
    ifstream file("Wordle.txt");
    string hardWords;
    while (file >> hardWords) {
        fileWords.push_back(hardWords);
    }
    cout << fileWords;
    file.close();
    system("pause");
    return 0;
*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file