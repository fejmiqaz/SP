#include <iostream>
#include<cstring>
using namespace std;

void words(char f[100], char q[100]){
    int counter = 0; // this counter is to calculate how many times the word appears in the string
    char *ff = f; // copy the f string to a pointer
    while((ff = strstr(ff,q)) != nullptr){ // check if the word appears inside the string
        counter++;
        ff++;
    }
    cout << counter << ": " << f << endl; // print out how many times the word appeared alongside with the whole array
}

int main() {
    int n;
    char f[100], q[100];
    cin >> n;
    cin.ignore();
    cin.getline(q,100);

    while(n--){
        cin.getline(f,100);
        words(f,q);
    }

    return 0;
}
