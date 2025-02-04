//
//  Camera.h
//  Project
//
//  Created by Inês on 10/5/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#ifndef WORLDCAMERA_H
#define WORLDCAMERA_H

#include <string>
#include "cg/cg.h"

namespace CastleBlast {
	
	class WorldCamera : public cg::Entity, public cg::IDrawListener, 
		public cg::IReshapeEventListener, public cg::IUpdateListener,
		public cg::IMouseEventListener
	{
	private:
		double _winWidth, _winHeight, _anglex, _angley;
		int _mouseWheelUp, _mouseWheelDown;
		cg::Vector3d _eye;
		cg:: Vector3d _center;
		cg::Vector2d _lastMousePosition;
		cg::Quaterniond _orientation, _q;
		bool _isRoll;
		cg::Vector3d _up,_front,_right;
		float _scale;
		
	public:
		WorldCamera();
		~WorldCamera();
		void init();
		void draw();
		void update(unsigned long elapsed_millis);
		void onReshape(int width, int height);
		void onMouse(int button, int state, int x, int y);
		void onMouseMotion(int x, int y);
		void onMousePassiveMotion(int x, int y);

	};
}

#endif