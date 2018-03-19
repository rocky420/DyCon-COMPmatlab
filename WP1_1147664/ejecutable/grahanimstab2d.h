/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */

#ifndef MLF_V2
#define MLF_V2 1
#endif

#ifndef __grahanimstab2d_h
#define __grahanimstab2d_h 1

#ifdef __cplusplus
extern "C" {
#endif

#include "libmatlb.h"

extern void InitializeModule_grahanimstab2d(void);
extern void TerminateModule_grahanimstab2d(void);
extern _mexLocalFunctionTable _local_function_table_grahanimstab2d;

extern mxArray * mlfNGrahanimstab2d(int nargout,
                                    mlfVarargoutList * varargout,
                                    ...);
extern mxArray * mlfGrahanimstab2d(mlfVarargoutList * varargout, ...);
extern void mlfVGrahanimstab2d(mxArray * synthetic_varargin_argument, ...);
extern void mlxGrahanimstab2d(int nlhs,
                              mxArray * plhs[],
                              int nrhs,
                              mxArray * prhs[]);

#ifdef __cplusplus
}
#endif

#endif
