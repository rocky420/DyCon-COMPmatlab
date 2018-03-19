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

#ifndef __stab1dcalcul_h
#define __stab1dcalcul_h 1

#ifdef __cplusplus
extern "C" {
#endif

#include "libmatlb.h"

extern void InitializeModule_stab1dcalcul(void);
extern void TerminateModule_stab1dcalcul(void);
extern _mexLocalFunctionTable _local_function_table_stab1dcalcul;

extern mxArray * mlfStab1dcalcul(mxArray * * temps,
                                 mxArray * a,
                                 mxArray * b,
                                 mxArray * J,
                                 mxArray * mu,
                                 mxArray * T,
                                 mxArray * coeffdamp,
                                 mxArray * dampa,
                                 mxArray * dampb,
                                 mxArray * viscos,
                                 mxArray * u0,
                                 mxArray * u1);
extern void mlxStab1dcalcul(int nlhs,
                            mxArray * plhs[],
                            int nrhs,
                            mxArray * prhs[]);

#ifdef __cplusplus
}
#endif

#endif
