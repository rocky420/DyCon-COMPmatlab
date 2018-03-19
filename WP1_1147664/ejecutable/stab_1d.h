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

#ifndef __stab_1d_h
#define __stab_1d_h 1

#ifdef __cplusplus
extern "C" {
#endif

#include "libmatlb.h"

extern void InitializeModule_stab_1d(void);
extern void TerminateModule_stab_1d(void);
extern _mexLocalFunctionTable _local_function_table_stab_1d;

extern mxArray * mlfNStab_1d(int nargout, mlfVarargoutList * varargout, ...);
extern mxArray * mlfStab_1d(mlfVarargoutList * varargout, ...);
extern void mlfVStab_1d(mxArray * synthetic_varargin_argument, ...);
extern void mlxStab_1d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]);

#ifdef __cplusplus
}
#endif

#endif
