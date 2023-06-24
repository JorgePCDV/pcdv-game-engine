#pragma once

#ifdef PCDV_PLATFORM_WINDOWS

extern Pcdv::Application* Pcdv::CreateApplication();

int main(int arg, char** argv)
{
	Pcdv::Log::Init();
	Pcdv::Log::GetCoreLogger()->warn("Initialized Log!");
	Pcdv::Log::GetClientLogger()->info("Hi!");

	printf("Pcdv Engine\n");
	auto app = Pcdv::CreateApplication();
	app->Run();
	delete app;
}

#endif