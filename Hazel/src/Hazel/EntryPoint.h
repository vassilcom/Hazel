#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();
// something that we will define somewhere in client.

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	//Hazel::Log::GetCoreLogger()->warn("sdsdsdsd dfs");
	//Hazel::Log::GetClientLogger()->info("sdsdsdsd dfs");
	HZ_CORE_WARN("Initialized Log!");
	int a = 5;
	HZ_INFO("Hello! Var={0}", a);

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif