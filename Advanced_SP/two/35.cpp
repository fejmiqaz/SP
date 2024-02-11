#include <iostream>
#include<cstring>
using namespace std;

void words(char f[100], char q[100]){
    int counter = 0;
    char *ptr = f;
    while((ptr = strstr(ptr,q)) != nullptr){
        counter++;
        ptr++;
    }
    cout << counter << ": " << f << endl;
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
