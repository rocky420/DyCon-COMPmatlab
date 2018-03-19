/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "stab2dcalcul.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "matrstab2d.h"
#include "normel22d.h"
#include "numgrid.h"

static mxChar _array1_[4] = { 'l', 'o', 'n', 'g' };
static mxArray * _mxarray0_;

static mxChar _array3_[75] = { '|', '-', '-', '-', '-', '-', '-', '-', '-', '-',
                               '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
                               '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
                               '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
                               '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
                               '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
                               '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
                               '-', '-', '-', '-', '|' };
static mxArray * _mxarray2_;

static mxChar _array5_[75] = { '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', '|' };
static mxArray * _mxarray4_;

static mxChar _array7_[75] = { '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'S', 't',
                               'a', 'b', 'i', 'l', 'i', 'z', 'a', 't', 'i', 'o',
                               'n', ' ', '2', 'D', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', '|' };
static mxArray * _mxarray6_;
static mxArray * _mxarray8_;

static mxChar _array10_[1] = { 'S' };
static mxArray * _mxarray9_;
static mxArray * _mxarray11_;
static mxArray * _mxarray12_;
static mxArray * _mxarray13_;
static mxArray * _mxarray14_;

void InitializeModule_stab2dcalcul(void) {
    _mxarray0_ = mclInitializeString(4, _array1_);
    _mxarray2_ = mclInitializeString(75, _array3_);
    _mxarray4_ = mclInitializeString(75, _array5_);
    _mxarray6_ = mclInitializeString(75, _array7_);
    _mxarray8_ = mclInitializeDouble(1.0);
    _mxarray9_ = mclInitializeString(1, _array10_);
    _mxarray11_ = mclInitializeDouble(2.0);
    _mxarray12_ = mclInitializeDouble(0.0);
    _mxarray13_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray14_ = mclInitializeDouble(.5);
}

void TerminateModule_stab2dcalcul(void) {
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mstab2dcalcul(mxArray * * temps,
                               int nargout_,
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

_mexLocalFunctionTable _local_function_table_stab2dcalcul
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfStab2dcalcul" contains the normal interface for the
 * "stab2dcalcul" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\stab2dcalcul.m" (lines
 * 1-101). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfStab2dcalcul(mxArray * * temps,
                          mxArray * a,
                          mxArray * b,
                          mxArray * J,
                          mxArray * mu,
                          mxArray * T,
                          mxArray * coeffdamp,
                          mxArray * dampband,
                          mxArray * viscos,
                          mxArray * U01,
                          mxArray * U11) {
    int nargout = 1;
    mxArray * ener = NULL;
    mxArray * temps__ = NULL;
    mlfEnterNewContext(
      1, 10, temps, a, b, J, mu, T, coeffdamp, dampband, viscos, U01, U11);
    if (temps != NULL) {
        ++nargout;
    }
    ener
      = Mstab2dcalcul(
          &temps__,
          nargout,
          a,
          b,
          J,
          mu,
          T,
          coeffdamp,
          dampband,
          viscos,
          U01,
          U11);
    mlfRestorePreviousContext(
      1, 10, temps, a, b, J, mu, T, coeffdamp, dampband, viscos, U01, U11);
    if (temps != NULL) {
        mclCopyOutputArg(temps, temps__);
    } else {
        mxDestroyArray(temps__);
    }
    return mlfReturnValue(ener);
}

/*
 * The function "mlxStab2dcalcul" contains the feval interface for the
 * "stab2dcalcul" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\stab2dcalcul.m" (lines
 * 1-101). The feval function calls the implementation version of stab2dcalcul
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxStab2dcalcul(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[10];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab2dcalcul Line: 1 Column"
            ": 1 The function \"stab2dcalcul\" was called with"
            " more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 10) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab2dcalcul Line: 1 Column"
            ": 1 The function \"stab2dcalcul\" was called with"
            " more than the declared number of inputs (10)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 10 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 10; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(
      0,
      10,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6],
      mprhs[7],
      mprhs[8],
      mprhs[9]);
    mplhs[0]
      = Mstab2dcalcul(
          &mplhs[1],
          nlhs,
          mprhs[0],
          mprhs[1],
          mprhs[2],
          mprhs[3],
          mprhs[4],
          mprhs[5],
          mprhs[6],
          mprhs[7],
          mprhs[8],
          mprhs[9]);
    mlfRestorePreviousContext(
      0,
      10,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6],
      mprhs[7],
      mprhs[8],
      mprhs[9]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "Mstab2dcalcul" is the implementation version of the
 * "stab2dcalcul" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\stab2dcalcul.m" (lines
 * 1-101). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [ener,temps]=stab2dcalcul(a,b,J,mu,T,coeffdamp,dampband,viscos,U01,U11)
 */
static mxArray * Mstab2dcalcul(mxArray * * temps,
                               int nargout_,
                               mxArray * a,
                               mxArray * b,
                               mxArray * J,
                               mxArray * mu,
                               mxArray * T,
                               mxArray * coeffdamp,
                               mxArray * dampband,
                               mxArray * viscos,
                               mxArray * U01,
                               mxArray * U11) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab2dcalcul);
    mxArray * ener = NULL;
    mxArray * zt = NULL;
    mxArray * zx = NULL;
    mxArray * dyf = NULL;
    mxArray * dxf = NULL;
    mxArray * totnp1 = NULL;
    mxArray * Y1np1 = NULL;
    mxArray * totn = NULL;
    mxArray * totnm1 = NULL;
    mxArray * n = NULL;
    mxArray * Y1n = NULL;
    mxArray * Y1nm1 = NULL;
    mxArray * du1 = NULL;
    mxArray * u1 = NULL;
    mxArray * M3 = NULL;
    mxArray * M2 = NULL;
    mxArray * M1 = NULL;
    mxArray * r0 = NULL;
    mxArray * N = NULL;
    mxArray * dt = NULL;
    mxArray * p = NULL;
    mxArray * G1 = NULL;
    mxArray * G = NULL;
    mxArray * Y = NULL;
    mxArray * X = NULL;
    mxArray * y = NULL;
    mxArray * x = NULL;
    mxArray * h = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&a);
    mclCopyArray(&b);
    mclCopyArray(&J);
    mclCopyArray(&mu);
    mclCopyArray(&T);
    mclCopyArray(&coeffdamp);
    mclCopyArray(&dampband);
    mclCopyArray(&viscos);
    mclCopyArray(&U01);
    mclCopyArray(&U11);
    /*
     * 
     * %Commentaires:
     * % % This program feigns the stabilization 1D of a rope of length 1.
     * % There is no associated sub-routine. We use a plan of order 2 at time and in space. 
     * % The initial data ( t=0 ) are in U01 and U11.
     * % There is two parametres alpha and beta:
     * % Alpha=0 no terms of viscosity alpha=1 terms of viscosity 
     * %  beta=0 not of damping beta=1 damping 
     * 
     * format long;
     */
    mlfFormat(_mxarray0_, NULL);
    /*
     * 
     * disp('|-------------------------------------------------------------------------|')
     */
    mlfDisp(_mxarray2_);
    /*
     * disp('|                                                                         |')
     */
    mlfDisp(_mxarray4_);
    /*
     * disp('|                           Stabilization 2D                              |')
     */
    mlfDisp(_mxarray6_);
    /*
     * disp('|                                                                         |')
     */
    mlfDisp(_mxarray4_);
    /*
     * disp('|-------------------------------------------------------------------------|')
     */
    mlfDisp(_mxarray2_);
    /*
     * 
     * %-------------------------------------------------------------------------
     * % PARAMETRIZE FOR THE MESHING
     * %-------------------------------------------------------------------------
     * 
     * h = 1/(J+1);
     */
    mlfAssign(&h, mclMrdivide(_mxarray8_, mclPlus(mclVa(J, "J"), _mxarray8_)));
    /*
     * x = a:h:b;
     */
    mlfAssign(&x, mlfColon(mclVa(a, "a"), mclVv(h, "h"), mclVa(b, "b")));
    /*
     * y=x;
     */
    mlfAssign(&y, mclVv(x, "x"));
    /*
     * 
     * [X,Y] = meshgrid(x,y);
     */
    mlfAssign(
      &X, mlfNMeshgrid(2, &Y, NULL, mclVv(x, "x"), mclVv(y, "y"), NULL));
    /*
     * Y=flipud(Y);
     */
    mlfAssign(&Y, mlfFlipud(mclVv(Y, "Y")));
    /*
     * G = numgrid('S',J+2);
     */
    mlfAssign(&G, mlfNumgrid(_mxarray9_, mclPlus(mclVa(J, "J"), _mxarray11_)));
    /*
     * G1=G;
     */
    mlfAssign(&G1, mclVv(G, "G"));
    /*
     * p=ceil((J-1)*dampband);
     */
    mlfAssign(
      &p,
      mlfCeil(
        mclMtimes(
          mclMinus(mclVa(J, "J"), _mxarray8_), mclVa(dampband, "dampband"))));
    /*
     * G1(p+2:J+1,1:J+1-p)=0;
     */
    mclArrayAssign2(
      &G1,
      _mxarray12_,
      mlfColon(
        mclPlus(mclVv(p, "p"), _mxarray11_),
        mclPlus(mclVa(J, "J"), _mxarray8_),
        NULL),
      mlfColon(
        _mxarray8_,
        mclMinus(mclPlus(mclVa(J, "J"), _mxarray8_), mclVv(p, "p")),
        NULL));
    /*
     * 
     * dt=mu*h;
     */
    mlfAssign(&dt, mclMtimes(mclVa(mu, "mu"), mclVv(h, "h")));
    /*
     * 
     * if viscos ~=0.
     */
    if (mclNeBool(mclVa(viscos, "viscos"), _mxarray12_)) {
        /*
         * viscos=1.;
         */
        mlfAssign(&viscos, _mxarray8_);
    /*
     * end
     */
    }
    /*
     * 
     * %-------------------------------------------------------------------------
     * % TIME T to which the system owes etre stabilized
     * %-------------------------------------------------------------------------
     * 
     * N = ceil(T/dt);
     */
    mlfAssign(&N, mlfCeil(mclMrdivide(mclVa(T, "T"), mclVv(dt, "dt"))));
    /*
     * temps=0:dt:T;
     */
    mlfAssign(temps, mlfColon(_mxarray12_, mclVv(dt, "dt"), mclVa(T, "T")));
    /*
     * 
     * r0 = (dt/h)^2;
     */
    mlfAssign(
      &r0, mclMpower(mclMrdivide(mclVv(dt, "dt"), mclVv(h, "h")), _mxarray11_));
    /*
     * 
     * [M1,M2,M3] = matrstab2d(G,G1,J,r0,dt,coeffdamp,viscos);
     */
    mlfAssign(
      &M1,
      mlfMatrstab2d(
        &M2,
        &M3,
        mclVv(G, "G"),
        mclVv(G1, "G1"),
        mclVa(J, "J"),
        mclVv(r0, "r0"),
        mclVv(dt, "dt"),
        mclVa(coeffdamp, "coeffdamp"),
        mclVa(viscos, "viscos")));
    /*
     * 
     * u1 = U01;
     */
    mlfAssign(&u1, mclVa(U01, "U01"));
    /*
     * du1 = U11;
     */
    mlfAssign(&du1, mclVa(U11, "U11"));
    /*
     * %--------------------------------------------------------------
     * % Initialization of the buckle in time
     * %--------------------------------------------------------------
     * Y1nm1 = u1;
     */
    mlfAssign(&Y1nm1, mclVv(u1, "u1"));
    /*
     * Y1nm1 = Y1nm1(G>0);
     */
    mlfAssign(
      &Y1nm1,
      mclArrayRef1(mclVv(Y1nm1, "Y1nm1"), mclGt(mclVv(G, "G"), _mxarray12_)));
    /*
     * du1 = du1(G>0);
     */
    mlfAssign(
      &du1, mclArrayRef1(mclVv(du1, "du1"), mclGt(mclVv(G, "G"), _mxarray12_)));
    /*
     * 
     * %****************** Calculation of u in time dt**********************
     * %Y1n = ( M2*Y1nm1 - 2*dt*M3*du1 )/2;
     * Y1n = Y1nm1 + dt*du1;
     */
    mlfAssign(
      &Y1n,
      mclPlus(
        mclVv(Y1nm1, "Y1nm1"), mclMtimes(mclVv(dt, "dt"), mclVv(du1, "du1"))));
    /*
     * 
     * % We use here the fact M3-M1 = 2Id whom there is viscous and damping 
     * % or not.
     * n=0;
     */
    mlfAssign(&n, _mxarray12_);
    /*
     * totnm1=G;
     */
    mlfAssign(&totnm1, mclVv(G, "G"));
    /*
     * totnm1(G>0)=full(Y1nm1(G(G>0)));
     */
    mclArrayAssign1(
      &totnm1,
      mlfFull(
        mclArrayRef1(
          mclVv(Y1nm1, "Y1nm1"),
          mclArrayRef1(mclVv(G, "G"), mclGt(mclVv(G, "G"), _mxarray12_)))),
      mclGt(mclVv(G, "G"), _mxarray12_));
    /*
     * 
     * n=1;
     */
    mlfAssign(&n, _mxarray8_);
    /*
     * totn=G;
     */
    mlfAssign(&totn, mclVv(G, "G"));
    /*
     * totn(G>0)=full(Y1n(G(G>0)));
     */
    mclArrayAssign1(
      &totn,
      mlfFull(
        mclArrayRef1(
          mclVv(Y1n, "Y1n"),
          mclArrayRef1(mclVv(G, "G"), mclGt(mclVv(G, "G"), _mxarray12_)))),
      mclGt(mclVv(G, "G"), _mxarray12_));
    /*
     * 
     * ener=zeros(1,N);
     */
    mlfAssign(&ener, mlfZeros(_mxarray8_, mclVv(N, "N"), NULL));
    /*
     * 
     * %-------------------------------------------------------------
     * % Buckle in time
     * %-------------------------------------------------------------
     * for n = 2:N 
     */
    {
        int v_ = mclForIntStart(2);
        int e_ = mclForIntEnd(mclVv(N, "N"));
        if (v_ > e_) {
            mlfAssign(&n, _mxarray13_);
        } else {
            /*
             * 
             * %******************** Calculation of Y1(n+1) *********************
             * Y1np1 = M1\(M2*Y1n + M3*Y1nm1) ;
             * 
             * % Preparation of the next passage in the buckle
             * Y1nm1 = Y1n; Y1n = Y1np1;
             * totnp1=G;
             * totnp1(G>0)=full(Y1np1(G(G>0)));
             * 
             * %calcul of the energie of the systeme has the moment n-1
             * %partial space
             * [dxf,dyf] = gradient(totn,x,y);
             * zx = normel22d(dxf,J,h)^2+normel22d(dyf,J,h)^2;
             * % partial time
             * zt=normel22d((totnp1-totnm1)/2/dt,J,h)^2;    
             * ener(n-1)=0.5*(zx+zt);
             * totnm1=totn;
             * totn=totnp1;    
             * end
             */
            for (; ; ) {
                mlfAssign(
                  &Y1np1,
                  mlfMldivide(
                    mclVv(M1, "M1"),
                    mclPlus(
                      mclMtimes(mclVv(M2, "M2"), mclVv(Y1n, "Y1n")),
                      mclMtimes(mclVv(M3, "M3"), mclVv(Y1nm1, "Y1nm1")))));
                mlfAssign(&Y1nm1, mclVv(Y1n, "Y1n"));
                mlfAssign(&Y1n, mclVv(Y1np1, "Y1np1"));
                mlfAssign(&totnp1, mclVv(G, "G"));
                mclArrayAssign1(
                  &totnp1,
                  mlfFull(
                    mclArrayRef1(
                      mclVv(Y1np1, "Y1np1"),
                      mclArrayRef1(
                        mclVv(G, "G"), mclGt(mclVv(G, "G"), _mxarray12_)))),
                  mclGt(mclVv(G, "G"), _mxarray12_));
                mlfGradient(
                  mlfVarargout(&dxf, &dyf, NULL),
                  mclVv(totn, "totn"),
                  mclVv(x, "x"),
                  mclVv(y, "y"),
                  NULL);
                mlfAssign(
                  &zx,
                  mclPlus(
                    mclMpower(
                      mlfNormel22d(
                        NULL, mclVv(dxf, "dxf"), mclVa(J, "J"), mclVv(h, "h")),
                      _mxarray11_),
                    mclMpower(
                      mlfNormel22d(
                        NULL, mclVv(dyf, "dyf"), mclVa(J, "J"), mclVv(h, "h")),
                      _mxarray11_)));
                mlfAssign(
                  &zt,
                  mclMpower(
                    mlfNormel22d(
                      NULL,
                      mclMrdivide(
                        mclMrdivide(
                          mclMinus(
                            mclVv(totnp1, "totnp1"), mclVv(totnm1, "totnm1")),
                          _mxarray11_),
                        mclVv(dt, "dt")),
                      mclVa(J, "J"),
                      mclVv(h, "h")),
                    _mxarray11_));
                mclIntArrayAssign1(
                  &ener,
                  mclMtimes(
                    _mxarray14_, mclPlus(mclVv(zx, "zx"), mclVv(zt, "zt"))),
                  v_ - 1);
                mlfAssign(&totnm1, mclVv(totn, "totn"));
                mlfAssign(&totn, mclVv(totnp1, "totnp1"));
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&n, mlfScalar(v_));
        }
    }
    mclValidateOutput(ener, 1, nargout_, "ener", "stab2dcalcul");
    mclValidateOutput(*temps, 2, nargout_, "temps", "stab2dcalcul");
    mxDestroyArray(ans);
    mxDestroyArray(h);
    mxDestroyArray(x);
    mxDestroyArray(y);
    mxDestroyArray(X);
    mxDestroyArray(Y);
    mxDestroyArray(G);
    mxDestroyArray(G1);
    mxDestroyArray(p);
    mxDestroyArray(dt);
    mxDestroyArray(N);
    mxDestroyArray(r0);
    mxDestroyArray(M1);
    mxDestroyArray(M2);
    mxDestroyArray(M3);
    mxDestroyArray(u1);
    mxDestroyArray(du1);
    mxDestroyArray(Y1nm1);
    mxDestroyArray(Y1n);
    mxDestroyArray(n);
    mxDestroyArray(totnm1);
    mxDestroyArray(totn);
    mxDestroyArray(Y1np1);
    mxDestroyArray(totnp1);
    mxDestroyArray(dxf);
    mxDestroyArray(dyf);
    mxDestroyArray(zx);
    mxDestroyArray(zt);
    mxDestroyArray(U11);
    mxDestroyArray(U01);
    mxDestroyArray(viscos);
    mxDestroyArray(dampband);
    mxDestroyArray(coeffdamp);
    mxDestroyArray(T);
    mxDestroyArray(mu);
    mxDestroyArray(J);
    mxDestroyArray(b);
    mxDestroyArray(a);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return ener;
    /*
     * 
     * %end
     */
}
