/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "nestdiss.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;

void InitializeModule_nestdiss(void) {
    _mxarray0_ = mclInitializeDouble(1.0);
    _mxarray1_ = mclInitializeDouble(2.0);
}

void TerminateModule_nestdiss(void) {
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mnestdiss(mxArray * * p,
                           int nargout_,
                           mxArray * G_in,
                           mxArray * p_in);

_mexLocalFunctionTable _local_function_table_nestdiss
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNestdiss" contains the normal interface for the "nestdiss"
 * M-function from file "c:\matlab6p5\toolbox\matlab\demos\nestdiss.m" (lines
 * 1-40). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfNestdiss(mxArray * * p, mxArray * G_in, mxArray * p_in) {
    int nargout = 1;
    mxArray * G = NULL;
    mxArray * p__ = NULL;
    mlfEnterNewContext(1, 2, p, G_in, p_in);
    if (p != NULL) {
        ++nargout;
    }
    G = Mnestdiss(&p__, nargout, G_in, p_in);
    mlfRestorePreviousContext(1, 2, p, G_in, p_in);
    if (p != NULL) {
        mclCopyOutputArg(p, p__);
    } else {
        mxDestroyArray(p__);
    }
    return mlfReturnValue(G);
}

/*
 * The function "mlxNestdiss" contains the feval interface for the "nestdiss"
 * M-function from file "c:\matlab6p5\toolbox\matlab\demos\nestdiss.m" (lines
 * 1-40). The feval function calls the implementation version of nestdiss
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxNestdiss(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: nestdiss Line: 1 Column:"
            " 1 The function \"nestdiss\" was called with m"
            "ore than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: nestdiss Line: 1 Column:"
            " 1 The function \"nestdiss\" was called with m"
            "ore than the declared number of inputs (2)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 2 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 2; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 2, mprhs[0], mprhs[1]);
    mplhs[0] = Mnestdiss(&mplhs[1], nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "Mnestdiss" is the implementation version of the "nestdiss"
 * M-function from file "c:\matlab6p5\toolbox\matlab\demos\nestdiss.m" (lines
 * 1-40). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [G,p] = nestdiss(G,p)
 */
static mxArray * Mnestdiss(mxArray * * p,
                           int nargout_,
                           mxArray * G_in,
                           mxArray * p_in) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_nestdiss);
    mxArray * G = NULL;
    mxArray * n2 = NULL;
    mxArray * GS = NULL;
    mxArray * G2 = NULL;
    mxArray * G1 = NULL;
    mxArray * m2 = NULL;
    mxArray * n = NULL;
    mxArray * m = NULL;
    mclCopyInputArg(&G, G_in);
    mclCopyInputArg(p, p_in);
    /*
     * %NESTDISS Recursive function used by NESTED.
     * %   Generates a nested dissection numbering of a rectangular grid.
     * %   Do not use directly; see NESTED instead.
     * 
     * %   C. Moler, 1990.
     * %   Copyright 1984-2002 The MathWorks, Inc. 
     * %   $Revision: 5.8 $  $Date: 2002/04/08 20:04:48 $
     * 
     * [m,n] = size(G);
     */
    mlfSize(mlfVarargout(&m, &n, NULL), mclVa(G, "G"), NULL);
    /*
     * if (m < 1) | (n < 1)
     */
    {
        mxArray * a_ = mclInitialize(mclLt(mclVv(m, "m"), _mxarray0_));
        if (mlfTobool(a_)
            || mlfTobool(mclOr(a_, mclLt(mclVv(n, "n"), _mxarray0_)))) {
            mxDestroyArray(a_);
        /*
         * return
         * % Number a single row or column.
         * elseif (m == 1)
         */
        } else {
            mxDestroyArray(a_);
            if (mclEqBool(mclVv(m, "m"), _mxarray0_)) {
                /*
                 * G = [p+1:p+n];
                 */
                mlfAssign(
                  &G,
                  mlfColon(
                    mclPlus(mclVa(*p, "p"), _mxarray0_),
                    mclPlus(mclVa(*p, "p"), mclVv(n, "n")),
                    NULL));
                /*
                 * p = p+n;
                 */
                mlfAssign(p, mclPlus(mclVa(*p, "p"), mclVv(n, "n")));
            /*
             * return
             * elseif (n == 1)
             */
            } else if (mclEqBool(mclVv(n, "n"), _mxarray0_)) {
                /*
                 * G = [p+1:p+m]';
                 */
                mlfAssign(
                  &G,
                  mlfCtranspose(
                    mlfColon(
                      mclPlus(mclVa(*p, "p"), _mxarray0_),
                      mclPlus(mclVa(*p, "p"), mclVv(m, "m")),
                      NULL)));
                /*
                 * p = p+m;
                 */
                mlfAssign(p, mclPlus(mclVa(*p, "p"), mclVv(m, "m")));
            /*
             * return
             * % Otherwise, split in half,
             * % number the two halves,
             * % then number the seperator.
             * elseif (m > n)
             */
            } else if (mclGtBool(mclVv(m, "m"), mclVv(n, "n"))) {
                /*
                 * m2 = fix((m+1)/2);
                 */
                mlfAssign(
                  &m2,
                  mlfFix(
                    mclMrdivide(
                      mclPlus(mclVv(m, "m"), _mxarray0_), _mxarray1_)));
                /*
                 * [G1,p] = nestdiss(G(1:m2-1,:),p);
                 */
                mlfAssign(
                  &G1,
                  mlfNestdiss(
                    p,
                    mclArrayRef2(
                      mclVa(G, "G"),
                      mlfColon(
                        _mxarray0_,
                        mclMinus(mclVv(m2, "m2"), _mxarray0_),
                        NULL),
                      mlfCreateColonIndex()),
                    mclVa(*p, "p")));
                /*
                 * [G2,p] = nestdiss(G(m2+1:m,:),p);
                 */
                mlfAssign(
                  &G2,
                  mlfNestdiss(
                    p,
                    mclArrayRef2(
                      mclVa(G, "G"),
                      mlfColon(
                        mclPlus(mclVv(m2, "m2"), _mxarray0_),
                        mclVv(m, "m"),
                        NULL),
                      mlfCreateColonIndex()),
                    mclVa(*p, "p")));
                /*
                 * [GS,p] = nestdiss(G(m2,:),p);
                 */
                mlfAssign(
                  &GS,
                  mlfNestdiss(
                    p,
                    mclArrayRef2(
                      mclVa(G, "G"), mclVv(m2, "m2"), mlfCreateColonIndex()),
                    mclVa(*p, "p")));
                /*
                 * G = [G1; GS; G2];
                 */
                mlfAssign(
                  &G,
                  mlfVertcat(
                    mclVv(G1, "G1"), mclVv(GS, "GS"), mclVv(G2, "G2"), NULL));
            /*
             * return
             * else % if (n >= m)
             */
            } else {
                /*
                 * n2 = fix((n+1)/2);
                 */
                mlfAssign(
                  &n2,
                  mlfFix(
                    mclMrdivide(
                      mclPlus(mclVv(n, "n"), _mxarray0_), _mxarray1_)));
                /*
                 * [G1,p] = nestdiss(G(:,1:n2-1),p);
                 */
                mlfAssign(
                  &G1,
                  mlfNestdiss(
                    p,
                    mclArrayRef2(
                      mclVa(G, "G"),
                      mlfCreateColonIndex(),
                      mlfColon(
                        _mxarray0_,
                        mclMinus(mclVv(n2, "n2"), _mxarray0_),
                        NULL)),
                    mclVa(*p, "p")));
                /*
                 * [G2,p] = nestdiss(G(:,n2+1:n),p);
                 */
                mlfAssign(
                  &G2,
                  mlfNestdiss(
                    p,
                    mclArrayRef2(
                      mclVa(G, "G"),
                      mlfCreateColonIndex(),
                      mlfColon(
                        mclPlus(mclVv(n2, "n2"), _mxarray0_),
                        mclVv(n, "n"),
                        NULL)),
                    mclVa(*p, "p")));
                /*
                 * [GS,p] = nestdiss(G(:,n2),p);
                 */
                mlfAssign(
                  &GS,
                  mlfNestdiss(
                    p,
                    mclArrayRef2(
                      mclVa(G, "G"), mlfCreateColonIndex(), mclVv(n2, "n2")),
                    mclVa(*p, "p")));
                /*
                 * G = [G1 GS G2];
                 */
                mlfAssign(
                  &G,
                  mlfHorzcat(
                    mclVv(G1, "G1"), mclVv(GS, "GS"), mclVv(G2, "G2"), NULL));
            }
        }
    /*
     * return
     * end
     */
    }
    mclValidateOutput(G, 1, nargout_, "G", "nestdiss");
    mclValidateOutput(*p, 2, nargout_, "p", "nestdiss");
    mxDestroyArray(m);
    mxDestroyArray(n);
    mxDestroyArray(m2);
    mxDestroyArray(G1);
    mxDestroyArray(G2);
    mxDestroyArray(GS);
    mxDestroyArray(n2);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return G;
}
