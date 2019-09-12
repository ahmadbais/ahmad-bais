#include <iostream>
using namespace std;

class siswa{
	public:
		int noInduk;
		void ShowInduk(){
			cout<<"No Induk =" <<noInduk<<endl;
		}
};

int main (){
	siswa budi {1};
	budi.ShowInduk();
	
	siswa &refBudi = budi;
	refBudi.noInduk = 2;
	budi.ShowInduk();
	
	siswa*pBudi=&budi;
	pBudi->noInduk = 3;
	budi.ShowInduk();
	return 0;
}

