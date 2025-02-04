//
//  GrassBlock.cpp
//  Project
//
//  Created by Inês on 10/7/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include "GrassBlock.h"

namespace CastleBlast {
	
	GrassBlock::GrassBlock(cg::Vector3d startFrom) : Block(startFrom) {
		
		topBottom_mat_ambient[0] = 0.1f;
		topBottom_mat_ambient[1] = 0.4f;
		topBottom_mat_ambient[2] = 0.1f;
		topBottom_mat_ambient[3] = 1.0f;
		
		topBottom_mat_difusse[0] = 0.0f;
		topBottom_mat_difusse[1] = 0.3f;
		topBottom_mat_difusse[2] = 0.0f;
		topBottom_mat_difusse[3] = 1.0f;
		
		topBottom_mat_specular[0] = 0.0f;
		topBottom_mat_specular[1] = 0.7f;
		topBottom_mat_specular[2] = 0.0f;
		topBottom_mat_specular[3] = 1.0f;
		
		topBottom_shininess = 5;
		
		loadTextures();
	}
	
	GrassBlock::~GrassBlock() {}
	
	void GrassBlock::loadTextures()
	{
#ifdef __APPLE__
		_topBottomTexture = Loader::loadTexture("Textures/grass.jpg");
		_sideTexture = Loader::loadTexture("Textures/sideGrass.jpg");
#else
		_topBottomTexture = Loader::loadTexture("..\\..\\src\\Textures\\grass.jpg");
		_sideTexture = Loader::loadTexture("..\\..\\src\\Textures\\sideGrass.jpg");
#endif
	}
}