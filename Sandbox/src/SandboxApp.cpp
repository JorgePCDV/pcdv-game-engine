#include "Pcdv.h"

class Sandbox : public Pcdv::Application 
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Pcdv::Application* Pcdv::CreateApplication()
{
	return new Sandbox();
}