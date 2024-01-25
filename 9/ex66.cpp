#include<iostream>
#include<cstring>
using namespace std;

/* For a given sentence in SI, each occurrence of an additionally inputed word should be replaced with the word on
 * position N, where the firs word's position is 0.
 * The order of input is the following: the word that should be replaced, the index N of the word for the replacement.
 * Output the transformed sentence.
 * Example:
 * do not fear, fear is the mind killer
 * fear
 * 6
 * Output:
 * do not mind, mind is the mind killer
 * Example 2:
 * in doing good avoid notoriety, in doing evil avoid self-awareness
 * evil
 * 3
 * Output:
 * in doing good avoid notiriety, in doing good avoid self-awareness*/

int main(){
    char f[100], n[100];
    int index;
    cin.getline(f, 100);
    cin.getline(n, 100);
    cin >> index;

    int index1 = 0;
    for(int i = 0; i < strlen(f); i++){
        if(isspace(f[i])){
            index1++;
        }
    }



    /*char f[100], n[100];
    int index;
    cin.getline(f,100);
    cin.getline(n,100);
    cin >> index;

    int index1 = 0;
    for(int i = 0; i < strlen(f); i++){
        if(isspace(f[i])){
            index1++;
        }
    }
    int spaces = 0;
    for(int i = 0; i < strlen(f); i++){
        if(isspace(f[i])){
            spaces++;
            if(spaces == index){
                for(int j = 0; j < strlen(n); j++){
                    f[i - strlen(n) + 1 + j] = n[j];
                }
                break;
            }
        }
    }

    for(int i = 0; i < strlen(f); i++){
        cout << f[i];
    }*/


    return 0;
}