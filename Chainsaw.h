#include <string>
using namespace std;

class Chainsaw{
public:
    int public_1;
    string public_2;
    void getAllClassFields();
    string getName();
    int getPower();
    int getTurns();
    Chainsaw();
    Chainsaw(string name, int power, int turns, int protected_1, int protected_2, int public_1, string public_2);
    ~Chainsaw();
    
private:
    string name;
    int power;
    int turns;
    
protected:
    int protected_1;
    int protected_2;
};
