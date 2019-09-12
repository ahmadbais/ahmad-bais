#include <iostream>
using namespace std;

int main (){
int a=5;
int *b;
b = &a;

cout << "Alamat Variabel a adalah : "<<&a<<endl;
cout << " Nilai variabel a adalah : "<<a<<endl;
cout << " Isi dari variabel b adalah : "<<b<<endl;
cout << " Nilai yang tertampung dalam variabel b adalah : "<<*b<<endl;

return 0;
}

