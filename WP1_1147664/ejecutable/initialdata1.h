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

#ifndef __initialdata1_h
#define __initialdata1_h 1

#ifdef __cplusplus
extern "C" {
#endif

#include "libmatlb.h"

extern void InitializeModule_initialdata1(void);
extern void TerminateModule_initialdata1(void);
extern _mexLocalFunctionTable _local_function_table_initialdata1;

extern mxArray * mlfNInitialdata1(int nargout,
                                  mlfVarargoutList * varargout,
                                  ...);
extern mxArray * mlfInitialdata1(mlfVarargoutList * varargout, ...);
extern void mlfVInitialdata1(mxArray * synthetic_varargin_argument, ...);
extern void mlxInitialdata1(int nlhs,
                            mxArray * plhs[],
                            int nrhs,
                            mxArray * prhs[]);

#ifdef __cplusplus
}
#endif

#endif
