
#ifndef __GOGL_MACROS_H__
#define __GOGL_MACROS_H__

#define rva_ptr(l, t) ((t*)rva_arg(l, uint64_t))
#define rva_ptr_ref(l, t) ((t**)rva_arg(l, uint64_t*))
#define rpc_return_ptr(ctx, ptr) rpc_return_uint64(ctx, (uint64_t)(ptr))
#define rpc_return_ptr_res(ctx, res) rpc_return_uint64(ctx, (uint64_t*)(res))

#endif // __GOGL_MACROS_H__
