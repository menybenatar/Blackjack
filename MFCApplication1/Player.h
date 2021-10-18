#pragma once
#include "GenericPlayer.h"
class Player :
	public GenericPlayer
{
private:
	bool mHiiting;
public:
	Player();
	void updateTotalValue();
	void setHitting(bool);
	virtual bool isHitting() const;
	void win() ;
	void showCard() ;
};

