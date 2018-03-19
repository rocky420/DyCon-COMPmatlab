/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "numgrid.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "nested.h"

static mxChar _array1_[1] = { 'N' };
static mxArray * _mxarray0_;
static mxArray * _mxarray2_;
static mxArray * _mxarray3_;
static mxArray * _mxarray4_;
static mxArray * _mxarray5_;

static mxChar _array7_[1] = { 'S' };
static mxArray * _mxarray6_;

static mxChar _array9_[1] = { 'L' };
static mxArray * _mxarray8_;
static mxArray * _mxarray10_;

static mxChar _array12_[1] = { 'C' };
static mxArray * _mxarray11_;

static mxChar _array14_[1] = { 'D' };
static mxArray * _mxarray13_;

static mxChar _array16_[1] = { 'A' };
static mxArray * _mxarray15_;
static mxArray * _mxarray17_;

static mxChar _array19_[1] = { 'H' };
static mxArray * _mxarray18_;
static mxArray * _mxarray20_;

static mxChar _array22_[1] = { 'B' };
static mxArray * _mxarray21_;
static mxArray * _mxarray23_;
static mxArray * _mxarray24_;

static mxChar _array26_[20] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd',
                                ' ', 'r', 'e', 'g', 'i', 'o', 'n',
                                ' ', 't', 'y', 'p', 'e', '.' };
static mxArray * _mxarray25_;

void InitializeModule_numgrid(void) {
    _mxarray0_ = mclInitializeString(1, _array1_);
    _mxarray2_ = mclInitializeDouble(1.0);
    _mxarray3_ = mclInitializeDouble(-1.0);
    _mxarray4_ = mclInitializeDouble(3.0);
    _mxarray5_ = mclInitializeDouble(2.0);
    _mxarray6_ = mclInitializeString(1, _array7_);
    _mxarray8_ = mclInitializeString(1, _array9_);
    _mxarray10_ = mclInitializeDouble(0.0);
    _mxarray11_ = mclInitializeString(1, _array12_);
    _mxarray13_ = mclInitializeString(1, _array14_);
    _mxarray15_ = mclInitializeString(1, _array16_);
    _mxarray17_ = mclInitializeDouble(.3333333333333333);
    _mxarray18_ = mclInitializeString(1, _array19_);
    _mxarray20_ = mclInitializeDouble(.75);
    _mxarray21_ = mclInitializeString(1, _array22_);
    _mxarray23_ = mclInitializeDouble(.2);
    _mxarray24_ = mclInitializeDouble(8.0);
    _mxarray25_ = mclInitializeString(20, _array26_);
}

