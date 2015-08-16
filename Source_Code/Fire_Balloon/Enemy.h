#pragma once

class Enemy
{
private:
	BOOL Visible;
	LPDIRECT3DTEXTURE9 Texture;
	RECT Source;
	D3DXVECTOR3 Position;
	D3DXVECTOR3 Center;
	int ani_inverval;
	BOOL direction;
	int id;

public:
	Enemy(int);
	Enemy(void);
	~Enemy(void);
	void initEnemy(RECT&);
	void setTexture(LPDIRECT3DDEVICE9, LPCWSTR);
	void setSource(RECT);
	void setVisible(BOOL);
	void setPosition(D3DXVECTOR3);
	void setCenter(const D3DXVECTOR3);
	void manageMoving(LPDIRECT3DDEVICE9, int);

	int getID();
	BOOL getVisible();
	LPDIRECT3DTEXTURE9& getTexture();
	RECT* getSource();
	D3DXVECTOR3* getPosition();
	const D3DXVECTOR3* getCenter();

	void sineMoving(int);
	void invSineMoving(int);
};
