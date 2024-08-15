	#include<iostream>
using namespace std;

struct DeviceInfo {
    int portability[5];
    int interactivity[5];
    int detailDepth[5];
};

int main() {
    DeviceInfo info = {
        {2, 8, 3, 9, 7},
        {8, 7, 9, 5, 10},
        {8, 3, 1, 6, 7}
    };

    const char* devices[] = {
        "PC", "PDA", "Mobile Phone Screen", "Paper", "Phone call (Mobile or landline)"
    };

    // Print the header
    cout << "Device\t\t\tPC\tPDA\tMobile\tPaper\tPhone Call" << endl;

    // Print Portability row
    cout << "Portability:\t\t";
    for (int i = 0; i < 5; i++) {
        cout << info.portability[i] << "\t";
    }
    cout << endl;

    // Print Interactivity row
    cout << "Interactivity:\t\t";
    for (int i = 0; i < 5; i++) {
        cout << info.interactivity[i] << "\t";
    }
    cout << endl;

    // Print Detail/Depth row
    cout << "Detail/Depth:\t\t";
    for (int i = 0; i < 5; i++) {
        cout << info.detailDepth[i] << "\t";
    }
    cout << endl;

    return 0;
}