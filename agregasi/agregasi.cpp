#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main()
{
    ibu *varIbu = new ibu("dini");
    ibu *varIbu2 = new ibu("novi");
    anak *varAnak1 = new anak("tono");
    anak *varAnak2 = new anak("rini");
    anak *varAnak3 = new anak("Dewi");

    varIbu->tambahAnak(varAnak1);
    varIbu2->tambahAnak(varAnak2);
    varIbu2->tambahAnak(varAnak3);

    varIbu->cetakAnak();
    varIbu2->cetakAnak();
    

}

