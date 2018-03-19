/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "grdivk.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;
static mxArray * _mxarray3_;

void InitializeModule_grdivk(void) {
    _mxarray0_ = mclInitializeDouble(8.0);
    _mxarray1_ = mclInitializeDouble(1.0);
    _mxarray2_ = mclInitializeDouble(-1.0);
    _mxarray3_ = mclInitializeDouble(3.0);
}

void TerminateModule_grdivk(void) {
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mgrdivk(int nargout_, mxArray * G);

_mexLocalFunctionTable _local_function_table_grdivk
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfGrdivk" contains the normal interface for the "grdivk"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\grdivk.m" (lines 1-33). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfGrdivk(mxArray * G) {
    int nargout = 1;
    mxArray * K = NULL;
    mlfEnterNewContext(0, 1, G);
    K = Mgrdivk(nargout, G);
    mlfRestorePreviousContext(0, 1, G);
    return mlfReturnValue(K);
}

/*
 * The function "mlxGrdivk" contains the feval interface for the "grdivk"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\grdivk.m" (lines 1-33). The feval
 * function calls the implementation version of grdivk through this function.
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxGrdivk(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: grdivk Line: 1 Column: "
            "1 The function \"grdivk\" was called with mor"
            "e than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: grdivk Line: 1 Column: "
            "1 The function \"grdivk\" was called with mor"
            "e than the declared number of inputs (1)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 1 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 1; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 1, mprhs[0]);
    mplhs[0] = Mgrdivk(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mgrdivk" is the implementation version of the "grdivk"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\grdivk.m" (lines 1-33). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function [K] = grdivK(G)
 */
static mxArray * Mgrdivk(int nargout_, mxArray * G) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_grdivk);
    mxArray * K = NULL;
    mxArray * q = NULL;
    mxArray * Q = NULL;
    mxArray * k = NULL;
    mxArray * sa = NULL;
    mxArray * ja = NULL;
    mxArray * ia = NULL;
    mxArray * p = NULL;
    mxArray * n = NULL;
    mxArray * m = NULL;
    mclCopyArray(&G);
    /*
     * 
     * [m,n] = size(G);
     */
    mlfSize(mlfVarargout(&m, &n, NULL), mclVa(G, "G"), NULL);
    /*
     * 
     * % Constitution of the diagonals of A, B  
     * p = find(G);
     */
    mlfAssign(&p, mlfFind(NULL, NULL, mclVa(G, "G")));
    /*
     * ia = G(p);
     */
    mlfAssign(&ia, mclArrayRef1(mclVa(G, "G"), mclVv(p, "p")));
    /*
     * ja = ia;
     */
    mlfAssign(&ja, mclVv(ia, "ia"));
    /*
     * sa = 8.*ones(length(p),1);
     */
    mlfAssign(
      &sa,
      mclTimes(
        _mxarray0_,
        mlfOnes(mlfScalar(mclLengthInt(mclVv(p, "p"))), _mxarray1_, NULL)));
    /*
     * 
     * % for k = [nord sud ]
     * for k = [-1 1 -m m]
     */
    {
        mclForLoopIterator viter__;
        for (mclForStart(
               &viter__,
               mlfHorzcat(
                 _mxarray2_,
                 _mxarray1_,
                 mclUminus(mclVv(m, "m")),
                 mclVv(m, "m"),
                 NULL),
               NULL,
               NULL);
             mclForNext(&viter__, &k);
             ) {
            /*
             * Q = G(p+k);
             */
            mlfAssign(
              &Q,
              mclArrayRef1(
                mclVa(G, "G"), mclPlus(mclVv(p, "p"), mclVv(k, "k"))));
            /*
             * q = find(Q);
             */
            mlfAssign(&q, mlfFind(NULL, NULL, mclVv(Q, "Q")));
            /*
             * ia = [ia;G(p(q))];
             */
            mlfAssign(
              &ia,
              mlfVertcat(
                mclVv(ia, "ia"),
                mclArrayRef1(
                  mclVa(G, "G"), mclArrayRef1(mclVv(p, "p"), mclVv(q, "q"))),
                NULL));
            /*
             * ja = [ja;Q(q)];
             */
            mlfAssign(
              &ja,
              mlfVertcat(
                mclVv(ja, "ja"),
                mclArrayRef1(mclVv(Q, "Q"), mclVv(q, "q")),
                NULL));
            /*
             * sa = [sa;-ones(length(q),1)];
             */
            mlfAssign(
              &sa,
              mlfVertcat(
                mclVv(sa, "sa"),
                mclUminus(
                  mlfOnes(
                    mlfScalar(mclLengthInt(mclVv(q, "q"))), _mxarray1_, NULL)),
                NULL));
        /*
         * end   
         */
        }
        mclDestroyForLoopIterator(viter__);
    }
    /*
     * 
     * for k = [-m-1 -m+1 m-1 m+1]
     */
    {
        mclForLoopIterator viter__;
        for (mclForStart(
               &viter__,
               mlfHorzcat(
                 mclMinus(mclUminus(mclVv(m, "m")), _mxarray1_),
                 mclPlus(mclUminus(mclVv(m, "m")), _mxarray1_),
                 mclMinus(mclVv(m, "m"), _mxarray1_),
                 mclPlus(mclVv(m, "m"), _mxarray1_),
                 NULL),
               NULL,
               NULL);
             mclForNext(&viter__, &k);
             ) {
            /*
             * Q = G(p+k);
             */
            mlfAssign(
              &Q,
              mclArrayRef1(
                mclVa(G, "G"), mclPlus(mclVv(p, "p"), mclVv(k, "k"))));
            /*
             * q = find(Q);
             */
            mlfAssign(&q, mlfFind(NULL, NULL, mclVv(Q, "Q")));
            /*
             * ia = [ia;G(p(q))];
             */
            mlfAssign(
              &ia,
              mlfVertcat(
                mclVv(ia, "ia"),
                mclArrayRef1(
                  mclVa(G, "G"), mclArrayRef1(mclVv(p, "p"), mclVv(q, "q"))),
                NULL));
            /*
             * ja = [ja;Q(q)];
             */
            mlfAssign(
              &ja,
              mlfVertcat(
                mclVv(ja, "ja"),
                mclArrayRef1(mclVv(Q, "Q"), mclVv(q, "q")),
                NULL));
            /*
             * sa = [sa;-ones(length(q),1)];
             */
            mlfAssign(
              &sa,
              mlfVertcat(
                mclVv(sa, "sa"),
                mclUminus(
                  mlfOnes(
                    mlfScalar(mclLengthInt(mclVv(q, "q"))), _mxarray1_, NULL)),
                NULL));
        /*
         * end
         */
        }
        mclDestroyForLoopIterator(viter__);
    }
    /*
     * 
     * K = sparse(ia,ja,sa);
     */
    mlfAssign(
      &K,
      mlfSparse(
        mclVv(ia, "ia"), mclVv(ja, "ja"), mclVv(sa, "sa"), NULL, NULL, NULL));
    /*
     * K = -K/3.;
     */
    mlfAssign(&K, mclMrdivide(mclUminus(mclVv(K, "K")), _mxarray3_));
    mclValidateOutput(K, 1, nargout_, "K", "grdivk");
    mxDestroyArray(m);
    mxDestroyArray(n);
    mxDestroyArray(p);
    mxDestroyArray(ia);
    mxDestroyArray(ja);
    mxDestroyArray(sa);
    mxDestroyArray(k);
    mxDestroyArray(Q);
    mxDestroyArray(q);
    mxDestroyArray(G);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return K;
    /*
     * 
     * 
     * 
     */
}
