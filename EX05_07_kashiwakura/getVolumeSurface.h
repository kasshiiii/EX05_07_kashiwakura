#pragma once
struct BOX {	//���̒�`
	double x;	//��
	double y;	//����
	double z;	//���s
	double volume;	//�̐�
	double surface; //�\�ʐ�
	double packSize;//�����T�C�Y
};

void getVolumeSurface(BOX*);
bool isSendable(BOX*);