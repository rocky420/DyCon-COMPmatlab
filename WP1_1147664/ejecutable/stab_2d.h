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

#ifndef __stab_2d_h
#define __stab_2d_h 1

#ifdef __cplusplus
extern "C" {
#endif

#include "libmatlb.h"

extern void InitializeModule_stab_2d(void);
extern void TerminateModule_stab_2d(void);
extern _mexLocalFunctionTable _local_function_table_stab_2d;

extern mxArray * mlfNStab_2d(int nargout, mlfVarargoutList * varargout, ...);
extern mxArray * mlfStab_2d(mlfVarargoutList * varargout, ...);
extern void mlfVStab_2d(mxArray * synthetic_varargin_argument, ...);
extern void mlxStab_2d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]);

#ifdef __cplusplus
}
#endif

#endif
