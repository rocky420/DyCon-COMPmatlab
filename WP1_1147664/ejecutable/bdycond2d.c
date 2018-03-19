/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "bdycond2d.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;

void InitializeModule_bdycond2d(void) {
    _mxarray0_ = mclInitializeDouble(2.0);
    _mxarray1_ = mclInitializeDouble(1.0);
    _mxarray2_ = mclInitializeDouble(4.0);
}

void TerminateModule_bdycond2d(void) {
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mbdycond2d(int nargout_,
                            mxArray * c1,
                            mxArray * X,
                            mxArray * Y,
                            mxArray * G,
                            mxArray * r0,
                            mxArray * h,
                            mxArray * J);

_mexLocalFunctionTable _local_function_table_bdycond2d
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfBdycond2d" contains the normal interface for the
 * "bdycond2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\bdycond2d.m" (lines 1-27).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfBdycond2d(mxArray * c1,
                       mxArray * X,
                       mxArray * Y,
                       mxArray * G,
                       mxArray * r0,
                       mxArray * h,
                       mxArray * J) {
    int nargout = 1;
    mxArray * bc1 = NULL;
    mlfEnterNewContext(0, 7, c1, X, Y, G, r0, h, J);
    bc1 = Mbdycond2d(nargout, c1, X, Y, G, r0, h, J);
    mlfRestorePreviousContext(0, 7, c1, X, Y, G, r0, h, J);
    return mlfReturnValue(bc1);
}

/*
 * The function "mlxBdycond2d" contains the feval interface for the "bdycond2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\bdycond2d.m" (lines 1-27). The feval
 * function calls the implementation version of bdycond2d through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxBdycond2d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[7];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: bdycond2d Line: 1 Column:"
            " 1 The function \"bdycond2d\" was called with m"
            "ore than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 7) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: bdycond2d Line: 1 Column:"
            " 1 The function \"bdycond2d\" was called with m"
            "ore than the declared number of inputs (7)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 7 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 7; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(
      0,
      7,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6]);
    mplhs[0]
      = Mbdycond2d(
          nlhs,
          mprhs[0],
          mprhs[1],
          mprhs[2],
          mprhs[3],
          mprhs[4],
          mprhs[5],
          mprhs[6]);
    mlfRestorePreviousContext(
      0,
      7,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mbdycond2d" is the implementation version of the "bdycond2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\bdycond2d.m" (lines 1-27). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [bc1] = bdycond2d(c1,X,Y,G,r0,h,J)
 */
static mxArray * Mbdycond2d(int nargout_,
                            mxArray * c1,
                            mxArray * X,
                            mxArray * Y,
                            mxArray * G,
                            mxArray * r0,
                            mxArray * h,
                            mxArray * J) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_bdycond2d);
    mxArray * bc1 = NULL;
    mxArray * bord4 = NULL;
    mxArray * bord3 = NULL;
    mxArray * bord2 = NULL;
    mxArray * bord1 = NULL;
    mxArray * cb1 = NULL;
    mclCopyArray(&c1);
    mclCopyArray(&X);
    mclCopyArray(&Y);
    mclCopyArray(&G);
    mclCopyArray(&r0);
    mclCopyArray(&h);
    mclCopyArray(&J);
    /*
     * 
     * % ******************* Conditions of edge *************************
     * % REMARK: in what follows, we count twice the rates
     * % corners of the domain in the second member; we make a treatment
     * % private individual at the end to compensate.
     * 
     * cb1 = zeros(J^2,1);
     */
    mlfAssign(
      &cb1, mlfZeros(mclMpower(mclVa(J, "J"), _mxarray0_), _mxarray1_, NULL));
    /*
     * 
     * %bord1 = find(X==h & Y<1 & Y>0);
     * %bord2 = find(Y==1-h & X<1 & X>0);
     * %bord3 = find(X==1-h & Y>0 & Y<1);
     * %bord4 = find(Y==h & X>0 & X<1);
     * bord1 = (J+4:2*(J+2)-1)';
     */
    mlfAssign(
      &bord1,
      mlfCtranspose(
        mlfColon(
          mclPlus(mclVa(J, "J"), _mxarray2_),
          mclMinus(
            mclMtimes(_mxarray0_, mclPlus(mclVa(J, "J"), _mxarray0_)),
            _mxarray1_),
          NULL)));
    /*
     * bord2 = (J+4:J+2:(J+2)*J+2)';
     */
    mlfAssign(
      &bord2,
      mlfCtranspose(
        mlfColon(
          mclPlus(mclVa(J, "J"), _mxarray2_),
          mclPlus(mclVa(J, "J"), _mxarray0_),
          mclPlus(
            mclMtimes(mclPlus(mclVa(J, "J"), _mxarray0_), mclVa(J, "J")),
            _mxarray0_))));
    /*
     * bord3 = ((J+2)*J+2:(J+2)*(J+1)-1)';
     */
    mlfAssign(
      &bord3,
      mlfCtranspose(
        mlfColon(
          mclPlus(
            mclMtimes(mclPlus(mclVa(J, "J"), _mxarray0_), mclVa(J, "J")),
            _mxarray0_),
          mclMinus(
            mclMtimes(
              mclPlus(mclVa(J, "J"), _mxarray0_),
              mclPlus(mclVa(J, "J"), _mxarray1_)),
            _mxarray1_),
          NULL)));
    /*
     * bord4 = (2*(J+2)-1:J+2:(J+2)*(J+1)-1)';
     */
    mlfAssign(
      &bord4,
      mlfCtranspose(
        mlfColon(
          mclMinus(
            mclMtimes(_mxarray0_, mclPlus(mclVa(J, "J"), _mxarray0_)),
            _mxarray1_),
          mclPlus(mclVa(J, "J"), _mxarray0_),
          mclMinus(
            mclMtimes(
              mclPlus(mclVa(J, "J"), _mxarray0_),
              mclPlus(mclVa(J, "J"), _mxarray1_)),
            _mxarray1_))));
    /*
     * 
     * cb1(G(bord1).*ones(length(bord1),1)) = r0*c1(bord1-J-2);
     */
    mclArrayAssign1(
      &cb1,
      mclMtimes(
        mclVa(r0, "r0"),
        mclArrayRef1(
          mclVa(c1, "c1"),
          mclMinus(
            mclMinus(mclVv(bord1, "bord1"), mclVa(J, "J")), _mxarray0_))),
      mclTimes(
        mclArrayRef1(mclVa(G, "G"), mclVv(bord1, "bord1")),
        mlfOnes(
          mlfScalar(mclLengthInt(mclVv(bord1, "bord1"))), _mxarray1_, NULL)));
    /*
     * cb1(G(bord2).*ones(length(bord2),1)) = cb1(G(bord2).*ones(length(bord2),1)) + r0*c1(bord2-1);
     */
    mclArrayAssign1(
      &cb1,
      mclPlus(
        mclArrayRef1(
          mclVv(cb1, "cb1"),
          mclTimes(
            mclArrayRef1(mclVa(G, "G"), mclVv(bord2, "bord2")),
            mlfOnes(
              mlfScalar(mclLengthInt(mclVv(bord2, "bord2"))),
              _mxarray1_,
              NULL))),
        mclMtimes(
          mclVa(r0, "r0"),
          mclArrayRef1(
            mclVa(c1, "c1"), mclMinus(mclVv(bord2, "bord2"), _mxarray1_)))),
      mclTimes(
        mclArrayRef1(mclVa(G, "G"), mclVv(bord2, "bord2")),
        mlfOnes(
          mlfScalar(mclLengthInt(mclVv(bord2, "bord2"))), _mxarray1_, NULL)));
    /*
     * cb1(G(bord3).*ones(length(bord3),1)) = cb1(G(bord3).*ones(length(bord3),1)) + r0*c1(bord3+J+2);
     */
    mclArrayAssign1(
      &cb1,
      mclPlus(
        mclArrayRef1(
          mclVv(cb1, "cb1"),
          mclTimes(
            mclArrayRef1(mclVa(G, "G"), mclVv(bord3, "bord3")),
            mlfOnes(
              mlfScalar(mclLengthInt(mclVv(bord3, "bord3"))),
              _mxarray1_,
              NULL))),
        mclMtimes(
          mclVa(r0, "r0"),
          mclArrayRef1(
            mclVa(c1, "c1"),
            mclPlus(
              mclPlus(mclVv(bord3, "bord3"), mclVa(J, "J")), _mxarray0_)))),
      mclTimes(
        mclArrayRef1(mclVa(G, "G"), mclVv(bord3, "bord3")),
        mlfOnes(
          mlfScalar(mclLengthInt(mclVv(bord3, "bord3"))), _mxarray1_, NULL)));
    /*
     * cb1(G(bord4).*ones(length(bord4),1)) = cb1(G(bord4).*ones(length(bord4),1)) + r0*c1(bord4+1);
     */
    mclArrayAssign1(
      &cb1,
      mclPlus(
        mclArrayRef1(
          mclVv(cb1, "cb1"),
          mclTimes(
            mclArrayRef1(mclVa(G, "G"), mclVv(bord4, "bord4")),
            mlfOnes(
              mlfScalar(mclLengthInt(mclVv(bord4, "bord4"))),
              _mxarray1_,
              NULL))),
        mclMtimes(
          mclVa(r0, "r0"),
          mclArrayRef1(
            mclVa(c1, "c1"), mclPlus(mclVv(bord4, "bord4"), _mxarray1_)))),
      mclTimes(
        mclArrayRef1(mclVa(G, "G"), mclVv(bord4, "bord4")),
        mlfOnes(
          mlfScalar(mclLengthInt(mclVv(bord4, "bord4"))), _mxarray1_, NULL)));
    /*
     * 
     * bc1 = cb1;
     */
    mlfAssign(&bc1, mclVv(cb1, "cb1"));
    mclValidateOutput(bc1, 1, nargout_, "bc1", "bdycond2d");
    mxDestroyArray(cb1);
    mxDestroyArray(bord1);
    mxDestroyArray(bord2);
    mxDestroyArray(bord3);
    mxDestroyArray(bord4);
    mxDestroyArray(J);
    mxDestroyArray(h);
    mxDestroyArray(r0);
    mxDestroyArray(G);
    mxDestroyArray(Y);
    mxDestroyArray(X);
    mxDestroyArray(c1);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return bc1;
    /*
     * 
     * 
     */
}
