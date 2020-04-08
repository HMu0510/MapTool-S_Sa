#pragma once
#include "gameNode.h"
#include "tileNode.h"

class maptoolScene : public gameNode
{
private:
	tagTile _tiles[TILEX * TILEY];	//�ΰ���ȭ�鿡 ���Ǵ� Ÿ�� �� 400��
	tagSampleTile _sampleTile[SAMPLETILEX * SAMPLETILEY]; //����Ÿ�� �� 160��
	tagCurrentTile _currentTile;	//����Ÿ��

	RECT _rcSave;		//���̺�
	RECT _rcLoad;		//�ε�
	RECT _rcTerrain;	//����
	RECT _rcObject;		//������Ʈ
	RECT _rcEraser;		//���찳(������Ʈ�� �����, ������ ������)

	CTRL _ctrlSelect;	//���� � ��Ʈ�� ��������

	RECT _rcMulti;		//������ �Ѳ����� �ϱ����� ��Ʈ
	bool _temp;			//�Ͻ������� Ŭ����ǥ����ϱ�����
	int _tempLeft, _tempTop;	//�Ͻ����� Ŭ����ǥ ��ﺯ��
	int _tempRight, _tempBottom;	//�Ͻ����� Ŭ����ǥ ��ﺯ��
	int _tempX, _tempY;

	int _SelectTilesX, _SelectTilesY;	//���õ� Ÿ���� ������ �����ϴ� ����

public:
	HRESULT init();
	void release();
	void update();
	void render();

	//��������
	void maptoolSetup();
	void setMap();
	void save();
	void load();

	//����, ������Ʈ ����
	TERRAIN terrainSelect(int frameX, int frameY);
	OBJECT objectSelect(int frameX, int frameY);

	maptoolScene() {}
	~maptoolScene() {}
};

