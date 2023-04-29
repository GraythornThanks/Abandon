
#include <Abandon.h>

class Sandbox : public Abandon::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Abandon::Application* Abandon::CreateApplication() {
	return new Sandbox();
}

