/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "grdivm.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;
static mxArray * _mxarray3_;
static mxArray * _mxarray4_;

void InitializeModule_grdivm(void) {
    _mxarray0_ = mclInitializeDouble(4.0);
    _mxarray1_ = mclInitializeDouble(1.0);
    _mxarray2_ = mclInitializeDouble(-1.0);
    _mxarray3_ = mclInitializeDouble(2.0);
    _mxarray4_ = mclInitializeDouble(16.0);
}

void TerminateModule_grdivm(void) {
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mgrdivm(int nargout_, mxArray * G);

_mexLocalFunctionTable _local_function_table_grdivm
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfGrdivm" contains the normal interface for the "grdivm"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\grdivm.m" (lines 1-33). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfGrdivm(mxArray * G) {
    int nargout = 1;
    mxArray * M = NULL;
    mlfEnterNewContext(0, 1, G);
    M = Mgrdivm(nargout, G);
    mlfRestorePreviousContext(0, 1, G);
    return mlfReturnValue(M);
}

/*
 * The function "mlxGrdivm" contains the feval interface for the "grdivm"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\grdivm.m" (lines 1-33). The feval
 * function calls the implementation version of grdivm through this function.
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxGrdivm(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: grdivm Line: 1 Column: "
            "1 The function \"grdivm\" was called with mor"
            "e than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: grdivm Line: 1 Column: "
            "1 The function \"grdivm\" was called with mor"
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
    mplhs[0] = Mgrdivm(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mgrdivm" is the implementation version of the "grdivm"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\grdivm.m" (lines 1-33). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function [M] = grdivM(G)
 */
static mxArray * Mgrdivm(int nargout_, mxArray * G) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_grdivm);
    mxArray * M = NULL;
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
     * sa = 4*ones(length(p),1);
     */
    mlfAssign(
      &sa,
      mclMtimes(
        _mxarray0_,
        mlfOnes(mlfScalar(mclLengthInt(mclVv(p, "p"))), _mxarray1_, NULL)));
    /*
     * 
     * % for k = [nord sud ]
     * for k = [-m -1 1 m ]
     */
    {
        mclForLoopIterator viter__;
        for (mclForStart(
               &viter__,
               mlfHorzcat(
                 mclUminus(mclVv(m, "m")),
                 _mxarray2_,
                 _mxarray1_,
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
             * sa = [sa;2*ones(length(q),1)];
             */
            mlfAssign(
              &sa,
              mlfVertcat(
                mclVv(sa, "sa"),
                mclMtimes(
                  _mxarray3_,
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
             * sa = [sa;ones(length(q),1)];
             */
            mlfAssign(
              &sa,
              mlfVertcat(
                mclVv(sa, "sa"),
                mlfOnes(
                  mlfScalar(mclLengthInt(mclVv(q, "q"))), _mxarray1_, NULL),
                NULL));
        /*
         * end
         */
        }
        mclDestroyForLoopIterator(viter__);
    }
    /*
     * 
     * M = sparse(ia,ja,sa);
     */
    mlfAssign(
      &M,
      mlfSparse(
        mclVv(ia, "ia"), mclVv(ja, "ja"), mclVv(sa, "sa"), NULL, NULL, NULL));
    /*
     * M = M/16;
     */
    mlfAssign(&M, mclMrdivide(mclVv(M, "M"), _mxarray4_));
    mclValidateOutput(M, 1, nargout_, "M", "grdivm");
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
    return M;
    /*
     * 
     * 
     * 
     */
}
