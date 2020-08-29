#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
	ifstream fin;
	ofstream fout;

	char ch;

	if(argc != 3){
		cout << "��ɾ� �Է� �� ���� ���ϸ�� ���纻 ���ϸ��� �Է��ϼ���" << endl;
		
		exit(0);
	}

	fin.open(argv[1]);
	fout.open(argv[2]);

	if(fin.fail() || fout.fail()){
		cout << "���� ������ �����߽��ϴ�." << endl;
		return 0;
	}

	while(fin.get(ch))
		fout.put(ch);

	fin.close();
	fout.close();
}