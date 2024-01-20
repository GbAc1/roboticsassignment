#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int p1, p2, p3, p4, p5;

class microm {
public:
    void turnleft() {
        cout << "turning left" << endl;
    }
    
    void turnright() {
        cout << "turning right" << endl;
    }
    
    void gostraight() {
        cout << "going ahead straight" << endl;
    }
    
    void uturn() {
        cout << "i am turning u" << endl;
    }
    
    void stop() {
        cout << "i have finished the race" << endl;
    }
    
    void moveinch() {
        cout << "i have moved an inch" << endl;
        cout << "enter p1, p2, p3, p4, p5" << endl;
        cin >> p1 >> p2 >> p3 >> p4 >> p5;
    }
};

int check(string take) {
    for (int x = 0; x < take.length(); x++) {
        if (take[x] == 'U') {
            return 1;
        }
    }
    return 0;
}

void robo(string in) {
    while (check(in) == 1) {
        for (int i = 0; i < in.length(); i++) {
            if (in[i] == 'S' && in[i + 1] == 'U' && in[i + 2] == 'L') {
                in.erase(i, 3);
                in.insert(i, "R");
            } else if (in[i] == 'L' && in[i + 1] == 'U' && in[i + 2] == 'L') {
                in.erase(i, 3);
                in.insert(i, "S");
            } else if (in[i] == 'L' && in[i + 1] == 'U' && in[i + 2] == 'S') {
                in.erase(i, 3);
                in.insert(i, "R");
            } else if (in[i] == 'S' && in[i + 1] == 'U' && in[i + 2] == 'R') {
                in.erase(i, 3);
                in.insert(i, "L");
            } else if (in[i] == 'R' && in[i + 1] == 'U' && in[i + 2] == 'R') {
                in.erase(i, 3);
                i
