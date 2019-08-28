#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();
// something that we will define somewhere in client.

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif