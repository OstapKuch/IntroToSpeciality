#include <string>
using namespace std;

class Chainsaw{
public:

    int public_1;
    string public_2;
    void getClass();
    string getName();
    int getPower();
    int getTurns();
    Chainsaw();
    Chainsaw(string Name, int Power, int Turns, int prot_1, int prot_2,  int pub_1, string pub_2);
    ~Chainsaw();

private:

    string name;
    int power;
    int turns;

protected:

    int protected_1;
    int protected_2;

};


