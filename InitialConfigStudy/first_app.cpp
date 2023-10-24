#include "first_app.hpp"

namespace lve {
	void FistApp::run() {
		while (!lveWindow.shouldClose()) {
			glfwPollEvents();
		}
	}
}