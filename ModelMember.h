#include "Database.h"

// create function addMember
void addMember(int id, string name, string phone, string uname){
    id_member[n_member] = id;
    nama_member[n_member] = name;
    no_telp_member[n_member] = phone;
    uname_member[n_member] = uname;
    pass_member[n_member] = "123456";
    status_member[n_member] = "silver";
    point_member[n_member] = 0;
    n_member++;
}

// craete function readListMember
void readListMember(){
    cout << "List Member" << endl;
    cout << "===============================================================================" << endl;
    cout << "ID\tNama\t\tNo. Telp\tUsername\tStatus\t\tPoint" << endl;
    cout << "===============================================================================" << endl;
    for (int i = 0; i < n_member; i++){
        cout << id_member[i] <<
        "\t" << nama_member[i] << "\t\t" << no_telp_member[i] << "\t"
        << uname_member[i] << "\t\t" << status_member[i] << "\t\t"
        << point_member[i] << endl;
    }
    cout << "===============================================================================" << endl;
}