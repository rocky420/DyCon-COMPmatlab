/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "data1_2d.h"
#include "mwservices.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;
static mxArray * _mxarray3_;
static mxArray * _mxarray4_;
static mxArray * _mxarray5_;
static mxArray * _mxarray6_;
static mxArray * _mxarray7_;
static mxArray * _mxarray8_;
static mxArray * _mxarray9_;
static mxArray * _mxarray10_;
static mxArray * _mxarray11_;
static mxArray * _mxarray12_;

void InitializeModule_data1_2d(void) {
    _mxarray0_ = mclInitializeDouble(-3.141592653589793);
    _mxarray1_ = mclInitializeDouble(3.141592653589793);
    _mxarray2_ = mclInitializeDouble(6.283185307179586);
    _mxarray3_ = mclInitializeDouble(2.0);
    _mxarray4_ = mclInitializeDouble(9.869604401089358);
    _mxarray5_ = mclInitializeDouble(9.333333333333334);
    _mxarray6_ = mclInitializeDouble(0.0);
    _mxarray7_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray8_ = mclInitializeDouble(3.0);
    _mxarray9_ = mclInitializeDouble(255.0);
    _mxarray10_ = mclInitializeDouble(4.0);
    _mxarray11_ = mclInitializeDouble(12.566370614359172);
    _mxarray12_ = mclInitializeDouble(39.47841760435743);
}

void TerminateModule_data1_2d(void) {
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mdata1_2d(mxArray * * U11,
                           int nargout_,
                           mxArray * X,
                           mxArray * Y,
                           mxArray * T);

_mexLocalFunctionTable _local_function_table_data1_2d
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfData1_2d" contains the normal interface for the "data1_2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\data1_2d.m" (lines 1-48). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfData1_2d(mxArray * * U11, mxArray * X, mxArray * Y, mxArray * T) {
    int nargout = 1;
    mxArray * U01 = NULL;
    mxArray * U11__ = NULL;
    mlfEnterNewContext(1, 3, U11, X, Y, T);
    if (U11 != NULL) {
        ++nargout;
    }
    U01 = Mdata1_2d(&U11__, nargout, X, Y, T);
    mlfRestorePreviousContext(1, 3, U11, X, Y, T);
    if (U11 != NULL) {
        mclCopyOutputArg(U11, U11__);
    } else {
        mxDestroyArray(U11__);
    }
    return mlfReturnValue(U01);
}

/*
 * The function "mlxData1_2d" contains the feval interface for the "data1_2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\data1_2d.m" (lines 1-48). The feval
 * function calls the implementation version of data1_2d through this function.
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxData1_2d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: data1_2d Line: 1 Column:"
            " 1 The function \"data1_2d\" was called with m"
            "ore than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: data1_2d Line: 1 Column:"
            " 1 The function \"data1_2d\" was called with m"
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
    mplhs[0] = Mdata1_2d(&mplhs[1], nlhs, mprhs[0], mprhs[1], mprhs[2]);
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
 * The function "Mdata1_2d" is the implementation version of the "data1_2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\data1_2d.m" (lines 1-48). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [U01,U11]=data1_2d(X,Y,T)
 */
