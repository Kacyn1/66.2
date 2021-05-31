#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class file {
public:
    ifstream fIn;

    file();
    ~file();
};

file::file() {
    fIn.open("c:\\trojki.txt");
}

file::~file() {
    fIn.close();
}

class algo {
    private:
        vector <int> nums;
    public:
        void getNums(int num);
        void clearVector();
        void checkNums();

};

void algo::getNums(int num) {
    nums.push_back(num);
}

void algo::clearVector() {
    nums.clear();
}

void algo::checkNums() {
    bool isTrue = true;
    
    for (int i = 0; i <= 1; i++) {
        for (int j = 2; j < nums[i]; j++) {
            if (nums[i] % j == 0) {
                //cout << nums[i];
                isTrue = false;
                
            }
        }
    }
    if (isTrue) {
        if (nums[0] * nums[1] == nums[2]) {
            for (int i = 0; i <= 2; i++) {
                cout << nums[i] << " ";
            }
            cout<< endl;
        }
    }
}

int main()
{   
    file f;
    algo a;
    int num;
    while (!f.fIn.eof()) {
        for (int i = 0; i <= 2; i++) {
            f.fIn >> num;
            a.getNums(num);
        }
        a.checkNums();
        a.clearVector();
    }
}
