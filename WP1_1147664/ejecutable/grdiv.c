/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "grdiv.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;

static double _array3_[2] = { -1.0, 1.0 };
static mxArray * _mxarray2_;

void InitializeModule_grdiv(void) {
    _mxarray0_ = mclInitializeDouble(-2.0);
    _mxarray1_ = mclInitializeDouble(1.0);
    _mxarray2_ = mclInitializeDoubleVector(1, 2, _array3_);
}

void TerminateModule_grdiv(void) {
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mgrdiv(mxArray * * B, int nargout_, mxArray * G);

_mexLocalFunctionTable _local_function_table_grdiv
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfGrdiv" contains the normal interface for the "grdiv"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\grdiv.m" (lines 1-48). This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
mxArray * mlfGrdiv(mxArray * * B, mxArray * G) {
    int nargout = 1;
    mxArray * A = NULL;
    mxArray * B__ = NULL;
    mlfEnterNewContext(1, 1, B, G);
    if (B != NULL) {
        ++nargout;
    }
    A = Mgrdiv(&B__, nargout, G);
    mlfRestorePreviousContext(1, 1, B, G);
    if (B != NULL) {
        mclCopyOutputArg(B, B__);
    } else {
        mxDestroyArray(B__);
    }
    return mlfReturnValue(A);
}

/*
 * The function "mlxGrdiv" contains the feval interface for the "grdiv"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\grdiv.m" (lines 1-48). The feval
 * function calls the implementation version of grdiv through this function.
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxGrdiv(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: grdiv Line: 1 Column: 1 The function \"grdiv"
            "\" was called with more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: grdiv Line: 1 Column: 1 The function \"grdiv"
            "\" was called with more than the declared number of inputs (1)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 1 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 1; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 1, mprhs[0]);
    mplhs[0] = Mgrdiv(&mplhs[1], nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "Mgrdiv" is the implementation version of the "grdiv"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\grdiv.m" (lines 1-48). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function [A,B] = grdiv(G)
 */
static mxArray * Mgrdiv(mxArray * * B, int nargout_, mxArray * G) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_grdiv);
    mxArray * A = NULL;
    mxArray * q = NULL;
    mxArray * Q = NULL;
    mxArray * k = NULL;
    mxArray * sc = NULL;
    mxArray * sb = NULL;
    mxArray * sa = NULL;
    mxArray * jb = NULL;
    mxArray * ib = NULL;
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
     * % Constitution des diagonales de A,B et C
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
     * 
     * ib = ia; jb = ja;
     */
    mlfAssign(&ib, mclVv(ia, "ia"));
    mlfAssign(&jb, mclVv(ja, "ja"));
    /*
     * 
     * sa = -2*ones(length(p),1);
     */
    mlfAssign(
      &sa,
      mclMtimes(
        _mxarray0_,
        mlfOnes(mlfScalar(mclLengthInt(mclVv(p, "p"))), _mxarray1_, NULL)));
    /*
     * sb = sa;
     */
    mlfAssign(&sb, mclVv(sa, "sa"));
    /*
     * sc = -zeros(length(p),1);
     */
    mlfAssign(
      &sc,
      mclUminus(
        mlfZeros(mlfScalar(mclLengthInt(mclVv(p, "p"))), _mxarray1_, NULL)));
    /*
     * 
     * % Constitution des sous diagonales
     * % for k = [ouest est]
     * 
     * for k = [-m m ]
     */
    {
        mclForLoopIterator viter__;
        for (mclForStart(
               &viter__,
               mlfHorzcat(mclUminus(mclVv(m, "m")), mclVv(m, "m"), NULL),
               NULL,
               NULL);
             mclForNext(&viter__, &k);
             ) {
            /*
             * 
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
             * 
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
         * 
         * end
         */
        }
        mclDestroyForLoopIterator(viter__);
    }
    /*
     * 
     * A = sparse(ia,ja,sa);
     */
    mlfAssign(
      &A,
      mlfSparse(
        mclVv(ia, "ia"), mclVv(ja, "ja"), mclVv(sa, "sa"), NULL, NULL, NULL));
    /*
     * 
     * 
     * % for k = [nord sud ]
     * for k = [-1 1 ]
     */
    {
        mclForLoopIterator viter__;
        for (mclForStart(&viter__, _mxarray2_, NULL, NULL);
             mclForNext(&viter__, &k);
             ) {
            /*
             * 
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
             * 
             * ib = [ib;G(p(q))];
             */
            mlfAssign(
              &ib,
              mlfVertcat(
                mclVv(ib, "ib"),
                mclArrayRef1(
                  mclVa(G, "G"), mclArrayRef1(mclVv(p, "p"), mclVv(q, "q"))),
                NULL));
            /*
             * jb = [jb;Q(q)];
             */
            mlfAssign(
              &jb,
              mlfVertcat(
                mclVv(jb, "jb"),
                mclArrayRef1(mclVv(Q, "Q"), mclVv(q, "q")),
                NULL));
            /*
             * sb = [sb;ones(length(q),1)];
             */
            mlfAssign(
              &sb,
              mlfVertcat(
                mclVv(sb, "sb"),
                mlfOnes(
                  mlfScalar(mclLengthInt(mclVv(q, "q"))), _mxarray1_, NULL),
                NULL));
        /*
         * 
         * end
         */
        }
        mclDestroyForLoopIterator(viter__);
    }
    /*
     * B = sparse(ib,jb,sb);
     */
    mlfAssign(
      B,
      mlfSparse(
        mclVv(ib, "ib"), mclVv(jb, "jb"), mclVv(sb, "sb"), NULL, NULL, NULL));
    mclValidateOutput(A, 1, nargout_, "A", "grdiv");
    mclValidateOutput(*B, 2, nargout_, "B", "grdiv");
    mxDestroyArray(m);
    mxDestroyArray(n);
    mxDestroyArray(p);
    mxDestroyArray(ia);
    mxDestroyArray(ja);
    mxDestroyArray(ib);
    mxDestroyArray(jb);
    mxDestroyArray(sa);
    mxDestroyArray(sb);
    mxDestroyArray(sc);
    mxDestroyArray(k);
    mxDestroyArray(Q);
    mxDestroyArray(q);
    mxDestroyArray(G);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return A;
    /*
     * 
     * 
     * 
     */
}
