
#include <iostream>
#include <random>
#include <string>
#include <sstream>
#include <chrono>

std:: random_device rd; //������ ��������� �����
std:: default_random_engine rnd {rd()};
std:: uniform_int_distribution <> distN {15, 25};
std:: uniform_int_distribution <> distStones {1, 3};

int n = distN(rnd);

int read_int(const char * prompt)	{
	int result;	//
	std::string input;			//��������� ��� ������� ������
	std::cout << prompt;		//����� �������
	std::getline(std::cin, input);//���� ������
	std::stringstream input_ss {input};//�������� ������
	input_ss >> result;				//�������
	if (input_ss.fail()){//���� �� ����������
		if (std::cin.eof()){//���������� ������ ���� � ����� ��� ���������
			std::cerr<< "������ �����/������" << std::endl;
			exit(1);
		}
		else{
			std::cerr<< "�������� ������ �����!" << std::endl;//��������� ����
			std::cerr.flush();//����� ������, �� ��� ���� � ������ �� ������� ����� ������
			return read_int("�����, ������� ����� �� 1 �� 3: ");
			// �������� ����� ��� ���� �������������
		}
	}
	else if (!(input_ss.eof())){//���� ������ �� �� ����� ��������
		std:: cout << "� ��� ��� �����???! (�.�)" << std:: endl;
		return read_int("�����, ������� ����� �� 1 �� 3: ");
	}
	return result;				//������� ���������
}
// ����� �� ������ � 4n+1, � ���������� ������ ��� ������
int Level1(int choice){
	while (n > 1){
		if (choice == 0){
			std:: cout << "��� ����������" << std:: endl;
			int k = distStones(rnd);
			n -= k;
			std:: cout << "��������� ���� "<< k <<" ������� (@ - @)" << std:: endl;
			std:: cout << std:: endl;
			std:: cout << "�������� " << n << " �������� =(^o^)=" << std:: endl;
			std:: cout << std:: endl;
			choice = 1;
		}
		else{
			int p;
			p = read_int("�����, ������� ����� �� 1 �� 3: ");
			while(p>3 or p<1){
				std:: cout << "�� ����� �������� �����" << std:: endl;
				p = read_int("�����, ������� ����� �� 1 �� 3: ");

			};
			n -= p;
			std:: cout << "�������� " << n << " �������� =(^~^)=" << std:: endl;
			std:: cout << std:: endl;
			choice = 0;
		}
	}
	return choice;
}
int Level2(int choice){// ����� ������ 10 �� �������� ������
	while (n > 10){
		if (choice == 0){
			std:: cout << "��� ����������" << std:: endl;
			int k = distStones(rnd);
			n -= k;
			std:: cout << "��������� ���� "<< k <<" ������� (@ - @)" << std:: endl;
			std:: cout << std:: endl;
			std:: cout << "�������� " << n << " �������� =(^o^)=" << std:: endl;
			std:: cout << std:: endl;
			choice = 1;
		}
		else{
			int p;
			p = read_int("�����, ������� ����� �� 1 �� 3: ");
			while(p>3 or p<1){
				std:: cout << "�� ����� �������� �����" << std:: endl;
				p = read_int("�����, ������� ����� �� 1 �� 3: ");

			};
			n -= p;
			std:: cout << "�������� " << n << " �������� =(^~^)=" << std:: endl;
			std:: cout << std:: endl;
			choice = 0;
		}
	}

	while(n >= 3){
		if (choice == 0){
			std:: cout << "��� ����������" << std:: endl;
					if (n % 4 == 2){
						std:: cout << "��������� ���� 1 ������� (@ - @)" << std:: endl;
						std:: cout << std:: endl;
						n -= 1;
					}
					else if (n % 4 == 3){
						std:: cout << "��������� ���� 3 ������� (@ - @)" << std:: endl;
						std:: cout << std:: endl;
						n -= 2;
					}
					else if (n % 4 == 1){
						int k = distStones(rnd);
						n -= k;
						std:: cout << "��������� ���� "<< k <<" ������� (@ - @)" << std:: endl;
						std:: cout << std:: endl;
						std:: cout << "�������� " << n << " �������� =(^o^)=" << std:: endl;
						std:: cout << std:: endl;
					}
					std:: cout << "�������� " << n << " �������� =(^o^)=" << std:: endl;
					std:: cout << std:: endl;
					choice = 1;
		}
	}
	return choice;
}
int Level3(int choice){
	while(n >= 3){
		if (choice == 0){
			std:: cout << "��� ����������" << std:: endl;
			if (n % 4 == 2){
				std:: cout << "��������� ���� 1 ������� (@ - @)" << std:: endl;
				std:: cout << std:: endl;
				n -= 1;
			}
			else if (n % 4 == 3){
				std:: cout << "��������� ���� 2 ������� (@ - @)" << std:: endl;
				std:: cout << std:: endl;
				n -= 2;
			}
			else if (n % 4 == 0){
				std:: cout << "��������� ���� 3 ������� (@ - @)" << std:: endl;
				std:: cout << std:: endl;
				n -= 3;
			}
			else if (n % 4 == 1){
				int k = distStones(rnd);
				n -= k;
				std:: cout << "��������� ���� "<< k <<" ������� (@ - @)" << std:: endl;
				std:: cout << std:: endl;
				std:: cout << "�������� " << n << " �������� =(^o^)=" << std:: endl;
				std:: cout << std:: endl;
			}
			std:: cout << "�������� " << n << " �������� =(^o^)=" << std:: endl;
			std:: cout << std:: endl;
			choice = 1;
		}
		else{
			int p;
			//std::cin.clear();//����������� �� ����� �����������
			p = read_int("�����, ������� ����� �� 1 �� 3: ");
			while(p>3 or p<1){
				std:: cout << "�� ����� �������� �����" << std:: endl;
				p = read_int("�����, ������� ����� �� 1 �� 3: ");
			};
			n -= p;
			std:: cout << "�������� " << n << " �������� =(^~^)=" << std:: endl;
			std:: cout << std:: endl;
			choice = 0;
		}
	}
	choice = Level2(choice);
	return choice;
}

int main(){

	std:: cout << "____����____" << std:: endl;
	std:: cout << "1. ������� ����" << std:: endl;
	std:: cout << "2. ����� ������" << std:: endl;
	int r;
	r = read_int("�������� ������ �����");
	std:: cout << std:: endl;
	switch(r){
		case 1:{

		}
		case 2:{
			std:: cout << "____����� ������____" << std:: endl;
			std:: cout << "1 �������" << std:: endl;
			std:: cout << "2 �������" << std:: endl;
			std:: cout << "3 �������" << std:: endl;
			int level;
			level = read_int("�������� ������ �������");
			std:: cout << std:: endl;

			std:: uniform_int_distribution <> distChoice {0, 1};

				std:: cout << "�� ������ " << n << " �������� =(^.^)=" << std:: endl;
				std:: cout << std:: endl;

				int choice = distChoice(rnd);
				if (choice == 0)
					std:: cout << "�������� ���������" << std:: endl;
				else
					std:: cout << "�������� ������������" << std:: endl;
				int end;
				switch (level){
					case 1: end = Level1(choice); break;
					case 2: end = Level2(choice); break;
					case 3: end = Level3(choice); break;
				}

				if (end == 0)
					std:: cout << "�������� ��������� XDXDXDXD" << std:: endl;
				else
					std:: cout << "�� ��������� ~('- _ -')~" << std:: endl;

		}
	}

	return 0;
}


