//
//  King.h
//  Project
//
//  Created by Inês on 11/11/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include "cg/cg.h"


namespace CastleBlast {
	
	class ModelManager;
	
	class King : public cg::Entity, public cg::IDrawListener, public cg::IUpdateListener{
	private:
		ModelManager* _model;
		cg::Vector3d _position;
		std::string _type;
		
	public:
		King();
		~King();
		
		void init();
		void draw();
		void update(unsigned long elapsed_millis);
		void placeKing(cg::Vector3d position);
	};
}