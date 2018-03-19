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

#ifndef __stab2dcalcul_h
#define __stab2dcalcul_h 1

#ifdef __cplusplus
extern "C" {
#endif

#include "libmatlb.h"

extern void InitializeModule_stab2dcalcul(void);
extern void TerminateModule_stab2dcalcul(void);
extern _mexLocalFunctionTable _local_function_table_stab2dcalcul;

extern mxArray * mlfStab2dcalcul(mxArray * * temps,
                                 mxArray * a,
                                 mxArray * b,
                                 mxArray * J,
                                 mxArray * mu,
                                 mxArray * T,
                                 mxArray * coeffdamp,
                                 mxArray * dampband,
                                 mxArray * viscos,
                                 mxArray * U01,
                                 mxArray * U11);
extern void mlxStab2dcalcul(int nlhs,
                            mxArray * plhs[],
                            int nrhs,
                            mxArray * prhs[]);

#ifdef __cplusplus
}
#endif

#endif
