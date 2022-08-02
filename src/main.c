
#define DEBUG

#include <stdio.h>
#include <Crpc.h>
#include <glad/gl.h>
#include <GLFW/glfw3.h>

#include "bindings.h"

void rglfwErrorCallback(int code, const char *desc){
	fprintf(stderr, "GLFW ERROR: code: %d: %s\n", code, desc);
}

int main(int argc, const char *argv[]){
	point_t *p = newPoint(fdopen(3, "r"), fdopen(4, "w"));
	bindMethods(p);

	fprintf(stderr, "<<< Initializing glfw\n");
	int version = glfwInit();
	if(!version){
		fprintf(stderr, "<<< Error: failed to initialize glfw\n");
		return -1;
	}
	glfwSetErrorCallback(rglfwErrorCallback);

	fprintf(stderr, "<<< start listening\n");
	int code = pointListen(p);
	fprintf(stderr, "<<< exiting\n");
	glfwTerminate();
	return code;
}
