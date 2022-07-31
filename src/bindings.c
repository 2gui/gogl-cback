
#include "glad.h"
#include "glfw.h"

#include "bindings.h"

void bindMethods(point_t *p){
	bindOpenglMethods(p);
	bindGlfwMethods(p);
}

#define bind(name, sign) pointRegisterMethod(p, #name, sign, r##name)

void bindOpenglMethods(point_t *p){
	//
}

void bindGlfwMethods(point_t *p){
	bind(glfwVersion, "*l*l*l");
	// window
	bind(glfwCreateWindow, "llSQQ");
	bind(glfwDestroyWindow, "Q");
	bind(glfwWindowShouldClose, "Q");
	bind(glfwSetWindowShouldClose, "Ql");
	bind(glfwSetWindowTitle, "QS");
	bind(glfwSetWindowIcon, "QlQ");
	bind(glfwGetWindowPos, "Q*l*l");
	bind(glfwSetWindowPos, "Qll");
	bind(glfwGetWindowSize, "Q*l*l");
	bind(glfwSetWindowSizeLimits, "Qllll");
	bind(glfwSetWindowAspectRatio, "Qll");
	bind(glfwSetWindowSize, "Qll");
	bind(glfwGetWindowFrameSize, "Q*l*l*l*l");
	bind(glfwGetWindowContentScale, "Q*F*F");
	bind(glfwGetWindowOpacity, "Q");
	bind(glfwSetWindowOpacity, "QF");
	bind(glfwIconifyWindow, "Q");
	bind(glfwRestoreWindow, "Q");
	bind(glfwMaximizeWindow, "Q");
	bind(glfwShowWindow, "Q");
	bind(glfwHideWindow, "Q");
	bind(glfwFocusWindow, "Q");
	bind(glfwRequestWindowAttention, "Q");
	bind(glfwPollEvents, "");
	bind(glfwWaitEvents, "");
	bind(glfwWaitEventsTimeout, "D");
	bind(glfwPostEmptyEvent, "");
	bind(glfwSwapBuffers, "Q");

	// context
	bind(glfwMakeContextCurrent, "Q");
	bind(glfwGetCurrentContext, "");
	bind(glfwSwapInterval, "l");
}

#undef bind
