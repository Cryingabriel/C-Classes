#include <iostream>
using namespace std;

class cutlery {
private:
    int type;
    bool isclean;
public:
    cutlery();
    void printinfo();
    bool use();
    bool wash();
};


int main()
{
    cutlery Martinee;
    cutlery Decktheland;
    cutlery Alfrdo;

    Martinee.printinfo();
    Decktheland.printinfo();
    Alfrdo.printinfo();
    
    Martinee.use();
    Decktheland.use();
    Alfrdo.use();

    Martinee.printinfo();
    Decktheland.printinfo();
    Alfrdo.printinfo();

    Martinee.wash();
    Decktheland.wash();
    Alfrdo.wash();

    Martinee.printinfo();
    Decktheland.printinfo();
    Alfrdo.printinfo();
}



cutlery::cutlery() {
    type = rand() % 3;
    isclean = true;
}



void cutlery::printinfo() {
    if (type == 0) {
        cout << "I am a fork" << endl;
    }
    else if (type == 1) {
        cout << "I am a spoon" << endl;
    }
    else if (type == 2) {
        cout << "I am a knife" << endl;
    }

    if (isclean == true) {
        cout << "I am clean" << endl;
    }
    else
        cout << "I am dirty" << endl;
}

bool cutlery::use() { 
    isclean = false; 
    return isclean;
}

bool cutlery::wash() { 
    isclean = true; 
    return isclean;
}