void TerminateModule_numgrid(void) {
    mxDestroyArray(_mxarray25_);
    mxDestroyArray(_mxarray24_);
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mnumgrid(int nargout_, mxArray * R, mxArray * n);

_mexLocalFunctionTable _local_function_table_numgrid
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNumgrid" contains the normal interface for the "numgrid"
 * M-function from file "c:\matlab6p5\toolbox\matlab\demos\numgrid.m" (lines
 * 1-54). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfNumgrid(mxArray * R, mxArray * n) {
    int nargout = 1;
    mxArray * G = NULL;
    mlfEnterNewContext(0, 2, R, n);
    G = Mnumgrid(nargout, R, n);
    mlfRestorePreviousContext(0, 2, R, n);
    return mlfReturnValue(G);
}

/*
 * The function "mlxNumgrid" contains the feval interface for the "numgrid"
 * M-function from file "c:\matlab6p5\toolbox\matlab\demos\numgrid.m" (lines
 * 1-54). The feval function calls the implementation version of numgrid
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxNumgrid(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: numgrid Line: 1 Column: "
            "1 The function \"numgrid\" was called with mor"
            "e than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: numgrid Line: 1 Column:"
            " 1 The function \"numgrid\" was called with m"
            "ore than the declared number of inputs (2)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 2 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 2; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 2, mprhs[0], mprhs[1]);
    mplhs[0] = Mnumgrid(nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mnumgrid" is the implementation version of the "numgrid"
 * M-function from file "c:\matlab6p5\toolbox\matlab\demos\numgrid.m" (lines
 * 1-54). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function G = numgrid(R,n)
 */
static mxArray * Mnumgrid(int nargout_, mxArray * R, mxArray * n) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_numgrid);
    mxArray * G = NULL;
    mxArray * k = NULL;
    mxArray * ans = NULL;
    mxArray * r = NULL;
    mxArray * t = NULL;
    mxArray * SIGMA = NULL;
    mxArray * RHO = NULL;
    mxArray * y = NULL;
    mxArray * x = NULL;
    mclCopyArray(&R);
    mclCopyArray(&n);
    /*
     * %NUMGRID Number the grid points in a two dimensional region.
     * %   G = NUMGRID('R',n) numbers the points on an n-by-n grid in
     * %   the subregion of -1<=x<=1 and -1<=y<=1 determined by 'R'.
     * %   SPY(NUMGRID('R',n)) plots the points.
     * %   DELSQ(NUMGRID('R',n)) generates the 5-point discrete Laplacian.
     * %   The regions currently available are:
     * %      'S' - the entire square.
     * %      'L' - the L-shaped domain made from 3/4 of the entire square.
     * %      'C' - like the 'L', but with a quarter circle in the 4-th square.
     * %      'D' - the unit disc.
     * %      'A' - an annulus.
     * %      'H' - a heart-shaped cardioid.
     * %      'B' - the exterior of a "Butterfly".
     * %      'N' - a nested dissection ordering of the square.
     * %   To add other regions, edit toolbox/matlab/demos/numgrid.m.
     * %
     * %   See also DELSQ, DELSQSHOW, DELSQDEMO.
     * 
     * %   C. Moler, 7-16-91, 12-22-93.
     * %   Copyright 1984-2002 The MathWorks, Inc. 
     * %   $Revision: 5.8 $  $Date: 2002/06/14 20:33:41 $
     * 
     * if R == 'N'
     */
    if (mclEqBool(mclVa(R, "R"), _mxarray0_)) {
        /*
         * G = nested(n);
         */
        mlfAssign(&G, mlfNested(mclVa(n, "n")));
    /*
     * else
     */
    } else {
        /*
         * x = ones(n,1)*[-1, (-(n-3):2:(n-3))/(n-1), 1];
         */
        mlfAssign(
          &x,
          mclMtimes(
            mlfOnes(mclVa(n, "n"), _mxarray2_, NULL),
            mlfHorzcat(
              _mxarray3_,
              mclMrdivide(
                mlfColon(
                  mclUminus(mclMinus(mclVa(n, "n"), _mxarray4_)),
                  _mxarray5_,
                  mclMinus(mclVa(n, "n"), _mxarray4_)),
                mclMinus(mclVa(n, "n"), _mxarray2_)),
              _mxarray2_,
              NULL)));
        /*
         * y = flipud(x');
         */
        mlfAssign(&y, mlfFlipud(mlfCtranspose(mclVv(x, "x"))));
        /*
         * if R == 'S'
         */
        if (mclEqBool(mclVa(R, "R"), _mxarray6_)) {
            /*
             * G = (x > -1) & (x < 1) & (y > -1) & (y < 1);
             */
            mlfAssign(
              &G,
              mclAnd(
                mclAnd(
                  mclAnd(
                    mclGt(mclVv(x, "x"), _mxarray3_),
                    mclLt(mclVv(x, "x"), _mxarray2_)),
                  mclGt(mclVv(y, "y"), _mxarray3_)),
                mclLt(mclVv(y, "y"), _mxarray2_)));
        /*
         * elseif R == 'L'
         */
        } else if (mclEqBool(mclVa(R, "R"), _mxarray8_)) {
            /*
             * G = (x > -1) & (x < 1) & (y > -1) & (y < 1) & ( (x > 0) | (y > 0));
             */
            mlfAssign(
              &G,
              mclAnd(
                mclAnd(
                  mclAnd(
                    mclAnd(
                      mclGt(mclVv(x, "x"), _mxarray3_),
                      mclLt(mclVv(x, "x"), _mxarray2_)),
                    mclGt(mclVv(y, "y"), _mxarray3_)),
                  mclLt(mclVv(y, "y"), _mxarray2_)),
                mclOr(
                  mclGt(mclVv(x, "x"), _mxarray10_),
                  mclGt(mclVv(y, "y"), _mxarray10_))));
        /*
         * elseif R == 'C'
         */
        } else if (mclEqBool(mclVa(R, "R"), _mxarray11_)) {
            /*
             * G = (x > -1) & (x < 1) & (y > -1) & (y < 1) & ((x+1).^2+(y+1).^2 > 1);
             */
            mlfAssign(
              &G,
              mclAnd(
                mclAnd(
                  mclAnd(
                    mclAnd(
                      mclGt(mclVv(x, "x"), _mxarray3_),
                      mclLt(mclVv(x, "x"), _mxarray2_)),
                    mclGt(mclVv(y, "y"), _mxarray3_)),
                  mclLt(mclVv(y, "y"), _mxarray2_)),
                mclGt(
                  mclPlus(
                    mlfPower(mclPlus(mclVv(x, "x"), _mxarray2_), _mxarray5_),
                    mlfPower(mclPlus(mclVv(y, "y"), _mxarray2_), _mxarray5_)),
                  _mxarray2_)));
        /*
         * elseif R == 'D'
         */
        } else if (mclEqBool(mclVa(R, "R"), _mxarray13_)) {
            /*
             * G = x.^2 + y.^2 < 1;
             */
            mlfAssign(
              &G,
              mclLt(
                mclPlus(
                  mlfPower(mclVv(x, "x"), _mxarray5_),
                  mlfPower(mclVv(y, "y"), _mxarray5_)),
                _mxarray2_));
        /*
         * elseif R == 'A'
         */
        } else if (mclEqBool(mclVa(R, "R"), _mxarray15_)) {
            /*
             * G = ( x.^2 + y.^2 < 1) & ( x.^2 + y.^2 > 1/3);
             */
            mlfAssign(
              &G,
              mclAnd(
                mclLt(
                  mclPlus(
                    mlfPower(mclVv(x, "x"), _mxarray5_),
                    mlfPower(mclVv(y, "y"), _mxarray5_)),
                  _mxarray2_),
                mclGt(
                  mclPlus(
                    mlfPower(mclVv(x, "x"), _mxarray5_),
                    mlfPower(mclVv(y, "y"), _mxarray5_)),
                  _mxarray17_)));
        /*
         * elseif R == 'H'
         */
        } else if (mclEqBool(mclVa(R, "R"), _mxarray18_)) {
            /*
             * RHO = .75; SIGMA = .75;
             */
            mlfAssign(&RHO, _mxarray20_);
            mlfAssign(&SIGMA, _mxarray20_);
            /*
             * G = (x.^2+y.^2).*(x.^2+y.^2-SIGMA*y) < RHO*x.^2;
             */
            mlfAssign(
              &G,
              mclLt(
                mclTimes(
                  mclPlus(
                    mlfPower(mclVv(x, "x"), _mxarray5_),
                    mlfPower(mclVv(y, "y"), _mxarray5_)),
                  mclMinus(
                    mclPlus(
                      mlfPower(mclVv(x, "x"), _mxarray5_),
                      mlfPower(mclVv(y, "y"), _mxarray5_)),
                    mclMtimes(mclVv(SIGMA, "SIGMA"), mclVv(y, "y")))),
                mclMtimes(
                  mclVv(RHO, "RHO"), mlfPower(mclVv(x, "x"), _mxarray5_))));
        /*
         * elseif R == 'B'
         */
        } else if (mclEqBool(mclVa(R, "R"), _mxarray21_)) {
            /*
             * t = atan2(y,x);
             */
            mlfAssign(&t, mlfAtan2(mclVv(y, "y"), mclVv(x, "x")));
            /*
             * r = sqrt(x.^2 + y.^2);
             */
            mlfAssign(
              &r,
              mlfSqrt(
                mclPlus(
                  mlfPower(mclVv(x, "x"), _mxarray5_),
                  mlfPower(mclVv(y, "y"), _mxarray5_))));
            /*
             * G = (r >= sin(2*t) + .2*sin(8*t)) & ...
             */
            mlfAssign(
              &G,
              mclAnd(
                mclAnd(
                  mclAnd(
                    mclAnd(
                      mclGe(
                        mclVv(r, "r"),
                        mclPlus(
                          mlfSin(mclMtimes(_mxarray5_, mclVv(t, "t"))),
                          mclMtimes(
                            _mxarray23_,
                            mlfSin(mclMtimes(_mxarray24_, mclVv(t, "t")))))),
                      mclGt(mclVv(x, "x"), _mxarray3_)),
                    mclLt(mclVv(x, "x"), _mxarray2_)),
                  mclGt(mclVv(y, "y"), _mxarray3_)),
                mclLt(mclVv(y, "y"), _mxarray2_)));
        /*
         * (x > -1) & (x < 1) & (y > -1) & (y < 1);
         * else
         */
        } else {
            /*
             * error('Invalid region type.');
             */
            mlfError(_mxarray25_, NULL);
        /*
         * end
         */
        }
        /*
         * k = find(G);
         */
        mlfAssign(&k, mlfFind(NULL, NULL, mclVv(G, "G")));
        /*
         * G = zeros(size(G));      % Convert from logical to double matrix
         */
        mlfAssign(
          &G,
          mlfZeros(mlfSize(mclValueVarargout(), mclVv(G, "G"), NULL), NULL));
        /*
         * G(k) = (1:length(k))';
         */
        mclArrayAssign1(
          &G,
          mlfCtranspose(
            mlfColon(_mxarray2_, mlfScalar(mclLengthInt(mclVv(k, "k"))), NULL)),
          mclVv(k, "k"));
    /*
     * end
     */
    }
    mclValidateOutput(G, 1, nargout_, "G", "numgrid");
    mxDestroyArray(x);
    mxDestroyArray(y);
    mxDestroyArray(RHO);
    mxDestroyArray(SIGMA);
    mxDestroyArray(t);
    mxDestroyArray(r);
    mxDestroyArray(ans);
    mxDestroyArray(k);
    mxDestroyArray(n);
    mxDestroyArray(R);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return G;
}
