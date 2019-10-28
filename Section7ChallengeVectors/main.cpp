#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
    vector <int> vector1;
    vector <int> vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    cout << "\n\n=====Vector1=============\n" << endl;
    cout << "Vector1 elements: " << vector1.at(0) << " " << vector1.at(1) << endl;
    cout << "Vector1 has overall size: " << vector1.size()<< endl;
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "\n\n=====Vector2=============\n" << endl;
    cout << "Vector2 elements: " << vector2.at(0) << " " << vector2.at(1) << endl;
    cout << "Vector2 has overall size: " << vector2.size()<< endl;

    vector <vector <int>> vector2D;
    vector2D.push_back(vector1);
    vector2D.push_back(vector2);

    cout << "\n\n=====Vector2D=============\n" << endl;

    cout << "Vector2D element[0][0]: " << vector2D.at(0).at(0) << endl;
    cout << "Vector2D element[0][1]: " << vector2D.at(0).at(1) << endl;

    cout << "Vector2D element[1][0]: " << vector2D.at(1).at(0) << endl;
    cout << "Vector2D element[1][1]: " << vector2D.at(1).at(1) << endl;

    vector1.at(0)= 1000;
    cout << "\n\n=====Vector2D Update======\n" << endl;

    cout << "Vector2D element[0][0]: " << vector2D.at(0).at(0) << endl;
    cout << "Vector2D element[0][1]: " << vector2D.at(0).at(1) << endl;

    cout << "Vector2D element[1][0]: " << vector2D.at(1).at(0) << endl;
    cout << "Vector2D element[1][1]: " << vector2D.at(1).at(1) << endl;
    return 0;
}
