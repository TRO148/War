#pragma once
class AnyThing
{
private:

public:
	HBITMAP m_hBmp; //װ��ͼƬ
	int m_PosX, m_PosY; //����
	int m_SpeedX, m_SpeedY; //�ٶ�
	RECT m_Rect; //��ײ����
	int GetSpeedX() { return m_SpeedX; };
	void setSpeedX(int x) { m_SpeedX = x; };
	int GetSpeedY() { return m_SpeedY; };
	void setSpeedY(int y) { m_SpeedY = y; };
	int GetPosX() { return m_PosX; };
	void setPosX(int x) { m_PosX = x; };
	int GetPosY() { return m_PosY; };
	void setPosY(int y) { m_PosY = y; };
};

