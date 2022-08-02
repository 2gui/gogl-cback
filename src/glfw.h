
#ifndef __GOGL_GLFW_H__
#define __GOGL_GLFW_H__

#include <Crpc.h>

int RglfwVersion(rpc_context *ctx);

// window
int RglfwCreateWindow(rpc_context *ctx);
int RglfwDestroyWindow(rpc_context *ctx);
int RglfwWindowShouldClose(rpc_context *ctx);
int RglfwSetWindowShouldClose(rpc_context *ctx);
int RglfwSetWindowTitle(rpc_context *ctx);
int RglfwSetWindowIcon(rpc_context *ctx);
int RglfwGetWindowPos(rpc_context *ctx);
int RglfwSetWindowPos(rpc_context *ctx);
int RglfwGetWindowSize(rpc_context *ctx);
int RglfwSetWindowSizeLimits(rpc_context *ctx);
int RglfwSetWindowAspectRatio(rpc_context *ctx);
int RglfwSetWindowSize(rpc_context *ctx);
int RglfwGetWindowFrameSize(rpc_context *ctx);
int RglfwGetWindowContentScale(rpc_context *ctx);
int RglfwGetWindowOpacity(rpc_context *ctx);
int RglfwSetWindowOpacity(rpc_context *ctx);
int RglfwIconifyWindow(rpc_context *ctx);
int RglfwRestoreWindow(rpc_context *ctx);
int RglfwMaximizeWindow(rpc_context *ctx);
int RglfwShowWindow(rpc_context *ctx);
int RglfwHideWindow(rpc_context *ctx);
int RglfwFocusWindow(rpc_context *ctx);
int RglfwRequestWindowAttention(rpc_context *ctx);
// GLFWmonitor *glfwGetWindowMonitor(GLFWwindow *window)
// void glfwSetWindowMonitor(GLFWwindow *window, GLFWmonitor *monitor, int xpos, int ypos, int width, int height, int refreshRate)
// int glfwGetWindowAttrib(GLFWwindow *window, int attrib)
// void glfwSetWindowAttrib(GLFWwindow *window, int attrib, int value)
int RglfwPollEvents(rpc_context *ctx);
int RglfwWaitEvents(rpc_context *ctx);
int RglfwWaitEventsTimeout(rpc_context *ctx);
int RglfwPostEmptyEvent(rpc_context *ctx);
int RglfwSwapBuffers(rpc_context *ctx);

// context
int RglfwMakeContextCurrent(rpc_context *ctx);
int RglfwGetCurrentContext(rpc_context *ctx);
int RglfwSwapInterval(rpc_context *ctx);

#endif // __GOGL_GLFW_H__
