#pragma once
#include "Framework/GameObject.h"

class Cursor : public GameObject
{
	private:

			

	public:
		Cursor();
		
		void SetCursorPosition(float mouseX,float mouseY);

		float speed = 100;
		int direction = 1;



};
