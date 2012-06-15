#include <iostream>

using namespace std;

int main()
{
    string numbers[3];

    while (!cin.eof()) {
        getline(cin, numbers[0]);
        if (!cin) break;
        getline(cin, numbers[1]);
        getline(cin, numbers[2]);

        for ( int i = 0; i < (numbers[0].size() / 3); i++ ) {

            if (numbers[0][1 + i*3] == ' ') {     // {1, 4}
                if (numbers[1][1 + i*3] == '_') {
                    cout << "4";
                } else {
                    cout << "1";
                }
            } else { // {0, 2, 3, 5, 6, 7, 8, 9}
                if (numbers[1][0 + i*3] == '|') { // {0, 5, 6, 8, 9}
                    if (numbers[1][1 + i*3] == '_') { // {5, 6, 8, 9}
                        if (numbers[1][2 + i*3] == '|') { // {8, 9}
                            if (numbers[2][0 + i*3] == '|') { // {8}
                                cout << "8";
                            } else { // {9}
                                cout << "9";
                            }
                        } else { // {5, 6}
                            if (numbers[2][0 + i*3] == '|') { // {6}
                                cout << "6";
                            } else { // {5}
                                cout << "5";
                            }
                        }
                    } else { // {0}
                        cout << "0";
                    }
                } else { // {2, 3, 7}
                    if (numbers[1][1 + i*3] == '_') { // {2, 3}
                        if (numbers[2][0 + i*3] == '|') { // {2}
                            cout << "2";
                        } else { // {3}
                            cout << "3";
                        }
                    } else { // {7}
                        cout << "7";
                    }
                }
            }

        }

        cout << endl;
    }

    return 0;
}