static mxArray * Mdata1_2d(mxArray * * U11,
                           int nargout_,
                           mxArray * X,
                           mxArray * Y,
                           mxArray * T) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_data1_2d);
    mxArray * U01 = NULL;
    mxArray * dpsi1ex = NULL;
    mxArray * po = NULL;
    mxArray * inter2 = NULL;
    mxArray * inter1 = NULL;
    mxArray * psi1ex = NULL;
    mxArray * dpsi0ex = NULL;
    mxArray * psi0ex = NULL;
    mclCopyArray(&X);
    mclCopyArray(&Y);
    mclCopyArray(&T);
    /*
     * 
     * % Glowinski test
     * 
     * psi0ex = -pi*( sin(pi*X).*cos(2*pi*Y) + cos(2*pi*X).*sin(pi*Y) );
     */
    mlfAssign(
      &psi0ex,
      mclMtimes(
        _mxarray0_,
        mclPlus(
          mclTimes(
            mlfSin(mclMtimes(_mxarray1_, mclVa(X, "X"))),
            mlfCos(mclMtimes(_mxarray2_, mclVa(Y, "Y")))),
          mclTimes(
            mlfCos(mclMtimes(_mxarray2_, mclVa(X, "X"))),
            mlfSin(mclMtimes(_mxarray1_, mclVa(Y, "Y")))))));
    /*
     * dpsi0ex = -sqrt(2)*pi^2*( sin(pi*X).*cos(2*pi*Y) + cos(2*pi*X).*sin(pi*Y) );
     */
    mlfAssign(
      &dpsi0ex,
      mclMtimes(
        mclMtimes(mclUminus(mlfSqrt(_mxarray3_)), _mxarray4_),
        mclPlus(
          mclTimes(
            mlfSin(mclMtimes(_mxarray1_, mclVa(X, "X"))),
            mlfCos(mclMtimes(_mxarray2_, mclVa(Y, "Y")))),
          mclTimes(
            mlfCos(mclMtimes(_mxarray2_, mclVa(X, "X"))),
            mlfSin(mclMtimes(_mxarray1_, mclVa(Y, "Y")))))));
    /*
     * 
     * psi1ex = -sqrt(2)*2*pi*T*sin(pi*X).*sin(pi*Y) + ...
     */
    mlfAssign(
      &psi1ex,
      mclPlus(
        mclTimes(
          mclMtimes(
            mclMtimes(
              mclMtimes(
                mclMtimes(mclUminus(mlfSqrt(_mxarray3_)), _mxarray3_),
                _mxarray1_),
              mclVa(T, "T")),
            mlfSin(mclMtimes(_mxarray1_, mclVa(X, "X")))),
          mlfSin(mclMtimes(_mxarray1_, mclVa(Y, "Y")))),
        mclTimes(
          mclMtimes(
            mclMtimes(
              mclMrdivide(_mxarray5_, mlfSqrt(_mxarray3_)),
              mlfSin(
                mclMtimes(
                  mclMtimes(_mxarray1_, mlfSqrt(_mxarray3_)), mclVa(T, "T")))),
            mlfSin(mclMtimes(_mxarray1_, mclVa(X, "X")))),
          mlfSin(mclMtimes(_mxarray1_, mclVa(Y, "Y"))))));
    /*
     * 28/3/sqrt(2)*sin(pi*sqrt(2)*T)*sin(pi*X).*sin(pi*Y);
     * 
     * inter1 = 0;
     */
    mlfAssign(&inter1, _mxarray6_);
    /*
     * inter2 = 0;
     */
    mlfAssign(&inter2, _mxarray6_);
    /*
     * for po = 3:2:255
     */
    {
        int v_ = mclForIntStart(3);
        int i_ = 2;
        int e_ = mclForIntIntEnd(v_, i_, _mxarray9_);
        if (e_ == mclIntMin()) {
            mlfAssign(&po, _mxarray7_);
        } else {
            /*
             * inter1 = inter1 + ...
             * po/(po^2-1)*( 2/sqrt(1+po^2)*sin(pi*sqrt(1+po^2)*(-T)) + ...
             * 3*sqrt(2)/(po^2-4)*sqrt(2)/2 ) * sin(po*pi*Y);
             * inter2 = inter2 + ...
             * po/(po^2-1)*( 2/sqrt(1+po^2)*sin(pi*sqrt(1+po^2)*(-T)) + ...
             * 3*sqrt(2)/(po^2-4)*sqrt(2)/2 ) * sin(po*pi*X);
             * end
             */
            for (; ; ) {
                mlfAssign(
                  &inter1,
                  mclPlus(
                    mclVv(inter1, "inter1"),
                    mclMtimes(
                      mclMtimes(
                        mlfScalar(
                          svDoubleScalarRdivide(
                            (double) v_,
                            svDoubleScalarMinus(
                              svDoubleScalarPower((double) v_, 2.0), 1.0))),
                        mclPlus(
                          mclMtimes(
                            mclMrdivide(
                              _mxarray3_,
                              mlfSqrt(
                                mlfScalar(
                                  svDoubleScalarPlus(
                                    1.0,
                                    svDoubleScalarPower((double) v_, 2.0))))),
                            mlfSin(
                              mclMtimes(
                                mclMtimes(
                                  _mxarray1_,
                                  mlfSqrt(
                                    mlfScalar(
                                      svDoubleScalarPlus(
                                        1.0,
                                        svDoubleScalarPower(
                                          (double) v_, 2.0))))),
                                mclUminus(mclVa(T, "T"))))),
                          mclMrdivide(
                            mclMtimes(
                              mclMrdivide(
                                mclMtimes(_mxarray8_, mlfSqrt(_mxarray3_)),
                                mlfScalar(
                                  svDoubleScalarMinus(
                                    svDoubleScalarPower((double) v_, 2.0),
                                    4.0))),
                              mlfSqrt(_mxarray3_)),
                            _mxarray3_))),
                      mlfSin(
                        mclMtimes(
                          mlfScalar(
                            svDoubleScalarTimes(
                              (double) v_, 3.141592653589793)),
                          mclVa(Y, "Y"))))));
                mlfAssign(
                  &inter2,
                  mclPlus(
                    mclVv(inter2, "inter2"),
                    mclMtimes(
                      mclMtimes(
                        mlfScalar(
                          svDoubleScalarRdivide(
                            (double) v_,
                            svDoubleScalarMinus(
                              svDoubleScalarPower((double) v_, 2.0), 1.0))),
                        mclPlus(
                          mclMtimes(
                            mclMrdivide(
                              _mxarray3_,
                              mlfSqrt(
                                mlfScalar(
                                  svDoubleScalarPlus(
                                    1.0,
                                    svDoubleScalarPower((double) v_, 2.0))))),
                            mlfSin(
                              mclMtimes(
                                mclMtimes(
                                  _mxarray1_,
                                  mlfSqrt(
                                    mlfScalar(
                                      svDoubleScalarPlus(
                                        1.0,
                                        svDoubleScalarPower(
                                          (double) v_, 2.0))))),
                                mclUminus(mclVa(T, "T"))))),
                          mclMrdivide(
                            mclMtimes(
                              mclMrdivide(
                                mclMtimes(_mxarray8_, mlfSqrt(_mxarray3_)),
                                mlfScalar(
                                  svDoubleScalarMinus(
                                    svDoubleScalarPower((double) v_, 2.0),
                                    4.0))),
                              mlfSqrt(_mxarray3_)),
                            _mxarray3_))),
                      mlfSin(
                        mclMtimes(
                          mlfScalar(
                            svDoubleScalarTimes(
                              (double) v_, 3.141592653589793)),
                          mclVa(X, "X"))))));
                if (v_ == e_) {
                    break;
                }
                v_ += i_;
            }
            mlfAssign(&po, mlfScalar(v_));
        }
    }
    /*
     * psi1ex = psi1ex + 4*sin(pi*X).*inter1 + 4*sin(pi*Y).*inter2;
     */
    mlfAssign(
      &psi1ex,
      mclPlus(
        mclPlus(
          mclVv(psi1ex, "psi1ex"),
          mclTimes(
            mclMtimes(
              _mxarray10_, mlfSin(mclMtimes(_mxarray1_, mclVa(X, "X")))),
            mclVv(inter1, "inter1"))),
        mclTimes(
          mclMtimes(_mxarray10_, mlfSin(mclMtimes(_mxarray1_, mclVa(Y, "Y")))),
          mclVv(inter2, "inter2"))));
    /*
     * 
     * dpsi1ex = 4*pi*sqrt(2)/2*sin(pi*X).*sin(pi*Y) + ...
     */
    mlfAssign(
      &dpsi1ex,
      mclMinus(
        mclPlus(
          mclTimes(
            mclMtimes(
              mclMrdivide(
                mclMtimes(_mxarray11_, mlfSqrt(_mxarray3_)), _mxarray3_),
              mlfSin(mclMtimes(_mxarray1_, mclVa(X, "X")))),
            mlfSin(mclMtimes(_mxarray1_, mclVa(Y, "Y")))),
          mclTimes(
            mclMtimes(
              mclMtimes(_mxarray12_, mclVa(T, "T")),
              mlfSin(mclMtimes(_mxarray1_, mclVa(X, "X")))),
            mlfSin(mclMtimes(_mxarray1_, mclVa(Y, "Y"))))),
        mclTimes(
          mclMtimes(
            mclMtimes(
              mclMtimes(
                mclMtimes(
                  mclMrdivide(_mxarray5_, mlfSqrt(_mxarray3_)), _mxarray1_),
                mlfSqrt(_mxarray3_)),
              mlfCos(
                mclMtimes(
                  mclMtimes(_mxarray1_, mlfSqrt(_mxarray3_)), mclVa(T, "T")))),
            mlfSin(mclMtimes(_mxarray1_, mclVa(X, "X")))),
          mlfSin(mclMtimes(_mxarray1_, mclVa(Y, "Y"))))));
    /*
     * 4*pi^2*T*sin(pi*X).*sin(pi*Y) - ...
     * 28/3/sqrt(2)*pi*sqrt(2)*cos(pi*sqrt(2)*T)*sin(pi*X).*sin(pi*Y);
     * 
     * inter1 = 0;
     */
    mlfAssign(&inter1, _mxarray6_);
    /*
     * inter2 = 0;
     */
    mlfAssign(&inter2, _mxarray6_);
    /*
     * for po = 3:2:255
     */
    {
        int v_ = mclForIntStart(3);
        int i_ = 2;
        int e_ = mclForIntIntEnd(v_, i_, _mxarray9_);
        if (e_ == mclIntMin()) {
            mlfAssign(&po, _mxarray7_);
        } else {
            /*
             * inter1 = inter1 + ...
             * po/(po^2-1)*( 2*pi*cos(pi*sqrt(1+po^2)*(-T)) + ...
             * 3*sqrt(2)/(po^2-4)*pi ) * sin(po*pi*Y);
             * inter2 = inter2 + ...
             * po/(po^2-1)*( 2*pi*cos(pi*sqrt(1+po^2)*(-T)) + ...
             * 3*sqrt(2)/(po^2-4)*pi ) * sin(po*pi*X);
             * end
             */
            for (; ; ) {
                mlfAssign(
                  &inter1,
                  mclPlus(
                    mclVv(inter1, "inter1"),
                    mclMtimes(
                      mclMtimes(
                        mlfScalar(
                          svDoubleScalarRdivide(
                            (double) v_,
                            svDoubleScalarMinus(
                              svDoubleScalarPower((double) v_, 2.0), 1.0))),
                        mclPlus(
                          mclMtimes(
                            _mxarray2_,
                            mlfCos(
                              mclMtimes(
                                mclMtimes(
                                  _mxarray1_,
                                  mlfSqrt(
                                    mlfScalar(
                                      svDoubleScalarPlus(
                                        1.0,
                                        svDoubleScalarPower(
                                          (double) v_, 2.0))))),
                                mclUminus(mclVa(T, "T"))))),
                          mclMtimes(
                            mclMrdivide(
                              mclMtimes(_mxarray8_, mlfSqrt(_mxarray3_)),
                              mlfScalar(
                                svDoubleScalarMinus(
                                  svDoubleScalarPower((double) v_, 2.0), 4.0))),
                            _mxarray1_))),
                      mlfSin(
                        mclMtimes(
                          mlfScalar(
                            svDoubleScalarTimes(
                              (double) v_, 3.141592653589793)),
                          mclVa(Y, "Y"))))));
                mlfAssign(
                  &inter2,
                  mclPlus(
                    mclVv(inter2, "inter2"),
                    mclMtimes(
                      mclMtimes(
                        mlfScalar(
                          svDoubleScalarRdivide(
                            (double) v_,
                            svDoubleScalarMinus(
                              svDoubleScalarPower((double) v_, 2.0), 1.0))),
                        mclPlus(
                          mclMtimes(
                            _mxarray2_,
                            mlfCos(
                              mclMtimes(
                                mclMtimes(
                                  _mxarray1_,
                                  mlfSqrt(
                                    mlfScalar(
                                      svDoubleScalarPlus(
                                        1.0,
                                        svDoubleScalarPower(
                                          (double) v_, 2.0))))),
                                mclUminus(mclVa(T, "T"))))),
                          mclMtimes(
                            mclMrdivide(
                              mclMtimes(_mxarray8_, mlfSqrt(_mxarray3_)),
                              mlfScalar(
                                svDoubleScalarMinus(
                                  svDoubleScalarPower((double) v_, 2.0), 4.0))),
                            _mxarray1_))),
                      mlfSin(
                        mclMtimes(
                          mlfScalar(
                            svDoubleScalarTimes(
                              (double) v_, 3.141592653589793)),
                          mclVa(X, "X"))))));
                if (v_ == e_) {
                    break;
                }
                v_ += i_;
            }
            mlfAssign(&po, mlfScalar(v_));
        }
    }
    /*
     * dpsi1ex = dpsi1ex + 4*sin(pi*X).*inter1 + 4*sin(pi*Y).*inter2;
     */
    mlfAssign(
      &dpsi1ex,
      mclPlus(
        mclPlus(
          mclVv(dpsi1ex, "dpsi1ex"),
          mclTimes(
            mclMtimes(
              _mxarray10_, mlfSin(mclMtimes(_mxarray1_, mclVa(X, "X")))),
            mclVv(inter1, "inter1"))),
        mclTimes(
          mclMtimes(_mxarray10_, mlfSin(mclMtimes(_mxarray1_, mclVa(Y, "Y")))),
          mclVv(inter2, "inter2"))));
    /*
     * 
     * U01 = psi1ex+psi0ex;
     */
    mlfAssign(&U01, mclPlus(mclVv(psi1ex, "psi1ex"), mclVv(psi0ex, "psi0ex")));
    /*
     * U11 = dpsi1ex+dpsi0ex;
     */
    mlfAssign(
      U11, mclPlus(mclVv(dpsi1ex, "dpsi1ex"), mclVv(dpsi0ex, "dpsi0ex")));
    mclValidateOutput(U01, 1, nargout_, "U01", "data1_2d");
    mclValidateOutput(*U11, 2, nargout_, "U11", "data1_2d");
    mxDestroyArray(psi0ex);
    mxDestroyArray(dpsi0ex);
    mxDestroyArray(psi1ex);
    mxDestroyArray(inter1);
    mxDestroyArray(inter2);
    mxDestroyArray(po);
    mxDestroyArray(dpsi1ex);
    mxDestroyArray(T);
    mxDestroyArray(Y);
    mxDestroyArray(X);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return U01;
    /*
     * 
     * %end 
     * 
     * 
     * 
     * 
     * 
     */
}
