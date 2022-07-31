
#ifndef __GOGL_GLFW_H__
#define __GOGL_GLFW_H__

#include <stdio.h>
#include <Crpc.h>
#include <GLFW/glfw3.h>

int rglfwVersion(rpc_context *ctx);

// window
int rglfwCreateWindow(rpc_context *ctx);
int rglfwDestroyWindow(rpc_context *ctx);
int rglfwWindowShouldClose(rpc_context *ctx);
int rglfwSetWindowShouldClose(rpc_context *ctx);
int rglfwSetWindowTitle(rpc_context *ctx);
int rglfwSetWindowIcon(rpc_context *ctx);
int rglfwGetWindowPos(rpc_context *ctx);
int rglfwSetWindowPos(rpc_context *ctx);
int rglfwGetWindowSize(rpc_context *ctx);
int rglfwSetWindowSizeLimits(rpc_context *ctx);
int rglfwSetWindowAspectRatio(rpc_context *ctx);
int rglfwSetWindowSize(rpc_context *ctx);
int rglfwGetWindowFrameSize(rpc_context *ctx);
int rglfwGetWindowContentScale(rpc_context *ctx);
int rglfwGetWindowOpacity(rpc_context *ctx);
int rglfwSetWindowOpacity(rpc_context *ctx);
int rglfwIconifyWindow(rpc_context *ctx);
int rglfwRestoreWindow(rpc_context *ctx);
int rglfwMaximizeWindow(rpc_context *ctx);
int rglfwShowWindow(rpc_context *ctx);
int rglfwHideWindow(rpc_context *ctx);
int rglfwFocusWindow(rpc_context *ctx);
int rglfwRequestWindowAttention(rpc_context *ctx);
// GLFWmonitor *glfwGetWindowMonitor(GLFWwindow *window)
// void glfwSetWindowMonitor(GLFWwindow *window, GLFWmonitor *monitor, int xpos, int ypos, int width, int height, int refreshRate)
// int glfwGetWindowAttrib(GLFWwindow *window, int attrib)
// void glfwSetWindowAttrib(GLFWwindow *window, int attrib, int value)
int rglfwPollEvents(rpc_context *ctx);
int rglfwWaitEvents(rpc_context *ctx);
int rglfwWaitEventsTimeout(rpc_context *ctx);
int rglfwPostEmptyEvent(rpc_context *ctx);
int rglfwSwapBuffers(rpc_context *ctx);

// context
int rglfwMakeContextCurrent(rpc_context *ctx);
int rglfwGetCurrentContext(rpc_context *ctx);
int rglfwSwapInterval(rpc_context *ctx);

#endif // __GOGL_GLFW_H__
