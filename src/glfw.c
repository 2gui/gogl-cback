
#include <Crpc.h>
#include <glad/gl.h>
#include <GLFW/glfw3.h>

#include "macros.h"
#include "glfw.h"

#define CHECK_ERROR_BLOCK(ctx) do{       \
	const char *err_desc;                  \
	int err_code = glfwGetError(&err_desc);\
	if(err_code != GLFW_NO_ERROR){         \
		return rpc_error_c(ctx, err_code, err_desc);\
	}                                      \
}while(0)

int RglfwVersion(rpc_context *ctx){
	rva_list vl = ctx->args;
	int *v1 = rva_arg(vl, int*), *v2 = rva_arg(vl, int*), *v3 = rva_arg(vl, int*);
	glfwGetVersion(v1, v2, v3);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}


//////// window ////////

int RglfwCreateWindow(rpc_context *ctx){
	rva_list vl = ctx->args;
	int width = rva_arg(vl, int), height = rva_arg(vl, int);
	const char *title = rva_arg(vl, char*);
	GLFWmonitor *monitor = rva_ptr(vl, GLFWmonitor);
	GLFWwindow *share = rva_ptr(vl, GLFWwindow);
	GLFWwindow *window = glfwCreateWindow(width, height, title, monitor, share);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_ptr(ctx, window);
}

int RglfwDestroyWindow(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	glfwDestroyWindow(window);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

int RglfwWindowShouldClose(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	int flag = glfwWindowShouldClose(window);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_bool(ctx, (bool_t)(flag));
}

int RglfwSetWindowShouldClose(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	bool_t flag = rva_arg(vl, bool_t);
	glfwSetWindowShouldClose(window, (int)(flag));
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

int RglfwSetWindowTitle(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	const char *title = rva_arg(vl, char*);
	glfwSetWindowTitle(window, title);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

int RglfwSetWindowIcon(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	int count = rva_arg(vl, int);
	GLFWimage *img = rva_ptr(vl, GLFWimage);
	glfwSetWindowIcon(window, count, img);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

int RglfwGetWindowPos(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	int *x = rva_arg(vl, int*), *y = rva_arg(vl, int*);
	glfwGetWindowPos(window, x, y);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

int RglfwSetWindowPos(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	int x = rva_arg(vl, int), y = rva_arg(vl, int);
	glfwSetWindowPos(window, x, y);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

int RglfwGetWindowSize(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	int *width = rva_arg(vl, int*), *height = rva_arg(vl, int*);
	glfwGetWindowSize(window, width, height);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

int RglfwSetWindowSizeLimits(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	int sw = rva_arg(vl, int), sh = rva_arg(vl, int), lw = rva_arg(vl, int), lh = rva_arg(vl, int);
	glfwSetWindowSizeLimits(window, sw, sh, lw, lh);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

int RglfwSetWindowAspectRatio(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	int numer = rva_arg(vl, int), denom = rva_arg(vl, int);
	glfwSetWindowAspectRatio(window, numer, denom);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

int RglfwSetWindowSize(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	int width = rva_arg(vl, int), height = rva_arg(vl, int);
	glfwSetWindowSize(window, width, height);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

int RglfwGetWindowFrameSize(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	int *left = rva_arg(vl, int*), *top = rva_arg(vl, int*), *right = rva_arg(vl, int*), *bottom = rva_arg(vl, int*);
	glfwGetWindowFrameSize(window, left, top, right, bottom);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

int RglfwGetWindowContentScale(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	float *xscale = rva_arg(vl, float*), *yscale = rva_arg(vl, float*);
	glfwGetWindowContentScale(window, xscale, yscale);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

int RglfwGetWindowOpacity(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	float opacity = glfwGetWindowOpacity(window);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_float32(ctx, opacity);
}

int RglfwSetWindowOpacity(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	float opacity = rva_arg(vl, float);
	glfwSetWindowOpacity(window, opacity);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

int RglfwIconifyWindow(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	glfwIconifyWindow(window);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

int RglfwRestoreWindow(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	glfwRestoreWindow(window);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

int RglfwMaximizeWindow(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	glfwMaximizeWindow(window);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

int RglfwShowWindow(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	glfwShowWindow(window);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

int RglfwHideWindow(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	glfwHideWindow(window);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

int RglfwFocusWindow(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	glfwFocusWindow(window);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

int RglfwRequestWindowAttention(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	glfwRequestWindowAttention(window);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

int RglfwPollEvents(rpc_context *ctx){
	glfwPollEvents();
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

int RglfwWaitEvents(rpc_context *ctx){
	glfwWaitEvents();
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

int RglfwWaitEventsTimeout(rpc_context *ctx){
	rva_list vl = ctx->args;
	double timeout = rva_arg(vl, double);
	glfwWaitEventsTimeout(timeout);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

int RglfwPostEmptyEvent(rpc_context *ctx){
	glfwPostEmptyEvent();
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

int RglfwSwapBuffers(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	glfwSwapBuffers(window);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

//////// context ////////

int RglfwMakeContextCurrent(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	glfwMakeContextCurrent(window);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}

int RglfwGetCurrentContext(rpc_context *ctx){
	GLFWwindow *window = glfwGetCurrentContext();
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_ptr(ctx, window);
}

int RglfwSwapInterval(rpc_context *ctx){
	rva_list vl = ctx->args;
	int interval = rva_arg(vl, int);
	glfwSwapInterval(interval);
	CHECK_ERROR_BLOCK(ctx);
	return rpc_return_null(ctx);
}
