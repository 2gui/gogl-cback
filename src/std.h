
#ifndef __GOGL_STD_H__
#define __GOGL_STD_H__

#include <Crpc.h>

int Rmalloc(rpc_context *ctx);
int Rcalloc(rpc_context *ctx);
int Rrealloc(rpc_context *ctx);
int Rfree(rpc_context *ctx);
int Rmemcpy(rpc_context *ctx);
int Rmemmove(rpc_context *ctx);
int Rmemset(rpc_context *ctx);


#endif // __GOGL_STD_H__
