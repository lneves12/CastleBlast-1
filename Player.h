//
//  Player.h
//  Project
//
//  Created by Inês on 11/12/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include "cg/cg.h"

namespace CastleBlast {
	
	// prevent cicles in include classes. The includes are in the .cpp file
	class King;
	class Cannon;
	
	class Player : public cg::Group, public cg::GroupDraw, public cg::GroupUpdate {
		
	private:
		King* _king;
		Cannon* _cannon;
		
	public:
		Player(std::string id);
		~Player();
		
		void createEntities();
		void positionKing(cg::Vector3d initPosition);
		void positionCannon(cg::Vector3d initPosition);
	};
}