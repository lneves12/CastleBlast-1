//
//  Player.cpp
//  Project
//
//  Created by Inês on 11/12/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include "Player.h"
#include "King.h"
#include "Cannon.h"

namespace CastleBlast {
	
	Player::Player(std::string id) : cg::Group(id){}
	
	Player::~Player() {}
	
	
	void Player::createEntities() 
	{
		_king = new King();
		_cannon = new Cannon();
		
		addAtBeginning(_king);
		addAtBeginning(_cannon);
	}
	
	void Player::positionKing(cg::Vector3d initPosition)
	{
		_king->placeKing(initPosition);
	}
	
	void Player::positionCannon(cg::Vector3d initPosition)
	{
		_cannon->placeCannon(initPosition);
	}
}