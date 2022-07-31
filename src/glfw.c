
#include "glfw.h"

#define rva_ptr(l, t) ((t*)rva_arg(l, uint64_t))
#define rva_ptr_ref(l, t) ((t**)rva_arg(l, uint64_t*))
#define rpc_return_ptr(ctx, ptr) rpc_return_uint64(ctx, (uint64_t)(ptr))
#define rpc_return_ptr_res(ctx, res) rpc_return_uint64(ctx, (uint64_t*)(res))


int rglfwVersion(rpc_context *ctx){
	rva_list vl = ctx->args;
	int *v1 = rva_arg(vl, int*), *v2 = rva_arg(vl, int*), *v3 = rva_arg(vl, int*);
	glfwGetVersion(v1, v2, v3);
	rpc_return_null(ctx);
	return 0;
}


//////// window ////////

int rglfwCreateWindow(rpc_context *ctx){
	rva_list vl = ctx->args;
	int width = rva_arg(vl, int), height = rva_arg(vl, int);
	const char *title = rva_arg(vl, char*);
	GLFWmonitor *monitor = rva_ptr(vl, GLFWmonitor);
	GLFWwindow *share = rva_ptr(vl, GLFWwindow);
	GLFWwindow *window = glfwCreateWindow(width, height, title, monitor, share);
	rpc_return_ptr(ctx, window);
	return 0;
}

int rglfwDestroyWindow(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	glfwDestroyWindow(window);
	rpc_return_null(ctx);
	return 0;
}

int rglfwWindowShouldClose(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	int flag = glfwWindowShouldClose(window);
	rpc_return_bool(ctx, (bool_t)(flag));
	return 0;
}

int rglfwSetWindowShouldClose(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	bool_t flag = rva_arg(vl, bool_t);
	glfwSetWindowShouldClose(window, (int)(flag));
	rpc_return_null(ctx);
	return 0;
}

int rglfwSetWindowTitle(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	const char *title = rva_arg(vl, char*);
	glfwSetWindowTitle(window, title);
	rpc_return_null(ctx);
	return 0;
}

int rglfwSetWindowIcon(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	int count = rva_arg(vl, int);
	GLFWimage *img = rva_ptr(vl, GLFWimage);
	glfwSetWindowIcon(window, count, img);
	rpc_return_null(ctx);
	return 0;
}

int rglfwGetWindowPos(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	int *x = rva_arg(vl, int*), *y = rva_arg(vl, int*);
	glfwGetWindowPos(window, x, y);
	rpc_return_null(ctx);
	return 0;
}

int rglfwSetWindowPos(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	int x = rva_arg(vl, int), y = rva_arg(vl, int);
	glfwSetWindowPos(window, x, y);
	rpc_return_null(ctx);
	return 0;
}

int rglfwGetWindowSize(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	int *width = rva_arg(vl, int*), *height = rva_arg(vl, int*);
	glfwGetWindowSize(window, width, height);
	rpc_return_null(ctx);
	return 0;
}

int rglfwSetWindowSizeLimits(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	int sw = rva_arg(vl, int), sh = rva_arg(vl, int), lw = rva_arg(vl, int), lh = rva_arg(vl, int);
	glfwSetWindowSizeLimits(window, sw, sh, lw, lh);
	rpc_return_null(ctx);
	return 0;
}

int rglfwSetWindowAspectRatio(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	int numer = rva_arg(vl, int), denom = rva_arg(vl, int);
	glfwSetWindowAspectRatio(window, numer, denom);
	rpc_return_null(ctx);
	return 0;
}

int rglfwSetWindowSize(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	int width = rva_arg(vl, int), height = rva_arg(vl, int);
	glfwSetWindowSize(window, width, height);
	rpc_return_null(ctx);
	return 0;
}

int rglfwGetWindowFrameSize(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	int *left = rva_arg(vl, int*), *top = rva_arg(vl, int*), *right = rva_arg(vl, int*), *bottom = rva_arg(vl, int*);
	glfwGetWindowFrameSize(window, left, top, right, bottom);
	rpc_return_null(ctx);
	return 0;
}

int rglfwGetWindowContentScale(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	float *xscale = rva_arg(vl, float*), *yscale = rva_arg(vl, float*);
	glfwGetWindowContentScale(window, xscale, yscale);
	rpc_return_null(ctx);
	return 0;
}

int rglfwGetWindowOpacity(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	float opacity = glfwGetWindowOpacity(window);
	rpc_return_float32(ctx, opacity);
	return 0;
}

int rglfwSetWindowOpacity(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	float opacity = rva_arg(vl, float);
	glfwSetWindowOpacity(window, opacity);
	rpc_return_null(ctx);
	return 0;
}

int rglfwIconifyWindow(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	glfwIconifyWindow(window);
	rpc_return_null(ctx);
	return 0;
}

int rglfwRestoreWindow(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	glfwRestoreWindow(window);
	rpc_return_null(ctx);
	return 0;
}

int rglfwMaximizeWindow(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	glfwMaximizeWindow(window);
	rpc_return_null(ctx);
	return 0;
}

int rglfwShowWindow(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	glfwShowWindow(window);
	rpc_return_null(ctx);
	return 0;
}

int rglfwHideWindow(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	glfwHideWindow(window);
	rpc_return_null(ctx);
	return 0;
}

int rglfwFocusWindow(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	glfwFocusWindow(window);
	rpc_return_null(ctx);
	return 0;
}

int rglfwRequestWindowAttention(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	glfwRequestWindowAttention(window);
	rpc_return_null(ctx);
	return 0;
}

int rglfwPollEvents(rpc_context *ctx){
	debugf("24x");
	glfwPollEvents();
	debugf("y");
	rpc_return_null(ctx);
	debugf("z");
	return 0;
}

int rglfwWaitEvents(rpc_context *ctx){
	glfwWaitEvents();
	rpc_return_null(ctx);
	return 0;
}

int rglfwWaitEventsTimeout(rpc_context *ctx){
	rva_list vl = ctx->args;
	double timeout = rva_arg(vl, double);
	glfwWaitEventsTimeout(timeout);
	rpc_return_null(ctx);
	return 0;
}

int rglfwPostEmptyEvent(rpc_context *ctx){
	glfwPostEmptyEvent();
	rpc_return_null(ctx);
	return 0;
}

int rglfwSwapBuffers(rpc_context *ctx){
	rva_list vl = ctx->args;
	debugf("28x");
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	debugf("y");
	debugf("window: %p", window);
	glfwSwapBuffers(window);
	debugf("z");
	rpc_return_null(ctx);
	debugf("k");
	return 0;
}

//////// context ////////

int rglfwMakeContextCurrent(rpc_context *ctx){
	rva_list vl = ctx->args;
	GLFWwindow *window = rva_ptr(vl, GLFWwindow);
	glfwMakeContextCurrent(window);
	rpc_return_null(ctx);
	return 0;
}

int rglfwGetCurrentContext(rpc_context *ctx){
	GLFWwindow *window = glfwGetCurrentContext();
	rpc_return_ptr(ctx, window);
	return 0;
}

int rglfwSwapInterval(rpc_context *ctx){
	rva_list vl = ctx->args;
	int interval = rva_arg(vl, int);
	glfwSwapInterval(interval);
	rpc_return_null(ctx);
	return 0;
}
