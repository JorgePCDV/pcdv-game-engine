#pragma once

#ifdef PCDV_PLATFORM_WINDOWS

extern Pcdv::Application* Pcdv::CreateApplication();

int main(int arg, char** argv)
{
	Pcdv::Log::Init();
	PCDV_CORE_WARN("Initialized Log!");
	int a = 5;
	PCDV_INFO("Hi! Variable Var={0}", a);
	

	printf("Pcdv Engine\n");
	auto app = Pcdv::CreateApplication();
	app->Run();
	delete app;
}

#endif