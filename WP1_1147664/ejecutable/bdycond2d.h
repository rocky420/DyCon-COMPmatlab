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

#ifndef __bdycond2d_h
#define __bdycond2d_h 1

#ifdef __cplusplus
extern "C" {
#endif

#include "libmatlb.h"

extern void InitializeModule_bdycond2d(void);
extern void TerminateModule_bdycond2d(void);
extern _mexLocalFunctionTable _local_function_table_bdycond2d;

extern mxArray * mlfBdycond2d(mxArray * c1,
                              mxArray * X,
                              mxArray * Y,
                              mxArray * G,
                              mxArray * r0,
                              mxArray * h,
                              mxArray * J);
extern void mlxBdycond2d(int nlhs,
                         mxArray * plhs[],
                         int nrhs,
                         mxArray * prhs[]);

#ifdef __cplusplus
}
#endif

#endif
