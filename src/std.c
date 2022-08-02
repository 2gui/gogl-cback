
#include <stdlib.h>
#include <string.h>
#include <Crpc.h>

#include "macros.h"
#include "std.h"

int Rmalloc(rpc_context *ctx){
	rva_list vl = ctx->args;
	uint64_t size = rva_arg(vl, uint64_t);
	void *ptr = malloc(size);
	return rpc_return_ptr(ctx, ptr);
}

int Rcalloc(rpc_context *ctx){
	rva_list vl = ctx->args;
	uint64_t nitems = rva_arg(vl, uint64_t), size = rva_arg(vl, uint64_t);
	void *ptr = calloc(nitems, size);
	return rpc_return_ptr(ctx, ptr);
}

int Rrealloc(rpc_context *ctx){
	rva_list vl = ctx->args;
	void *ptr = rva_ptr(vl, void);
	uint64_t size = rva_arg(vl, uint64_t);
	ptr = realloc(ptr, size);
	return rpc_return_ptr(ctx, ptr);
}

int Rfree(rpc_context *ctx){
	rva_list vl = ctx->args;
	void *ptr = rva_ptr(vl, void);
	free(ptr);
	return rpc_return_null(ctx);
}

int Rmemcpy(rpc_context *ctx){
	rva_list vl = ctx->args;
	void *dst = rva_ptr(vl, void), *src = rva_ptr(vl, void);
	uint64_t size = rva_arg(vl, uint64_t);
	memcpy(dst, src, size);
	return rpc_return_null(ctx);
}

int Rmemmove(rpc_context *ctx){
	rva_list vl = ctx->args;
	void *dst = rva_ptr(vl, void), *src = rva_ptr(vl, void);
	uint64_t size = rva_arg(vl, uint64_t);
	memcpy(dst, src, size);
	return rpc_return_null(ctx);
}

int Rmemset(rpc_context *ctx){
	rva_list vl = ctx->args;
	void *str = rva_ptr(vl, void);
	uint8_t chr = rva_arg(vl, uint8_t);
	uint64_t size = rva_arg(vl, uint64_t);
	memset(str, chr, size);
	return rpc_return_null(ctx);
}

