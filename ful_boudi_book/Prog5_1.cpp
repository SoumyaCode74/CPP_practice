#include "Prog5_1.h"

item::item(uint32_t n, float c):number(n),cost(c){
};

void item::putdata(void){
    cout << "Number: " << number <<", Cost: " << cost << endl;    
};

int main(){
    item item1(10, 2.0);
    item1.putdata();
    return 0;
}