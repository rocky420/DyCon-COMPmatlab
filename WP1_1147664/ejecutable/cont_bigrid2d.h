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

#ifndef __cont_bigrid2d_h
#define __cont_bigrid2d_h 1

#ifdef __cplusplus
extern "C" {
#endif

#include "libmatlb.h"

extern void InitializeModule_cont_bigrid2d(void);
extern void TerminateModule_cont_bigrid2d(void);
extern _mexLocalFunctionTable _local_function_table_cont_bigrid2d;

extern mxArray * mlfCont_bigrid2d(mxArray * * Test,
                                  mxArray * * temps,
                                  mxArray * * ek01fg,
                                  mxArray * * ek11fg,
                                  mxArray * a,
                                  mxArray * b,
                                  mxArray * J,
                                  mxArray * mu,
                                  mxArray * T,
                                  mxArray * epstest,
                                  mxArray * U01,
                                  mxArray * U11);
extern void mlxCont_bigrid2d(int nlhs,
                             mxArray * plhs[],
                             int nrhs,
                             mxArray * prhs[]);

#ifdef __cplusplus
}
#endif

#endif
