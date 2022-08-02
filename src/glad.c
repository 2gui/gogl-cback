
#include <Crpc.h>
#include <glad/gl.h>
#include <GLFW/glfw3.h>

#include "macros.h"
#include "glad.h"

int RgladMallocGLContext(rpc_context *ctx){
	GladGLContext *context = malloc(sizeof(GladGLContext));
	return rpc_return_ptr(ctx, context);
}

int RgladLoadGLContext(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	int version = gladLoadGLContext(context, glfwGetProcAddress);
	return rpc_return_int32(ctx, version);
}

//////// Contexts ////////
int RglCtxAccum(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum op = rva_arg(vl, GLenum);
	GLfloat value = rva_arg(vl, GLfloat);
	context->Accum(op, value);
	return rpc_return_null(ctx);
}
int RglCtxActiveShaderProgram(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint pipeline = rva_arg(vl, GLuint);
	GLuint program = rva_arg(vl, GLuint);
	context->ActiveShaderProgram(pipeline, program);
	return rpc_return_null(ctx);
}
int RglCtxActiveTexture(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum texture = rva_arg(vl, GLenum);
	context->ActiveTexture(texture);
	return rpc_return_null(ctx);
}
int RglCtxAlphaFunc(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum func = rva_arg(vl, GLenum);
	GLfloat ref = rva_arg(vl, GLfloat);
	context->AlphaFunc(func, ref);
	return rpc_return_null(ctx);
}
int RglCtxAreTexturesResident(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	const GLuint *textures = rva_arg(vl, const GLuint *);
	bool_t *residences = rva_arg(vl, bool_t *);
	bool_t res = context->AreTexturesResident(n, textures, residences);
	return rpc_return_bool(ctx, res);
}
int RglCtxArrayElement(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint i = rva_arg(vl, GLint);
	context->ArrayElement(i);
	return rpc_return_null(ctx);
}
int RglCtxAttachShader(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLuint shader = rva_arg(vl, GLuint);
	context->AttachShader(program, shader);
	return rpc_return_null(ctx);
}
int RglCtxBegin(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	context->Begin(mode);
	return rpc_return_null(ctx);
}
int RglCtxBeginConditionalRender(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint id = rva_arg(vl, GLuint);
	GLenum mode = rva_arg(vl, GLenum);
	context->BeginConditionalRender(id, mode);
	return rpc_return_null(ctx);
}
int RglCtxBeginQuery(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLuint id = rva_arg(vl, GLuint);
	context->BeginQuery(target, id);
	return rpc_return_null(ctx);
}
int RglCtxBeginQueryIndexed(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLuint index = rva_arg(vl, GLuint);
	GLuint id = rva_arg(vl, GLuint);
	context->BeginQueryIndexed(target, index, id);
	return rpc_return_null(ctx);
}
int RglCtxBeginTransformFeedback(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum primitiveMode = rva_arg(vl, GLenum);
	context->BeginTransformFeedback(primitiveMode);
	return rpc_return_null(ctx);
}
int RglCtxBindAttribLocation(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLuint index = rva_arg(vl, GLuint);
	const GLchar *name = rva_arg(vl, const GLchar *);
	context->BindAttribLocation(program, index, name);
	return rpc_return_null(ctx);
}
int RglCtxBindBuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLuint buffer = rva_arg(vl, GLuint);
	context->BindBuffer(target, buffer);
	return rpc_return_null(ctx);
}
int RglCtxBindBufferBase(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLuint index = rva_arg(vl, GLuint);
	GLuint buffer = rva_arg(vl, GLuint);
	context->BindBufferBase(target, index, buffer);
	return rpc_return_null(ctx);
}
int RglCtxBindBufferRange(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLuint index = rva_arg(vl, GLuint);
	GLuint buffer = rva_arg(vl, GLuint);
	uint32_t offset = rva_arg(vl, uint32_t);
	uint64_t size = rva_arg(vl, uint64_t);
	context->BindBufferRange(target, index, buffer, offset, size);
	return rpc_return_null(ctx);
}
int RglCtxBindBuffersBase(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLuint first = rva_arg(vl, GLuint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLuint *buffers = rva_arg(vl, const GLuint *);
	context->BindBuffersBase(target, first, count, buffers);
	return rpc_return_null(ctx);
}
int RglCtxBindBuffersRange(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLuint first = rva_arg(vl, GLuint);
	GLsizei count = rva_arg(vl, GLsizei);
	const slice_t /*GLuint*/ buffers = rva_arg(vl, slice_t);
	const slice_t /*GLsizeiptr*/ _offsets = rva_arg(vl, slice_t);
	const slice_t /*size_t*/ _sizes = rva_arg(vl, slice_t);
	size_t *offsets = slice_to_sizes(_offsets, malloc(sizeof(size_t) * _offsets.size));
	size_t *sizes = slice_to_sizes(_sizes, malloc(sizeof(size_t) * _sizes.size));
	context->BindBuffersRange(target, first, count, buffers.p, (const GLsizeiptr*)(offsets), (const GLsizeiptr*)(sizes));
	free(offsets);
	free(sizes);
	return rpc_return_null(ctx);
}
int RglCtxBindFragDataLocation(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLuint color = rva_arg(vl, GLuint);
	const GLchar *name = rva_arg(vl, const GLchar *);
	context->BindFragDataLocation(program, color, name);
	return rpc_return_null(ctx);
}
int RglCtxBindFragDataLocationIndexed(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLuint colorNumber = rva_arg(vl, GLuint);
	GLuint index = rva_arg(vl, GLuint);
	const GLchar *name = rva_arg(vl, const GLchar *);
	context->BindFragDataLocationIndexed(program, colorNumber, index, name);
	return rpc_return_null(ctx);
}
int RglCtxBindFramebuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLuint framebuffer = rva_arg(vl, GLuint);
	context->BindFramebuffer(target, framebuffer);
	return rpc_return_null(ctx);
}
int RglCtxBindImageTexture(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint unit = rva_arg(vl, GLuint);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	bool_t layered = rva_arg(vl, bool_t);
	GLint layer = rva_arg(vl, GLint);
	GLenum access = rva_arg(vl, GLenum);
	GLenum format = rva_arg(vl, GLenum);
	context->BindImageTexture(unit, texture, level, layered, layer, access, format);
	return rpc_return_null(ctx);
}
int RglCtxBindImageTextures(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint first = rva_arg(vl, GLuint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLuint *textures = rva_arg(vl, const GLuint *);
	context->BindImageTextures(first, count, textures);
	return rpc_return_null(ctx);
}
int RglCtxBindProgramPipeline(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint pipeline = rva_arg(vl, GLuint);
	context->BindProgramPipeline(pipeline);
	return rpc_return_null(ctx);
}
int RglCtxBindRenderbuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLuint renderbuffer = rva_arg(vl, GLuint);
	context->BindRenderbuffer(target, renderbuffer);
	return rpc_return_null(ctx);
}
int RglCtxBindSampler(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint unit = rva_arg(vl, GLuint);
	GLuint sampler = rva_arg(vl, GLuint);
	context->BindSampler(unit, sampler);
	return rpc_return_null(ctx);
}
int RglCtxBindSamplers(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint first = rva_arg(vl, GLuint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLuint *samplers = rva_arg(vl, const GLuint *);
	context->BindSamplers(first, count, samplers);
	return rpc_return_null(ctx);
}
int RglCtxBindTexture(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLuint texture = rva_arg(vl, GLuint);
	context->BindTexture(target, texture);
	return rpc_return_null(ctx);
}
int RglCtxBindTextureUnit(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint unit = rva_arg(vl, GLuint);
	GLuint texture = rva_arg(vl, GLuint);
	context->BindTextureUnit(unit, texture);
	return rpc_return_null(ctx);
}
int RglCtxBindTextures(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint first = rva_arg(vl, GLuint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLuint *textures = rva_arg(vl, const GLuint *);
	context->BindTextures(first, count, textures);
	return rpc_return_null(ctx);
}
int RglCtxBindTransformFeedback(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLuint id = rva_arg(vl, GLuint);
	context->BindTransformFeedback(target, id);
	return rpc_return_null(ctx);
}
int RglCtxBindVertexArray(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint array = rva_arg(vl, GLuint);
	context->BindVertexArray(array);
	return rpc_return_null(ctx);
}
int RglCtxBindVertexBuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint bindingindex = rva_arg(vl, GLuint);
	GLuint buffer = rva_arg(vl, GLuint);
	uint32_t offset = rva_arg(vl, uint32_t);
	GLsizei stride = rva_arg(vl, GLsizei);
	context->BindVertexBuffer(bindingindex, buffer, offset, stride);
	return rpc_return_null(ctx);
}
int RglCtxBindVertexBuffers(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint first = rva_arg(vl, GLuint);
	GLsizei count = rva_arg(vl, GLsizei);
	const slice_t/*GLuint*/ buffers = rva_arg(vl, slice_t);
	const slice_t/*GLsizeiptr*/ _offsets = rva_arg(vl, slice_t);
	const slice_t/*GLsizei*/ strides = rva_arg(vl, slice_t);
	size_t *offsets = slice_to_sizes(_offsets, malloc(sizeof(size_t) * _offsets.size));
	context->BindVertexBuffers(first, count, buffers.p, (const GLsizeiptr *)(offsets), strides.p);
	free(offsets);
	return rpc_return_null(ctx);
}
int RglCtxBitmap(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLfloat xorig = rva_arg(vl, GLfloat);
	GLfloat yorig = rva_arg(vl, GLfloat);
	GLfloat xmove = rva_arg(vl, GLfloat);
	GLfloat ymove = rva_arg(vl, GLfloat);
	const GLubyte *bitmap = rva_arg(vl, const GLubyte *);
	context->Bitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
	return rpc_return_null(ctx);
}
int RglCtxBlendColor(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat red = rva_arg(vl, GLfloat);
	GLfloat green = rva_arg(vl, GLfloat);
	GLfloat blue = rva_arg(vl, GLfloat);
	GLfloat alpha = rva_arg(vl, GLfloat);
	context->BlendColor(red, green, blue, alpha);
	return rpc_return_null(ctx);
}
int RglCtxBlendEquation(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	context->BlendEquation(mode);
	return rpc_return_null(ctx);
}
int RglCtxBlendEquationSeparate(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum modeRGB = rva_arg(vl, GLenum);
	GLenum modeAlpha = rva_arg(vl, GLenum);
	context->BlendEquationSeparate(modeRGB, modeAlpha);
	return rpc_return_null(ctx);
}
int RglCtxBlendEquationSeparatei(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint buf = rva_arg(vl, GLuint);
	GLenum modeRGB = rva_arg(vl, GLenum);
	GLenum modeAlpha = rva_arg(vl, GLenum);
	context->BlendEquationSeparatei(buf, modeRGB, modeAlpha);
	return rpc_return_null(ctx);
}
int RglCtxBlendEquationi(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint buf = rva_arg(vl, GLuint);
	GLenum mode = rva_arg(vl, GLenum);
	context->BlendEquationi(buf, mode);
	return rpc_return_null(ctx);
}
int RglCtxBlendFunc(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum sfactor = rva_arg(vl, GLenum);
	GLenum dfactor = rva_arg(vl, GLenum);
	context->BlendFunc(sfactor, dfactor);
	return rpc_return_null(ctx);
}
int RglCtxBlendFuncSeparate(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum sfactorRGB = rva_arg(vl, GLenum);
	GLenum dfactorRGB = rva_arg(vl, GLenum);
	GLenum sfactorAlpha = rva_arg(vl, GLenum);
	GLenum dfactorAlpha = rva_arg(vl, GLenum);
	context->BlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
	return rpc_return_null(ctx);
}
int RglCtxBlendFuncSeparatei(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint buf = rva_arg(vl, GLuint);
	GLenum srcRGB = rva_arg(vl, GLenum);
	GLenum dstRGB = rva_arg(vl, GLenum);
	GLenum srcAlpha = rva_arg(vl, GLenum);
	GLenum dstAlpha = rva_arg(vl, GLenum);
	context->BlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
	return rpc_return_null(ctx);
}
int RglCtxBlendFunci(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint buf = rva_arg(vl, GLuint);
	GLenum src = rva_arg(vl, GLenum);
	GLenum dst = rva_arg(vl, GLenum);
	context->BlendFunci(buf, src, dst);
	return rpc_return_null(ctx);
}
int RglCtxBlitFramebuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint srcX0 = rva_arg(vl, GLint);
	GLint srcY0 = rva_arg(vl, GLint);
	GLint srcX1 = rva_arg(vl, GLint);
	GLint srcY1 = rva_arg(vl, GLint);
	GLint dstX0 = rva_arg(vl, GLint);
	GLint dstY0 = rva_arg(vl, GLint);
	GLint dstX1 = rva_arg(vl, GLint);
	GLint dstY1 = rva_arg(vl, GLint);
	GLbitfield mask = rva_arg(vl, GLbitfield);
	GLenum filter = rva_arg(vl, GLenum);
	context->BlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
	return rpc_return_null(ctx);
}
int RglCtxBlitNamedFramebuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint readFramebuffer = rva_arg(vl, GLuint);
	GLuint drawFramebuffer = rva_arg(vl, GLuint);
	GLint srcX0 = rva_arg(vl, GLint);
	GLint srcY0 = rva_arg(vl, GLint);
	GLint srcX1 = rva_arg(vl, GLint);
	GLint srcY1 = rva_arg(vl, GLint);
	GLint dstX0 = rva_arg(vl, GLint);
	GLint dstY0 = rva_arg(vl, GLint);
	GLint dstX1 = rva_arg(vl, GLint);
	GLint dstY1 = rva_arg(vl, GLint);
	GLbitfield mask = rva_arg(vl, GLbitfield);
	GLenum filter = rva_arg(vl, GLenum);
	context->BlitNamedFramebuffer(readFramebuffer, drawFramebuffer, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
	return rpc_return_null(ctx);
}
int RglCtxBufferData(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	uint64_t size = rva_arg(vl, uint64_t);
	const void *data = rva_arg(vl, const void *);
	GLenum usage = rva_arg(vl, GLenum);
	context->BufferData(target, size, data, usage);
	return rpc_return_null(ctx);
}
int RglCtxBufferStorage(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	uint64_t size = rva_arg(vl, uint64_t);
	const void *data = rva_arg(vl, const void *);
	GLbitfield flags = rva_arg(vl, GLbitfield);
	context->BufferStorage(target, size, data, flags);
	return rpc_return_null(ctx);
}
int RglCtxBufferSubData(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	uint32_t offset = rva_arg(vl, uint32_t);
	uint64_t size = rva_arg(vl, uint64_t);
	const void *data = rva_arg(vl, const void *);
	context->BufferSubData(target, offset, size, data);
	return rpc_return_null(ctx);
}
int RglCtxCallList(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint list = rva_arg(vl, GLuint);
	context->CallList(list);
	return rpc_return_null(ctx);
}
int RglCtxCallLists(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	GLenum type = rva_arg(vl, GLenum);
	const void *lists = rva_arg(vl, const void *);
	context->CallLists(n, type, lists);
	return rpc_return_null(ctx);
}
int RglCtxCheckFramebufferStatus(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum res = context->CheckFramebufferStatus(target);
	return rpc_return_uint32(ctx, res);
}
int RglCtxCheckNamedFramebufferStatus(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint framebuffer = rva_arg(vl, GLuint);
	GLenum target = rva_arg(vl, GLenum);
	GLenum res = context->CheckNamedFramebufferStatus(framebuffer, target);
	return rpc_return_uint32(ctx, res);
}
int RglCtxClampColor(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum clamp = rva_arg(vl, GLenum);
	context->ClampColor(target, clamp);
	return rpc_return_null(ctx);
}
int RglCtxClear(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLbitfield mask = rva_arg(vl, GLbitfield);
	context->Clear(mask);
	return rpc_return_null(ctx);
}
int RglCtxClearAccum(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat red = rva_arg(vl, GLfloat);
	GLfloat green = rva_arg(vl, GLfloat);
	GLfloat blue = rva_arg(vl, GLfloat);
	GLfloat alpha = rva_arg(vl, GLfloat);
	context->ClearAccum(red, green, blue, alpha);
	return rpc_return_null(ctx);
}
int RglCtxClearBufferData(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	const void *data = rva_arg(vl, const void *);
	context->ClearBufferData(target, internalformat, format, type, data);
	return rpc_return_null(ctx);
}
int RglCtxClearBufferSubData(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum internalformat = rva_arg(vl, GLenum);
	uint32_t offset = rva_arg(vl, uint32_t);
	uint64_t size = rva_arg(vl, uint64_t);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	const void *data = rva_arg(vl, const void *);
	context->ClearBufferSubData(target, internalformat, offset, size, format, type, data);
	return rpc_return_null(ctx);
}
int RglCtxClearBufferfi(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum buffer = rva_arg(vl, GLenum);
	GLint drawbuffer = rva_arg(vl, GLint);
	GLfloat depth = rva_arg(vl, GLfloat);
	GLint stencil = rva_arg(vl, GLint);
	context->ClearBufferfi(buffer, drawbuffer, depth, stencil);
	return rpc_return_null(ctx);
}
int RglCtxClearBufferfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum buffer = rva_arg(vl, GLenum);
	GLint drawbuffer = rva_arg(vl, GLint);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->ClearBufferfv(buffer, drawbuffer, value);
	return rpc_return_null(ctx);
}
int RglCtxClearBufferiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum buffer = rva_arg(vl, GLenum);
	GLint drawbuffer = rva_arg(vl, GLint);
	const GLint *value = rva_arg(vl, const GLint *);
	context->ClearBufferiv(buffer, drawbuffer, value);
	return rpc_return_null(ctx);
}
int RglCtxClearBufferuiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum buffer = rva_arg(vl, GLenum);
	GLint drawbuffer = rva_arg(vl, GLint);
	const GLuint *value = rva_arg(vl, const GLuint *);
	context->ClearBufferuiv(buffer, drawbuffer, value);
	return rpc_return_null(ctx);
}
int RglCtxClearColor(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat red = rva_arg(vl, GLfloat);
	GLfloat green = rva_arg(vl, GLfloat);
	GLfloat blue = rva_arg(vl, GLfloat);
	GLfloat alpha = rva_arg(vl, GLfloat);
	context->ClearColor(red, green, blue, alpha);
	return rpc_return_null(ctx);
}
int RglCtxClearDepth(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble depth = rva_arg(vl, GLdouble);
	context->ClearDepth(depth);
	return rpc_return_null(ctx);
}
int RglCtxClearDepthf(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat d = rva_arg(vl, GLfloat);
	context->ClearDepthf(d);
	return rpc_return_null(ctx);
}
int RglCtxClearIndex(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat c = rva_arg(vl, GLfloat);
	context->ClearIndex(c);
	return rpc_return_null(ctx);
}
int RglCtxClearNamedBufferData(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint buffer = rva_arg(vl, GLuint);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	const void *data = rva_arg(vl, const void *);
	context->ClearNamedBufferData(buffer, internalformat, format, type, data);
	return rpc_return_null(ctx);
}
int RglCtxClearNamedBufferSubData(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint buffer = rva_arg(vl, GLuint);
	GLenum internalformat = rva_arg(vl, GLenum);
	uint32_t offset = rva_arg(vl, uint32_t);
	uint64_t size = rva_arg(vl, uint64_t);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	const void *data = rva_arg(vl, const void *);
	context->ClearNamedBufferSubData(buffer, internalformat, offset, size, format, type, data);
	return rpc_return_null(ctx);
}
int RglCtxClearNamedFramebufferfi(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint framebuffer = rva_arg(vl, GLuint);
	GLenum buffer = rva_arg(vl, GLenum);
	GLint drawbuffer = rva_arg(vl, GLint);
	GLfloat depth = rva_arg(vl, GLfloat);
	GLint stencil = rva_arg(vl, GLint);
	context->ClearNamedFramebufferfi(framebuffer, buffer, drawbuffer, depth, stencil);
	return rpc_return_null(ctx);
}
int RglCtxClearNamedFramebufferfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint framebuffer = rva_arg(vl, GLuint);
	GLenum buffer = rva_arg(vl, GLenum);
	GLint drawbuffer = rva_arg(vl, GLint);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->ClearNamedFramebufferfv(framebuffer, buffer, drawbuffer, value);
	return rpc_return_null(ctx);
}
int RglCtxClearNamedFramebufferiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint framebuffer = rva_arg(vl, GLuint);
	GLenum buffer = rva_arg(vl, GLenum);
	GLint drawbuffer = rva_arg(vl, GLint);
	const GLint *value = rva_arg(vl, const GLint *);
	context->ClearNamedFramebufferiv(framebuffer, buffer, drawbuffer, value);
	return rpc_return_null(ctx);
}
int RglCtxClearNamedFramebufferuiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint framebuffer = rva_arg(vl, GLuint);
	GLenum buffer = rva_arg(vl, GLenum);
	GLint drawbuffer = rva_arg(vl, GLint);
	const GLuint *value = rva_arg(vl, const GLuint *);
	context->ClearNamedFramebufferuiv(framebuffer, buffer, drawbuffer, value);
	return rpc_return_null(ctx);
}
int RglCtxClearStencil(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint s = rva_arg(vl, GLint);
	context->ClearStencil(s);
	return rpc_return_null(ctx);
}
int RglCtxClearTexImage(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	const void *data = rva_arg(vl, const void *);
	context->ClearTexImage(texture, level, format, type, data);
	return rpc_return_null(ctx);
}
int RglCtxClearTexSubImage(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	GLint xoffset = rva_arg(vl, GLint);
	GLint yoffset = rva_arg(vl, GLint);
	GLint zoffset = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLsizei depth = rva_arg(vl, GLsizei);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	const void *data = rva_arg(vl, const void *);
	context->ClearTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
	return rpc_return_null(ctx);
}
int RglCtxClientActiveTexture(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum texture = rva_arg(vl, GLenum);
	context->ClientActiveTexture(texture);
	return rpc_return_null(ctx);
}
int RglCtxClientWaitSync(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsync sync = rva_arg(vl, GLsync);
	GLbitfield flags = rva_arg(vl, GLbitfield);
	GLuint64 timeout = rva_arg(vl, GLuint64);
	GLenum res = context->ClientWaitSync(sync, flags, timeout);
	return rpc_return_uint32(ctx, res);
}
int RglCtxClipControl(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum origin = rva_arg(vl, GLenum);
	GLenum depth = rva_arg(vl, GLenum);
	context->ClipControl(origin, depth);
	return rpc_return_null(ctx);
}
int RglCtxClipPlane(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum plane = rva_arg(vl, GLenum);
	const GLdouble *equation = rva_arg(vl, const GLdouble *);
	context->ClipPlane(plane, equation);
	return rpc_return_null(ctx);
}
int RglCtxColor3b(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLbyte red = rva_arg(vl, GLbyte);
	GLbyte green = rva_arg(vl, GLbyte);
	GLbyte blue = rva_arg(vl, GLbyte);
	context->Color3b(red, green, blue);
	return rpc_return_null(ctx);
}
int RglCtxColor3bv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLbyte *v = rva_arg(vl, const GLbyte *);
	context->Color3bv(v);
	return rpc_return_null(ctx);
}
int RglCtxColor3d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble red = rva_arg(vl, GLdouble);
	GLdouble green = rva_arg(vl, GLdouble);
	GLdouble blue = rva_arg(vl, GLdouble);
	context->Color3d(red, green, blue);
	return rpc_return_null(ctx);
}
int RglCtxColor3dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->Color3dv(v);
	return rpc_return_null(ctx);
}
int RglCtxColor3f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat red = rva_arg(vl, GLfloat);
	GLfloat green = rva_arg(vl, GLfloat);
	GLfloat blue = rva_arg(vl, GLfloat);
	context->Color3f(red, green, blue);
	return rpc_return_null(ctx);
}
int RglCtxColor3fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->Color3fv(v);
	return rpc_return_null(ctx);
}
int RglCtxColor3i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint red = rva_arg(vl, GLint);
	GLint green = rva_arg(vl, GLint);
	GLint blue = rva_arg(vl, GLint);
	context->Color3i(red, green, blue);
	return rpc_return_null(ctx);
}
int RglCtxColor3iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLint *v = rva_arg(vl, const GLint *);
	context->Color3iv(v);
	return rpc_return_null(ctx);
}
int RglCtxColor3s(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLshort red = rva_arg(vl, GLshort);
	GLshort green = rva_arg(vl, GLshort);
	GLshort blue = rva_arg(vl, GLshort);
	context->Color3s(red, green, blue);
	return rpc_return_null(ctx);
}
int RglCtxColor3sv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->Color3sv(v);
	return rpc_return_null(ctx);
}
int RglCtxColor3ub(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLubyte red = rva_arg(vl, GLubyte);
	GLubyte green = rva_arg(vl, GLubyte);
	GLubyte blue = rva_arg(vl, GLubyte);
	context->Color3ub(red, green, blue);
	return rpc_return_null(ctx);
}
int RglCtxColor3ubv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLubyte *v = rva_arg(vl, const GLubyte *);
	context->Color3ubv(v);
	return rpc_return_null(ctx);
}
int RglCtxColor3ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint red = rva_arg(vl, GLuint);
	GLuint green = rva_arg(vl, GLuint);
	GLuint blue = rva_arg(vl, GLuint);
	context->Color3ui(red, green, blue);
	return rpc_return_null(ctx);
}
int RglCtxColor3uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLuint *v = rva_arg(vl, const GLuint *);
	context->Color3uiv(v);
	return rpc_return_null(ctx);
}
int RglCtxColor3us(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLushort red = rva_arg(vl, GLushort);
	GLushort green = rva_arg(vl, GLushort);
	GLushort blue = rva_arg(vl, GLushort);
	context->Color3us(red, green, blue);
	return rpc_return_null(ctx);
}
int RglCtxColor3usv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLushort *v = rva_arg(vl, const GLushort *);
	context->Color3usv(v);
	return rpc_return_null(ctx);
}
int RglCtxColor4b(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLbyte red = rva_arg(vl, GLbyte);
	GLbyte green = rva_arg(vl, GLbyte);
	GLbyte blue = rva_arg(vl, GLbyte);
	GLbyte alpha = rva_arg(vl, GLbyte);
	context->Color4b(red, green, blue, alpha);
	return rpc_return_null(ctx);
}
int RglCtxColor4bv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLbyte *v = rva_arg(vl, const GLbyte *);
	context->Color4bv(v);
	return rpc_return_null(ctx);
}
int RglCtxColor4d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble red = rva_arg(vl, GLdouble);
	GLdouble green = rva_arg(vl, GLdouble);
	GLdouble blue = rva_arg(vl, GLdouble);
	GLdouble alpha = rva_arg(vl, GLdouble);
	context->Color4d(red, green, blue, alpha);
	return rpc_return_null(ctx);
}
int RglCtxColor4dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->Color4dv(v);
	return rpc_return_null(ctx);
}
int RglCtxColor4f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat red = rva_arg(vl, GLfloat);
	GLfloat green = rva_arg(vl, GLfloat);
	GLfloat blue = rva_arg(vl, GLfloat);
	GLfloat alpha = rva_arg(vl, GLfloat);
	context->Color4f(red, green, blue, alpha);
	return rpc_return_null(ctx);
}
int RglCtxColor4fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->Color4fv(v);
	return rpc_return_null(ctx);
}
int RglCtxColor4i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint red = rva_arg(vl, GLint);
	GLint green = rva_arg(vl, GLint);
	GLint blue = rva_arg(vl, GLint);
	GLint alpha = rva_arg(vl, GLint);
	context->Color4i(red, green, blue, alpha);
	return rpc_return_null(ctx);
}
int RglCtxColor4iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLint *v = rva_arg(vl, const GLint *);
	context->Color4iv(v);
	return rpc_return_null(ctx);
}
int RglCtxColor4s(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLshort red = rva_arg(vl, GLshort);
	GLshort green = rva_arg(vl, GLshort);
	GLshort blue = rva_arg(vl, GLshort);
	GLshort alpha = rva_arg(vl, GLshort);
	context->Color4s(red, green, blue, alpha);
	return rpc_return_null(ctx);
}
int RglCtxColor4sv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->Color4sv(v);
	return rpc_return_null(ctx);
}
int RglCtxColor4ub(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLubyte red = rva_arg(vl, GLubyte);
	GLubyte green = rva_arg(vl, GLubyte);
	GLubyte blue = rva_arg(vl, GLubyte);
	GLubyte alpha = rva_arg(vl, GLubyte);
	context->Color4ub(red, green, blue, alpha);
	return rpc_return_null(ctx);
}
int RglCtxColor4ubv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLubyte *v = rva_arg(vl, const GLubyte *);
	context->Color4ubv(v);
	return rpc_return_null(ctx);
}
int RglCtxColor4ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint red = rva_arg(vl, GLuint);
	GLuint green = rva_arg(vl, GLuint);
	GLuint blue = rva_arg(vl, GLuint);
	GLuint alpha = rva_arg(vl, GLuint);
	context->Color4ui(red, green, blue, alpha);
	return rpc_return_null(ctx);
}
int RglCtxColor4uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLuint *v = rva_arg(vl, const GLuint *);
	context->Color4uiv(v);
	return rpc_return_null(ctx);
}
int RglCtxColor4us(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLushort red = rva_arg(vl, GLushort);
	GLushort green = rva_arg(vl, GLushort);
	GLushort blue = rva_arg(vl, GLushort);
	GLushort alpha = rva_arg(vl, GLushort);
	context->Color4us(red, green, blue, alpha);
	return rpc_return_null(ctx);
}
int RglCtxColor4usv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLushort *v = rva_arg(vl, const GLushort *);
	context->Color4usv(v);
	return rpc_return_null(ctx);
}
int RglCtxColorMask(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	bool_t red = rva_arg(vl, bool_t);
	bool_t green = rva_arg(vl, bool_t);
	bool_t blue = rva_arg(vl, bool_t);
	bool_t alpha = rva_arg(vl, bool_t);
	context->ColorMask(red, green, blue, alpha);
	return rpc_return_null(ctx);
}
int RglCtxColorMaski(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	bool_t r = rva_arg(vl, bool_t);
	bool_t g = rva_arg(vl, bool_t);
	bool_t b = rva_arg(vl, bool_t);
	bool_t a = rva_arg(vl, bool_t);
	context->ColorMaski(index, r, g, b, a);
	return rpc_return_null(ctx);
}
int RglCtxColorMaterial(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum face = rva_arg(vl, GLenum);
	GLenum mode = rva_arg(vl, GLenum);
	context->ColorMaterial(face, mode);
	return rpc_return_null(ctx);
}
int RglCtxColorP3ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	GLuint color = rva_arg(vl, GLuint);
	context->ColorP3ui(type, color);
	return rpc_return_null(ctx);
}
int RglCtxColorP3uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	const GLuint *color = rva_arg(vl, const GLuint *);
	context->ColorP3uiv(type, color);
	return rpc_return_null(ctx);
}
int RglCtxColorP4ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	GLuint color = rva_arg(vl, GLuint);
	context->ColorP4ui(type, color);
	return rpc_return_null(ctx);
}
int RglCtxColorP4uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	const GLuint *color = rva_arg(vl, const GLuint *);
	context->ColorP4uiv(type, color);
	return rpc_return_null(ctx);
}
int RglCtxColorPointer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint size = rva_arg(vl, GLint);
	GLenum type = rva_arg(vl, GLenum);
	GLsizei stride = rva_arg(vl, GLsizei);
	const void *pointer = rva_arg(vl, const void *);
	context->ColorPointer(size, type, stride, pointer);
	return rpc_return_null(ctx);
}
int RglCtxCompileShader(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint shader = rva_arg(vl, GLuint);
	context->CompileShader(shader);
	return rpc_return_null(ctx);
}
int RglCtxCompressedTexImage1D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint level = rva_arg(vl, GLint);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLsizei width = rva_arg(vl, GLsizei);
	GLint border = rva_arg(vl, GLint);
	GLsizei imageSize = rva_arg(vl, GLsizei);
	const void *data = rva_arg(vl, const void *);
	context->CompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
	return rpc_return_null(ctx);
}
int RglCtxCompressedTexImage2D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint level = rva_arg(vl, GLint);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLint border = rva_arg(vl, GLint);
	GLsizei imageSize = rva_arg(vl, GLsizei);
	const void *data = rva_arg(vl, const void *);
	context->CompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
	return rpc_return_null(ctx);
}
int RglCtxCompressedTexImage3D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint level = rva_arg(vl, GLint);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLsizei depth = rva_arg(vl, GLsizei);
	GLint border = rva_arg(vl, GLint);
	GLsizei imageSize = rva_arg(vl, GLsizei);
	const void *data = rva_arg(vl, const void *);
	context->CompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
	return rpc_return_null(ctx);
}
int RglCtxCompressedTexSubImage1D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint level = rva_arg(vl, GLint);
	GLint xoffset = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLenum format = rva_arg(vl, GLenum);
	GLsizei imageSize = rva_arg(vl, GLsizei);
	const void *data = rva_arg(vl, const void *);
	context->CompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
	return rpc_return_null(ctx);
}
int RglCtxCompressedTexSubImage2D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint level = rva_arg(vl, GLint);
	GLint xoffset = rva_arg(vl, GLint);
	GLint yoffset = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLenum format = rva_arg(vl, GLenum);
	GLsizei imageSize = rva_arg(vl, GLsizei);
	const void *data = rva_arg(vl, const void *);
	context->CompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
	return rpc_return_null(ctx);
}
int RglCtxCompressedTexSubImage3D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint level = rva_arg(vl, GLint);
	GLint xoffset = rva_arg(vl, GLint);
	GLint yoffset = rva_arg(vl, GLint);
	GLint zoffset = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLsizei depth = rva_arg(vl, GLsizei);
	GLenum format = rva_arg(vl, GLenum);
	GLsizei imageSize = rva_arg(vl, GLsizei);
	const void *data = rva_arg(vl, const void *);
	context->CompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
	return rpc_return_null(ctx);
}
int RglCtxCompressedTextureSubImage1D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	GLint xoffset = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLenum format = rva_arg(vl, GLenum);
	GLsizei imageSize = rva_arg(vl, GLsizei);
	const void *data = rva_arg(vl, const void *);
	context->CompressedTextureSubImage1D(texture, level, xoffset, width, format, imageSize, data);
	return rpc_return_null(ctx);
}
int RglCtxCompressedTextureSubImage2D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	GLint xoffset = rva_arg(vl, GLint);
	GLint yoffset = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLenum format = rva_arg(vl, GLenum);
	GLsizei imageSize = rva_arg(vl, GLsizei);
	const void *data = rva_arg(vl, const void *);
	context->CompressedTextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, imageSize, data);
	return rpc_return_null(ctx);
}
int RglCtxCompressedTextureSubImage3D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	GLint xoffset = rva_arg(vl, GLint);
	GLint yoffset = rva_arg(vl, GLint);
	GLint zoffset = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLsizei depth = rva_arg(vl, GLsizei);
	GLenum format = rva_arg(vl, GLenum);
	GLsizei imageSize = rva_arg(vl, GLsizei);
	const void *data = rva_arg(vl, const void *);
	context->CompressedTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
	return rpc_return_null(ctx);
}
int RglCtxCopyBufferSubData(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum readTarget = rva_arg(vl, GLenum);
	GLenum writeTarget = rva_arg(vl, GLenum);
	uint32_t readOffset = rva_arg(vl, uint32_t);
	uint32_t writeOffset = rva_arg(vl, uint32_t);
	uint64_t size = rva_arg(vl, uint64_t);
	context->CopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
	return rpc_return_null(ctx);
}
int RglCtxCopyImageSubData(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint srcName = rva_arg(vl, GLuint);
	GLenum srcTarget = rva_arg(vl, GLenum);
	GLint srcLevel = rva_arg(vl, GLint);
	GLint srcX = rva_arg(vl, GLint);
	GLint srcY = rva_arg(vl, GLint);
	GLint srcZ = rva_arg(vl, GLint);
	GLuint dstName = rva_arg(vl, GLuint);
	GLenum dstTarget = rva_arg(vl, GLenum);
	GLint dstLevel = rva_arg(vl, GLint);
	GLint dstX = rva_arg(vl, GLint);
	GLint dstY = rva_arg(vl, GLint);
	GLint dstZ = rva_arg(vl, GLint);
	GLsizei srcWidth = rva_arg(vl, GLsizei);
	GLsizei srcHeight = rva_arg(vl, GLsizei);
	GLsizei srcDepth = rva_arg(vl, GLsizei);
	context->CopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
	return rpc_return_null(ctx);
}
int RglCtxCopyNamedBufferSubData(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint readBuffer = rva_arg(vl, GLuint);
	GLuint writeBuffer = rva_arg(vl, GLuint);
	uint32_t readOffset = rva_arg(vl, uint32_t);
	uint32_t writeOffset = rva_arg(vl, uint32_t);
	uint64_t size = rva_arg(vl, uint64_t);
	context->CopyNamedBufferSubData(readBuffer, writeBuffer, readOffset, writeOffset, size);
	return rpc_return_null(ctx);
}
int RglCtxCopyPixels(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLenum type = rva_arg(vl, GLenum);
	context->CopyPixels(x, y, width, height, type);
	return rpc_return_null(ctx);
}
int RglCtxCopyTexImage1D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint level = rva_arg(vl, GLint);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLint border = rva_arg(vl, GLint);
	context->CopyTexImage1D(target, level, internalformat, x, y, width, border);
	return rpc_return_null(ctx);
}
int RglCtxCopyTexImage2D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint level = rva_arg(vl, GLint);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLint border = rva_arg(vl, GLint);
	context->CopyTexImage2D(target, level, internalformat, x, y, width, height, border);
	return rpc_return_null(ctx);
}
int RglCtxCopyTexSubImage1D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint level = rva_arg(vl, GLint);
	GLint xoffset = rva_arg(vl, GLint);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	context->CopyTexSubImage1D(target, level, xoffset, x, y, width);
	return rpc_return_null(ctx);
}
int RglCtxCopyTexSubImage2D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint level = rva_arg(vl, GLint);
	GLint xoffset = rva_arg(vl, GLint);
	GLint yoffset = rva_arg(vl, GLint);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	context->CopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
	return rpc_return_null(ctx);
}
int RglCtxCopyTexSubImage3D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint level = rva_arg(vl, GLint);
	GLint xoffset = rva_arg(vl, GLint);
	GLint yoffset = rva_arg(vl, GLint);
	GLint zoffset = rva_arg(vl, GLint);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	context->CopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
	return rpc_return_null(ctx);
}
int RglCtxCopyTextureSubImage1D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	GLint xoffset = rva_arg(vl, GLint);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	context->CopyTextureSubImage1D(texture, level, xoffset, x, y, width);
	return rpc_return_null(ctx);
}
int RglCtxCopyTextureSubImage2D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	GLint xoffset = rva_arg(vl, GLint);
	GLint yoffset = rva_arg(vl, GLint);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	context->CopyTextureSubImage2D(texture, level, xoffset, yoffset, x, y, width, height);
	return rpc_return_null(ctx);
}
int RglCtxCopyTextureSubImage3D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	GLint xoffset = rva_arg(vl, GLint);
	GLint yoffset = rva_arg(vl, GLint);
	GLint zoffset = rva_arg(vl, GLint);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	context->CopyTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, x, y, width, height);
	return rpc_return_null(ctx);
}
int RglCtxCreateBuffers(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	GLuint *buffers = rva_arg(vl, GLuint *);
	context->CreateBuffers(n, buffers);
	return rpc_return_null(ctx);
}
int RglCtxCreateFramebuffers(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	GLuint *framebuffers = rva_arg(vl, GLuint *);
	context->CreateFramebuffers(n, framebuffers);
	return rpc_return_null(ctx);
}
int RglCtxCreateProgram(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint res = context->CreateProgram();
	return rpc_return_uint32(ctx, res);
}
int RglCtxCreateProgramPipelines(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	GLuint *pipelines = rva_arg(vl, GLuint *);
	context->CreateProgramPipelines(n, pipelines);
	return rpc_return_null(ctx);
}
int RglCtxCreateQueries(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLsizei n = rva_arg(vl, GLsizei);
	GLuint *ids = rva_arg(vl, GLuint *);
	context->CreateQueries(target, n, ids);
	return rpc_return_null(ctx);
}
int RglCtxCreateRenderbuffers(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	GLuint *renderbuffers = rva_arg(vl, GLuint *);
	context->CreateRenderbuffers(n, renderbuffers);
	return rpc_return_null(ctx);
}
int RglCtxCreateSamplers(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	GLuint *samplers = rva_arg(vl, GLuint *);
	context->CreateSamplers(n, samplers);
	return rpc_return_null(ctx);
}
int RglCtxCreateShader(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	GLuint res = context->CreateShader(type);
	return rpc_return_uint32(ctx, res);
}
int RglCtxCreateShaderProgramv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLchar *const*strings = rva_arg(vl, const GLchar *const*);
	GLuint res = context->CreateShaderProgramv(type, count, strings);
	return rpc_return_uint32(ctx, res);
}
int RglCtxCreateTextures(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLsizei n = rva_arg(vl, GLsizei);
	GLuint *textures = rva_arg(vl, GLuint *);
	context->CreateTextures(target, n, textures);
	return rpc_return_null(ctx);
}
int RglCtxCreateTransformFeedbacks(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	GLuint *ids = rva_arg(vl, GLuint *);
	context->CreateTransformFeedbacks(n, ids);
	return rpc_return_null(ctx);
}
int RglCtxCreateVertexArrays(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	GLuint *arrays = rva_arg(vl, GLuint *);
	context->CreateVertexArrays(n, arrays);
	return rpc_return_null(ctx);
}
int RglCtxCullFace(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	context->CullFace(mode);
	return rpc_return_null(ctx);
}
int RglCtxDebugMessageCallback(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLDEBUGPROC callback = rva_arg(vl, GLDEBUGPROC);
	const void *userParam = rva_arg(vl, const void *);
	context->DebugMessageCallback(callback, userParam);
	return rpc_return_null(ctx);
}
int RglCtxDebugMessageControl(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum source = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	GLenum severity = rva_arg(vl, GLenum);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLuint *ids = rva_arg(vl, const GLuint *);
	bool_t enabled = rva_arg(vl, bool_t);
	context->DebugMessageControl(source, type, severity, count, ids, enabled);
	return rpc_return_null(ctx);
}
int RglCtxDebugMessageInsert(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum source = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	GLuint id = rva_arg(vl, GLuint);
	GLenum severity = rva_arg(vl, GLenum);
	GLsizei length = rva_arg(vl, GLsizei);
	const GLchar *buf = rva_arg(vl, const GLchar *);
	context->DebugMessageInsert(source, type, id, severity, length, buf);
	return rpc_return_null(ctx);
}
int RglCtxDeleteBuffers(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	const GLuint *buffers = rva_arg(vl, const GLuint *);
	context->DeleteBuffers(n, buffers);
	return rpc_return_null(ctx);
}
int RglCtxDeleteFramebuffers(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	const GLuint *framebuffers = rva_arg(vl, const GLuint *);
	context->DeleteFramebuffers(n, framebuffers);
	return rpc_return_null(ctx);
}
int RglCtxDeleteLists(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint list = rva_arg(vl, GLuint);
	GLsizei range = rva_arg(vl, GLsizei);
	context->DeleteLists(list, range);
	return rpc_return_null(ctx);
}
int RglCtxDeleteProgram(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	context->DeleteProgram(program);
	return rpc_return_null(ctx);
}
int RglCtxDeleteProgramPipelines(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	const GLuint *pipelines = rva_arg(vl, const GLuint *);
	context->DeleteProgramPipelines(n, pipelines);
	return rpc_return_null(ctx);
}
int RglCtxDeleteQueries(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	const GLuint *ids = rva_arg(vl, const GLuint *);
	context->DeleteQueries(n, ids);
	return rpc_return_null(ctx);
}
int RglCtxDeleteRenderbuffers(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	const GLuint *renderbuffers = rva_arg(vl, const GLuint *);
	context->DeleteRenderbuffers(n, renderbuffers);
	return rpc_return_null(ctx);
}
int RglCtxDeleteSamplers(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLuint *samplers = rva_arg(vl, const GLuint *);
	context->DeleteSamplers(count, samplers);
	return rpc_return_null(ctx);
}
int RglCtxDeleteShader(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint shader = rva_arg(vl, GLuint);
	context->DeleteShader(shader);
	return rpc_return_null(ctx);
}
int RglCtxDeleteSync(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsync sync = rva_arg(vl, GLsync);
	context->DeleteSync(sync);
	return rpc_return_null(ctx);
}
int RglCtxDeleteTextures(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	const GLuint *textures = rva_arg(vl, const GLuint *);
	context->DeleteTextures(n, textures);
	return rpc_return_null(ctx);
}
int RglCtxDeleteTransformFeedbacks(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	const GLuint *ids = rva_arg(vl, const GLuint *);
	context->DeleteTransformFeedbacks(n, ids);
	return rpc_return_null(ctx);
}
int RglCtxDeleteVertexArrays(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	const GLuint *arrays = rva_arg(vl, const GLuint *);
	context->DeleteVertexArrays(n, arrays);
	return rpc_return_null(ctx);
}
int RglCtxDepthFunc(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum func = rva_arg(vl, GLenum);
	context->DepthFunc(func);
	return rpc_return_null(ctx);
}
int RglCtxDepthMask(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	bool_t flag = rva_arg(vl, bool_t);
	context->DepthMask(flag);
	return rpc_return_null(ctx);
}
int RglCtxDepthRange(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble n = rva_arg(vl, GLdouble);
	GLdouble f = rva_arg(vl, GLdouble);
	context->DepthRange(n, f);
	return rpc_return_null(ctx);
}
int RglCtxDepthRangeArrayv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint first = rva_arg(vl, GLuint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->DepthRangeArrayv(first, count, v);
	return rpc_return_null(ctx);
}
int RglCtxDepthRangeIndexed(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLdouble n = rva_arg(vl, GLdouble);
	GLdouble f = rva_arg(vl, GLdouble);
	context->DepthRangeIndexed(index, n, f);
	return rpc_return_null(ctx);
}
int RglCtxDepthRangef(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat n = rva_arg(vl, GLfloat);
	GLfloat f = rva_arg(vl, GLfloat);
	context->DepthRangef(n, f);
	return rpc_return_null(ctx);
}
int RglCtxDetachShader(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLuint shader = rva_arg(vl, GLuint);
	context->DetachShader(program, shader);
	return rpc_return_null(ctx);
}
int RglCtxDisable(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum cap = rva_arg(vl, GLenum);
	context->Disable(cap);
	return rpc_return_null(ctx);
}
int RglCtxDisableClientState(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum array = rva_arg(vl, GLenum);
	context->DisableClientState(array);
	return rpc_return_null(ctx);
}
int RglCtxDisableVertexArrayAttrib(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint vaobj = rva_arg(vl, GLuint);
	GLuint index = rva_arg(vl, GLuint);
	context->DisableVertexArrayAttrib(vaobj, index);
	return rpc_return_null(ctx);
}
int RglCtxDisableVertexAttribArray(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	context->DisableVertexAttribArray(index);
	return rpc_return_null(ctx);
}
int RglCtxDisablei(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLuint index = rva_arg(vl, GLuint);
	context->Disablei(target, index);
	return rpc_return_null(ctx);
}
int RglCtxDispatchCompute(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint num_groups_x = rva_arg(vl, GLuint);
	GLuint num_groups_y = rva_arg(vl, GLuint);
	GLuint num_groups_z = rva_arg(vl, GLuint);
	context->DispatchCompute(num_groups_x, num_groups_y, num_groups_z);
	return rpc_return_null(ctx);
}
int RglCtxDispatchComputeIndirect(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	uint32_t indirect = rva_arg(vl, uint32_t);
	context->DispatchComputeIndirect(indirect);
	return rpc_return_null(ctx);
}
int RglCtxDrawArrays(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	GLint first = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	context->DrawArrays(mode, first, count);
	return rpc_return_null(ctx);
}
int RglCtxDrawArraysIndirect(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	const void *indirect = rva_arg(vl, const void *);
	context->DrawArraysIndirect(mode, indirect);
	return rpc_return_null(ctx);
}
int RglCtxDrawArraysInstanced(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	GLint first = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	GLsizei instancecount = rva_arg(vl, GLsizei);
	context->DrawArraysInstanced(mode, first, count, instancecount);
	return rpc_return_null(ctx);
}
int RglCtxDrawArraysInstancedBaseInstance(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	GLint first = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	GLsizei instancecount = rva_arg(vl, GLsizei);
	GLuint baseinstance = rva_arg(vl, GLuint);
	context->DrawArraysInstancedBaseInstance(mode, first, count, instancecount, baseinstance);
	return rpc_return_null(ctx);
}
int RglCtxDrawBuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum buf = rva_arg(vl, GLenum);
	context->DrawBuffer(buf);
	return rpc_return_null(ctx);
}
int RglCtxDrawBuffers(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	const GLenum *bufs = rva_arg(vl, const GLenum *);
	context->DrawBuffers(n, bufs);
	return rpc_return_null(ctx);
}
int RglCtxDrawElements(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	GLsizei count = rva_arg(vl, GLsizei);
	GLenum type = rva_arg(vl, GLenum);
	const void *indices = rva_arg(vl, const void *);
	context->DrawElements(mode, count, type, indices);
	return rpc_return_null(ctx);
}
int RglCtxDrawElementsBaseVertex(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	GLsizei count = rva_arg(vl, GLsizei);
	GLenum type = rva_arg(vl, GLenum);
	const void *indices = rva_arg(vl, const void *);
	GLint basevertex = rva_arg(vl, GLint);
	context->DrawElementsBaseVertex(mode, count, type, indices, basevertex);
	return rpc_return_null(ctx);
}
int RglCtxDrawElementsIndirect(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	const void *indirect = rva_arg(vl, const void *);
	context->DrawElementsIndirect(mode, type, indirect);
	return rpc_return_null(ctx);
}
int RglCtxDrawElementsInstanced(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	GLsizei count = rva_arg(vl, GLsizei);
	GLenum type = rva_arg(vl, GLenum);
	const void *indices = rva_arg(vl, const void *);
	GLsizei instancecount = rva_arg(vl, GLsizei);
	context->DrawElementsInstanced(mode, count, type, indices, instancecount);
	return rpc_return_null(ctx);
}
int RglCtxDrawElementsInstancedBaseInstance(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	GLsizei count = rva_arg(vl, GLsizei);
	GLenum type = rva_arg(vl, GLenum);
	const void *indices = rva_arg(vl, const void *);
	GLsizei instancecount = rva_arg(vl, GLsizei);
	GLuint baseinstance = rva_arg(vl, GLuint);
	context->DrawElementsInstancedBaseInstance(mode, count, type, indices, instancecount, baseinstance);
	return rpc_return_null(ctx);
}
int RglCtxDrawElementsInstancedBaseVertex(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	GLsizei count = rva_arg(vl, GLsizei);
	GLenum type = rva_arg(vl, GLenum);
	const void *indices = rva_arg(vl, const void *);
	GLsizei instancecount = rva_arg(vl, GLsizei);
	GLint basevertex = rva_arg(vl, GLint);
	context->DrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex);
	return rpc_return_null(ctx);
}
int RglCtxDrawElementsInstancedBaseVertexBaseInstance(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	GLsizei count = rva_arg(vl, GLsizei);
	GLenum type = rva_arg(vl, GLenum);
	const void *indices = rva_arg(vl, const void *);
	GLsizei instancecount = rva_arg(vl, GLsizei);
	GLint basevertex = rva_arg(vl, GLint);
	GLuint baseinstance = rva_arg(vl, GLuint);
	context->DrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, instancecount, basevertex, baseinstance);
	return rpc_return_null(ctx);
}
int RglCtxDrawPixels(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	const void *pixels = rva_arg(vl, const void *);
	context->DrawPixels(width, height, format, type, pixels);
	return rpc_return_null(ctx);
}
int RglCtxDrawRangeElements(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	GLuint start = rva_arg(vl, GLuint);
	GLuint end = rva_arg(vl, GLuint);
	GLsizei count = rva_arg(vl, GLsizei);
	GLenum type = rva_arg(vl, GLenum);
	const void *indices = rva_arg(vl, const void *);
	context->DrawRangeElements(mode, start, end, count, type, indices);
	return rpc_return_null(ctx);
}
int RglCtxDrawRangeElementsBaseVertex(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	GLuint start = rva_arg(vl, GLuint);
	GLuint end = rva_arg(vl, GLuint);
	GLsizei count = rva_arg(vl, GLsizei);
	GLenum type = rva_arg(vl, GLenum);
	const void *indices = rva_arg(vl, const void *);
	GLint basevertex = rva_arg(vl, GLint);
	context->DrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);
	return rpc_return_null(ctx);
}
int RglCtxDrawTransformFeedback(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	GLuint id = rva_arg(vl, GLuint);
	context->DrawTransformFeedback(mode, id);
	return rpc_return_null(ctx);
}
int RglCtxDrawTransformFeedbackInstanced(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	GLuint id = rva_arg(vl, GLuint);
	GLsizei instancecount = rva_arg(vl, GLsizei);
	context->DrawTransformFeedbackInstanced(mode, id, instancecount);
	return rpc_return_null(ctx);
}
int RglCtxDrawTransformFeedbackStream(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	GLuint id = rva_arg(vl, GLuint);
	GLuint stream = rva_arg(vl, GLuint);
	context->DrawTransformFeedbackStream(mode, id, stream);
	return rpc_return_null(ctx);
}
int RglCtxDrawTransformFeedbackStreamInstanced(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	GLuint id = rva_arg(vl, GLuint);
	GLuint stream = rva_arg(vl, GLuint);
	GLsizei instancecount = rva_arg(vl, GLsizei);
	context->DrawTransformFeedbackStreamInstanced(mode, id, stream, instancecount);
	return rpc_return_null(ctx);
}
int RglCtxEdgeFlag(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	bool_t flag = rva_arg(vl, bool_t);
	context->EdgeFlag(flag);
	return rpc_return_null(ctx);
}
int RglCtxEdgeFlagPointer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei stride = rva_arg(vl, GLsizei);
	const void *pointer = rva_arg(vl, const void *);
	context->EdgeFlagPointer(stride, pointer);
	return rpc_return_null(ctx);
}
int RglCtxEdgeFlagv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const bool_t *flag = rva_arg(vl, const bool_t *);
	context->EdgeFlagv(flag);
	return rpc_return_null(ctx);
}
int RglCtxEnable(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum cap = rva_arg(vl, GLenum);
	context->Enable(cap);
	return rpc_return_null(ctx);
}
int RglCtxEnableClientState(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum array = rva_arg(vl, GLenum);
	context->EnableClientState(array);
	return rpc_return_null(ctx);
}
int RglCtxEnableVertexArrayAttrib(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint vaobj = rva_arg(vl, GLuint);
	GLuint index = rva_arg(vl, GLuint);
	context->EnableVertexArrayAttrib(vaobj, index);
	return rpc_return_null(ctx);
}
int RglCtxEnableVertexAttribArray(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	context->EnableVertexAttribArray(index);
	return rpc_return_null(ctx);
}
int RglCtxEnablei(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLuint index = rva_arg(vl, GLuint);
	context->Enablei(target, index);
	return rpc_return_null(ctx);
}
int RglCtxEnd(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	context->End();
	return rpc_return_null(ctx);
}
int RglCtxEndConditionalRender(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	context->EndConditionalRender();
	return rpc_return_null(ctx);
}
int RglCtxEndList(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	context->EndList();
	return rpc_return_null(ctx);
}
int RglCtxEndQuery(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	context->EndQuery(target);
	return rpc_return_null(ctx);
}
int RglCtxEndQueryIndexed(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLuint index = rva_arg(vl, GLuint);
	context->EndQueryIndexed(target, index);
	return rpc_return_null(ctx);
}
int RglCtxEndTransformFeedback(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	context->EndTransformFeedback();
	return rpc_return_null(ctx);
}
int RglCtxEvalCoord1d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble u = rva_arg(vl, GLdouble);
	context->EvalCoord1d(u);
	return rpc_return_null(ctx);
}
int RglCtxEvalCoord1dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLdouble *u = rva_arg(vl, const GLdouble *);
	context->EvalCoord1dv(u);
	return rpc_return_null(ctx);
}
int RglCtxEvalCoord1f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat u = rva_arg(vl, GLfloat);
	context->EvalCoord1f(u);
	return rpc_return_null(ctx);
}
int RglCtxEvalCoord1fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLfloat *u = rva_arg(vl, const GLfloat *);
	context->EvalCoord1fv(u);
	return rpc_return_null(ctx);
}
int RglCtxEvalCoord2d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble u = rva_arg(vl, GLdouble);
	GLdouble v = rva_arg(vl, GLdouble);
	context->EvalCoord2d(u, v);
	return rpc_return_null(ctx);
}
int RglCtxEvalCoord2dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLdouble *u = rva_arg(vl, const GLdouble *);
	context->EvalCoord2dv(u);
	return rpc_return_null(ctx);
}
int RglCtxEvalCoord2f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat u = rva_arg(vl, GLfloat);
	GLfloat v = rva_arg(vl, GLfloat);
	context->EvalCoord2f(u, v);
	return rpc_return_null(ctx);
}
int RglCtxEvalCoord2fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLfloat *u = rva_arg(vl, const GLfloat *);
	context->EvalCoord2fv(u);
	return rpc_return_null(ctx);
}
int RglCtxEvalMesh1(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	GLint i1 = rva_arg(vl, GLint);
	GLint i2 = rva_arg(vl, GLint);
	context->EvalMesh1(mode, i1, i2);
	return rpc_return_null(ctx);
}
int RglCtxEvalMesh2(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	GLint i1 = rva_arg(vl, GLint);
	GLint i2 = rva_arg(vl, GLint);
	GLint j1 = rva_arg(vl, GLint);
	GLint j2 = rva_arg(vl, GLint);
	context->EvalMesh2(mode, i1, i2, j1, j2);
	return rpc_return_null(ctx);
}
int RglCtxEvalPoint1(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint i = rva_arg(vl, GLint);
	context->EvalPoint1(i);
	return rpc_return_null(ctx);
}
int RglCtxEvalPoint2(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint i = rva_arg(vl, GLint);
	GLint j = rva_arg(vl, GLint);
	context->EvalPoint2(i, j);
	return rpc_return_null(ctx);
}
int RglCtxFeedbackBuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei size = rva_arg(vl, GLsizei);
	GLenum type = rva_arg(vl, GLenum);
	GLfloat *buffer = rva_arg(vl, GLfloat *);
	context->FeedbackBuffer(size, type, buffer);
	return rpc_return_null(ctx);
}
int RglCtxFenceSync(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum condition = rva_arg(vl, GLenum);
	GLbitfield flags = rva_arg(vl, GLbitfield);
	context->FenceSync(condition, flags);
	return rpc_return_null(ctx);
}
int RglCtxFinish(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	context->Finish();
	return rpc_return_null(ctx);
}
int RglCtxFlush(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	context->Flush();
	return rpc_return_null(ctx);
}
int RglCtxFlushMappedBufferRange(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	uint32_t offset = rva_arg(vl, uint32_t);
	uint64_t length = rva_arg(vl, uint64_t);
	context->FlushMappedBufferRange(target, offset, length);
	return rpc_return_null(ctx);
}
int RglCtxFlushMappedNamedBufferRange(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint buffer = rva_arg(vl, GLuint);
	uint32_t offset = rva_arg(vl, uint32_t);
	uint64_t length = rva_arg(vl, uint64_t);
	context->FlushMappedNamedBufferRange(buffer, offset, length);
	return rpc_return_null(ctx);
}
int RglCtxFogCoordPointer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	GLsizei stride = rva_arg(vl, GLsizei);
	const void *pointer = rva_arg(vl, const void *);
	context->FogCoordPointer(type, stride, pointer);
	return rpc_return_null(ctx);
}
int RglCtxFogCoordd(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble coord = rva_arg(vl, GLdouble);
	context->FogCoordd(coord);
	return rpc_return_null(ctx);
}
int RglCtxFogCoorddv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLdouble *coord = rva_arg(vl, const GLdouble *);
	context->FogCoorddv(coord);
	return rpc_return_null(ctx);
}
int RglCtxFogCoordf(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat coord = rva_arg(vl, GLfloat);
	context->FogCoordf(coord);
	return rpc_return_null(ctx);
}
int RglCtxFogCoordfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLfloat *coord = rva_arg(vl, const GLfloat *);
	context->FogCoordfv(coord);
	return rpc_return_null(ctx);
}
int RglCtxFogf(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum pname = rva_arg(vl, GLenum);
	GLfloat param = rva_arg(vl, GLfloat);
	context->Fogf(pname, param);
	return rpc_return_null(ctx);
}
int RglCtxFogfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum pname = rva_arg(vl, GLenum);
	const GLfloat *params = rva_arg(vl, const GLfloat *);
	context->Fogfv(pname, params);
	return rpc_return_null(ctx);
}
int RglCtxFogi(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum pname = rva_arg(vl, GLenum);
	GLint param = rva_arg(vl, GLint);
	context->Fogi(pname, param);
	return rpc_return_null(ctx);
}
int RglCtxFogiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum pname = rva_arg(vl, GLenum);
	const GLint *params = rva_arg(vl, const GLint *);
	context->Fogiv(pname, params);
	return rpc_return_null(ctx);
}
int RglCtxFramebufferParameteri(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLint param = rva_arg(vl, GLint);
	context->FramebufferParameteri(target, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxFramebufferRenderbuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum attachment = rva_arg(vl, GLenum);
	GLenum renderbuffertarget = rva_arg(vl, GLenum);
	GLuint renderbuffer = rva_arg(vl, GLuint);
	context->FramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
	return rpc_return_null(ctx);
}
int RglCtxFramebufferTexture(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum attachment = rva_arg(vl, GLenum);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	context->FramebufferTexture(target, attachment, texture, level);
	return rpc_return_null(ctx);
}
int RglCtxFramebufferTexture1D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum attachment = rva_arg(vl, GLenum);
	GLenum textarget = rva_arg(vl, GLenum);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	context->FramebufferTexture1D(target, attachment, textarget, texture, level);
	return rpc_return_null(ctx);
}
int RglCtxFramebufferTexture2D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum attachment = rva_arg(vl, GLenum);
	GLenum textarget = rva_arg(vl, GLenum);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	context->FramebufferTexture2D(target, attachment, textarget, texture, level);
	return rpc_return_null(ctx);
}
int RglCtxFramebufferTexture3D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum attachment = rva_arg(vl, GLenum);
	GLenum textarget = rva_arg(vl, GLenum);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	GLint zoffset = rva_arg(vl, GLint);
	context->FramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
	return rpc_return_null(ctx);
}
int RglCtxFramebufferTextureLayer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum attachment = rva_arg(vl, GLenum);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	GLint layer = rva_arg(vl, GLint);
	context->FramebufferTextureLayer(target, attachment, texture, level, layer);
	return rpc_return_null(ctx);
}
int RglCtxFrontFace(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	context->FrontFace(mode);
	return rpc_return_null(ctx);
}
int RglCtxFrustum(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble left = rva_arg(vl, GLdouble);
	GLdouble right = rva_arg(vl, GLdouble);
	GLdouble bottom = rva_arg(vl, GLdouble);
	GLdouble top = rva_arg(vl, GLdouble);
	GLdouble zNear = rva_arg(vl, GLdouble);
	GLdouble zFar = rva_arg(vl, GLdouble);
	context->Frustum(left, right, bottom, top, zNear, zFar);
	return rpc_return_null(ctx);
}
int RglCtxGenBuffers(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	GLuint *buffers = rva_arg(vl, GLuint *);
	context->GenBuffers(n, buffers);
	return rpc_return_null(ctx);
}
int RglCtxGenFramebuffers(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	GLuint *framebuffers = rva_arg(vl, GLuint *);
	context->GenFramebuffers(n, framebuffers);
	return rpc_return_null(ctx);
}
int RglCtxGenLists(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei range = rva_arg(vl, GLsizei);
	context->GenLists(range);
	return rpc_return_null(ctx);
}
int RglCtxGenProgramPipelines(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	GLuint *pipelines = rva_arg(vl, GLuint *);
	context->GenProgramPipelines(n, pipelines);
	return rpc_return_null(ctx);
}
int RglCtxGenQueries(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	GLuint *ids = rva_arg(vl, GLuint *);
	context->GenQueries(n, ids);
	return rpc_return_null(ctx);
}
int RglCtxGenRenderbuffers(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	GLuint *renderbuffers = rva_arg(vl, GLuint *);
	context->GenRenderbuffers(n, renderbuffers);
	return rpc_return_null(ctx);
}
int RglCtxGenSamplers(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei count = rva_arg(vl, GLsizei);
	GLuint *samplers = rva_arg(vl, GLuint *);
	context->GenSamplers(count, samplers);
	return rpc_return_null(ctx);
}
int RglCtxGenTextures(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	GLuint *textures = rva_arg(vl, GLuint *);
	context->GenTextures(n, textures);
	return rpc_return_null(ctx);
}
int RglCtxGenTransformFeedbacks(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	GLuint *ids = rva_arg(vl, GLuint *);
	context->GenTransformFeedbacks(n, ids);
	return rpc_return_null(ctx);
}
int RglCtxGenVertexArrays(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	GLuint *arrays = rva_arg(vl, GLuint *);
	context->GenVertexArrays(n, arrays);
	return rpc_return_null(ctx);
}
int RglCtxGenerateMipmap(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	context->GenerateMipmap(target);
	return rpc_return_null(ctx);
}
int RglCtxGenerateTextureMipmap(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	context->GenerateTextureMipmap(texture);
	return rpc_return_null(ctx);
}
int RglCtxGetActiveAtomicCounterBufferiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLuint bufferIndex = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetActiveAttrib(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLuint index = rva_arg(vl, GLuint);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLsizei *length = rva_arg(vl, GLsizei *);
	GLint *size = rva_arg(vl, GLint *);
	GLenum *type = rva_arg(vl, GLenum *);
	slice_t /*GLchar*/ name = rva_arg(vl, slice_t);
	context->GetActiveAttrib(program, index, bufSize, length, size, type, name.p);
	return rpc_return_null(ctx);
}
int RglCtxGetActiveSubroutineName(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLenum shadertype = rva_arg(vl, GLenum);
	GLuint index = rva_arg(vl, GLuint);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLsizei *length = rva_arg(vl, GLsizei *);
	slice_t /*GLchar*/ name = rva_arg(vl, slice_t);
	context->GetActiveSubroutineName(program, shadertype, index, bufSize, length, name.p);
	return rpc_return_null(ctx);
}
int RglCtxGetActiveSubroutineUniformName(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLenum shadertype = rva_arg(vl, GLenum);
	GLuint index = rva_arg(vl, GLuint);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLsizei *length = rva_arg(vl, GLsizei *);
	slice_t /*GLchar*/ name = rva_arg(vl, slice_t);
	context->GetActiveSubroutineUniformName(program, shadertype, index, bufSize, length, name.p);
	return rpc_return_null(ctx);
}
int RglCtxGetActiveSubroutineUniformiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLenum shadertype = rva_arg(vl, GLenum);
	GLuint index = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *values = rva_arg(vl, GLint *);
	context->GetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
	return rpc_return_null(ctx);
}
int RglCtxGetActiveUniform(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLuint index = rva_arg(vl, GLuint);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLsizei *length = rva_arg(vl, GLsizei *);
	GLint *size = rva_arg(vl, GLint *);
	GLenum *type = rva_arg(vl, GLenum *);
	slice_t /*GLchar*/ name = rva_arg(vl, slice_t);
	context->GetActiveUniform(program, index, bufSize, length, size, type, name.p);
	return rpc_return_null(ctx);
}
int RglCtxGetActiveUniformBlockName(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLuint uniformBlockIndex = rva_arg(vl, GLuint);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLsizei *length = rva_arg(vl, GLsizei *);
	slice_t /*GLchar*/ uniformBlockName = rva_arg(vl, slice_t);
	context->GetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName.p);
	return rpc_return_null(ctx);
}
int RglCtxGetActiveUniformBlockiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLuint uniformBlockIndex = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetActiveUniformName(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLuint uniformIndex = rva_arg(vl, GLuint);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLsizei *length = rva_arg(vl, GLsizei *);
	slice_t /*GLchar*/ uniformName = rva_arg(vl, slice_t);
	context->GetActiveUniformName(program, uniformIndex, bufSize, length, uniformName.p);
	return rpc_return_null(ctx);
}
int RglCtxGetActiveUniformsiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLsizei uniformCount = rva_arg(vl, GLsizei);
	const GLuint *uniformIndices = rva_arg(vl, const GLuint *);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetAttachedShaders(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLsizei maxCount = rva_arg(vl, GLsizei);
	GLsizei *count = rva_arg(vl, GLsizei *);
	GLuint *shaders = rva_arg(vl, GLuint *);
	context->GetAttachedShaders(program, maxCount, count, shaders);
	return rpc_return_null(ctx);
}
int RglCtxGetAttribLocation(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	const GLchar *name = rva_arg(vl, const GLchar *);
	context->GetAttribLocation(program, name);
	return rpc_return_null(ctx);
}
int RglCtxGetBooleani_v(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLuint index = rva_arg(vl, GLuint);
	bool_t *data = rva_arg(vl, bool_t *);
	context->GetBooleani_v(target, index, data);
	return rpc_return_null(ctx);
}
int RglCtxGetBooleanv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum pname = rva_arg(vl, GLenum);
	bool_t *data = rva_arg(vl, bool_t *);
	context->GetBooleanv(pname, data);
	return rpc_return_null(ctx);
}
int RglCtxGetBufferParameteri64v(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLint64 *params = rva_arg(vl, GLint64 *);
	context->GetBufferParameteri64v(target, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetBufferParameteriv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetBufferParameteriv(target, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetBufferPointerv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	void **params = rva_arg(vl, void **);
	context->GetBufferPointerv(target, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetBufferSubData(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	uint32_t offset = rva_arg(vl, uint32_t);
	uint64_t size = rva_arg(vl, uint64_t);
	void *data = rva_arg(vl, void *);
	context->GetBufferSubData(target, offset, size, data);
	return rpc_return_null(ctx);
}
int RglCtxGetClipPlane(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum plane = rva_arg(vl, GLenum);
	GLdouble *equation = rva_arg(vl, GLdouble *);
	context->GetClipPlane(plane, equation);
	return rpc_return_null(ctx);
}
int RglCtxGetCompressedTexImage(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint level = rva_arg(vl, GLint);
	void *img = rva_arg(vl, void *);
	context->GetCompressedTexImage(target, level, img);
	return rpc_return_null(ctx);
}
int RglCtxGetCompressedTextureImage(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	void *pixels = rva_arg(vl, void *);
	context->GetCompressedTextureImage(texture, level, bufSize, pixels);
	return rpc_return_null(ctx);
}
int RglCtxGetCompressedTextureSubImage(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	GLint xoffset = rva_arg(vl, GLint);
	GLint yoffset = rva_arg(vl, GLint);
	GLint zoffset = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLsizei depth = rva_arg(vl, GLsizei);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	void *pixels = rva_arg(vl, void *);
	context->GetCompressedTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels);
	return rpc_return_null(ctx);
}
int RglCtxGetDebugMessageLog(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint count = rva_arg(vl, GLuint);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLenum *sources = rva_arg(vl, GLenum *);
	GLenum *types = rva_arg(vl, GLenum *);
	GLuint *ids = rva_arg(vl, GLuint *);
	GLenum *severities = rva_arg(vl, GLenum *);
	GLsizei *lengths = rva_arg(vl, GLsizei *);
	GLchar *messageLog = rva_arg(vl, GLchar *);
	context->GetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog);
	return rpc_return_null(ctx);
}
int RglCtxGetDoublei_v(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLuint index = rva_arg(vl, GLuint);
	GLdouble *data = rva_arg(vl, GLdouble *);
	context->GetDoublei_v(target, index, data);
	return rpc_return_null(ctx);
}
int RglCtxGetDoublev(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum pname = rva_arg(vl, GLenum);
	GLdouble *data = rva_arg(vl, GLdouble *);
	context->GetDoublev(pname, data);
	return rpc_return_null(ctx);
}
int RglCtxGetError(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	context->GetError();
	return rpc_return_null(ctx);
}
int RglCtxGetFloati_v(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLuint index = rva_arg(vl, GLuint);
	GLfloat *data = rva_arg(vl, GLfloat *);
	context->GetFloati_v(target, index, data);
	return rpc_return_null(ctx);
}
int RglCtxGetFloatv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum pname = rva_arg(vl, GLenum);
	GLfloat *data = rva_arg(vl, GLfloat *);
	context->GetFloatv(pname, data);
	return rpc_return_null(ctx);
}
int RglCtxGetFragDataIndex(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	const GLchar *name = rva_arg(vl, const GLchar *);
	context->GetFragDataIndex(program, name);
	return rpc_return_null(ctx);
}
int RglCtxGetFragDataLocation(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	const GLchar *name = rva_arg(vl, const GLchar *);
	context->GetFragDataLocation(program, name);
	return rpc_return_null(ctx);
}
int RglCtxGetFramebufferAttachmentParameteriv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum attachment = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetFramebufferAttachmentParameteriv(target, attachment, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetFramebufferParameteriv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetFramebufferParameteriv(target, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetGraphicsResetStatus(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	context->GetGraphicsResetStatus();
	return rpc_return_null(ctx);
}
int RglCtxGetInteger64i_v(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLuint index = rva_arg(vl, GLuint);
	GLint64 *data = rva_arg(vl, GLint64 *);
	context->GetInteger64i_v(target, index, data);
	return rpc_return_null(ctx);
}
int RglCtxGetInteger64v(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum pname = rva_arg(vl, GLenum);
	GLint64 *data = rva_arg(vl, GLint64 *);
	context->GetInteger64v(pname, data);
	return rpc_return_null(ctx);
}
int RglCtxGetIntegeri_v(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLuint index = rva_arg(vl, GLuint);
	GLint *data = rva_arg(vl, GLint *);
	context->GetIntegeri_v(target, index, data);
	return rpc_return_null(ctx);
}
int RglCtxGetIntegerv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *data = rva_arg(vl, GLint *);
	context->GetIntegerv(pname, data);
	return rpc_return_null(ctx);
}
int RglCtxGetInternalformati64v(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLsizei count = rva_arg(vl, GLsizei);
	GLint64 *params = rva_arg(vl, GLint64 *);
	context->GetInternalformati64v(target, internalformat, pname, count, params);
	return rpc_return_null(ctx);
}
int RglCtxGetInternalformativ(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLsizei count = rva_arg(vl, GLsizei);
	GLint *params = rva_arg(vl, GLint *);
	context->GetInternalformativ(target, internalformat, pname, count, params);
	return rpc_return_null(ctx);
}
int RglCtxGetLightfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum light = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLfloat *params = rva_arg(vl, GLfloat *);
	context->GetLightfv(light, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetLightiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum light = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetLightiv(light, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetMapdv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum query = rva_arg(vl, GLenum);
	GLdouble *v = rva_arg(vl, GLdouble *);
	context->GetMapdv(target, query, v);
	return rpc_return_null(ctx);
}
int RglCtxGetMapfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum query = rva_arg(vl, GLenum);
	GLfloat *v = rva_arg(vl, GLfloat *);
	context->GetMapfv(target, query, v);
	return rpc_return_null(ctx);
}
int RglCtxGetMapiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum query = rva_arg(vl, GLenum);
	GLint *v = rva_arg(vl, GLint *);
	context->GetMapiv(target, query, v);
	return rpc_return_null(ctx);
}
int RglCtxGetMaterialfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum face = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLfloat *params = rva_arg(vl, GLfloat *);
	context->GetMaterialfv(face, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetMaterialiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum face = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetMaterialiv(face, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetMultisamplefv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum pname = rva_arg(vl, GLenum);
	GLuint index = rva_arg(vl, GLuint);
	GLfloat *val = rva_arg(vl, GLfloat *);
	context->GetMultisamplefv(pname, index, val);
	return rpc_return_null(ctx);
}
int RglCtxGetNamedBufferParameteri64v(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint buffer = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint64 *params = rva_arg(vl, GLint64 *);
	context->GetNamedBufferParameteri64v(buffer, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetNamedBufferParameteriv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint buffer = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetNamedBufferParameteriv(buffer, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetNamedBufferPointerv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint buffer = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	void **params = rva_arg(vl, void **);
	context->GetNamedBufferPointerv(buffer, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetNamedBufferSubData(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint buffer = rva_arg(vl, GLuint);
	uint32_t offset = rva_arg(vl, uint32_t);
	uint64_t size = rva_arg(vl, uint64_t);
	void *data = rva_arg(vl, void *);
	context->GetNamedBufferSubData(buffer, offset, size, data);
	return rpc_return_null(ctx);
}
int RglCtxGetNamedFramebufferAttachmentParameteriv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint framebuffer = rva_arg(vl, GLuint);
	GLenum attachment = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetNamedFramebufferAttachmentParameteriv(framebuffer, attachment, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetNamedFramebufferParameteriv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint framebuffer = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *param = rva_arg(vl, GLint *);
	context->GetNamedFramebufferParameteriv(framebuffer, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxGetNamedRenderbufferParameteriv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint renderbuffer = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetNamedRenderbufferParameteriv(renderbuffer, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetObjectLabel(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum identifier = rva_arg(vl, GLenum);
	GLuint name = rva_arg(vl, GLuint);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLsizei *length = rva_arg(vl, GLsizei *);
	slice_t /*GLchar*/ label = rva_arg(vl, slice_t);
	context->GetObjectLabel(identifier, name, bufSize, length, label.p);
	return rpc_return_null(ctx);
}
int RglCtxGetObjectPtrLabel(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const void *ptr = rva_arg(vl, const void *);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLsizei *length = rva_arg(vl, GLsizei *);
	slice_t /*GLchar*/ label = rva_arg(vl, slice_t);
	context->GetObjectPtrLabel(ptr, bufSize, length, label.p);
	return rpc_return_null(ctx);
}
int RglCtxGetPixelMapfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum map = rva_arg(vl, GLenum);
	GLfloat *values = rva_arg(vl, GLfloat *);
	context->GetPixelMapfv(map, values);
	return rpc_return_null(ctx);
}
int RglCtxGetPixelMapuiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum map = rva_arg(vl, GLenum);
	GLuint *values = rva_arg(vl, GLuint *);
	context->GetPixelMapuiv(map, values);
	return rpc_return_null(ctx);
}
int RglCtxGetPixelMapusv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum map = rva_arg(vl, GLenum);
	GLushort *values = rva_arg(vl, GLushort *);
	context->GetPixelMapusv(map, values);
	return rpc_return_null(ctx);
}
int RglCtxGetPointerv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum pname = rva_arg(vl, GLenum);
	void **params = rva_arg(vl, void **);
	context->GetPointerv(pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetPolygonStipple(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	slice_t /*GLubyte*/ mask = rva_arg(vl, slice_t);
	context->GetPolygonStipple(mask.p);
	return rpc_return_null(ctx);
}
int RglCtxGetProgramBinary(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLsizei *length = rva_arg(vl, GLsizei *);
	GLenum *binaryFormat = rva_arg(vl, GLenum *);
	void *binary = rva_arg(vl, void *);
	context->GetProgramBinary(program, bufSize, length, binaryFormat, binary);
	return rpc_return_null(ctx);
}
int RglCtxGetProgramInfoLog(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLsizei *length = rva_arg(vl, GLsizei *);
	GLchar *infoLog = rva_arg(vl, GLchar *);
	context->GetProgramInfoLog(program, bufSize, length, infoLog);
	return rpc_return_null(ctx);
}
int RglCtxGetProgramInterfaceiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLenum programInterface = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetProgramInterfaceiv(program, programInterface, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetProgramPipelineInfoLog(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint pipeline = rva_arg(vl, GLuint);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLsizei *length = rva_arg(vl, GLsizei *);
	GLchar *infoLog = rva_arg(vl, GLchar *);
	context->GetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
	return rpc_return_null(ctx);
}
int RglCtxGetProgramPipelineiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint pipeline = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetProgramPipelineiv(pipeline, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetProgramResourceIndex(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLenum programInterface = rva_arg(vl, GLenum);
	const GLchar *name = rva_arg(vl, const GLchar *);
	context->GetProgramResourceIndex(program, programInterface, name);
	return rpc_return_null(ctx);
}
int RglCtxGetProgramResourceLocation(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLenum programInterface = rva_arg(vl, GLenum);
	const GLchar *name = rva_arg(vl, const GLchar *);
	context->GetProgramResourceLocation(program, programInterface, name);
	return rpc_return_null(ctx);
}
int RglCtxGetProgramResourceLocationIndex(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLenum programInterface = rva_arg(vl, GLenum);
	const GLchar *name = rva_arg(vl, const GLchar *);
	context->GetProgramResourceLocationIndex(program, programInterface, name);
	return rpc_return_null(ctx);
}
int RglCtxGetProgramResourceName(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLenum programInterface = rva_arg(vl, GLenum);
	GLuint index = rva_arg(vl, GLuint);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLsizei *length = rva_arg(vl, GLsizei *);
	GLchar *name = rva_arg(vl, GLchar *);
	context->GetProgramResourceName(program, programInterface, index, bufSize, length, name);
	return rpc_return_null(ctx);
}
int RglCtxGetProgramResourceiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLenum programInterface = rva_arg(vl, GLenum);
	GLuint index = rva_arg(vl, GLuint);
	GLsizei propCount = rva_arg(vl, GLsizei);
	const GLenum *props = rva_arg(vl, const GLenum *);
	GLsizei count = rva_arg(vl, GLsizei);
	GLsizei *length = rva_arg(vl, GLsizei *);
	GLint *params = rva_arg(vl, GLint *);
	context->GetProgramResourceiv(program, programInterface, index, propCount, props, count, length, params);
	return rpc_return_null(ctx);
}
int RglCtxGetProgramStageiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLenum shadertype = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *values = rva_arg(vl, GLint *);
	context->GetProgramStageiv(program, shadertype, pname, values);
	return rpc_return_null(ctx);
}
int RglCtxGetProgramiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetProgramiv(program, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetQueryBufferObjecti64v(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint id = rva_arg(vl, GLuint);
	GLuint buffer = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	uint32_t offset = rva_arg(vl, uint32_t);
	context->GetQueryBufferObjecti64v(id, buffer, pname, offset);
	return rpc_return_null(ctx);
}
int RglCtxGetQueryBufferObjectiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint id = rva_arg(vl, GLuint);
	GLuint buffer = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	uint32_t offset = rva_arg(vl, uint32_t);
	context->GetQueryBufferObjectiv(id, buffer, pname, offset);
	return rpc_return_null(ctx);
}
int RglCtxGetQueryBufferObjectui64v(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint id = rva_arg(vl, GLuint);
	GLuint buffer = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	uint32_t offset = rva_arg(vl, uint32_t);
	context->GetQueryBufferObjectui64v(id, buffer, pname, offset);
	return rpc_return_null(ctx);
}
int RglCtxGetQueryBufferObjectuiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint id = rva_arg(vl, GLuint);
	GLuint buffer = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	uint32_t offset = rva_arg(vl, uint32_t);
	context->GetQueryBufferObjectuiv(id, buffer, pname, offset);
	return rpc_return_null(ctx);
}
int RglCtxGetQueryIndexediv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLuint index = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetQueryIndexediv(target, index, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetQueryObjecti64v(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint id = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint64 *params = rva_arg(vl, GLint64 *);
	context->GetQueryObjecti64v(id, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetQueryObjectiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint id = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetQueryObjectiv(id, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetQueryObjectui64v(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint id = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLuint64 *params = rva_arg(vl, GLuint64 *);
	context->GetQueryObjectui64v(id, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetQueryObjectuiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint id = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLuint *params = rva_arg(vl, GLuint *);
	context->GetQueryObjectuiv(id, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetQueryiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetQueryiv(target, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetRenderbufferParameteriv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetRenderbufferParameteriv(target, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetSamplerParameterIiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint sampler = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetSamplerParameterIiv(sampler, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetSamplerParameterIuiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint sampler = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLuint *params = rva_arg(vl, GLuint *);
	context->GetSamplerParameterIuiv(sampler, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetSamplerParameterfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint sampler = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLfloat *params = rva_arg(vl, GLfloat *);
	context->GetSamplerParameterfv(sampler, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetSamplerParameteriv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint sampler = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetSamplerParameteriv(sampler, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetShaderInfoLog(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint shader = rva_arg(vl, GLuint);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLsizei *length = rva_arg(vl, GLsizei *);
	GLchar *infoLog = rva_arg(vl, GLchar *);
	context->GetShaderInfoLog(shader, bufSize, length, infoLog);
	return rpc_return_null(ctx);
}
int RglCtxGetShaderPrecisionFormat(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum shadertype = rva_arg(vl, GLenum);
	GLenum precisiontype = rva_arg(vl, GLenum);
	GLint *range = rva_arg(vl, GLint *);
	GLint *precision = rva_arg(vl, GLint *);
	context->GetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
	return rpc_return_null(ctx);
}
int RglCtxGetShaderSource(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint shader = rva_arg(vl, GLuint);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLsizei *length = rva_arg(vl, GLsizei *);
	GLchar *source = rva_arg(vl, GLchar *);
	context->GetShaderSource(shader, bufSize, length, source);
	return rpc_return_null(ctx);
}
int RglCtxGetShaderiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint shader = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetShaderiv(shader, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetString(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum name = rva_arg(vl, GLenum);
	context->GetString(name);
	return rpc_return_null(ctx);
}
int RglCtxGetStringi(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum name = rva_arg(vl, GLenum);
	GLuint index = rva_arg(vl, GLuint);
	context->GetStringi(name, index);
	return rpc_return_null(ctx);
}
int RglCtxGetSubroutineIndex(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLenum shadertype = rva_arg(vl, GLenum);
	const GLchar *name = rva_arg(vl, const GLchar *);
	context->GetSubroutineIndex(program, shadertype, name);
	return rpc_return_null(ctx);
}
int RglCtxGetSubroutineUniformLocation(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLenum shadertype = rva_arg(vl, GLenum);
	const GLchar *name = rva_arg(vl, const GLchar *);
	context->GetSubroutineUniformLocation(program, shadertype, name);
	return rpc_return_null(ctx);
}
int RglCtxGetSynciv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsync sync = rva_arg(vl, GLsync);
	GLenum pname = rva_arg(vl, GLenum);
	GLsizei count = rva_arg(vl, GLsizei);
	GLsizei *length = rva_arg(vl, GLsizei *);
	GLint *values = rva_arg(vl, GLint *);
	context->GetSynciv(sync, pname, count, length, values);
	return rpc_return_null(ctx);
}
int RglCtxGetTexEnvfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLfloat *params = rva_arg(vl, GLfloat *);
	context->GetTexEnvfv(target, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetTexEnviv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetTexEnviv(target, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetTexGendv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum coord = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLdouble *params = rva_arg(vl, GLdouble *);
	context->GetTexGendv(coord, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetTexGenfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum coord = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLfloat *params = rva_arg(vl, GLfloat *);
	context->GetTexGenfv(coord, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetTexGeniv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum coord = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetTexGeniv(coord, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetTexImage(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint level = rva_arg(vl, GLint);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	void *pixels = rva_arg(vl, void *);
	context->GetTexImage(target, level, format, type, pixels);
	return rpc_return_null(ctx);
}
int RglCtxGetTexLevelParameterfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint level = rva_arg(vl, GLint);
	GLenum pname = rva_arg(vl, GLenum);
	GLfloat *params = rva_arg(vl, GLfloat *);
	context->GetTexLevelParameterfv(target, level, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetTexLevelParameteriv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint level = rva_arg(vl, GLint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetTexLevelParameteriv(target, level, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetTexParameterIiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetTexParameterIiv(target, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetTexParameterIuiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLuint *params = rva_arg(vl, GLuint *);
	context->GetTexParameterIuiv(target, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetTexParameterfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLfloat *params = rva_arg(vl, GLfloat *);
	context->GetTexParameterfv(target, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetTexParameteriv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetTexParameteriv(target, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetTextureImage(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	void *pixels = rva_arg(vl, void *);
	context->GetTextureImage(texture, level, format, type, bufSize, pixels);
	return rpc_return_null(ctx);
}
int RglCtxGetTextureLevelParameterfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	GLenum pname = rva_arg(vl, GLenum);
	GLfloat *params = rva_arg(vl, GLfloat *);
	context->GetTextureLevelParameterfv(texture, level, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetTextureLevelParameteriv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetTextureLevelParameteriv(texture, level, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetTextureParameterIiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetTextureParameterIiv(texture, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetTextureParameterIuiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLuint *params = rva_arg(vl, GLuint *);
	context->GetTextureParameterIuiv(texture, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetTextureParameterfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLfloat *params = rva_arg(vl, GLfloat *);
	context->GetTextureParameterfv(texture, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetTextureParameteriv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetTextureParameteriv(texture, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetTextureSubImage(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	GLint xoffset = rva_arg(vl, GLint);
	GLint yoffset = rva_arg(vl, GLint);
	GLint zoffset = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLsizei depth = rva_arg(vl, GLsizei);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	void *pixels = rva_arg(vl, void *);
	context->GetTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bufSize, pixels);
	return rpc_return_null(ctx);
}
int RglCtxGetTransformFeedbackVarying(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLuint index = rva_arg(vl, GLuint);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLsizei *length = rva_arg(vl, GLsizei *);
	GLsizei *size = rva_arg(vl, GLsizei *);
	GLenum *type = rva_arg(vl, GLenum *);
	GLchar *name = rva_arg(vl, GLchar *);
	context->GetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
	return rpc_return_null(ctx);
}
int RglCtxGetTransformFeedbacki64_v(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint xfb = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLuint index = rva_arg(vl, GLuint);
	GLint64 *param = rva_arg(vl, GLint64 *);
	context->GetTransformFeedbacki64_v(xfb, pname, index, param);
	return rpc_return_null(ctx);
}
int RglCtxGetTransformFeedbacki_v(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint xfb = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLuint index = rva_arg(vl, GLuint);
	GLint *param = rva_arg(vl, GLint *);
	context->GetTransformFeedbacki_v(xfb, pname, index, param);
	return rpc_return_null(ctx);
}
int RglCtxGetTransformFeedbackiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint xfb = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *param = rva_arg(vl, GLint *);
	context->GetTransformFeedbackiv(xfb, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxGetUniformBlockIndex(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	const GLchar *uniformBlockName = rva_arg(vl, const GLchar *);
	GLuint res = context->GetUniformBlockIndex(program, uniformBlockName);
	return rpc_return_uint32(ctx, res);
}
int RglCtxGetUniformIndices(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLsizei uniformCount = rva_arg(vl, GLsizei);
	const GLchar *const*uniformNames = rva_arg(vl, const GLchar *const*);
	GLuint *uniformIndices = rva_arg(vl, GLuint *);
	context->GetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
	return rpc_return_null(ctx);
}
int RglCtxGetUniformLocation(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	const GLchar *name = rva_arg(vl, const GLchar *);
	GLint res = context->GetUniformLocation(program, name);
	return rpc_return_int32(ctx, res);
}
int RglCtxGetUniformSubroutineuiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum shadertype = rva_arg(vl, GLenum);
	GLint location = rva_arg(vl, GLint);
	GLuint *params = rva_arg(vl, GLuint *);
	context->GetUniformSubroutineuiv(shadertype, location, params);
	return rpc_return_null(ctx);
}
int RglCtxGetUniformdv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLdouble *params = rva_arg(vl, GLdouble *);
	context->GetUniformdv(program, location, params);
	return rpc_return_null(ctx);
}
int RglCtxGetUniformfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLfloat *params = rva_arg(vl, GLfloat *);
	context->GetUniformfv(program, location, params);
	return rpc_return_null(ctx);
}
int RglCtxGetUniformiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLint *params = rva_arg(vl, GLint *);
	context->GetUniformiv(program, location, params);
	return rpc_return_null(ctx);
}
int RglCtxGetUniformuiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLuint *params = rva_arg(vl, GLuint *);
	context->GetUniformuiv(program, location, params);
	return rpc_return_null(ctx);
}
int RglCtxGetVertexArrayIndexed64iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint vaobj = rva_arg(vl, GLuint);
	GLuint index = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint64 *param = rva_arg(vl, GLint64 *);
	context->GetVertexArrayIndexed64iv(vaobj, index, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxGetVertexArrayIndexediv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint vaobj = rva_arg(vl, GLuint);
	GLuint index = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *param = rva_arg(vl, GLint *);
	context->GetVertexArrayIndexediv(vaobj, index, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxGetVertexArrayiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint vaobj = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *param = rva_arg(vl, GLint *);
	context->GetVertexArrayiv(vaobj, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxGetVertexAttribIiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetVertexAttribIiv(index, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetVertexAttribIuiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLuint *params = rva_arg(vl, GLuint *);
	context->GetVertexAttribIuiv(index, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetVertexAttribLdv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLdouble *params = rva_arg(vl, GLdouble *);
	context->GetVertexAttribLdv(index, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetVertexAttribPointerv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	void **pointer = rva_arg(vl, void **);
	context->GetVertexAttribPointerv(index, pname, pointer);
	return rpc_return_null(ctx);
}
int RglCtxGetVertexAttribdv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLdouble *params = rva_arg(vl, GLdouble *);
	context->GetVertexAttribdv(index, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetVertexAttribfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLfloat *params = rva_arg(vl, GLfloat *);
	context->GetVertexAttribfv(index, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetVertexAttribiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint *params = rva_arg(vl, GLint *);
	context->GetVertexAttribiv(index, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxGetnColorTable(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	void *table = rva_arg(vl, void *);
	context->GetnColorTable(target, format, type, bufSize, table);
	return rpc_return_null(ctx);
}
int RglCtxGetnCompressedTexImage(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint lod = rva_arg(vl, GLint);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	void *pixels = rva_arg(vl, void *);
	context->GetnCompressedTexImage(target, lod, bufSize, pixels);
	return rpc_return_null(ctx);
}
int RglCtxGetnConvolutionFilter(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	void *image = rva_arg(vl, void *);
	context->GetnConvolutionFilter(target, format, type, bufSize, image);
	return rpc_return_null(ctx);
}
int RglCtxGetnHistogram(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	bool_t reset = rva_arg(vl, bool_t);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	void *values = rva_arg(vl, void *);
	context->GetnHistogram(target, reset, format, type, bufSize, values);
	return rpc_return_null(ctx);
}
int RglCtxGetnMapdv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum query = rva_arg(vl, GLenum);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLdouble *v = rva_arg(vl, GLdouble *);
	context->GetnMapdv(target, query, bufSize, v);
	return rpc_return_null(ctx);
}
int RglCtxGetnMapfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum query = rva_arg(vl, GLenum);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLfloat *v = rva_arg(vl, GLfloat *);
	context->GetnMapfv(target, query, bufSize, v);
	return rpc_return_null(ctx);
}
int RglCtxGetnMapiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum query = rva_arg(vl, GLenum);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLint *v = rva_arg(vl, GLint *);
	context->GetnMapiv(target, query, bufSize, v);
	return rpc_return_null(ctx);
}
int RglCtxGetnMinmax(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	bool_t reset = rva_arg(vl, bool_t);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	void *values = rva_arg(vl, void *);
	context->GetnMinmax(target, reset, format, type, bufSize, values);
	return rpc_return_null(ctx);
}
int RglCtxGetnPixelMapfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum map = rva_arg(vl, GLenum);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLfloat *values = rva_arg(vl, GLfloat *);
	context->GetnPixelMapfv(map, bufSize, values);
	return rpc_return_null(ctx);
}
int RglCtxGetnPixelMapuiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum map = rva_arg(vl, GLenum);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLuint *values = rva_arg(vl, GLuint *);
	context->GetnPixelMapuiv(map, bufSize, values);
	return rpc_return_null(ctx);
}
int RglCtxGetnPixelMapusv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum map = rva_arg(vl, GLenum);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLushort *values = rva_arg(vl, GLushort *);
	context->GetnPixelMapusv(map, bufSize, values);
	return rpc_return_null(ctx);
}
int RglCtxGetnPolygonStipple(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLubyte *pattern = rva_arg(vl, GLubyte *);
	context->GetnPolygonStipple(bufSize, pattern);
	return rpc_return_null(ctx);
}
int RglCtxGetnSeparableFilter(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	GLsizei rowBufSize = rva_arg(vl, GLsizei);
	void *row = rva_arg(vl, void *);
	GLsizei columnBufSize = rva_arg(vl, GLsizei);
	void *column = rva_arg(vl, void *);
	void *span = rva_arg(vl, void *);
	context->GetnSeparableFilter(target, format, type, rowBufSize, row, columnBufSize, column, span);
	return rpc_return_null(ctx);
}
int RglCtxGetnTexImage(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint level = rva_arg(vl, GLint);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	void *pixels = rva_arg(vl, void *);
	context->GetnTexImage(target, level, format, type, bufSize, pixels);
	return rpc_return_null(ctx);
}
int RglCtxGetnUniformdv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLdouble *params = rva_arg(vl, GLdouble *);
	context->GetnUniformdv(program, location, bufSize, params);
	return rpc_return_null(ctx);
}
int RglCtxGetnUniformfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLfloat *params = rva_arg(vl, GLfloat *);
	context->GetnUniformfv(program, location, bufSize, params);
	return rpc_return_null(ctx);
}
int RglCtxGetnUniformiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLint *params = rva_arg(vl, GLint *);
	context->GetnUniformiv(program, location, bufSize, params);
	return rpc_return_null(ctx);
}
int RglCtxGetnUniformuiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	GLuint *params = rva_arg(vl, GLuint *);
	context->GetnUniformuiv(program, location, bufSize, params);
	return rpc_return_null(ctx);
}
int RglCtxHint(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum mode = rva_arg(vl, GLenum);
	context->Hint(target, mode);
	return rpc_return_null(ctx);
}
int RglCtxIndexMask(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint mask = rva_arg(vl, GLuint);
	context->IndexMask(mask);
	return rpc_return_null(ctx);
}
int RglCtxIndexPointer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	GLsizei stride = rva_arg(vl, GLsizei);
	const void *pointer = rva_arg(vl, const void *);
	context->IndexPointer(type, stride, pointer);
	return rpc_return_null(ctx);
}
int RglCtxIndexd(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble c = rva_arg(vl, GLdouble);
	context->Indexd(c);
	return rpc_return_null(ctx);
}
int RglCtxIndexdv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLdouble *c = rva_arg(vl, const GLdouble *);
	context->Indexdv(c);
	return rpc_return_null(ctx);
}
int RglCtxIndexf(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat c = rva_arg(vl, GLfloat);
	context->Indexf(c);
	return rpc_return_null(ctx);
}
int RglCtxIndexfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLfloat *c = rva_arg(vl, const GLfloat *);
	context->Indexfv(c);
	return rpc_return_null(ctx);
}
int RglCtxIndexi(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint c = rva_arg(vl, GLint);
	context->Indexi(c);
	return rpc_return_null(ctx);
}
int RglCtxIndexiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLint *c = rva_arg(vl, const GLint *);
	context->Indexiv(c);
	return rpc_return_null(ctx);
}
int RglCtxIndexs(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLshort c = rva_arg(vl, GLshort);
	context->Indexs(c);
	return rpc_return_null(ctx);
}
int RglCtxIndexsv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLshort *c = rva_arg(vl, const GLshort *);
	context->Indexsv(c);
	return rpc_return_null(ctx);
}
int RglCtxIndexub(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLubyte c = rva_arg(vl, GLubyte);
	context->Indexub(c);
	return rpc_return_null(ctx);
}
int RglCtxIndexubv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLubyte *c = rva_arg(vl, const GLubyte *);
	context->Indexubv(c);
	return rpc_return_null(ctx);
}
int RglCtxInitNames(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	context->InitNames();
	return rpc_return_null(ctx);
}
int RglCtxInterleavedArrays(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum format = rva_arg(vl, GLenum);
	GLsizei stride = rva_arg(vl, GLsizei);
	const void *pointer = rva_arg(vl, const void *);
	context->InterleavedArrays(format, stride, pointer);
	return rpc_return_null(ctx);
}
int RglCtxInvalidateBufferData(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint buffer = rva_arg(vl, GLuint);
	context->InvalidateBufferData(buffer);
	return rpc_return_null(ctx);
}
int RglCtxInvalidateBufferSubData(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint buffer = rva_arg(vl, GLuint);
	uint32_t offset = rva_arg(vl, uint32_t);
	uint64_t length = rva_arg(vl, uint64_t);
	context->InvalidateBufferSubData(buffer, offset, length);
	return rpc_return_null(ctx);
}
int RglCtxInvalidateFramebuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLsizei numAttachments = rva_arg(vl, GLsizei);
	const GLenum *attachments = rva_arg(vl, const GLenum *);
	context->InvalidateFramebuffer(target, numAttachments, attachments);
	return rpc_return_null(ctx);
}
int RglCtxInvalidateNamedFramebufferData(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint framebuffer = rva_arg(vl, GLuint);
	GLsizei numAttachments = rva_arg(vl, GLsizei);
	const GLenum *attachments = rva_arg(vl, const GLenum *);
	context->InvalidateNamedFramebufferData(framebuffer, numAttachments, attachments);
	return rpc_return_null(ctx);
}
int RglCtxInvalidateNamedFramebufferSubData(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint framebuffer = rva_arg(vl, GLuint);
	GLsizei numAttachments = rva_arg(vl, GLsizei);
	const GLenum *attachments = rva_arg(vl, const GLenum *);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	context->InvalidateNamedFramebufferSubData(framebuffer, numAttachments, attachments, x, y, width, height);
	return rpc_return_null(ctx);
}
int RglCtxInvalidateSubFramebuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLsizei numAttachments = rva_arg(vl, GLsizei);
	const GLenum *attachments = rva_arg(vl, const GLenum *);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	context->InvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
	return rpc_return_null(ctx);
}
int RglCtxInvalidateTexImage(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	context->InvalidateTexImage(texture, level);
	return rpc_return_null(ctx);
}
int RglCtxInvalidateTexSubImage(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	GLint xoffset = rva_arg(vl, GLint);
	GLint yoffset = rva_arg(vl, GLint);
	GLint zoffset = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLsizei depth = rva_arg(vl, GLsizei);
	context->InvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth);
	return rpc_return_null(ctx);
}
int RglCtxIsBuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint buffer = rva_arg(vl, GLuint);
	context->IsBuffer(buffer);
	return rpc_return_null(ctx);
}
int RglCtxIsEnabled(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum cap = rva_arg(vl, GLenum);
	context->IsEnabled(cap);
	return rpc_return_null(ctx);
}
int RglCtxIsEnabledi(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLuint index = rva_arg(vl, GLuint);
	context->IsEnabledi(target, index);
	return rpc_return_null(ctx);
}
int RglCtxIsFramebuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint framebuffer = rva_arg(vl, GLuint);
	context->IsFramebuffer(framebuffer);
	return rpc_return_null(ctx);
}
int RglCtxIsList(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint list = rva_arg(vl, GLuint);
	context->IsList(list);
	return rpc_return_null(ctx);
}
int RglCtxIsProgram(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	context->IsProgram(program);
	return rpc_return_null(ctx);
}
int RglCtxIsProgramPipeline(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint pipeline = rva_arg(vl, GLuint);
	context->IsProgramPipeline(pipeline);
	return rpc_return_null(ctx);
}
int RglCtxIsQuery(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint id = rva_arg(vl, GLuint);
	context->IsQuery(id);
	return rpc_return_null(ctx);
}
int RglCtxIsRenderbuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint renderbuffer = rva_arg(vl, GLuint);
	context->IsRenderbuffer(renderbuffer);
	return rpc_return_null(ctx);
}
int RglCtxIsSampler(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint sampler = rva_arg(vl, GLuint);
	context->IsSampler(sampler);
	return rpc_return_null(ctx);
}
int RglCtxIsShader(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint shader = rva_arg(vl, GLuint);
	context->IsShader(shader);
	return rpc_return_null(ctx);
}
int RglCtxIsSync(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsync sync = rva_arg(vl, GLsync);
	context->IsSync(sync);
	return rpc_return_null(ctx);
}
int RglCtxIsTexture(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	context->IsTexture(texture);
	return rpc_return_null(ctx);
}
int RglCtxIsTransformFeedback(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint id = rva_arg(vl, GLuint);
	context->IsTransformFeedback(id);
	return rpc_return_null(ctx);
}
int RglCtxIsVertexArray(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint array = rva_arg(vl, GLuint);
	context->IsVertexArray(array);
	return rpc_return_null(ctx);
}
int RglCtxLightModelf(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum pname = rva_arg(vl, GLenum);
	GLfloat param = rva_arg(vl, GLfloat);
	context->LightModelf(pname, param);
	return rpc_return_null(ctx);
}
int RglCtxLightModelfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum pname = rva_arg(vl, GLenum);
	const GLfloat *params = rva_arg(vl, const GLfloat *);
	context->LightModelfv(pname, params);
	return rpc_return_null(ctx);
}
int RglCtxLightModeli(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum pname = rva_arg(vl, GLenum);
	GLint param = rva_arg(vl, GLint);
	context->LightModeli(pname, param);
	return rpc_return_null(ctx);
}
int RglCtxLightModeliv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum pname = rva_arg(vl, GLenum);
	const GLint *params = rva_arg(vl, const GLint *);
	context->LightModeliv(pname, params);
	return rpc_return_null(ctx);
}
int RglCtxLightf(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum light = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLfloat param = rva_arg(vl, GLfloat);
	context->Lightf(light, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxLightfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum light = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	const GLfloat *params = rva_arg(vl, const GLfloat *);
	context->Lightfv(light, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxLighti(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum light = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLint param = rva_arg(vl, GLint);
	context->Lighti(light, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxLightiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum light = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	const GLint *params = rva_arg(vl, const GLint *);
	context->Lightiv(light, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxLineStipple(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint factor = rva_arg(vl, GLint);
	GLushort pattern = rva_arg(vl, GLushort);
	context->LineStipple(factor, pattern);
	return rpc_return_null(ctx);
}
int RglCtxLineWidth(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat width = rva_arg(vl, GLfloat);
	context->LineWidth(width);
	return rpc_return_null(ctx);
}
int RglCtxLinkProgram(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	context->LinkProgram(program);
	return rpc_return_null(ctx);
}
int RglCtxListBase(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint base = rva_arg(vl, GLuint);
	context->ListBase(base);
	return rpc_return_null(ctx);
}
int RglCtxLoadIdentity(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	context->LoadIdentity();
	return rpc_return_null(ctx);
}
int RglCtxLoadMatrixd(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLdouble *m = rva_arg(vl, const GLdouble *);
	context->LoadMatrixd(m);
	return rpc_return_null(ctx);
}
int RglCtxLoadMatrixf(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLfloat *m = rva_arg(vl, const GLfloat *);
	context->LoadMatrixf(m);
	return rpc_return_null(ctx);
}
int RglCtxLoadName(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint name = rva_arg(vl, GLuint);
	context->LoadName(name);
	return rpc_return_null(ctx);
}
int RglCtxLoadTransposeMatrixd(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLdouble *m = rva_arg(vl, const GLdouble *);
	context->LoadTransposeMatrixd(m);
	return rpc_return_null(ctx);
}
int RglCtxLoadTransposeMatrixf(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLfloat *m = rva_arg(vl, const GLfloat *);
	context->LoadTransposeMatrixf(m);
	return rpc_return_null(ctx);
}
int RglCtxLogicOp(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum opcode = rva_arg(vl, GLenum);
	context->LogicOp(opcode);
	return rpc_return_null(ctx);
}
int RglCtxMap1d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLdouble u1 = rva_arg(vl, GLdouble);
	GLdouble u2 = rva_arg(vl, GLdouble);
	GLint stride = rva_arg(vl, GLint);
	GLint order = rva_arg(vl, GLint);
	const GLdouble *points = rva_arg(vl, const GLdouble *);
	context->Map1d(target, u1, u2, stride, order, points);
	return rpc_return_null(ctx);
}
int RglCtxMap1f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLfloat u1 = rva_arg(vl, GLfloat);
	GLfloat u2 = rva_arg(vl, GLfloat);
	GLint stride = rva_arg(vl, GLint);
	GLint order = rva_arg(vl, GLint);
	const GLfloat *points = rva_arg(vl, const GLfloat *);
	context->Map1f(target, u1, u2, stride, order, points);
	return rpc_return_null(ctx);
}
int RglCtxMap2d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLdouble u1 = rva_arg(vl, GLdouble);
	GLdouble u2 = rva_arg(vl, GLdouble);
	GLint ustride = rva_arg(vl, GLint);
	GLint uorder = rva_arg(vl, GLint);
	GLdouble v1 = rva_arg(vl, GLdouble);
	GLdouble v2 = rva_arg(vl, GLdouble);
	GLint vstride = rva_arg(vl, GLint);
	GLint vorder = rva_arg(vl, GLint);
	const GLdouble *points = rva_arg(vl, const GLdouble *);
	context->Map2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
	return rpc_return_null(ctx);
}
int RglCtxMap2f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLfloat u1 = rva_arg(vl, GLfloat);
	GLfloat u2 = rva_arg(vl, GLfloat);
	GLint ustride = rva_arg(vl, GLint);
	GLint uorder = rva_arg(vl, GLint);
	GLfloat v1 = rva_arg(vl, GLfloat);
	GLfloat v2 = rva_arg(vl, GLfloat);
	GLint vstride = rva_arg(vl, GLint);
	GLint vorder = rva_arg(vl, GLint);
	const GLfloat *points = rva_arg(vl, const GLfloat *);
	context->Map2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
	return rpc_return_null(ctx);
}
int RglCtxMapBuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum access = rva_arg(vl, GLenum);
	context->MapBuffer(target, access);
	return rpc_return_null(ctx);
}
int RglCtxMapBufferRange(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	uint32_t offset = rva_arg(vl, uint32_t);
	uint64_t length = rva_arg(vl, uint64_t);
	GLbitfield access = rva_arg(vl, GLbitfield);
	context->MapBufferRange(target, offset, length, access);
	return rpc_return_null(ctx);
}
int RglCtxMapGrid1d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint un = rva_arg(vl, GLint);
	GLdouble u1 = rva_arg(vl, GLdouble);
	GLdouble u2 = rva_arg(vl, GLdouble);
	context->MapGrid1d(un, u1, u2);
	return rpc_return_null(ctx);
}
int RglCtxMapGrid1f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint un = rva_arg(vl, GLint);
	GLfloat u1 = rva_arg(vl, GLfloat);
	GLfloat u2 = rva_arg(vl, GLfloat);
	context->MapGrid1f(un, u1, u2);
	return rpc_return_null(ctx);
}
int RglCtxMapGrid2d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint un = rva_arg(vl, GLint);
	GLdouble u1 = rva_arg(vl, GLdouble);
	GLdouble u2 = rva_arg(vl, GLdouble);
	GLint vn = rva_arg(vl, GLint);
	GLdouble v1 = rva_arg(vl, GLdouble);
	GLdouble v2 = rva_arg(vl, GLdouble);
	context->MapGrid2d(un, u1, u2, vn, v1, v2);
	return rpc_return_null(ctx);
}
int RglCtxMapGrid2f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint un = rva_arg(vl, GLint);
	GLfloat u1 = rva_arg(vl, GLfloat);
	GLfloat u2 = rva_arg(vl, GLfloat);
	GLint vn = rva_arg(vl, GLint);
	GLfloat v1 = rva_arg(vl, GLfloat);
	GLfloat v2 = rva_arg(vl, GLfloat);
	context->MapGrid2f(un, u1, u2, vn, v1, v2);
	return rpc_return_null(ctx);
}
int RglCtxMapNamedBuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint buffer = rva_arg(vl, GLuint);
	GLenum access = rva_arg(vl, GLenum);
	context->MapNamedBuffer(buffer, access);
	return rpc_return_null(ctx);
}
int RglCtxMapNamedBufferRange(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint buffer = rva_arg(vl, GLuint);
	uint32_t offset = rva_arg(vl, uint32_t);
	uint64_t length = rva_arg(vl, uint64_t);
	GLbitfield access = rva_arg(vl, GLbitfield);
	context->MapNamedBufferRange(buffer, offset, length, access);
	return rpc_return_null(ctx);
}
int RglCtxMaterialf(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum face = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLfloat param = rva_arg(vl, GLfloat);
	context->Materialf(face, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxMaterialfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum face = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	const GLfloat *params = rva_arg(vl, const GLfloat *);
	context->Materialfv(face, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxMateriali(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum face = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLint param = rva_arg(vl, GLint);
	context->Materiali(face, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxMaterialiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum face = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	const GLint *params = rva_arg(vl, const GLint *);
	context->Materialiv(face, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxMatrixMode(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	context->MatrixMode(mode);
	return rpc_return_null(ctx);
}
int RglCtxMemoryBarrier(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLbitfield barriers = rva_arg(vl, GLbitfield);
	context->MemoryBarrier(barriers);
	return rpc_return_null(ctx);
}
int RglCtxMemoryBarrierByRegion(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLbitfield barriers = rva_arg(vl, GLbitfield);
	context->MemoryBarrierByRegion(barriers);
	return rpc_return_null(ctx);
}
int RglCtxMinSampleShading(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat value = rva_arg(vl, GLfloat);
	context->MinSampleShading(value);
	return rpc_return_null(ctx);
}
int RglCtxMultMatrixd(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLdouble *m = rva_arg(vl, const GLdouble *);
	context->MultMatrixd(m);
	return rpc_return_null(ctx);
}
int RglCtxMultMatrixf(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLfloat *m = rva_arg(vl, const GLfloat *);
	context->MultMatrixf(m);
	return rpc_return_null(ctx);
}
int RglCtxMultTransposeMatrixd(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLdouble *m = rva_arg(vl, const GLdouble *);
	context->MultTransposeMatrixd(m);
	return rpc_return_null(ctx);
}
int RglCtxMultTransposeMatrixf(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLfloat *m = rva_arg(vl, const GLfloat *);
	context->MultTransposeMatrixf(m);
	return rpc_return_null(ctx);
}
int RglCtxMultiDrawArrays(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	const GLint *first = rva_arg(vl, const GLint *);
	const GLsizei *count = rva_arg(vl, const GLsizei *);
	GLsizei drawcount = rva_arg(vl, GLsizei);
	context->MultiDrawArrays(mode, first, count, drawcount);
	return rpc_return_null(ctx);
}
int RglCtxMultiDrawArraysIndirect(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	const void *indirect = rva_arg(vl, const void *);
	GLsizei drawcount = rva_arg(vl, GLsizei);
	GLsizei stride = rva_arg(vl, GLsizei);
	context->MultiDrawArraysIndirect(mode, indirect, drawcount, stride);
	return rpc_return_null(ctx);
}
int RglCtxMultiDrawArraysIndirectCount(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	const void *indirect = rva_arg(vl, const void *);
	uint32_t drawcount = rva_arg(vl, uint32_t);
	GLsizei maxdrawcount = rva_arg(vl, GLsizei);
	GLsizei stride = rva_arg(vl, GLsizei);
	context->MultiDrawArraysIndirectCount(mode, indirect, drawcount, maxdrawcount, stride);
	return rpc_return_null(ctx);
}
int RglCtxMultiDrawElements(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	const GLsizei *count = rva_arg(vl, const GLsizei *);
	GLenum type = rva_arg(vl, GLenum);
	const void *const*indices = rva_arg(vl, const void *const*);
	GLsizei drawcount = rva_arg(vl, GLsizei);
	context->MultiDrawElements(mode, count, type, indices, drawcount);
	return rpc_return_null(ctx);
}
int RglCtxMultiDrawElementsBaseVertex(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	const GLsizei *count = rva_arg(vl, const GLsizei *);
	GLenum type = rva_arg(vl, GLenum);
	const void *const*indices = rva_arg(vl, const void *const*);
	GLsizei drawcount = rva_arg(vl, GLsizei);
	const GLint *basevertex = rva_arg(vl, const GLint *);
	context->MultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, basevertex);
	return rpc_return_null(ctx);
}
int RglCtxMultiDrawElementsIndirect(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	const void *indirect = rva_arg(vl, const void *);
	GLsizei drawcount = rva_arg(vl, GLsizei);
	GLsizei stride = rva_arg(vl, GLsizei);
	context->MultiDrawElementsIndirect(mode, type, indirect, drawcount, stride);
	return rpc_return_null(ctx);
}
int RglCtxMultiDrawElementsIndirectCount(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	const void *indirect = rva_arg(vl, const void *);
	uint32_t drawcount = rva_arg(vl, uint32_t);
	GLsizei maxdrawcount = rva_arg(vl, GLsizei);
	GLsizei stride = rva_arg(vl, GLsizei);
	context->MultiDrawElementsIndirectCount(mode, type, indirect, drawcount, maxdrawcount, stride);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord1d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLdouble s = rva_arg(vl, GLdouble);
	context->MultiTexCoord1d(target, s);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord1dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->MultiTexCoord1dv(target, v);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord1f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLfloat s = rva_arg(vl, GLfloat);
	context->MultiTexCoord1f(target, s);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord1fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->MultiTexCoord1fv(target, v);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord1i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint s = rva_arg(vl, GLint);
	context->MultiTexCoord1i(target, s);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord1iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	const GLint *v = rva_arg(vl, const GLint *);
	context->MultiTexCoord1iv(target, v);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord1s(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLshort s = rva_arg(vl, GLshort);
	context->MultiTexCoord1s(target, s);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord1sv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->MultiTexCoord1sv(target, v);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord2d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLdouble s = rva_arg(vl, GLdouble);
	GLdouble t = rva_arg(vl, GLdouble);
	context->MultiTexCoord2d(target, s, t);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord2dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->MultiTexCoord2dv(target, v);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord2f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLfloat s = rva_arg(vl, GLfloat);
	GLfloat t = rva_arg(vl, GLfloat);
	context->MultiTexCoord2f(target, s, t);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord2fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->MultiTexCoord2fv(target, v);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord2i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint s = rva_arg(vl, GLint);
	GLint t = rva_arg(vl, GLint);
	context->MultiTexCoord2i(target, s, t);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord2iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	const GLint *v = rva_arg(vl, const GLint *);
	context->MultiTexCoord2iv(target, v);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord2s(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLshort s = rva_arg(vl, GLshort);
	GLshort t = rva_arg(vl, GLshort);
	context->MultiTexCoord2s(target, s, t);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord2sv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->MultiTexCoord2sv(target, v);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord3d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLdouble s = rva_arg(vl, GLdouble);
	GLdouble t = rva_arg(vl, GLdouble);
	GLdouble r = rva_arg(vl, GLdouble);
	context->MultiTexCoord3d(target, s, t, r);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord3dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->MultiTexCoord3dv(target, v);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord3f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLfloat s = rva_arg(vl, GLfloat);
	GLfloat t = rva_arg(vl, GLfloat);
	GLfloat r = rva_arg(vl, GLfloat);
	context->MultiTexCoord3f(target, s, t, r);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord3fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->MultiTexCoord3fv(target, v);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord3i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint s = rva_arg(vl, GLint);
	GLint t = rva_arg(vl, GLint);
	GLint r = rva_arg(vl, GLint);
	context->MultiTexCoord3i(target, s, t, r);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord3iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	const GLint *v = rva_arg(vl, const GLint *);
	context->MultiTexCoord3iv(target, v);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord3s(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLshort s = rva_arg(vl, GLshort);
	GLshort t = rva_arg(vl, GLshort);
	GLshort r = rva_arg(vl, GLshort);
	context->MultiTexCoord3s(target, s, t, r);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord3sv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->MultiTexCoord3sv(target, v);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord4d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLdouble s = rva_arg(vl, GLdouble);
	GLdouble t = rva_arg(vl, GLdouble);
	GLdouble r = rva_arg(vl, GLdouble);
	GLdouble q = rva_arg(vl, GLdouble);
	context->MultiTexCoord4d(target, s, t, r, q);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord4dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->MultiTexCoord4dv(target, v);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord4f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLfloat s = rva_arg(vl, GLfloat);
	GLfloat t = rva_arg(vl, GLfloat);
	GLfloat r = rva_arg(vl, GLfloat);
	GLfloat q = rva_arg(vl, GLfloat);
	context->MultiTexCoord4f(target, s, t, r, q);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord4fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->MultiTexCoord4fv(target, v);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord4i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint s = rva_arg(vl, GLint);
	GLint t = rva_arg(vl, GLint);
	GLint r = rva_arg(vl, GLint);
	GLint q = rva_arg(vl, GLint);
	context->MultiTexCoord4i(target, s, t, r, q);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord4iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	const GLint *v = rva_arg(vl, const GLint *);
	context->MultiTexCoord4iv(target, v);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord4s(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLshort s = rva_arg(vl, GLshort);
	GLshort t = rva_arg(vl, GLshort);
	GLshort r = rva_arg(vl, GLshort);
	GLshort q = rva_arg(vl, GLshort);
	context->MultiTexCoord4s(target, s, t, r, q);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoord4sv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->MultiTexCoord4sv(target, v);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoordP1ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum texture = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	GLuint coords = rva_arg(vl, GLuint);
	context->MultiTexCoordP1ui(texture, type, coords);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoordP1uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum texture = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	const GLuint *coords = rva_arg(vl, const GLuint *);
	context->MultiTexCoordP1uiv(texture, type, coords);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoordP2ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum texture = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	GLuint coords = rva_arg(vl, GLuint);
	context->MultiTexCoordP2ui(texture, type, coords);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoordP2uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum texture = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	const GLuint *coords = rva_arg(vl, const GLuint *);
	context->MultiTexCoordP2uiv(texture, type, coords);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoordP3ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum texture = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	GLuint coords = rva_arg(vl, GLuint);
	context->MultiTexCoordP3ui(texture, type, coords);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoordP3uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum texture = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	const GLuint *coords = rva_arg(vl, const GLuint *);
	context->MultiTexCoordP3uiv(texture, type, coords);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoordP4ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum texture = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	GLuint coords = rva_arg(vl, GLuint);
	context->MultiTexCoordP4ui(texture, type, coords);
	return rpc_return_null(ctx);
}
int RglCtxMultiTexCoordP4uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum texture = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	const GLuint *coords = rva_arg(vl, const GLuint *);
	context->MultiTexCoordP4uiv(texture, type, coords);
	return rpc_return_null(ctx);
}
int RglCtxNamedBufferData(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint buffer = rva_arg(vl, GLuint);
	uint64_t size = rva_arg(vl, uint64_t);
	const void *data = rva_arg(vl, const void *);
	GLenum usage = rva_arg(vl, GLenum);
	context->NamedBufferData(buffer, size, data, usage);
	return rpc_return_null(ctx);
}
int RglCtxNamedBufferStorage(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint buffer = rva_arg(vl, GLuint);
	uint64_t size = rva_arg(vl, uint64_t);
	const void *data = rva_arg(vl, const void *);
	GLbitfield flags = rva_arg(vl, GLbitfield);
	context->NamedBufferStorage(buffer, size, data, flags);
	return rpc_return_null(ctx);
}
int RglCtxNamedBufferSubData(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint buffer = rva_arg(vl, GLuint);
	uint32_t offset = rva_arg(vl, uint32_t);
	uint64_t size = rva_arg(vl, uint64_t);
	const void *data = rva_arg(vl, const void *);
	context->NamedBufferSubData(buffer, offset, size, data);
	return rpc_return_null(ctx);
}
int RglCtxNamedFramebufferDrawBuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint framebuffer = rva_arg(vl, GLuint);
	GLenum buf = rva_arg(vl, GLenum);
	context->NamedFramebufferDrawBuffer(framebuffer, buf);
	return rpc_return_null(ctx);
}
int RglCtxNamedFramebufferDrawBuffers(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint framebuffer = rva_arg(vl, GLuint);
	GLsizei n = rva_arg(vl, GLsizei);
	const GLenum *bufs = rva_arg(vl, const GLenum *);
	context->NamedFramebufferDrawBuffers(framebuffer, n, bufs);
	return rpc_return_null(ctx);
}
int RglCtxNamedFramebufferParameteri(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint framebuffer = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint param = rva_arg(vl, GLint);
	context->NamedFramebufferParameteri(framebuffer, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxNamedFramebufferReadBuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint framebuffer = rva_arg(vl, GLuint);
	GLenum src = rva_arg(vl, GLenum);
	context->NamedFramebufferReadBuffer(framebuffer, src);
	return rpc_return_null(ctx);
}
int RglCtxNamedFramebufferRenderbuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint framebuffer = rva_arg(vl, GLuint);
	GLenum attachment = rva_arg(vl, GLenum);
	GLenum renderbuffertarget = rva_arg(vl, GLenum);
	GLuint renderbuffer = rva_arg(vl, GLuint);
	context->NamedFramebufferRenderbuffer(framebuffer, attachment, renderbuffertarget, renderbuffer);
	return rpc_return_null(ctx);
}
int RglCtxNamedFramebufferTexture(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint framebuffer = rva_arg(vl, GLuint);
	GLenum attachment = rva_arg(vl, GLenum);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	context->NamedFramebufferTexture(framebuffer, attachment, texture, level);
	return rpc_return_null(ctx);
}
int RglCtxNamedFramebufferTextureLayer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint framebuffer = rva_arg(vl, GLuint);
	GLenum attachment = rva_arg(vl, GLenum);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	GLint layer = rva_arg(vl, GLint);
	context->NamedFramebufferTextureLayer(framebuffer, attachment, texture, level, layer);
	return rpc_return_null(ctx);
}
int RglCtxNamedRenderbufferStorage(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint renderbuffer = rva_arg(vl, GLuint);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	context->NamedRenderbufferStorage(renderbuffer, internalformat, width, height);
	return rpc_return_null(ctx);
}
int RglCtxNamedRenderbufferStorageMultisample(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint renderbuffer = rva_arg(vl, GLuint);
	GLsizei samples = rva_arg(vl, GLsizei);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	context->NamedRenderbufferStorageMultisample(renderbuffer, samples, internalformat, width, height);
	return rpc_return_null(ctx);
}
int RglCtxNewList(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint list = rva_arg(vl, GLuint);
	GLenum mode = rva_arg(vl, GLenum);
	context->NewList(list, mode);
	return rpc_return_null(ctx);
}
int RglCtxNormal3b(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLbyte nx = rva_arg(vl, GLbyte);
	GLbyte ny = rva_arg(vl, GLbyte);
	GLbyte nz = rva_arg(vl, GLbyte);
	context->Normal3b(nx, ny, nz);
	return rpc_return_null(ctx);
}
int RglCtxNormal3bv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLbyte *v = rva_arg(vl, const GLbyte *);
	context->Normal3bv(v);
	return rpc_return_null(ctx);
}
int RglCtxNormal3d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble nx = rva_arg(vl, GLdouble);
	GLdouble ny = rva_arg(vl, GLdouble);
	GLdouble nz = rva_arg(vl, GLdouble);
	context->Normal3d(nx, ny, nz);
	return rpc_return_null(ctx);
}
int RglCtxNormal3dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->Normal3dv(v);
	return rpc_return_null(ctx);
}
int RglCtxNormal3f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat nx = rva_arg(vl, GLfloat);
	GLfloat ny = rva_arg(vl, GLfloat);
	GLfloat nz = rva_arg(vl, GLfloat);
	context->Normal3f(nx, ny, nz);
	return rpc_return_null(ctx);
}
int RglCtxNormal3fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->Normal3fv(v);
	return rpc_return_null(ctx);
}
int RglCtxNormal3i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint nx = rva_arg(vl, GLint);
	GLint ny = rva_arg(vl, GLint);
	GLint nz = rva_arg(vl, GLint);
	context->Normal3i(nx, ny, nz);
	return rpc_return_null(ctx);
}
int RglCtxNormal3iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLint *v = rva_arg(vl, const GLint *);
	context->Normal3iv(v);
	return rpc_return_null(ctx);
}
int RglCtxNormal3s(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLshort nx = rva_arg(vl, GLshort);
	GLshort ny = rva_arg(vl, GLshort);
	GLshort nz = rva_arg(vl, GLshort);
	context->Normal3s(nx, ny, nz);
	return rpc_return_null(ctx);
}
int RglCtxNormal3sv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->Normal3sv(v);
	return rpc_return_null(ctx);
}
int RglCtxNormalP3ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	GLuint coords = rva_arg(vl, GLuint);
	context->NormalP3ui(type, coords);
	return rpc_return_null(ctx);
}
int RglCtxNormalP3uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	const GLuint *coords = rva_arg(vl, const GLuint *);
	context->NormalP3uiv(type, coords);
	return rpc_return_null(ctx);
}
int RglCtxNormalPointer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	GLsizei stride = rva_arg(vl, GLsizei);
	const void *pointer = rva_arg(vl, const void *);
	context->NormalPointer(type, stride, pointer);
	return rpc_return_null(ctx);
}
int RglCtxObjectLabel(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum identifier = rva_arg(vl, GLenum);
	GLuint name = rva_arg(vl, GLuint);
	GLsizei length = rva_arg(vl, GLsizei);
	const GLchar *label = rva_arg(vl, const GLchar *);
	context->ObjectLabel(identifier, name, length, label);
	return rpc_return_null(ctx);
}
int RglCtxObjectPtrLabel(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const void *ptr = rva_arg(vl, const void *);
	GLsizei length = rva_arg(vl, GLsizei);
	const GLchar *label = rva_arg(vl, const GLchar *);
	context->ObjectPtrLabel(ptr, length, label);
	return rpc_return_null(ctx);
}
int RglCtxOrtho(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble left = rva_arg(vl, GLdouble);
	GLdouble right = rva_arg(vl, GLdouble);
	GLdouble bottom = rva_arg(vl, GLdouble);
	GLdouble top = rva_arg(vl, GLdouble);
	GLdouble zNear = rva_arg(vl, GLdouble);
	GLdouble zFar = rva_arg(vl, GLdouble);
	context->Ortho(left, right, bottom, top, zNear, zFar);
	return rpc_return_null(ctx);
}
int RglCtxPassThrough(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat token = rva_arg(vl, GLfloat);
	context->PassThrough(token);
	return rpc_return_null(ctx);
}
int RglCtxPatchParameterfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum pname = rva_arg(vl, GLenum);
	const GLfloat *values = rva_arg(vl, const GLfloat *);
	context->PatchParameterfv(pname, values);
	return rpc_return_null(ctx);
}
int RglCtxPatchParameteri(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum pname = rva_arg(vl, GLenum);
	GLint value = rva_arg(vl, GLint);
	context->PatchParameteri(pname, value);
	return rpc_return_null(ctx);
}
int RglCtxPauseTransformFeedback(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	context->PauseTransformFeedback();
	return rpc_return_null(ctx);
}
int RglCtxPixelMapfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum map = rva_arg(vl, GLenum);
	GLsizei mapsize = rva_arg(vl, GLsizei);
	const GLfloat *values = rva_arg(vl, const GLfloat *);
	context->PixelMapfv(map, mapsize, values);
	return rpc_return_null(ctx);
}
int RglCtxPixelMapuiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum map = rva_arg(vl, GLenum);
	GLsizei mapsize = rva_arg(vl, GLsizei);
	const GLuint *values = rva_arg(vl, const GLuint *);
	context->PixelMapuiv(map, mapsize, values);
	return rpc_return_null(ctx);
}
int RglCtxPixelMapusv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum map = rva_arg(vl, GLenum);
	GLsizei mapsize = rva_arg(vl, GLsizei);
	const GLushort *values = rva_arg(vl, const GLushort *);
	context->PixelMapusv(map, mapsize, values);
	return rpc_return_null(ctx);
}
int RglCtxPixelStoref(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum pname = rva_arg(vl, GLenum);
	GLfloat param = rva_arg(vl, GLfloat);
	context->PixelStoref(pname, param);
	return rpc_return_null(ctx);
}
int RglCtxPixelStorei(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum pname = rva_arg(vl, GLenum);
	GLint param = rva_arg(vl, GLint);
	context->PixelStorei(pname, param);
	return rpc_return_null(ctx);
}
int RglCtxPixelTransferf(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum pname = rva_arg(vl, GLenum);
	GLfloat param = rva_arg(vl, GLfloat);
	context->PixelTransferf(pname, param);
	return rpc_return_null(ctx);
}
int RglCtxPixelTransferi(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum pname = rva_arg(vl, GLenum);
	GLint param = rva_arg(vl, GLint);
	context->PixelTransferi(pname, param);
	return rpc_return_null(ctx);
}
int RglCtxPixelZoom(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat xfactor = rva_arg(vl, GLfloat);
	GLfloat yfactor = rva_arg(vl, GLfloat);
	context->PixelZoom(xfactor, yfactor);
	return rpc_return_null(ctx);
}
int RglCtxPointParameterf(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum pname = rva_arg(vl, GLenum);
	GLfloat param = rva_arg(vl, GLfloat);
	context->PointParameterf(pname, param);
	return rpc_return_null(ctx);
}
int RglCtxPointParameterfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum pname = rva_arg(vl, GLenum);
	const GLfloat *params = rva_arg(vl, const GLfloat *);
	context->PointParameterfv(pname, params);
	return rpc_return_null(ctx);
}
int RglCtxPointParameteri(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum pname = rva_arg(vl, GLenum);
	GLint param = rva_arg(vl, GLint);
	context->PointParameteri(pname, param);
	return rpc_return_null(ctx);
}
int RglCtxPointParameteriv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum pname = rva_arg(vl, GLenum);
	const GLint *params = rva_arg(vl, const GLint *);
	context->PointParameteriv(pname, params);
	return rpc_return_null(ctx);
}
int RglCtxPointSize(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat size = rva_arg(vl, GLfloat);
	context->PointSize(size);
	return rpc_return_null(ctx);
}
int RglCtxPolygonMode(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum face = rva_arg(vl, GLenum);
	GLenum mode = rva_arg(vl, GLenum);
	context->PolygonMode(face, mode);
	return rpc_return_null(ctx);
}
int RglCtxPolygonOffset(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat factor = rva_arg(vl, GLfloat);
	GLfloat units = rva_arg(vl, GLfloat);
	context->PolygonOffset(factor, units);
	return rpc_return_null(ctx);
}
int RglCtxPolygonOffsetClamp(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat factor = rva_arg(vl, GLfloat);
	GLfloat units = rva_arg(vl, GLfloat);
	GLfloat clamp = rva_arg(vl, GLfloat);
	context->PolygonOffsetClamp(factor, units, clamp);
	return rpc_return_null(ctx);
}
int RglCtxPolygonStipple(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLubyte *mask = rva_arg(vl, const GLubyte *);
	context->PolygonStipple(mask);
	return rpc_return_null(ctx);
}
int RglCtxPopAttrib(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	context->PopAttrib();
	return rpc_return_null(ctx);
}
int RglCtxPopClientAttrib(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	context->PopClientAttrib();
	return rpc_return_null(ctx);
}
int RglCtxPopDebugGroup(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	context->PopDebugGroup();
	return rpc_return_null(ctx);
}
int RglCtxPopMatrix(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	context->PopMatrix();
	return rpc_return_null(ctx);
}
int RglCtxPopName(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	context->PopName();
	return rpc_return_null(ctx);
}
int RglCtxPrimitiveRestartIndex(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	context->PrimitiveRestartIndex(index);
	return rpc_return_null(ctx);
}
int RglCtxPrioritizeTextures(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei n = rva_arg(vl, GLsizei);
	const GLuint *textures = rva_arg(vl, const GLuint *);
	const GLfloat *priorities = rva_arg(vl, const GLfloat *);
	context->PrioritizeTextures(n, textures, priorities);
	return rpc_return_null(ctx);
}
int RglCtxProgramBinary(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLenum binaryFormat = rva_arg(vl, GLenum);
	const void *binary = rva_arg(vl, const void *);
	GLsizei length = rva_arg(vl, GLsizei);
	context->ProgramBinary(program, binaryFormat, binary, length);
	return rpc_return_null(ctx);
}
int RglCtxProgramParameteri(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint value = rva_arg(vl, GLint);
	context->ProgramParameteri(program, pname, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform1d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLdouble v0 = rva_arg(vl, GLdouble);
	context->ProgramUniform1d(program, location, v0);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform1dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->ProgramUniform1dv(program, location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform1f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLfloat v0 = rva_arg(vl, GLfloat);
	context->ProgramUniform1f(program, location, v0);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform1fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->ProgramUniform1fv(program, location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform1i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLint v0 = rva_arg(vl, GLint);
	context->ProgramUniform1i(program, location, v0);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform1iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLint *value = rva_arg(vl, const GLint *);
	context->ProgramUniform1iv(program, location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform1ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLuint v0 = rva_arg(vl, GLuint);
	context->ProgramUniform1ui(program, location, v0);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform1uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLuint *value = rva_arg(vl, const GLuint *);
	context->ProgramUniform1uiv(program, location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform2d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLdouble v0 = rva_arg(vl, GLdouble);
	GLdouble v1 = rva_arg(vl, GLdouble);
	context->ProgramUniform2d(program, location, v0, v1);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform2dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->ProgramUniform2dv(program, location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform2f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLfloat v0 = rva_arg(vl, GLfloat);
	GLfloat v1 = rva_arg(vl, GLfloat);
	context->ProgramUniform2f(program, location, v0, v1);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform2fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->ProgramUniform2fv(program, location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform2i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLint v0 = rva_arg(vl, GLint);
	GLint v1 = rva_arg(vl, GLint);
	context->ProgramUniform2i(program, location, v0, v1);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform2iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLint *value = rva_arg(vl, const GLint *);
	context->ProgramUniform2iv(program, location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform2ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLuint v0 = rva_arg(vl, GLuint);
	GLuint v1 = rva_arg(vl, GLuint);
	context->ProgramUniform2ui(program, location, v0, v1);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform2uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLuint *value = rva_arg(vl, const GLuint *);
	context->ProgramUniform2uiv(program, location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform3d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLdouble v0 = rva_arg(vl, GLdouble);
	GLdouble v1 = rva_arg(vl, GLdouble);
	GLdouble v2 = rva_arg(vl, GLdouble);
	context->ProgramUniform3d(program, location, v0, v1, v2);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform3dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->ProgramUniform3dv(program, location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform3f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLfloat v0 = rva_arg(vl, GLfloat);
	GLfloat v1 = rva_arg(vl, GLfloat);
	GLfloat v2 = rva_arg(vl, GLfloat);
	context->ProgramUniform3f(program, location, v0, v1, v2);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform3fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->ProgramUniform3fv(program, location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform3i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLint v0 = rva_arg(vl, GLint);
	GLint v1 = rva_arg(vl, GLint);
	GLint v2 = rva_arg(vl, GLint);
	context->ProgramUniform3i(program, location, v0, v1, v2);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform3iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLint *value = rva_arg(vl, const GLint *);
	context->ProgramUniform3iv(program, location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform3ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLuint v0 = rva_arg(vl, GLuint);
	GLuint v1 = rva_arg(vl, GLuint);
	GLuint v2 = rva_arg(vl, GLuint);
	context->ProgramUniform3ui(program, location, v0, v1, v2);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform3uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLuint *value = rva_arg(vl, const GLuint *);
	context->ProgramUniform3uiv(program, location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform4d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLdouble v0 = rva_arg(vl, GLdouble);
	GLdouble v1 = rva_arg(vl, GLdouble);
	GLdouble v2 = rva_arg(vl, GLdouble);
	GLdouble v3 = rva_arg(vl, GLdouble);
	context->ProgramUniform4d(program, location, v0, v1, v2, v3);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform4dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->ProgramUniform4dv(program, location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform4f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLfloat v0 = rva_arg(vl, GLfloat);
	GLfloat v1 = rva_arg(vl, GLfloat);
	GLfloat v2 = rva_arg(vl, GLfloat);
	GLfloat v3 = rva_arg(vl, GLfloat);
	context->ProgramUniform4f(program, location, v0, v1, v2, v3);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform4fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->ProgramUniform4fv(program, location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform4i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLint v0 = rva_arg(vl, GLint);
	GLint v1 = rva_arg(vl, GLint);
	GLint v2 = rva_arg(vl, GLint);
	GLint v3 = rva_arg(vl, GLint);
	context->ProgramUniform4i(program, location, v0, v1, v2, v3);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform4iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLint *value = rva_arg(vl, const GLint *);
	context->ProgramUniform4iv(program, location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform4ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLuint v0 = rva_arg(vl, GLuint);
	GLuint v1 = rva_arg(vl, GLuint);
	GLuint v2 = rva_arg(vl, GLuint);
	GLuint v3 = rva_arg(vl, GLuint);
	context->ProgramUniform4ui(program, location, v0, v1, v2, v3);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniform4uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLuint *value = rva_arg(vl, const GLuint *);
	context->ProgramUniform4uiv(program, location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniformMatrix2dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->ProgramUniformMatrix2dv(program, location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniformMatrix2fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->ProgramUniformMatrix2fv(program, location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniformMatrix2x3dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->ProgramUniformMatrix2x3dv(program, location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniformMatrix2x3fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->ProgramUniformMatrix2x3fv(program, location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniformMatrix2x4dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->ProgramUniformMatrix2x4dv(program, location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniformMatrix2x4fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->ProgramUniformMatrix2x4fv(program, location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniformMatrix3dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->ProgramUniformMatrix3dv(program, location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniformMatrix3fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->ProgramUniformMatrix3fv(program, location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniformMatrix3x2dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->ProgramUniformMatrix3x2dv(program, location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniformMatrix3x2fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->ProgramUniformMatrix3x2fv(program, location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniformMatrix3x4dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->ProgramUniformMatrix3x4dv(program, location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniformMatrix3x4fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->ProgramUniformMatrix3x4fv(program, location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniformMatrix4dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->ProgramUniformMatrix4dv(program, location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniformMatrix4fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->ProgramUniformMatrix4fv(program, location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniformMatrix4x2dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->ProgramUniformMatrix4x2dv(program, location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniformMatrix4x2fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->ProgramUniformMatrix4x2fv(program, location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniformMatrix4x3dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->ProgramUniformMatrix4x3dv(program, location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxProgramUniformMatrix4x3fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->ProgramUniformMatrix4x3fv(program, location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxProvokingVertex(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	context->ProvokingVertex(mode);
	return rpc_return_null(ctx);
}
int RglCtxPushAttrib(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLbitfield mask = rva_arg(vl, GLbitfield);
	context->PushAttrib(mask);
	return rpc_return_null(ctx);
}
int RglCtxPushClientAttrib(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLbitfield mask = rva_arg(vl, GLbitfield);
	context->PushClientAttrib(mask);
	return rpc_return_null(ctx);
}
int RglCtxPushDebugGroup(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum source = rva_arg(vl, GLenum);
	GLuint id = rva_arg(vl, GLuint);
	GLsizei length = rva_arg(vl, GLsizei);
	const GLchar *message = rva_arg(vl, const GLchar *);
	context->PushDebugGroup(source, id, length, message);
	return rpc_return_null(ctx);
}
int RglCtxPushMatrix(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	context->PushMatrix();
	return rpc_return_null(ctx);
}
int RglCtxPushName(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint name = rva_arg(vl, GLuint);
	context->PushName(name);
	return rpc_return_null(ctx);
}
int RglCtxQueryCounter(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint id = rva_arg(vl, GLuint);
	GLenum target = rva_arg(vl, GLenum);
	context->QueryCounter(id, target);
	return rpc_return_null(ctx);
}
int RglCtxRasterPos2d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble x = rva_arg(vl, GLdouble);
	GLdouble y = rva_arg(vl, GLdouble);
	context->RasterPos2d(x, y);
	return rpc_return_null(ctx);
}
int RglCtxRasterPos2dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->RasterPos2dv(v);
	return rpc_return_null(ctx);
}
int RglCtxRasterPos2f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat x = rva_arg(vl, GLfloat);
	GLfloat y = rva_arg(vl, GLfloat);
	context->RasterPos2f(x, y);
	return rpc_return_null(ctx);
}
int RglCtxRasterPos2fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->RasterPos2fv(v);
	return rpc_return_null(ctx);
}
int RglCtxRasterPos2i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	context->RasterPos2i(x, y);
	return rpc_return_null(ctx);
}
int RglCtxRasterPos2iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLint *v = rva_arg(vl, const GLint *);
	context->RasterPos2iv(v);
	return rpc_return_null(ctx);
}
int RglCtxRasterPos2s(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLshort x = rva_arg(vl, GLshort);
	GLshort y = rva_arg(vl, GLshort);
	context->RasterPos2s(x, y);
	return rpc_return_null(ctx);
}
int RglCtxRasterPos2sv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->RasterPos2sv(v);
	return rpc_return_null(ctx);
}
int RglCtxRasterPos3d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble x = rva_arg(vl, GLdouble);
	GLdouble y = rva_arg(vl, GLdouble);
	GLdouble z = rva_arg(vl, GLdouble);
	context->RasterPos3d(x, y, z);
	return rpc_return_null(ctx);
}
int RglCtxRasterPos3dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->RasterPos3dv(v);
	return rpc_return_null(ctx);
}
int RglCtxRasterPos3f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat x = rva_arg(vl, GLfloat);
	GLfloat y = rva_arg(vl, GLfloat);
	GLfloat z = rva_arg(vl, GLfloat);
	context->RasterPos3f(x, y, z);
	return rpc_return_null(ctx);
}
int RglCtxRasterPos3fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->RasterPos3fv(v);
	return rpc_return_null(ctx);
}
int RglCtxRasterPos3i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	GLint z = rva_arg(vl, GLint);
	context->RasterPos3i(x, y, z);
	return rpc_return_null(ctx);
}
int RglCtxRasterPos3iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLint *v = rva_arg(vl, const GLint *);
	context->RasterPos3iv(v);
	return rpc_return_null(ctx);
}
int RglCtxRasterPos3s(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLshort x = rva_arg(vl, GLshort);
	GLshort y = rva_arg(vl, GLshort);
	GLshort z = rva_arg(vl, GLshort);
	context->RasterPos3s(x, y, z);
	return rpc_return_null(ctx);
}
int RglCtxRasterPos3sv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->RasterPos3sv(v);
	return rpc_return_null(ctx);
}
int RglCtxRasterPos4d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble x = rva_arg(vl, GLdouble);
	GLdouble y = rva_arg(vl, GLdouble);
	GLdouble z = rva_arg(vl, GLdouble);
	GLdouble w = rva_arg(vl, GLdouble);
	context->RasterPos4d(x, y, z, w);
	return rpc_return_null(ctx);
}
int RglCtxRasterPos4dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->RasterPos4dv(v);
	return rpc_return_null(ctx);
}
int RglCtxRasterPos4f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat x = rva_arg(vl, GLfloat);
	GLfloat y = rva_arg(vl, GLfloat);
	GLfloat z = rva_arg(vl, GLfloat);
	GLfloat w = rva_arg(vl, GLfloat);
	context->RasterPos4f(x, y, z, w);
	return rpc_return_null(ctx);
}
int RglCtxRasterPos4fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->RasterPos4fv(v);
	return rpc_return_null(ctx);
}
int RglCtxRasterPos4i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	GLint z = rva_arg(vl, GLint);
	GLint w = rva_arg(vl, GLint);
	context->RasterPos4i(x, y, z, w);
	return rpc_return_null(ctx);
}
int RglCtxRasterPos4iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLint *v = rva_arg(vl, const GLint *);
	context->RasterPos4iv(v);
	return rpc_return_null(ctx);
}
int RglCtxRasterPos4s(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLshort x = rva_arg(vl, GLshort);
	GLshort y = rva_arg(vl, GLshort);
	GLshort z = rva_arg(vl, GLshort);
	GLshort w = rva_arg(vl, GLshort);
	context->RasterPos4s(x, y, z, w);
	return rpc_return_null(ctx);
}
int RglCtxRasterPos4sv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->RasterPos4sv(v);
	return rpc_return_null(ctx);
}
int RglCtxReadBuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum src = rva_arg(vl, GLenum);
	context->ReadBuffer(src);
	return rpc_return_null(ctx);
}
int RglCtxReadPixels(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	void *pixels = rva_arg(vl, void *);
	context->ReadPixels(x, y, width, height, format, type, pixels);
	return rpc_return_null(ctx);
}
int RglCtxReadnPixels(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	GLsizei bufSize = rva_arg(vl, GLsizei);
	void *data = rva_arg(vl, void *);
	context->ReadnPixels(x, y, width, height, format, type, bufSize, data);
	return rpc_return_null(ctx);
}
int RglCtxRectd(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble x1 = rva_arg(vl, GLdouble);
	GLdouble y1 = rva_arg(vl, GLdouble);
	GLdouble x2 = rva_arg(vl, GLdouble);
	GLdouble y2 = rva_arg(vl, GLdouble);
	context->Rectd(x1, y1, x2, y2);
	return rpc_return_null(ctx);
}
int RglCtxRectdv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLdouble *v1 = rva_arg(vl, const GLdouble *);
	const GLdouble *v2 = rva_arg(vl, const GLdouble *);
	context->Rectdv(v1, v2);
	return rpc_return_null(ctx);
}
int RglCtxRectf(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat x1 = rva_arg(vl, GLfloat);
	GLfloat y1 = rva_arg(vl, GLfloat);
	GLfloat x2 = rva_arg(vl, GLfloat);
	GLfloat y2 = rva_arg(vl, GLfloat);
	context->Rectf(x1, y1, x2, y2);
	return rpc_return_null(ctx);
}
int RglCtxRectfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLfloat *v1 = rva_arg(vl, const GLfloat *);
	const GLfloat *v2 = rva_arg(vl, const GLfloat *);
	context->Rectfv(v1, v2);
	return rpc_return_null(ctx);
}
int RglCtxRecti(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint x1 = rva_arg(vl, GLint);
	GLint y1 = rva_arg(vl, GLint);
	GLint x2 = rva_arg(vl, GLint);
	GLint y2 = rva_arg(vl, GLint);
	context->Recti(x1, y1, x2, y2);
	return rpc_return_null(ctx);
}
int RglCtxRectiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLint *v1 = rva_arg(vl, const GLint *);
	const GLint *v2 = rva_arg(vl, const GLint *);
	context->Rectiv(v1, v2);
	return rpc_return_null(ctx);
}
int RglCtxRects(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLshort x1 = rva_arg(vl, GLshort);
	GLshort y1 = rva_arg(vl, GLshort);
	GLshort x2 = rva_arg(vl, GLshort);
	GLshort y2 = rva_arg(vl, GLshort);
	context->Rects(x1, y1, x2, y2);
	return rpc_return_null(ctx);
}
int RglCtxRectsv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLshort *v1 = rva_arg(vl, const GLshort *);
	const GLshort *v2 = rva_arg(vl, const GLshort *);
	context->Rectsv(v1, v2);
	return rpc_return_null(ctx);
}
int RglCtxReleaseShaderCompiler(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	context->ReleaseShaderCompiler();
	return rpc_return_null(ctx);
}
int RglCtxRenderMode(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	context->RenderMode(mode);
	return rpc_return_null(ctx);
}
int RglCtxRenderbufferStorage(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	context->RenderbufferStorage(target, internalformat, width, height);
	return rpc_return_null(ctx);
}
int RglCtxRenderbufferStorageMultisample(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLsizei samples = rva_arg(vl, GLsizei);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	context->RenderbufferStorageMultisample(target, samples, internalformat, width, height);
	return rpc_return_null(ctx);
}
int RglCtxResumeTransformFeedback(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	context->ResumeTransformFeedback();
	return rpc_return_null(ctx);
}
int RglCtxRotated(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble angle = rva_arg(vl, GLdouble);
	GLdouble x = rva_arg(vl, GLdouble);
	GLdouble y = rva_arg(vl, GLdouble);
	GLdouble z = rva_arg(vl, GLdouble);
	context->Rotated(angle, x, y, z);
	return rpc_return_null(ctx);
}
int RglCtxRotatef(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat angle = rva_arg(vl, GLfloat);
	GLfloat x = rva_arg(vl, GLfloat);
	GLfloat y = rva_arg(vl, GLfloat);
	GLfloat z = rva_arg(vl, GLfloat);
	context->Rotatef(angle, x, y, z);
	return rpc_return_null(ctx);
}
int RglCtxSampleCoverage(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat value = rva_arg(vl, GLfloat);
	bool_t invert = rva_arg(vl, bool_t);
	context->SampleCoverage(value, invert);
	return rpc_return_null(ctx);
}
int RglCtxSampleMaski(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint maskNumber = rva_arg(vl, GLuint);
	GLbitfield mask = rva_arg(vl, GLbitfield);
	context->SampleMaski(maskNumber, mask);
	return rpc_return_null(ctx);
}
int RglCtxSamplerParameterIiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint sampler = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	const GLint *param = rva_arg(vl, const GLint *);
	context->SamplerParameterIiv(sampler, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxSamplerParameterIuiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint sampler = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	const GLuint *param = rva_arg(vl, const GLuint *);
	context->SamplerParameterIuiv(sampler, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxSamplerParameterf(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint sampler = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLfloat param = rva_arg(vl, GLfloat);
	context->SamplerParameterf(sampler, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxSamplerParameterfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint sampler = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	const GLfloat *param = rva_arg(vl, const GLfloat *);
	context->SamplerParameterfv(sampler, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxSamplerParameteri(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint sampler = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint param = rva_arg(vl, GLint);
	context->SamplerParameteri(sampler, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxSamplerParameteriv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint sampler = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	const GLint *param = rva_arg(vl, const GLint *);
	context->SamplerParameteriv(sampler, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxScaled(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble x = rva_arg(vl, GLdouble);
	GLdouble y = rva_arg(vl, GLdouble);
	GLdouble z = rva_arg(vl, GLdouble);
	context->Scaled(x, y, z);
	return rpc_return_null(ctx);
}
int RglCtxScalef(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat x = rva_arg(vl, GLfloat);
	GLfloat y = rva_arg(vl, GLfloat);
	GLfloat z = rva_arg(vl, GLfloat);
	context->Scalef(x, y, z);
	return rpc_return_null(ctx);
}
int RglCtxScissor(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	context->Scissor(x, y, width, height);
	return rpc_return_null(ctx);
}
int RglCtxScissorArrayv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint first = rva_arg(vl, GLuint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLint *v = rva_arg(vl, const GLint *);
	context->ScissorArrayv(first, count, v);
	return rpc_return_null(ctx);
}
int RglCtxScissorIndexed(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLint left = rva_arg(vl, GLint);
	GLint bottom = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	context->ScissorIndexed(index, left, bottom, width, height);
	return rpc_return_null(ctx);
}
int RglCtxScissorIndexedv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLint *v = rva_arg(vl, const GLint *);
	context->ScissorIndexedv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxSecondaryColor3b(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLbyte red = rva_arg(vl, GLbyte);
	GLbyte green = rva_arg(vl, GLbyte);
	GLbyte blue = rva_arg(vl, GLbyte);
	context->SecondaryColor3b(red, green, blue);
	return rpc_return_null(ctx);
}
int RglCtxSecondaryColor3bv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLbyte *v = rva_arg(vl, const GLbyte *);
	context->SecondaryColor3bv(v);
	return rpc_return_null(ctx);
}
int RglCtxSecondaryColor3d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble red = rva_arg(vl, GLdouble);
	GLdouble green = rva_arg(vl, GLdouble);
	GLdouble blue = rva_arg(vl, GLdouble);
	context->SecondaryColor3d(red, green, blue);
	return rpc_return_null(ctx);
}
int RglCtxSecondaryColor3dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->SecondaryColor3dv(v);
	return rpc_return_null(ctx);
}
int RglCtxSecondaryColor3f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat red = rva_arg(vl, GLfloat);
	GLfloat green = rva_arg(vl, GLfloat);
	GLfloat blue = rva_arg(vl, GLfloat);
	context->SecondaryColor3f(red, green, blue);
	return rpc_return_null(ctx);
}
int RglCtxSecondaryColor3fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->SecondaryColor3fv(v);
	return rpc_return_null(ctx);
}
int RglCtxSecondaryColor3i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint red = rva_arg(vl, GLint);
	GLint green = rva_arg(vl, GLint);
	GLint blue = rva_arg(vl, GLint);
	context->SecondaryColor3i(red, green, blue);
	return rpc_return_null(ctx);
}
int RglCtxSecondaryColor3iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLint *v = rva_arg(vl, const GLint *);
	context->SecondaryColor3iv(v);
	return rpc_return_null(ctx);
}
int RglCtxSecondaryColor3s(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLshort red = rva_arg(vl, GLshort);
	GLshort green = rva_arg(vl, GLshort);
	GLshort blue = rva_arg(vl, GLshort);
	context->SecondaryColor3s(red, green, blue);
	return rpc_return_null(ctx);
}
int RglCtxSecondaryColor3sv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->SecondaryColor3sv(v);
	return rpc_return_null(ctx);
}
int RglCtxSecondaryColor3ub(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLubyte red = rva_arg(vl, GLubyte);
	GLubyte green = rva_arg(vl, GLubyte);
	GLubyte blue = rva_arg(vl, GLubyte);
	context->SecondaryColor3ub(red, green, blue);
	return rpc_return_null(ctx);
}
int RglCtxSecondaryColor3ubv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLubyte *v = rva_arg(vl, const GLubyte *);
	context->SecondaryColor3ubv(v);
	return rpc_return_null(ctx);
}
int RglCtxSecondaryColor3ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint red = rva_arg(vl, GLuint);
	GLuint green = rva_arg(vl, GLuint);
	GLuint blue = rva_arg(vl, GLuint);
	context->SecondaryColor3ui(red, green, blue);
	return rpc_return_null(ctx);
}
int RglCtxSecondaryColor3uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLuint *v = rva_arg(vl, const GLuint *);
	context->SecondaryColor3uiv(v);
	return rpc_return_null(ctx);
}
int RglCtxSecondaryColor3us(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLushort red = rva_arg(vl, GLushort);
	GLushort green = rva_arg(vl, GLushort);
	GLushort blue = rva_arg(vl, GLushort);
	context->SecondaryColor3us(red, green, blue);
	return rpc_return_null(ctx);
}
int RglCtxSecondaryColor3usv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLushort *v = rva_arg(vl, const GLushort *);
	context->SecondaryColor3usv(v);
	return rpc_return_null(ctx);
}
int RglCtxSecondaryColorP3ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	GLuint color = rva_arg(vl, GLuint);
	context->SecondaryColorP3ui(type, color);
	return rpc_return_null(ctx);
}
int RglCtxSecondaryColorP3uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	const GLuint *color = rva_arg(vl, const GLuint *);
	context->SecondaryColorP3uiv(type, color);
	return rpc_return_null(ctx);
}
int RglCtxSecondaryColorPointer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint size = rva_arg(vl, GLint);
	GLenum type = rva_arg(vl, GLenum);
	GLsizei stride = rva_arg(vl, GLsizei);
	const void *pointer = rva_arg(vl, const void *);
	context->SecondaryColorPointer(size, type, stride, pointer);
	return rpc_return_null(ctx);
}
int RglCtxSelectBuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei size = rva_arg(vl, GLsizei);
	GLuint *buffer = rva_arg(vl, GLuint *);
	context->SelectBuffer(size, buffer);
	return rpc_return_null(ctx);
}
int RglCtxShadeModel(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum mode = rva_arg(vl, GLenum);
	context->ShadeModel(mode);
	return rpc_return_null(ctx);
}
int RglCtxShaderBinary(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLuint *shaders = rva_arg(vl, const GLuint *);
	GLenum binaryFormat = rva_arg(vl, GLenum);
	const void *binary = rva_arg(vl, const void *);
	GLsizei length = rva_arg(vl, GLsizei);
	context->ShaderBinary(count, shaders, binaryFormat, binary, length);
	return rpc_return_null(ctx);
}
int RglCtxShaderSource(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint shader = rva_arg(vl, GLuint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLchar *const*string = rva_arg(vl, const GLchar *const*);
	const GLint *length = rva_arg(vl, const GLint *);
	context->ShaderSource(shader, count, string, length);
	return rpc_return_null(ctx);
}
int RglCtxShaderStorageBlockBinding(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLuint storageBlockIndex = rva_arg(vl, GLuint);
	GLuint storageBlockBinding = rva_arg(vl, GLuint);
	context->ShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding);
	return rpc_return_null(ctx);
}
int RglCtxSpecializeShader(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint shader = rva_arg(vl, GLuint);
	const GLchar *pEntryPoint = rva_arg(vl, const GLchar *);
	GLuint numSpecializationConstants = rva_arg(vl, GLuint);
	const GLuint *pConstantIndex = rva_arg(vl, const GLuint *);
	const GLuint *pConstantValue = rva_arg(vl, const GLuint *);
	context->SpecializeShader(shader, pEntryPoint, numSpecializationConstants, pConstantIndex, pConstantValue);
	return rpc_return_null(ctx);
}
int RglCtxStencilFunc(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum func = rva_arg(vl, GLenum);
	GLint ref = rva_arg(vl, GLint);
	GLuint mask = rva_arg(vl, GLuint);
	context->StencilFunc(func, ref, mask);
	return rpc_return_null(ctx);
}
int RglCtxStencilFuncSeparate(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum face = rva_arg(vl, GLenum);
	GLenum func = rva_arg(vl, GLenum);
	GLint ref = rva_arg(vl, GLint);
	GLuint mask = rva_arg(vl, GLuint);
	context->StencilFuncSeparate(face, func, ref, mask);
	return rpc_return_null(ctx);
}
int RglCtxStencilMask(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint mask = rva_arg(vl, GLuint);
	context->StencilMask(mask);
	return rpc_return_null(ctx);
}
int RglCtxStencilMaskSeparate(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum face = rva_arg(vl, GLenum);
	GLuint mask = rva_arg(vl, GLuint);
	context->StencilMaskSeparate(face, mask);
	return rpc_return_null(ctx);
}
int RglCtxStencilOp(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum fail = rva_arg(vl, GLenum);
	GLenum zfail = rva_arg(vl, GLenum);
	GLenum zpass = rva_arg(vl, GLenum);
	context->StencilOp(fail, zfail, zpass);
	return rpc_return_null(ctx);
}
int RglCtxStencilOpSeparate(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum face = rva_arg(vl, GLenum);
	GLenum sfail = rva_arg(vl, GLenum);
	GLenum dpfail = rva_arg(vl, GLenum);
	GLenum dppass = rva_arg(vl, GLenum);
	context->StencilOpSeparate(face, sfail, dpfail, dppass);
	return rpc_return_null(ctx);
}
int RglCtxTexBuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLuint buffer = rva_arg(vl, GLuint);
	context->TexBuffer(target, internalformat, buffer);
	return rpc_return_null(ctx);
}
int RglCtxTexBufferRange(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLuint buffer = rva_arg(vl, GLuint);
	uint32_t offset = rva_arg(vl, uint32_t);
	uint64_t size = rva_arg(vl, uint64_t);
	context->TexBufferRange(target, internalformat, buffer, offset, size);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord1d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble s = rva_arg(vl, GLdouble);
	context->TexCoord1d(s);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord1dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->TexCoord1dv(v);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord1f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat s = rva_arg(vl, GLfloat);
	context->TexCoord1f(s);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord1fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->TexCoord1fv(v);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord1i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint s = rva_arg(vl, GLint);
	context->TexCoord1i(s);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord1iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLint *v = rva_arg(vl, const GLint *);
	context->TexCoord1iv(v);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord1s(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLshort s = rva_arg(vl, GLshort);
	context->TexCoord1s(s);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord1sv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->TexCoord1sv(v);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord2d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble s = rva_arg(vl, GLdouble);
	GLdouble t = rva_arg(vl, GLdouble);
	context->TexCoord2d(s, t);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord2dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->TexCoord2dv(v);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord2f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat s = rva_arg(vl, GLfloat);
	GLfloat t = rva_arg(vl, GLfloat);
	context->TexCoord2f(s, t);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord2fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->TexCoord2fv(v);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord2i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint s = rva_arg(vl, GLint);
	GLint t = rva_arg(vl, GLint);
	context->TexCoord2i(s, t);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord2iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLint *v = rva_arg(vl, const GLint *);
	context->TexCoord2iv(v);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord2s(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLshort s = rva_arg(vl, GLshort);
	GLshort t = rva_arg(vl, GLshort);
	context->TexCoord2s(s, t);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord2sv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->TexCoord2sv(v);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord3d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble s = rva_arg(vl, GLdouble);
	GLdouble t = rva_arg(vl, GLdouble);
	GLdouble r = rva_arg(vl, GLdouble);
	context->TexCoord3d(s, t, r);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord3dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->TexCoord3dv(v);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord3f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat s = rva_arg(vl, GLfloat);
	GLfloat t = rva_arg(vl, GLfloat);
	GLfloat r = rva_arg(vl, GLfloat);
	context->TexCoord3f(s, t, r);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord3fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->TexCoord3fv(v);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord3i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint s = rva_arg(vl, GLint);
	GLint t = rva_arg(vl, GLint);
	GLint r = rva_arg(vl, GLint);
	context->TexCoord3i(s, t, r);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord3iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLint *v = rva_arg(vl, const GLint *);
	context->TexCoord3iv(v);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord3s(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLshort s = rva_arg(vl, GLshort);
	GLshort t = rva_arg(vl, GLshort);
	GLshort r = rva_arg(vl, GLshort);
	context->TexCoord3s(s, t, r);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord3sv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->TexCoord3sv(v);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord4d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble s = rva_arg(vl, GLdouble);
	GLdouble t = rva_arg(vl, GLdouble);
	GLdouble r = rva_arg(vl, GLdouble);
	GLdouble q = rva_arg(vl, GLdouble);
	context->TexCoord4d(s, t, r, q);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord4dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->TexCoord4dv(v);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord4f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat s = rva_arg(vl, GLfloat);
	GLfloat t = rva_arg(vl, GLfloat);
	GLfloat r = rva_arg(vl, GLfloat);
	GLfloat q = rva_arg(vl, GLfloat);
	context->TexCoord4f(s, t, r, q);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord4fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->TexCoord4fv(v);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord4i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint s = rva_arg(vl, GLint);
	GLint t = rva_arg(vl, GLint);
	GLint r = rva_arg(vl, GLint);
	GLint q = rva_arg(vl, GLint);
	context->TexCoord4i(s, t, r, q);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord4iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLint *v = rva_arg(vl, const GLint *);
	context->TexCoord4iv(v);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord4s(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLshort s = rva_arg(vl, GLshort);
	GLshort t = rva_arg(vl, GLshort);
	GLshort r = rva_arg(vl, GLshort);
	GLshort q = rva_arg(vl, GLshort);
	context->TexCoord4s(s, t, r, q);
	return rpc_return_null(ctx);
}
int RglCtxTexCoord4sv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->TexCoord4sv(v);
	return rpc_return_null(ctx);
}
int RglCtxTexCoordP1ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	GLuint coords = rva_arg(vl, GLuint);
	context->TexCoordP1ui(type, coords);
	return rpc_return_null(ctx);
}
int RglCtxTexCoordP1uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	const GLuint *coords = rva_arg(vl, const GLuint *);
	context->TexCoordP1uiv(type, coords);
	return rpc_return_null(ctx);
}
int RglCtxTexCoordP2ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	GLuint coords = rva_arg(vl, GLuint);
	context->TexCoordP2ui(type, coords);
	return rpc_return_null(ctx);
}
int RglCtxTexCoordP2uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	const GLuint *coords = rva_arg(vl, const GLuint *);
	context->TexCoordP2uiv(type, coords);
	return rpc_return_null(ctx);
}
int RglCtxTexCoordP3ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	GLuint coords = rva_arg(vl, GLuint);
	context->TexCoordP3ui(type, coords);
	return rpc_return_null(ctx);
}
int RglCtxTexCoordP3uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	const GLuint *coords = rva_arg(vl, const GLuint *);
	context->TexCoordP3uiv(type, coords);
	return rpc_return_null(ctx);
}
int RglCtxTexCoordP4ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	GLuint coords = rva_arg(vl, GLuint);
	context->TexCoordP4ui(type, coords);
	return rpc_return_null(ctx);
}
int RglCtxTexCoordP4uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	const GLuint *coords = rva_arg(vl, const GLuint *);
	context->TexCoordP4uiv(type, coords);
	return rpc_return_null(ctx);
}
int RglCtxTexCoordPointer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint size = rva_arg(vl, GLint);
	GLenum type = rva_arg(vl, GLenum);
	GLsizei stride = rva_arg(vl, GLsizei);
	const void *pointer = rva_arg(vl, const void *);
	context->TexCoordPointer(size, type, stride, pointer);
	return rpc_return_null(ctx);
}
int RglCtxTexEnvf(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLfloat param = rva_arg(vl, GLfloat);
	context->TexEnvf(target, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxTexEnvfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	const GLfloat *params = rva_arg(vl, const GLfloat *);
	context->TexEnvfv(target, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxTexEnvi(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLint param = rva_arg(vl, GLint);
	context->TexEnvi(target, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxTexEnviv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	const GLint *params = rva_arg(vl, const GLint *);
	context->TexEnviv(target, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxTexGend(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum coord = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLdouble param = rva_arg(vl, GLdouble);
	context->TexGend(coord, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxTexGendv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum coord = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	const GLdouble *params = rva_arg(vl, const GLdouble *);
	context->TexGendv(coord, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxTexGenf(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum coord = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLfloat param = rva_arg(vl, GLfloat);
	context->TexGenf(coord, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxTexGenfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum coord = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	const GLfloat *params = rva_arg(vl, const GLfloat *);
	context->TexGenfv(coord, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxTexGeni(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum coord = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLint param = rva_arg(vl, GLint);
	context->TexGeni(coord, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxTexGeniv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum coord = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	const GLint *params = rva_arg(vl, const GLint *);
	context->TexGeniv(coord, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxTexImage1D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint level = rva_arg(vl, GLint);
	GLint internalformat = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLint border = rva_arg(vl, GLint);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	const void *pixels = rva_arg(vl, const void *);
	context->TexImage1D(target, level, internalformat, width, border, format, type, pixels);
	return rpc_return_null(ctx);
}
int RglCtxTexImage2D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint level = rva_arg(vl, GLint);
	GLint internalformat = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLint border = rva_arg(vl, GLint);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	const void *pixels = rva_arg(vl, const void *);
	context->TexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
	return rpc_return_null(ctx);
}
int RglCtxTexImage2DMultisample(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLsizei samples = rva_arg(vl, GLsizei);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	bool_t fixedsamplelocations = rva_arg(vl, bool_t);
	context->TexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
	return rpc_return_null(ctx);
}
int RglCtxTexImage3D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint level = rva_arg(vl, GLint);
	GLint internalformat = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLsizei depth = rva_arg(vl, GLsizei);
	GLint border = rva_arg(vl, GLint);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	const void *pixels = rva_arg(vl, const void *);
	context->TexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
	return rpc_return_null(ctx);
}
int RglCtxTexImage3DMultisample(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLsizei samples = rva_arg(vl, GLsizei);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLsizei depth = rva_arg(vl, GLsizei);
	bool_t fixedsamplelocations = rva_arg(vl, bool_t);
	context->TexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
	return rpc_return_null(ctx);
}
int RglCtxTexParameterIiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	const GLint *params = rva_arg(vl, const GLint *);
	context->TexParameterIiv(target, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxTexParameterIuiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	const GLuint *params = rva_arg(vl, const GLuint *);
	context->TexParameterIuiv(target, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxTexParameterf(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLfloat param = rva_arg(vl, GLfloat);
	context->TexParameterf(target, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxTexParameterfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	const GLfloat *params = rva_arg(vl, const GLfloat *);
	context->TexParameterfv(target, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxTexParameteri(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	GLint param = rva_arg(vl, GLint);
	context->TexParameteri(target, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxTexParameteriv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLenum pname = rva_arg(vl, GLenum);
	const GLint *params = rva_arg(vl, const GLint *);
	context->TexParameteriv(target, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxTexStorage1D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLsizei levels = rva_arg(vl, GLsizei);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLsizei width = rva_arg(vl, GLsizei);
	context->TexStorage1D(target, levels, internalformat, width);
	return rpc_return_null(ctx);
}
int RglCtxTexStorage2D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLsizei levels = rva_arg(vl, GLsizei);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	context->TexStorage2D(target, levels, internalformat, width, height);
	return rpc_return_null(ctx);
}
int RglCtxTexStorage2DMultisample(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLsizei samples = rva_arg(vl, GLsizei);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	bool_t fixedsamplelocations = rva_arg(vl, bool_t);
	context->TexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
	return rpc_return_null(ctx);
}
int RglCtxTexStorage3D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLsizei levels = rva_arg(vl, GLsizei);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLsizei depth = rva_arg(vl, GLsizei);
	context->TexStorage3D(target, levels, internalformat, width, height, depth);
	return rpc_return_null(ctx);
}
int RglCtxTexStorage3DMultisample(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLsizei samples = rva_arg(vl, GLsizei);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLsizei depth = rva_arg(vl, GLsizei);
	bool_t fixedsamplelocations = rva_arg(vl, bool_t);
	context->TexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
	return rpc_return_null(ctx);
}
int RglCtxTexSubImage1D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint level = rva_arg(vl, GLint);
	GLint xoffset = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	const void *pixels = rva_arg(vl, const void *);
	context->TexSubImage1D(target, level, xoffset, width, format, type, pixels);
	return rpc_return_null(ctx);
}
int RglCtxTexSubImage2D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint level = rva_arg(vl, GLint);
	GLint xoffset = rva_arg(vl, GLint);
	GLint yoffset = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	const void *pixels = rva_arg(vl, const void *);
	context->TexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
	return rpc_return_null(ctx);
}
int RglCtxTexSubImage3D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	GLint level = rva_arg(vl, GLint);
	GLint xoffset = rva_arg(vl, GLint);
	GLint yoffset = rva_arg(vl, GLint);
	GLint zoffset = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLsizei depth = rva_arg(vl, GLsizei);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	const void *pixels = rva_arg(vl, const void *);
	context->TexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
	return rpc_return_null(ctx);
}
int RglCtxTextureBarrier(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	context->TextureBarrier();
	return rpc_return_null(ctx);
}
int RglCtxTextureBuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLuint buffer = rva_arg(vl, GLuint);
	context->TextureBuffer(texture, internalformat, buffer);
	return rpc_return_null(ctx);
}
int RglCtxTextureBufferRange(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLuint buffer = rva_arg(vl, GLuint);
	uint32_t offset = rva_arg(vl, uint32_t);
	uint64_t size = rva_arg(vl, uint64_t);
	context->TextureBufferRange(texture, internalformat, buffer, offset, size);
	return rpc_return_null(ctx);
}
int RglCtxTextureParameterIiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	const GLint *params = rva_arg(vl, const GLint *);
	context->TextureParameterIiv(texture, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxTextureParameterIuiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	const GLuint *params = rva_arg(vl, const GLuint *);
	context->TextureParameterIuiv(texture, pname, params);
	return rpc_return_null(ctx);
}
int RglCtxTextureParameterf(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLfloat param = rva_arg(vl, GLfloat);
	context->TextureParameterf(texture, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxTextureParameterfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	const GLfloat *param = rva_arg(vl, const GLfloat *);
	context->TextureParameterfv(texture, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxTextureParameteri(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	GLint param = rva_arg(vl, GLint);
	context->TextureParameteri(texture, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxTextureParameteriv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLenum pname = rva_arg(vl, GLenum);
	const GLint *param = rva_arg(vl, const GLint *);
	context->TextureParameteriv(texture, pname, param);
	return rpc_return_null(ctx);
}
int RglCtxTextureStorage1D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLsizei levels = rva_arg(vl, GLsizei);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLsizei width = rva_arg(vl, GLsizei);
	context->TextureStorage1D(texture, levels, internalformat, width);
	return rpc_return_null(ctx);
}
int RglCtxTextureStorage2D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLsizei levels = rva_arg(vl, GLsizei);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	context->TextureStorage2D(texture, levels, internalformat, width, height);
	return rpc_return_null(ctx);
}
int RglCtxTextureStorage2DMultisample(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLsizei samples = rva_arg(vl, GLsizei);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	bool_t fixedsamplelocations = rva_arg(vl, bool_t);
	context->TextureStorage2DMultisample(texture, samples, internalformat, width, height, fixedsamplelocations);
	return rpc_return_null(ctx);
}
int RglCtxTextureStorage3D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLsizei levels = rva_arg(vl, GLsizei);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLsizei depth = rva_arg(vl, GLsizei);
	context->TextureStorage3D(texture, levels, internalformat, width, height, depth);
	return rpc_return_null(ctx);
}
int RglCtxTextureStorage3DMultisample(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLsizei samples = rva_arg(vl, GLsizei);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLsizei depth = rva_arg(vl, GLsizei);
	bool_t fixedsamplelocations = rva_arg(vl, bool_t);
	context->TextureStorage3DMultisample(texture, samples, internalformat, width, height, depth, fixedsamplelocations);
	return rpc_return_null(ctx);
}
int RglCtxTextureSubImage1D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	GLint xoffset = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	const void *pixels = rva_arg(vl, const void *);
	context->TextureSubImage1D(texture, level, xoffset, width, format, type, pixels);
	return rpc_return_null(ctx);
}
int RglCtxTextureSubImage2D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	GLint xoffset = rva_arg(vl, GLint);
	GLint yoffset = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	const void *pixels = rva_arg(vl, const void *);
	context->TextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, type, pixels);
	return rpc_return_null(ctx);
}
int RglCtxTextureSubImage3D(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLint level = rva_arg(vl, GLint);
	GLint xoffset = rva_arg(vl, GLint);
	GLint yoffset = rva_arg(vl, GLint);
	GLint zoffset = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	GLsizei depth = rva_arg(vl, GLsizei);
	GLenum format = rva_arg(vl, GLenum);
	GLenum type = rva_arg(vl, GLenum);
	const void *pixels = rva_arg(vl, const void *);
	context->TextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
	return rpc_return_null(ctx);
}
int RglCtxTextureView(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint texture = rva_arg(vl, GLuint);
	GLenum target = rva_arg(vl, GLenum);
	GLuint origtexture = rva_arg(vl, GLuint);
	GLenum internalformat = rva_arg(vl, GLenum);
	GLuint minlevel = rva_arg(vl, GLuint);
	GLuint numlevels = rva_arg(vl, GLuint);
	GLuint minlayer = rva_arg(vl, GLuint);
	GLuint numlayers = rva_arg(vl, GLuint);
	context->TextureView(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
	return rpc_return_null(ctx);
}
int RglCtxTransformFeedbackBufferBase(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint xfb = rva_arg(vl, GLuint);
	GLuint index = rva_arg(vl, GLuint);
	GLuint buffer = rva_arg(vl, GLuint);
	context->TransformFeedbackBufferBase(xfb, index, buffer);
	return rpc_return_null(ctx);
}
int RglCtxTransformFeedbackBufferRange(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint xfb = rva_arg(vl, GLuint);
	GLuint index = rva_arg(vl, GLuint);
	GLuint buffer = rva_arg(vl, GLuint);
	uint32_t offset = rva_arg(vl, uint32_t);
	uint64_t size = rva_arg(vl, uint64_t);
	context->TransformFeedbackBufferRange(xfb, index, buffer, offset, size);
	return rpc_return_null(ctx);
}
int RglCtxTransformFeedbackVaryings(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLchar *const*varyings = rva_arg(vl, const GLchar *const*);
	GLenum bufferMode = rva_arg(vl, GLenum);
	context->TransformFeedbackVaryings(program, count, varyings, bufferMode);
	return rpc_return_null(ctx);
}
int RglCtxTranslated(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble x = rva_arg(vl, GLdouble);
	GLdouble y = rva_arg(vl, GLdouble);
	GLdouble z = rva_arg(vl, GLdouble);
	context->Translated(x, y, z);
	return rpc_return_null(ctx);
}
int RglCtxTranslatef(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat x = rva_arg(vl, GLfloat);
	GLfloat y = rva_arg(vl, GLfloat);
	GLfloat z = rva_arg(vl, GLfloat);
	context->Translatef(x, y, z);
	return rpc_return_null(ctx);
}
int RglCtxUniform1d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLdouble x = rva_arg(vl, GLdouble);
	context->Uniform1d(location, x);
	return rpc_return_null(ctx);
}
int RglCtxUniform1dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->Uniform1dv(location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxUniform1f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLfloat v0 = rva_arg(vl, GLfloat);
	context->Uniform1f(location, v0);
	return rpc_return_null(ctx);
}
int RglCtxUniform1fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->Uniform1fv(location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxUniform1i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLint v0 = rva_arg(vl, GLint);
	context->Uniform1i(location, v0);
	return rpc_return_null(ctx);
}
int RglCtxUniform1iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLint *value = rva_arg(vl, const GLint *);
	context->Uniform1iv(location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxUniform1ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLuint v0 = rva_arg(vl, GLuint);
	context->Uniform1ui(location, v0);
	return rpc_return_null(ctx);
}
int RglCtxUniform1uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLuint *value = rva_arg(vl, const GLuint *);
	context->Uniform1uiv(location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxUniform2d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLdouble x = rva_arg(vl, GLdouble);
	GLdouble y = rva_arg(vl, GLdouble);
	context->Uniform2d(location, x, y);
	return rpc_return_null(ctx);
}
int RglCtxUniform2dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->Uniform2dv(location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxUniform2f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLfloat v0 = rva_arg(vl, GLfloat);
	GLfloat v1 = rva_arg(vl, GLfloat);
	context->Uniform2f(location, v0, v1);
	return rpc_return_null(ctx);
}
int RglCtxUniform2fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->Uniform2fv(location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxUniform2i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLint v0 = rva_arg(vl, GLint);
	GLint v1 = rva_arg(vl, GLint);
	context->Uniform2i(location, v0, v1);
	return rpc_return_null(ctx);
}
int RglCtxUniform2iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLint *value = rva_arg(vl, const GLint *);
	context->Uniform2iv(location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxUniform2ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLuint v0 = rva_arg(vl, GLuint);
	GLuint v1 = rva_arg(vl, GLuint);
	context->Uniform2ui(location, v0, v1);
	return rpc_return_null(ctx);
}
int RglCtxUniform2uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLuint *value = rva_arg(vl, const GLuint *);
	context->Uniform2uiv(location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxUniform3d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLdouble x = rva_arg(vl, GLdouble);
	GLdouble y = rva_arg(vl, GLdouble);
	GLdouble z = rva_arg(vl, GLdouble);
	context->Uniform3d(location, x, y, z);
	return rpc_return_null(ctx);
}
int RglCtxUniform3dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->Uniform3dv(location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxUniform3f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLfloat v0 = rva_arg(vl, GLfloat);
	GLfloat v1 = rva_arg(vl, GLfloat);
	GLfloat v2 = rva_arg(vl, GLfloat);
	context->Uniform3f(location, v0, v1, v2);
	return rpc_return_null(ctx);
}
int RglCtxUniform3fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->Uniform3fv(location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxUniform3i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLint v0 = rva_arg(vl, GLint);
	GLint v1 = rva_arg(vl, GLint);
	GLint v2 = rva_arg(vl, GLint);
	context->Uniform3i(location, v0, v1, v2);
	return rpc_return_null(ctx);
}
int RglCtxUniform3iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLint *value = rva_arg(vl, const GLint *);
	context->Uniform3iv(location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxUniform3ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLuint v0 = rva_arg(vl, GLuint);
	GLuint v1 = rva_arg(vl, GLuint);
	GLuint v2 = rva_arg(vl, GLuint);
	context->Uniform3ui(location, v0, v1, v2);
	return rpc_return_null(ctx);
}
int RglCtxUniform3uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLuint *value = rva_arg(vl, const GLuint *);
	context->Uniform3uiv(location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxUniform4d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLdouble x = rva_arg(vl, GLdouble);
	GLdouble y = rva_arg(vl, GLdouble);
	GLdouble z = rva_arg(vl, GLdouble);
	GLdouble w = rva_arg(vl, GLdouble);
	context->Uniform4d(location, x, y, z, w);
	return rpc_return_null(ctx);
}
int RglCtxUniform4dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->Uniform4dv(location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxUniform4f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLfloat v0 = rva_arg(vl, GLfloat);
	GLfloat v1 = rva_arg(vl, GLfloat);
	GLfloat v2 = rva_arg(vl, GLfloat);
	GLfloat v3 = rva_arg(vl, GLfloat);
	context->Uniform4f(location, v0, v1, v2, v3);
	return rpc_return_null(ctx);
}
int RglCtxUniform4fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->Uniform4fv(location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxUniform4i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLint v0 = rva_arg(vl, GLint);
	GLint v1 = rva_arg(vl, GLint);
	GLint v2 = rva_arg(vl, GLint);
	GLint v3 = rva_arg(vl, GLint);
	context->Uniform4i(location, v0, v1, v2, v3);
	return rpc_return_null(ctx);
}
int RglCtxUniform4iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLint *value = rva_arg(vl, const GLint *);
	context->Uniform4iv(location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxUniform4ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLuint v0 = rva_arg(vl, GLuint);
	GLuint v1 = rva_arg(vl, GLuint);
	GLuint v2 = rva_arg(vl, GLuint);
	GLuint v3 = rva_arg(vl, GLuint);
	context->Uniform4ui(location, v0, v1, v2, v3);
	return rpc_return_null(ctx);
}
int RglCtxUniform4uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLuint *value = rva_arg(vl, const GLuint *);
	context->Uniform4uiv(location, count, value);
	return rpc_return_null(ctx);
}
int RglCtxUniformBlockBinding(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	GLuint uniformBlockIndex = rva_arg(vl, GLuint);
	GLuint uniformBlockBinding = rva_arg(vl, GLuint);
	context->UniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
	return rpc_return_null(ctx);
}
int RglCtxUniformMatrix2dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->UniformMatrix2dv(location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxUniformMatrix2fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->UniformMatrix2fv(location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxUniformMatrix2x3dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->UniformMatrix2x3dv(location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxUniformMatrix2x3fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->UniformMatrix2x3fv(location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxUniformMatrix2x4dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->UniformMatrix2x4dv(location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxUniformMatrix2x4fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->UniformMatrix2x4fv(location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxUniformMatrix3dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->UniformMatrix3dv(location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxUniformMatrix3fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->UniformMatrix3fv(location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxUniformMatrix3x2dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->UniformMatrix3x2dv(location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxUniformMatrix3x2fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->UniformMatrix3x2fv(location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxUniformMatrix3x4dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->UniformMatrix3x4dv(location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxUniformMatrix3x4fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->UniformMatrix3x4fv(location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxUniformMatrix4dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->UniformMatrix4dv(location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxUniformMatrix4fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->UniformMatrix4fv(location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxUniformMatrix4x2dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->UniformMatrix4x2dv(location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxUniformMatrix4x2fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->UniformMatrix4x2fv(location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxUniformMatrix4x3dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLdouble *value = rva_arg(vl, const GLdouble *);
	context->UniformMatrix4x3dv(location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxUniformMatrix4x3fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint location = rva_arg(vl, GLint);
	GLsizei count = rva_arg(vl, GLsizei);
	bool_t transpose = rva_arg(vl, bool_t);
	const GLfloat *value = rva_arg(vl, const GLfloat *);
	context->UniformMatrix4x3fv(location, count, transpose, value);
	return rpc_return_null(ctx);
}
int RglCtxUniformSubroutinesuiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum shadertype = rva_arg(vl, GLenum);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLuint *indices = rva_arg(vl, const GLuint *);
	context->UniformSubroutinesuiv(shadertype, count, indices);
	return rpc_return_null(ctx);
}
int RglCtxUnmapBuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum target = rva_arg(vl, GLenum);
	context->UnmapBuffer(target);
	return rpc_return_null(ctx);
}
int RglCtxUnmapNamedBuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint buffer = rva_arg(vl, GLuint);
	context->UnmapNamedBuffer(buffer);
	return rpc_return_null(ctx);
}
int RglCtxUseProgram(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	context->UseProgram(program);
	return rpc_return_null(ctx);
}
int RglCtxUseProgramStages(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint pipeline = rva_arg(vl, GLuint);
	GLbitfield stages = rva_arg(vl, GLbitfield);
	GLuint program = rva_arg(vl, GLuint);
	context->UseProgramStages(pipeline, stages, program);
	return rpc_return_null(ctx);
}
int RglCtxValidateProgram(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint program = rva_arg(vl, GLuint);
	context->ValidateProgram(program);
	return rpc_return_null(ctx);
}
int RglCtxValidateProgramPipeline(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint pipeline = rva_arg(vl, GLuint);
	context->ValidateProgramPipeline(pipeline);
	return rpc_return_null(ctx);
}
int RglCtxVertex2d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble x = rva_arg(vl, GLdouble);
	GLdouble y = rva_arg(vl, GLdouble);
	context->Vertex2d(x, y);
	return rpc_return_null(ctx);
}
int RglCtxVertex2dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->Vertex2dv(v);
	return rpc_return_null(ctx);
}
int RglCtxVertex2f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat x = rva_arg(vl, GLfloat);
	GLfloat y = rva_arg(vl, GLfloat);
	context->Vertex2f(x, y);
	return rpc_return_null(ctx);
}
int RglCtxVertex2fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->Vertex2fv(v);
	return rpc_return_null(ctx);
}
int RglCtxVertex2i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	context->Vertex2i(x, y);
	return rpc_return_null(ctx);
}
int RglCtxVertex2iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLint *v = rva_arg(vl, const GLint *);
	context->Vertex2iv(v);
	return rpc_return_null(ctx);
}
int RglCtxVertex2s(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLshort x = rva_arg(vl, GLshort);
	GLshort y = rva_arg(vl, GLshort);
	context->Vertex2s(x, y);
	return rpc_return_null(ctx);
}
int RglCtxVertex2sv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->Vertex2sv(v);
	return rpc_return_null(ctx);
}
int RglCtxVertex3d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble x = rva_arg(vl, GLdouble);
	GLdouble y = rva_arg(vl, GLdouble);
	GLdouble z = rva_arg(vl, GLdouble);
	context->Vertex3d(x, y, z);
	return rpc_return_null(ctx);
}
int RglCtxVertex3dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->Vertex3dv(v);
	return rpc_return_null(ctx);
}
int RglCtxVertex3f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat x = rva_arg(vl, GLfloat);
	GLfloat y = rva_arg(vl, GLfloat);
	GLfloat z = rva_arg(vl, GLfloat);
	context->Vertex3f(x, y, z);
	return rpc_return_null(ctx);
}
int RglCtxVertex3fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->Vertex3fv(v);
	return rpc_return_null(ctx);
}
int RglCtxVertex3i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	GLint z = rva_arg(vl, GLint);
	context->Vertex3i(x, y, z);
	return rpc_return_null(ctx);
}
int RglCtxVertex3iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLint *v = rva_arg(vl, const GLint *);
	context->Vertex3iv(v);
	return rpc_return_null(ctx);
}
int RglCtxVertex3s(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLshort x = rva_arg(vl, GLshort);
	GLshort y = rva_arg(vl, GLshort);
	GLshort z = rva_arg(vl, GLshort);
	context->Vertex3s(x, y, z);
	return rpc_return_null(ctx);
}
int RglCtxVertex3sv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->Vertex3sv(v);
	return rpc_return_null(ctx);
}
int RglCtxVertex4d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble x = rva_arg(vl, GLdouble);
	GLdouble y = rva_arg(vl, GLdouble);
	GLdouble z = rva_arg(vl, GLdouble);
	GLdouble w = rva_arg(vl, GLdouble);
	context->Vertex4d(x, y, z, w);
	return rpc_return_null(ctx);
}
int RglCtxVertex4dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->Vertex4dv(v);
	return rpc_return_null(ctx);
}
int RglCtxVertex4f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat x = rva_arg(vl, GLfloat);
	GLfloat y = rva_arg(vl, GLfloat);
	GLfloat z = rva_arg(vl, GLfloat);
	GLfloat w = rva_arg(vl, GLfloat);
	context->Vertex4f(x, y, z, w);
	return rpc_return_null(ctx);
}
int RglCtxVertex4fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->Vertex4fv(v);
	return rpc_return_null(ctx);
}
int RglCtxVertex4i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	GLint z = rva_arg(vl, GLint);
	GLint w = rva_arg(vl, GLint);
	context->Vertex4i(x, y, z, w);
	return rpc_return_null(ctx);
}
int RglCtxVertex4iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLint *v = rva_arg(vl, const GLint *);
	context->Vertex4iv(v);
	return rpc_return_null(ctx);
}
int RglCtxVertex4s(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLshort x = rva_arg(vl, GLshort);
	GLshort y = rva_arg(vl, GLshort);
	GLshort z = rva_arg(vl, GLshort);
	GLshort w = rva_arg(vl, GLshort);
	context->Vertex4s(x, y, z, w);
	return rpc_return_null(ctx);
}
int RglCtxVertex4sv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->Vertex4sv(v);
	return rpc_return_null(ctx);
}
int RglCtxVertexArrayAttribBinding(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint vaobj = rva_arg(vl, GLuint);
	GLuint attribindex = rva_arg(vl, GLuint);
	GLuint bindingindex = rva_arg(vl, GLuint);
	context->VertexArrayAttribBinding(vaobj, attribindex, bindingindex);
	return rpc_return_null(ctx);
}
int RglCtxVertexArrayAttribFormat(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint vaobj = rva_arg(vl, GLuint);
	GLuint attribindex = rva_arg(vl, GLuint);
	GLint size = rva_arg(vl, GLint);
	GLenum type = rva_arg(vl, GLenum);
	bool_t normalized = rva_arg(vl, bool_t);
	GLuint relativeoffset = rva_arg(vl, GLuint);
	context->VertexArrayAttribFormat(vaobj, attribindex, size, type, normalized, relativeoffset);
	return rpc_return_null(ctx);
}
int RglCtxVertexArrayAttribIFormat(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint vaobj = rva_arg(vl, GLuint);
	GLuint attribindex = rva_arg(vl, GLuint);
	GLint size = rva_arg(vl, GLint);
	GLenum type = rva_arg(vl, GLenum);
	GLuint relativeoffset = rva_arg(vl, GLuint);
	context->VertexArrayAttribIFormat(vaobj, attribindex, size, type, relativeoffset);
	return rpc_return_null(ctx);
}
int RglCtxVertexArrayAttribLFormat(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint vaobj = rva_arg(vl, GLuint);
	GLuint attribindex = rva_arg(vl, GLuint);
	GLint size = rva_arg(vl, GLint);
	GLenum type = rva_arg(vl, GLenum);
	GLuint relativeoffset = rva_arg(vl, GLuint);
	context->VertexArrayAttribLFormat(vaobj, attribindex, size, type, relativeoffset);
	return rpc_return_null(ctx);
}
int RglCtxVertexArrayBindingDivisor(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint vaobj = rva_arg(vl, GLuint);
	GLuint bindingindex = rva_arg(vl, GLuint);
	GLuint divisor = rva_arg(vl, GLuint);
	context->VertexArrayBindingDivisor(vaobj, bindingindex, divisor);
	return rpc_return_null(ctx);
}
int RglCtxVertexArrayElementBuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint vaobj = rva_arg(vl, GLuint);
	GLuint buffer = rva_arg(vl, GLuint);
	context->VertexArrayElementBuffer(vaobj, buffer);
	return rpc_return_null(ctx);
}
int RglCtxVertexArrayVertexBuffer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint vaobj = rva_arg(vl, GLuint);
	GLuint bindingindex = rva_arg(vl, GLuint);
	GLuint buffer = rva_arg(vl, GLuint);
	uint32_t offset = rva_arg(vl, uint32_t);
	GLsizei stride = rva_arg(vl, GLsizei);
	context->VertexArrayVertexBuffer(vaobj, bindingindex, buffer, offset, stride);
	return rpc_return_null(ctx);
}
int RglCtxVertexArrayVertexBuffers(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint vaobj = rva_arg(vl, GLuint);
	GLuint first = rva_arg(vl, GLuint);
	GLsizei count = rva_arg(vl, GLsizei);
	const slice_t /*GLuint*/ buffers = rva_arg(vl, slice_t);
	const slice_t /*GLintptr*/ _offsets = rva_arg(vl, slice_t);
	const slice_t /*GLsizei*/ strides = rva_arg(vl, slice_t);
	size_t *offsets = slice_to_sizes(_offsets, malloc(sizeof(size_t) * _offsets.size));
	context->VertexArrayVertexBuffers(vaobj, first, count, buffers.p, (const GLintptr *)(offsets), strides.p);
	free(offsets);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib1d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLdouble x = rva_arg(vl, GLdouble);
	context->VertexAttrib1d(index, x);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib1dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->VertexAttrib1dv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib1f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLfloat x = rva_arg(vl, GLfloat);
	context->VertexAttrib1f(index, x);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib1fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->VertexAttrib1fv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib1s(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLshort x = rva_arg(vl, GLshort);
	context->VertexAttrib1s(index, x);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib1sv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->VertexAttrib1sv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib2d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLdouble x = rva_arg(vl, GLdouble);
	GLdouble y = rva_arg(vl, GLdouble);
	context->VertexAttrib2d(index, x, y);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib2dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->VertexAttrib2dv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib2f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLfloat x = rva_arg(vl, GLfloat);
	GLfloat y = rva_arg(vl, GLfloat);
	context->VertexAttrib2f(index, x, y);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib2fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->VertexAttrib2fv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib2s(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLshort x = rva_arg(vl, GLshort);
	GLshort y = rva_arg(vl, GLshort);
	context->VertexAttrib2s(index, x, y);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib2sv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->VertexAttrib2sv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib3d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLdouble x = rva_arg(vl, GLdouble);
	GLdouble y = rva_arg(vl, GLdouble);
	GLdouble z = rva_arg(vl, GLdouble);
	context->VertexAttrib3d(index, x, y, z);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib3dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->VertexAttrib3dv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib3f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLfloat x = rva_arg(vl, GLfloat);
	GLfloat y = rva_arg(vl, GLfloat);
	GLfloat z = rva_arg(vl, GLfloat);
	context->VertexAttrib3f(index, x, y, z);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib3fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->VertexAttrib3fv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib3s(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLshort x = rva_arg(vl, GLshort);
	GLshort y = rva_arg(vl, GLshort);
	GLshort z = rva_arg(vl, GLshort);
	context->VertexAttrib3s(index, x, y, z);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib3sv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->VertexAttrib3sv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib4Nbv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLbyte *v = rva_arg(vl, const GLbyte *);
	context->VertexAttrib4Nbv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib4Niv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLint *v = rva_arg(vl, const GLint *);
	context->VertexAttrib4Niv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib4Nsv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->VertexAttrib4Nsv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib4Nub(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLubyte x = rva_arg(vl, GLubyte);
	GLubyte y = rva_arg(vl, GLubyte);
	GLubyte z = rva_arg(vl, GLubyte);
	GLubyte w = rva_arg(vl, GLubyte);
	context->VertexAttrib4Nub(index, x, y, z, w);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib4Nubv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLubyte *v = rva_arg(vl, const GLubyte *);
	context->VertexAttrib4Nubv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib4Nuiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLuint *v = rva_arg(vl, const GLuint *);
	context->VertexAttrib4Nuiv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib4Nusv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLushort *v = rva_arg(vl, const GLushort *);
	context->VertexAttrib4Nusv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib4bv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLbyte *v = rva_arg(vl, const GLbyte *);
	context->VertexAttrib4bv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib4d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLdouble x = rva_arg(vl, GLdouble);
	GLdouble y = rva_arg(vl, GLdouble);
	GLdouble z = rva_arg(vl, GLdouble);
	GLdouble w = rva_arg(vl, GLdouble);
	context->VertexAttrib4d(index, x, y, z, w);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib4dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->VertexAttrib4dv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib4f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLfloat x = rva_arg(vl, GLfloat);
	GLfloat y = rva_arg(vl, GLfloat);
	GLfloat z = rva_arg(vl, GLfloat);
	GLfloat w = rva_arg(vl, GLfloat);
	context->VertexAttrib4f(index, x, y, z, w);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib4fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->VertexAttrib4fv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib4iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLint *v = rva_arg(vl, const GLint *);
	context->VertexAttrib4iv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib4s(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLshort x = rva_arg(vl, GLshort);
	GLshort y = rva_arg(vl, GLshort);
	GLshort z = rva_arg(vl, GLshort);
	GLshort w = rva_arg(vl, GLshort);
	context->VertexAttrib4s(index, x, y, z, w);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib4sv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->VertexAttrib4sv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib4ubv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLubyte *v = rva_arg(vl, const GLubyte *);
	context->VertexAttrib4ubv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib4uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLuint *v = rva_arg(vl, const GLuint *);
	context->VertexAttrib4uiv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttrib4usv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLushort *v = rva_arg(vl, const GLushort *);
	context->VertexAttrib4usv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribBinding(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint attribindex = rva_arg(vl, GLuint);
	GLuint bindingindex = rva_arg(vl, GLuint);
	context->VertexAttribBinding(attribindex, bindingindex);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribDivisor(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLuint divisor = rva_arg(vl, GLuint);
	context->VertexAttribDivisor(index, divisor);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribFormat(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint attribindex = rva_arg(vl, GLuint);
	GLint size = rva_arg(vl, GLint);
	GLenum type = rva_arg(vl, GLenum);
	bool_t normalized = rva_arg(vl, bool_t);
	GLuint relativeoffset = rva_arg(vl, GLuint);
	context->VertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribI1i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLint x = rva_arg(vl, GLint);
	context->VertexAttribI1i(index, x);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribI1iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLint *v = rva_arg(vl, const GLint *);
	context->VertexAttribI1iv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribI1ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLuint x = rva_arg(vl, GLuint);
	context->VertexAttribI1ui(index, x);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribI1uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLuint *v = rva_arg(vl, const GLuint *);
	context->VertexAttribI1uiv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribI2i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	context->VertexAttribI2i(index, x, y);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribI2iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLint *v = rva_arg(vl, const GLint *);
	context->VertexAttribI2iv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribI2ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLuint x = rva_arg(vl, GLuint);
	GLuint y = rva_arg(vl, GLuint);
	context->VertexAttribI2ui(index, x, y);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribI2uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLuint *v = rva_arg(vl, const GLuint *);
	context->VertexAttribI2uiv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribI3i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	GLint z = rva_arg(vl, GLint);
	context->VertexAttribI3i(index, x, y, z);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribI3iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLint *v = rva_arg(vl, const GLint *);
	context->VertexAttribI3iv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribI3ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLuint x = rva_arg(vl, GLuint);
	GLuint y = rva_arg(vl, GLuint);
	GLuint z = rva_arg(vl, GLuint);
	context->VertexAttribI3ui(index, x, y, z);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribI3uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLuint *v = rva_arg(vl, const GLuint *);
	context->VertexAttribI3uiv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribI4bv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLbyte *v = rva_arg(vl, const GLbyte *);
	context->VertexAttribI4bv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribI4i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	GLint z = rva_arg(vl, GLint);
	GLint w = rva_arg(vl, GLint);
	context->VertexAttribI4i(index, x, y, z, w);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribI4iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLint *v = rva_arg(vl, const GLint *);
	context->VertexAttribI4iv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribI4sv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->VertexAttribI4sv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribI4ubv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLubyte *v = rva_arg(vl, const GLubyte *);
	context->VertexAttribI4ubv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribI4ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLuint x = rva_arg(vl, GLuint);
	GLuint y = rva_arg(vl, GLuint);
	GLuint z = rva_arg(vl, GLuint);
	GLuint w = rva_arg(vl, GLuint);
	context->VertexAttribI4ui(index, x, y, z, w);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribI4uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLuint *v = rva_arg(vl, const GLuint *);
	context->VertexAttribI4uiv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribI4usv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLushort *v = rva_arg(vl, const GLushort *);
	context->VertexAttribI4usv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribIFormat(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint attribindex = rva_arg(vl, GLuint);
	GLint size = rva_arg(vl, GLint);
	GLenum type = rva_arg(vl, GLenum);
	GLuint relativeoffset = rva_arg(vl, GLuint);
	context->VertexAttribIFormat(attribindex, size, type, relativeoffset);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribIPointer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLint size = rva_arg(vl, GLint);
	GLenum type = rva_arg(vl, GLenum);
	GLsizei stride = rva_arg(vl, GLsizei);
	const void *pointer = rva_arg(vl, const void *);
	context->VertexAttribIPointer(index, size, type, stride, pointer);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribL1d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLdouble x = rva_arg(vl, GLdouble);
	context->VertexAttribL1d(index, x);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribL1dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->VertexAttribL1dv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribL2d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLdouble x = rva_arg(vl, GLdouble);
	GLdouble y = rva_arg(vl, GLdouble);
	context->VertexAttribL2d(index, x, y);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribL2dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->VertexAttribL2dv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribL3d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLdouble x = rva_arg(vl, GLdouble);
	GLdouble y = rva_arg(vl, GLdouble);
	GLdouble z = rva_arg(vl, GLdouble);
	context->VertexAttribL3d(index, x, y, z);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribL3dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->VertexAttribL3dv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribL4d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLdouble x = rva_arg(vl, GLdouble);
	GLdouble y = rva_arg(vl, GLdouble);
	GLdouble z = rva_arg(vl, GLdouble);
	GLdouble w = rva_arg(vl, GLdouble);
	context->VertexAttribL4d(index, x, y, z, w);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribL4dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->VertexAttribL4dv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribLFormat(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint attribindex = rva_arg(vl, GLuint);
	GLint size = rva_arg(vl, GLint);
	GLenum type = rva_arg(vl, GLenum);
	GLuint relativeoffset = rva_arg(vl, GLuint);
	context->VertexAttribLFormat(attribindex, size, type, relativeoffset);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribLPointer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLint size = rva_arg(vl, GLint);
	GLenum type = rva_arg(vl, GLenum);
	GLsizei stride = rva_arg(vl, GLsizei);
	const void *pointer = rva_arg(vl, const void *);
	context->VertexAttribLPointer(index, size, type, stride, pointer);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribP1ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLenum type = rva_arg(vl, GLenum);
	bool_t normalized = rva_arg(vl, bool_t);
	GLuint value = rva_arg(vl, GLuint);
	context->VertexAttribP1ui(index, type, normalized, value);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribP1uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLenum type = rva_arg(vl, GLenum);
	bool_t normalized = rva_arg(vl, bool_t);
	const GLuint *value = rva_arg(vl, const GLuint *);
	context->VertexAttribP1uiv(index, type, normalized, value);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribP2ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLenum type = rva_arg(vl, GLenum);
	bool_t normalized = rva_arg(vl, bool_t);
	GLuint value = rva_arg(vl, GLuint);
	context->VertexAttribP2ui(index, type, normalized, value);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribP2uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLenum type = rva_arg(vl, GLenum);
	bool_t normalized = rva_arg(vl, bool_t);
	const GLuint *value = rva_arg(vl, const GLuint *);
	context->VertexAttribP2uiv(index, type, normalized, value);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribP3ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLenum type = rva_arg(vl, GLenum);
	bool_t normalized = rva_arg(vl, bool_t);
	GLuint value = rva_arg(vl, GLuint);
	context->VertexAttribP3ui(index, type, normalized, value);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribP3uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLenum type = rva_arg(vl, GLenum);
	bool_t normalized = rva_arg(vl, bool_t);
	const GLuint *value = rva_arg(vl, const GLuint *);
	context->VertexAttribP3uiv(index, type, normalized, value);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribP4ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLenum type = rva_arg(vl, GLenum);
	bool_t normalized = rva_arg(vl, bool_t);
	GLuint value = rva_arg(vl, GLuint);
	context->VertexAttribP4ui(index, type, normalized, value);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribP4uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLenum type = rva_arg(vl, GLenum);
	bool_t normalized = rva_arg(vl, bool_t);
	const GLuint *value = rva_arg(vl, const GLuint *);
	context->VertexAttribP4uiv(index, type, normalized, value);
	return rpc_return_null(ctx);
}
int RglCtxVertexAttribPointer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLint size = rva_arg(vl, GLint);
	GLenum type = rva_arg(vl, GLenum);
	bool_t normalized = rva_arg(vl, bool_t);
	GLsizei stride = rva_arg(vl, GLsizei);
	const void *pointer = rva_arg(vl, const void *);
	context->VertexAttribPointer(index, size, type, normalized, stride, pointer);
	return rpc_return_null(ctx);
}
int RglCtxVertexBindingDivisor(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint bindingindex = rva_arg(vl, GLuint);
	GLuint divisor = rva_arg(vl, GLuint);
	context->VertexBindingDivisor(bindingindex, divisor);
	return rpc_return_null(ctx);
}
int RglCtxVertexP2ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	GLuint value = rva_arg(vl, GLuint);
	context->VertexP2ui(type, value);
	return rpc_return_null(ctx);
}
int RglCtxVertexP2uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	const GLuint *value = rva_arg(vl, const GLuint *);
	context->VertexP2uiv(type, value);
	return rpc_return_null(ctx);
}
int RglCtxVertexP3ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	GLuint value = rva_arg(vl, GLuint);
	context->VertexP3ui(type, value);
	return rpc_return_null(ctx);
}
int RglCtxVertexP3uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	const GLuint *value = rva_arg(vl, const GLuint *);
	context->VertexP3uiv(type, value);
	return rpc_return_null(ctx);
}
int RglCtxVertexP4ui(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	GLuint value = rva_arg(vl, GLuint);
	context->VertexP4ui(type, value);
	return rpc_return_null(ctx);
}
int RglCtxVertexP4uiv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLenum type = rva_arg(vl, GLenum);
	const GLuint *value = rva_arg(vl, const GLuint *);
	context->VertexP4uiv(type, value);
	return rpc_return_null(ctx);
}
int RglCtxVertexPointer(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint size = rva_arg(vl, GLint);
	GLenum type = rva_arg(vl, GLenum);
	GLsizei stride = rva_arg(vl, GLsizei);
	const void *pointer = rva_arg(vl, const void *);
	context->VertexPointer(size, type, stride, pointer);
	return rpc_return_null(ctx);
}
int RglCtxViewport(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	GLsizei width = rva_arg(vl, GLsizei);
	GLsizei height = rva_arg(vl, GLsizei);
	context->Viewport(x, y, width, height);
	return rpc_return_null(ctx);
}
int RglCtxViewportArrayv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint first = rva_arg(vl, GLuint);
	GLsizei count = rva_arg(vl, GLsizei);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->ViewportArrayv(first, count, v);
	return rpc_return_null(ctx);
}
int RglCtxViewportIndexedf(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	GLfloat x = rva_arg(vl, GLfloat);
	GLfloat y = rva_arg(vl, GLfloat);
	GLfloat w = rva_arg(vl, GLfloat);
	GLfloat h = rva_arg(vl, GLfloat);
	context->ViewportIndexedf(index, x, y, w, h);
	return rpc_return_null(ctx);
}
int RglCtxViewportIndexedfv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLuint index = rva_arg(vl, GLuint);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->ViewportIndexedfv(index, v);
	return rpc_return_null(ctx);
}
int RglCtxWaitSync(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLsync sync = rva_arg(vl, GLsync);
	GLbitfield flags = rva_arg(vl, GLbitfield);
	GLuint64 timeout = rva_arg(vl, GLuint64);
	context->WaitSync(sync, flags, timeout);
	return rpc_return_null(ctx);
}
int RglCtxWindowPos2d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble x = rva_arg(vl, GLdouble);
	GLdouble y = rva_arg(vl, GLdouble);
	context->WindowPos2d(x, y);
	return rpc_return_null(ctx);
}
int RglCtxWindowPos2dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->WindowPos2dv(v);
	return rpc_return_null(ctx);
}
int RglCtxWindowPos2f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat x = rva_arg(vl, GLfloat);
	GLfloat y = rva_arg(vl, GLfloat);
	context->WindowPos2f(x, y);
	return rpc_return_null(ctx);
}
int RglCtxWindowPos2fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->WindowPos2fv(v);
	return rpc_return_null(ctx);
}
int RglCtxWindowPos2i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	context->WindowPos2i(x, y);
	return rpc_return_null(ctx);
}
int RglCtxWindowPos2iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLint *v = rva_arg(vl, const GLint *);
	context->WindowPos2iv(v);
	return rpc_return_null(ctx);
}
int RglCtxWindowPos2s(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLshort x = rva_arg(vl, GLshort);
	GLshort y = rva_arg(vl, GLshort);
	context->WindowPos2s(x, y);
	return rpc_return_null(ctx);
}
int RglCtxWindowPos2sv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->WindowPos2sv(v);
	return rpc_return_null(ctx);
}
int RglCtxWindowPos3d(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLdouble x = rva_arg(vl, GLdouble);
	GLdouble y = rva_arg(vl, GLdouble);
	GLdouble z = rva_arg(vl, GLdouble);
	context->WindowPos3d(x, y, z);
	return rpc_return_null(ctx);
}
int RglCtxWindowPos3dv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLdouble *v = rva_arg(vl, const GLdouble *);
	context->WindowPos3dv(v);
	return rpc_return_null(ctx);
}
int RglCtxWindowPos3f(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLfloat x = rva_arg(vl, GLfloat);
	GLfloat y = rva_arg(vl, GLfloat);
	GLfloat z = rva_arg(vl, GLfloat);
	context->WindowPos3f(x, y, z);
	return rpc_return_null(ctx);
}
int RglCtxWindowPos3fv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLfloat *v = rva_arg(vl, const GLfloat *);
	context->WindowPos3fv(v);
	return rpc_return_null(ctx);
}
int RglCtxWindowPos3i(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLint x = rva_arg(vl, GLint);
	GLint y = rva_arg(vl, GLint);
	GLint z = rva_arg(vl, GLint);
	context->WindowPos3i(x, y, z);
	return rpc_return_null(ctx);
}
int RglCtxWindowPos3iv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLint *v = rva_arg(vl, const GLint *);
	context->WindowPos3iv(v);
	return rpc_return_null(ctx);
}
int RglCtxWindowPos3s(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	GLshort x = rva_arg(vl, GLshort);
	GLshort y = rva_arg(vl, GLshort);
	GLshort z = rva_arg(vl, GLshort);
	context->WindowPos3s(x, y, z);
	return rpc_return_null(ctx);
}
int RglCtxWindowPos3sv(rpc_context *ctx){
	rva_list vl = ctx->args;
	GladGLContext *context = rva_ptr(vl, GladGLContext);
	const GLshort *v = rva_arg(vl, const GLshort *);
	context->WindowPos3sv(v);
	return rpc_return_null(ctx);
}

