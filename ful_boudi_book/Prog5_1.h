#include <iostream>
#include <string>
#include <cstdint>

using namespace std;

class item{
    private:
        uint32_t number;
        float cost;
    public:
        item(uint32_t, float);
        void getdata(uint32_t, float);
        void putdata(void);
};
