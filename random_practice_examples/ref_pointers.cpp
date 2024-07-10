#include <iostream>

using namespace std;

typedef struct node{
    int a;
    char b;
}Node;

int main(){
    Node n1 = {
        .a = 10,
        .b = 'A'
    };
    Node& n1_r = n1;
    n1_r.a = 11;
    cout << n1.a << endl;

}