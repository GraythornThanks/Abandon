#pragma once

#ifdef AB_PLATFORM_WINDOWS

extern Abandon::Application* Abandon::CreateApplication();

int main(int argc, char** argv) {
	auto app = Abandon::CreateApplication();

	app->Run();
	delete app;

	return 0;
}

#endif