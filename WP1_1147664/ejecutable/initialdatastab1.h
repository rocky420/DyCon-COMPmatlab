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

#ifndef __initialdatastab1_h
#define __initialdatastab1_h 1

#ifdef __cplusplus
extern "C" {
#endif

#include "libmatlb.h"

extern void InitializeModule_initialdatastab1(void);
extern void TerminateModule_initialdatastab1(void);
extern _mexLocalFunctionTable _local_function_table_initialdatastab1;

extern mxArray * mlfNInitialdatastab1(int nargout,
                                      mlfVarargoutList * varargout,
                                      ...);
extern mxArray * mlfInitialdatastab1(mlfVarargoutList * varargout, ...);
extern void mlfVInitialdatastab1(mxArray * synthetic_varargin_argument, ...);
extern void mlxInitialdatastab1(int nlhs,
                                mxArray * plhs[],
                                int nrhs,
                                mxArray * prhs[]);

#ifdef __cplusplus
}
#endif

#endif
