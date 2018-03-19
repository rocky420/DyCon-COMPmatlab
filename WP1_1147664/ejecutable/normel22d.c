/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "normel22d.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;
static mxArray * _mxarray3_;

void InitializeModule_normel22d(void) {
    _mxarray0_ = mclInitializeDouble(2.0);
    _mxarray1_ = mclInitializeDouble(1.0);
    _mxarray2_ = mclInitializeDouble(.5);
    _mxarray3_ = mclInitializeDouble(.25);
}

void TerminateModule_normel22d(void) {
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mnormel22d(mxArray * * z2,
                            int nargout_,
                            mxArray * f,
                            mxArray * J,
                            mxArray * h);

_mexLocalFunctionTable _local_function_table_normel22d
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNormel22d" contains the normal interface for the
 * "normel22d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\normel22d.m" (lines 1-25).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfNormel22d(mxArray * * z2, mxArray * f, mxArray * J, mxArray * h) {
    int nargout = 1;
    mxArray * z1 = NULL;
    mxArray * z2__ = NULL;
    mlfEnterNewContext(1, 3, z2, f, J, h);
    if (z2 != NULL) {
        ++nargout;
    }
    z1 = Mnormel22d(&z2__, nargout, f, J, h);
    mlfRestorePreviousContext(1, 3, z2, f, J, h);
    if (z2 != NULL) {
        mclCopyOutputArg(z2, z2__);
    } else {
        mxDestroyArray(z2__);
    }
    return mlfReturnValue(z1);
}

/*
 * The function "mlxNormel22d" contains the feval interface for the "normel22d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\normel22d.m" (lines 1-25). The feval
 * function calls the implementation version of normel22d through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxNormel22d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: normel22d Line: 1 Column:"
            " 1 The function \"normel22d\" was called with m"
            "ore than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: normel22d Line: 1 Column:"
            " 1 The function \"normel22d\" was called with m"
            "ore than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mplhs[0] = Mnormel22d(&mplhs[1], nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "Mnormel22d" is the implementation version of the "normel22d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\normel22d.m" (lines 1-25). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [z1,z2] = normel22d(f,J,h)
 */
static mxArray * Mnormel22d(mxArray * * z2,
                            int nargout_,
                            mxArray * f,
                            mxArray * J,
                            mxArray * h) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_normel22d);
    mxArray * z1 = NULL;
    mxArray * res = NULL;
    mclCopyArray(&f);
    mclCopyArray(&J);
    mclCopyArray(&h);
    /*
     * 
     * % Calculate the standard L2 of the function f given under the shape of a matrix on the square.
     * % The digital integration is made with the method of trapezes.
     * % The weights associated to the various points of the meshing are
     * % Following one: 
     * %   w = 0.25 for the summits of the square
     * %   w = 0.5 for the points of the edge of the domain which
     * % Summits of the domain are not
     * %   w = 1 for the internal points in the domain
     * 
     * 
     * f = f.^2;
     */
    mlfAssign(&f, mlfPower(mclVa(f, "f"), _mxarray0_));
    /*
     * 
     * res = h^2 * sum( sum( f(2:J+1,2:J+1) ));
     */
    mlfAssign(
      &res,
      mclMtimes(
        mclMpower(mclVa(h, "h"), _mxarray0_),
        mlfSum(
          mlfSum(
            mclArrayRef2(
              mclVa(f, "f"),
              mlfColon(_mxarray0_, mclPlus(mclVa(J, "J"), _mxarray1_), NULL),
              mlfColon(_mxarray0_, mclPlus(mclVa(J, "J"), _mxarray1_), NULL)),
            NULL),
          NULL)));
    /*
     * 
     * res = res + h^2 * 0.5 * ( sum( f(2:J+1,1) ) + sum( f(2:J+1,J+2) ) + ...
     */
    mlfAssign(
      &res,
      mclPlus(
        mclVv(res, "res"),
        mclMtimes(
          mclMtimes(mclMpower(mclVa(h, "h"), _mxarray0_), _mxarray2_),
          mclPlus(
            mclPlus(
              mclPlus(
                mlfSum(
                  mclArrayRef2(
                    mclVa(f, "f"),
                    mlfColon(
                      _mxarray0_, mclPlus(mclVa(J, "J"), _mxarray1_), NULL),
                    _mxarray1_),
                  NULL),
                mlfSum(
                  mclArrayRef2(
                    mclVa(f, "f"),
                    mlfColon(
                      _mxarray0_, mclPlus(mclVa(J, "J"), _mxarray1_), NULL),
                    mclPlus(mclVa(J, "J"), _mxarray0_)),
                  NULL)),
              mlfSum(
                mclArrayRef2(
                  mclVa(f, "f"),
                  _mxarray1_,
                  mlfColon(
                    _mxarray0_, mclPlus(mclVa(J, "J"), _mxarray1_), NULL)),
                NULL)),
            mlfSum(
              mclArrayRef2(
                mclVa(f, "f"),
                mclPlus(mclVa(J, "J"), _mxarray0_),
                mlfColon(_mxarray0_, mclPlus(mclVa(J, "J"), _mxarray1_), NULL)),
              NULL)))));
    /*
     * sum( f(1,2:J+1) ) + sum( f(J+2,2:J+1) ) );
     * 
     * res = res + h^2 * 0.25 * ( f(1,1) + f(1,J+2) + f(J+2,1) + f(J+2,J+2) );
     */
    mlfAssign(
      &res,
      mclPlus(
        mclVv(res, "res"),
        mclMtimes(
          mclMtimes(mclMpower(mclVa(h, "h"), _mxarray0_), _mxarray3_),
          mclPlus(
            mclPlus(
              mclPlus(
                mclIntArrayRef2(mclVa(f, "f"), 1, 1),
                mclArrayRef2(
                  mclVa(f, "f"),
                  _mxarray1_,
                  mclPlus(mclVa(J, "J"), _mxarray0_))),
              mclArrayRef2(
                mclVa(f, "f"), mclPlus(mclVa(J, "J"), _mxarray0_), _mxarray1_)),
            mclArrayRef2(
              mclVa(f, "f"),
              mclPlus(mclVa(J, "J"), _mxarray0_),
              mclPlus(mclVa(J, "J"), _mxarray0_))))));
    /*
     * 
     * z1 = sqrt(res);
     */
    mlfAssign(&z1, mlfSqrt(mclVv(res, "res")));
    mclValidateOutput(z1, 1, nargout_, "z1", "normel22d");
    mclValidateOutput(*z2, 2, nargout_, "z2", "normel22d");
    mxDestroyArray(res);
    mxDestroyArray(h);
    mxDestroyArray(J);
    mxDestroyArray(f);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return z1;
    /*
     * 
     * 
     * 
     */
}
