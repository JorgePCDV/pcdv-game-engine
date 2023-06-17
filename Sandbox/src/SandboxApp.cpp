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

int main() 
{
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;
}