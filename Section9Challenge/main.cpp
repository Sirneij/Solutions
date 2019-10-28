#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<iterator>
using namespace std;

int main()
{
    char choice {};
    vector<int> elements {};
    do{
        cout << "\n\t\t=============================================" << endl;
        cout << "\t\t= Welcome to John's Complex operations menu =" << endl;
        cout << "\t\t=============================================" << endl;
        cout << "\nP - Print numbers\n" << "A - Add numbers\n" << "M - Display mean of the numbers\n"
         << "S - Display smallest of the numbers\n"  << "B - Display largest of the number\n"
         << "C - Clear a list\n" << "F - Search or find a number\n" << "E - Display even numbers\n"
         << "O - Display odd numbers\n" << "T - Display multiplication table\n"
         << "R - Arrange or sort list of numbers\n"
         << "Q - Quit.\n" << endl;
        cout << "\nEnter your choice of operation: ";
        cin >> choice;
        if(choice == 'P' || choice == 'p'){
            if(elements.size() == 0)
                cout << "[] - the list is empty." << endl;
            else{
                cout << "[ ";
                for(int element: elements){
                    cout << element << " ";
                }
                cout << "]" << endl;
            }
        }
        else if(choice == 'A' || choice == 'a'){
            cout << "Enter the number(integer) you want added: ";
            int data;
            cin >> data;
            auto getData = std::find(std::begin(elements), std::end(elements), data);
            if(getData != std::end(elements)){
                cout << "\nData already exists!\nDo you still want it added?(Y/N): ";
                char response;
                cin >> response;
                if(response == 'Y' || response == 'y'){
                    elements.push_back(data);
                    cout << data << " added." << endl;
                }
                else if(response == 'N' || response == 'n'){
                    cout << data << " not added." << endl;
                }
            }else{
                elements.push_back(data);
                cout << data << " added." << endl;
            }


        }
        else if(choice == 'M' || choice == 'm'){
            int totalData {};
            if(elements.size() == 0)
                cout << "Unable to calculate mean since no data is available." << endl;
            else{
                for(unsigned i {0}; i < elements.size(); ++i){
                    totalData += elements.at(i);
                }
                cout << fixed << setprecision(2);
                cout << "Total: " << static_cast<double>(totalData)/elements.size() << endl;
            }
        }
        else if(choice == 'S' || choice == 's'){
            if(elements.size() == 0)
                cout << "Unable to determine the smallest data since no data is available." << endl;
            else{
//                auto smallest = std::min_element(std::begin(elements), std::end(elements));
//                if(std::end(elements)!=smallest)
//                    cout << *smallest << endl;
                int smallest = elements.at(0);
                for(auto element: elements){
                    if (smallest > element)
                        smallest = element;
                }
                cout << "Smallest data: "<< smallest << endl;
            }
        }
        else if(choice == 'B' || choice == 'b'){
            if(elements.size() == 0)
                cout << "Unable to determine the largest data since no data is available." << endl;
            else{
                int biggest = elements.at(0);
                for(auto element: elements){
                    if(biggest < element)
                        biggest = element;
                }
                cout << "The largest data is: " << biggest << endl;
            }
        }
        else if(choice == 'C' || choice == 'c'){
            if(elements.size() == 0)
                cout << "The list is already empty - no need to clear again." << endl;
            else{
                cout << "Are you sure - Once cleared, data can't be recovered?(Y/N): ";
                char selection {};
                cin >> selection;
                if(selection == 'Y' || selection == 'y'){
                    elements.clear();
                    cout << "Data cleared!!!" << endl;
                }
            }
        }
        else if(choice == 'F' || choice == 'f'){
            if(elements.size() == 0)
                cout << "The list is empty - nothing to search for." << endl;
            else{
                cout << "Enter the data you want searched: ";
                int data {};
                cin >> data;
                auto getData = std::find(std::begin(elements), std::end(elements), data);
                if(getData != std::end(elements))
                    std::cout << "The list contains " << *getData << "." << endl;
                else
                    std::cout << "The data entered doesn't exist in the list." << endl;
            }
        }
        else if(choice == 'E' || choice == 'e'){
            if(elements.size() == 0)
                cout << "The list is empty - nothing to display." << endl;
            else{
                cout << "[ ";
                for(auto element: elements){
                    if(element % 2 == 0)
                        cout << element << " ";
                }
                cout << "]" << endl;
            }
        }
        else if(choice == 'o' || choice == 'O'){
            if(elements.size() == 0)
                cout << "The list is empty - nothing to display." << endl;
            else{
                cout << "[ ";
                for(auto element: elements){
                    if(element % 2 != 0)
                        cout << element << " ";
                }
                cout << "]" << endl;
            }
        }
        else if(choice == 't' || choice == 'T'){
            if(elements.size() == 0)
                cout << "The list is empty - nothing to set up multiplication table with." << endl;
            else{
                cout << "Enter the length of the table for each item: ";
                int tableLength {};
                cin >> tableLength;
                for(unsigned row {0}; row < elements.size(); ++row){
                    for(int col {1}; col <= tableLength; ++col)
                        cout << elements.at(row) << " x " << col << " = " << elements.at(row)*col << endl;
                    cout << "----------------------------------------\n";
                }
            }
        }
        else if(choice == 'R' || choice == 'r'){
            if(elements.size() == 0)
                cout << "The list is empty - nothing to sort." << endl;
            else{
                cout << "Sorted in ascending or descending - 1 or 2: ";
                int option {};
                cin >> option;
                switch(option){
                    case 1:{
                        std::sort(elements.begin(), elements.end());
                        cout << "Ascending order sort: [ ";
                        for(auto sorted: elements){
                            cout << sorted << " ";
                        }
                        cout << "]" << endl;
                    }break;
                    case 2:{
                        std::sort(elements.begin(), elements.end(), greater<int>());
                        cout << "Descending order sort: [ ";
                        for(auto sorted: elements){
                            cout << sorted << " ";
                        }
                        cout << "]" << endl;
                    }break;
                    default:
                        cout << "No such option." << endl;
                }

            }
        }
        else if(choice == 'Q' || choice == 'q')
            cout << "Goodbye..." << endl;
        else
            cout << "Unknown option... Please try again." << endl;
    }while(choice != 'Q' && choice != 'q');
    cout << endl;
    return 0;
}
