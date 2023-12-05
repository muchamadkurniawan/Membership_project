#include "ModelMember.h"
using namespace std;

int main() {
    //testing insert member
    addMember(1, "Rizky", "08123456789", "rizky");
    addMember(2, "Andi", "08123456789", "andi");
    addMember(3, "Budi", "08123456789", "budi");

    //testing read list member
    readListMember();

    return 0;
}
