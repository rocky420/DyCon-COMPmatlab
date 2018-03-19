/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:58 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */

#ifndef MLF_V2
#define MLF_V2 1
#endif

#ifndef __dibujo_sol_h
#define __dibujo_sol_h 1

#ifdef __cplusplus
extern "C" {
#endif

#include "libmatlb.h"

extern void InitializeModule_dibujo_sol(void);
extern void TerminateModule_dibujo_sol(void);
extern _mexLocalFunctionTable _local_function_table_dibujo_sol;

extern mxArray * mlfDibujo_sol(mxArray * n,
                               mxArray * l,
                               mxArray * a,
                               mxArray * b,
                               mxArray * t,
                               mxArray * phix,
                               mxArray * u0,
                               mxArray * u1);
extern void mlxDibujo_sol(int nlhs,
                          mxArray * plhs[],
                          int nrhs,
                          mxArray * prhs[]);

#ifdef __cplusplus
}
#endif

#endif
