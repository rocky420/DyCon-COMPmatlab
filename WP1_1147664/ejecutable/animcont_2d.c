/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:58 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "animcont_2d.h"
#include "bdycond2d.h"
#include "controle2d.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "matr2d.h"
#include "mesh.h"
#include "normel22.h"
#include "numgrid.h"
#include "title.h"

static mxChar _array1_[75] = { '|', '-', '-', '-', '-', '-', '-', '-', '-', '-',
                               '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
                               '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
                               '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
                               '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
                               '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
                               '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
                               '-', '-', '-', '-', '|' };
static mxArray * _mxarray0_;

static mxChar _array3_[75] = { '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', '|' };
static mxArray * _mxarray2_;

static mxChar _array5_[75] = { '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'o', 'n',
                               't', 'r', 'o', 'l', ' ', 'o', 'f', ' ', 'w', 'a',
                               'v', 'e', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', '|' };
static mxArray * _mxarray4_;
static mxArray * _mxarray6_;
static mxArray * _mxarray7_;

static mxChar _array9_[1] = { 'S' };
static mxArray * _mxarray8_;
static mxArray * _mxarray10_;

static mxChar _array12_[20] = { 'P', 'o', 's', 'i', 't', 'i', 'o',
                                'n', ' ', 'a', 't', ' ', 't', 'i',
                                'm', 'e', ' ', 't', '=', '0' };
static mxArray * _mxarray11_;
static mxArray * _mxarray13_;
static mxArray * _mxarray14_;

static mxChar _array16_[20] = { 'P', 'o', 's', 'i', 't', 'i', 'o',
                                'n', ' ', 'a', 't', ' ', 't', 'i',
                                'm', 'e', ' ', 't', ' ', '=' };
static mxArray * _mxarray15_;

static mxChar _array18_[56] = { 'w', 'i', 't', 'h', ' ', 'c', 'o', 'n',
                                't', 'r', 'o', 'l', ' ', '|', '|', 'u',
                                'c', '(', 'T', ')', '|', '|', ' ', 'L',
                                '2', '(', 'o', 'm', 'e', 'g', 'a', ')',
                                ' ', '/', ' ', '|', '|', 'u', '0', '|',
                                '|', ' ', 'L', '2', '(', 'o', 'm', 'e',
                                'g', 'a', ')', ' ', '=', ' ', '%', 'g' };
static mxArray * _mxarray17_;

static mxChar _array20_[59] = { 'w', 'i', 't', 'h', 'o', 'u', 't', ' ', 'c',
                                'o', 'n', 't', 'r', 'o', 'l', ' ', '|', '|',
                                'u', 'c', '(', 'T', ')', '|', '|', ' ', 'L',
                                '2', '(', 'o', 'm', 'e', 'g', 'a', ')', ' ',
                                '/', ' ', '|', '|', 'u', '0', '|', '|', ' ',
                                'L', '2', '(', 'o', 'm', 'e', 'g', 'a', ')',
                                ' ', '=', ' ', '%', 'g' };
static mxArray * _mxarray19_;

void InitializeModule_animcont_2d(void) {
    _mxarray0_ = mclInitializeString(75, _array1_);
    _mxarray2_ = mclInitializeString(75, _array3_);
    _mxarray4_ = mclInitializeString(75, _array5_);
    _mxarray6_ = mclInitializeDouble(.0001);
    _mxarray7_ = mclInitializeDouble(1.0);
    _mxarray8_ = mclInitializeString(1, _array9_);
    _mxarray10_ = mclInitializeDouble(2.0);
    _mxarray11_ = mclInitializeString(20, _array12_);
    _mxarray13_ = mclInitializeDouble(0.0);
    _mxarray14_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray15_ = mclInitializeString(20, _array16_);
    _mxarray17_ = mclInitializeString(56, _array18_);
    _mxarray19_ = mclInitializeString(59, _array20_);
}

void TerminateModule_animcont_2d(void) {
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Manimcont_2d(int nargout_,
                              mxArray * a,
                              mxArray * b,
                              mxArray * J,
                              mxArray * mu,
                              mxArray * T,
                              mxArray * U01,
                              mxArray * U11,
                              mxArray * ek01,
                              mxArray * ek11,
                              mxArray * axesol);

_mexLocalFunctionTable _local_function_table_animcont_2d
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfAnimcont_2d" contains the normal interface for the
 * "animcont_2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\animcont_2d.m" (lines
 * 1-147). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfAnimcont_2d(mxArray * a,
                         mxArray * b,
                         mxArray * J,
                         mxArray * mu,
                         mxArray * T,
                         mxArray * U01,
                         mxArray * U11,
                         mxArray * ek01,
                         mxArray * ek11,
                         mxArray * axesol) {
    int nargout = 1;
    mxArray * sol = NULL;
    mlfEnterNewContext(0, 10, a, b, J, mu, T, U01, U11, ek01, ek11, axesol);
    sol = Manimcont_2d(nargout, a, b, J, mu, T, U01, U11, ek01, ek11, axesol);
    mlfRestorePreviousContext(
      0, 10, a, b, J, mu, T, U01, U11, ek01, ek11, axesol);
    return mlfReturnValue(sol);
}

/*
 * The function "mlxAnimcont_2d" contains the feval interface for the
 * "animcont_2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\animcont_2d.m" (lines
 * 1-147). The feval function calls the implementation version of animcont_2d
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxAnimcont_2d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[10];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: animcont_2d Line: 1 Column"
            ": 1 The function \"animcont_2d\" was called with"
            " more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 10) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: animcont_2d Line: 1 Column"
            ": 1 The function \"animcont_2d\" was called with"
            " more than the declared number of inputs (10)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
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
      = Manimcont_2d(
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
}

/*
 * The function "Manimcont_2d" is the implementation version of the
 * "animcont_2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\animcont_2d.m" (lines
 * 1-147). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function sol=animcont_2d(a,b,J,mu,T,U01,U11,ek01,ek11,axesol)
 */
static mxArray * Manimcont_2d(int nargout_,
                              mxArray * a,
                              mxArray * b,
                              mxArray * J,
                              mxArray * mu,
                              mxArray * T,
                              mxArray * U01,
                              mxArray * U11,
                              mxArray * ek01,
                              mxArray * ek11,
                              mxArray * axesol) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_animcont_2d);
    mxArray * sol = NULL;
    mxArray * normfin2 = NULL;
    mxArray * normfin = NULL;
    mxArray * Freepsi1np1 = NULL;
    mxArray * phi1np1 = NULL;
    mxArray * dpsi1Np1 = NULL;
    mxArray * text1 = NULL;
    mxArray * Psi1np1 = NULL;
    mxArray * freepsi1np1 = NULL;
    mxArray * psi1np1 = NULL;
    mxArray * n = NULL;
    mxArray * freepsi1nm1 = NULL;
    mxArray * phi1nm1 = NULL;
    mxArray * psi1nm1 = NULL;
    mxArray * phi1n = NULL;
    mxArray * freepsi1n = NULL;
    mxArray * psi1n = NULL;
    mxArray * bc1 = NULL;
    mxArray * c1 = NULL;
    mxArray * axe1 = NULL;
    mxArray * freq = NULL;
    mxArray * M1 = NULL;
    mxArray * N = NULL;
    mxArray * r0 = NULL;
    mxArray * dt = NULL;
    mxArray * G = NULL;
    mxArray * Y = NULL;
    mxArray * X = NULL;
    mxArray * x = NULL;
    mxArray * h = NULL;
    mxArray * maxi = NULL;
    mxArray * minimo = NULL;
    mxArray * maximo = NULL;
    mxArray * PAUSE = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&a);
    mclCopyArray(&b);
    mclCopyArray(&J);
    mclCopyArray(&mu);
    mclCopyArray(&T);
    mclCopyArray(&U01);
    mclCopyArray(&U11);
    mclCopyArray(&ek01);
    mclCopyArray(&ek11);
    mclCopyArray(&axesol);
    /*
     * %    mov = avifile('contexac2dexample24.avi') 
     * disp('|-------------------------------------------------------------------------|')
     */
    mlfDisp(_mxarray0_);
    /*
     * disp('|                                                                         |')
     */
    mlfDisp(_mxarray2_);
    /*
     * disp('|                          Control of waves                               |')
     */
    mlfDisp(_mxarray4_);
    /*
     * disp('|                                                                         |')
     */
    mlfDisp(_mxarray2_);
    /*
     * disp('|-------------------------------------------------------------------------|')
     */
    mlfDisp(_mxarray0_);
    /*
     * 
     * PAUSE=0.0001;
     */
    mlfAssign(&PAUSE, _mxarray6_);
    /*
     * 
     * %-------------------------------------------------------------------------
     * % PARAMETRIZE FOR THE MESHING
     * %-------------------------------------------------------------------------
     * 
     * maximo=max(max(U01));
     */
    mlfAssign(
      &maximo,
      mlfMax(NULL, mlfMax(NULL, mclVa(U01, "U01"), NULL, NULL), NULL, NULL));
    /*
     * minimo=min(min(U01));
     */
    mlfAssign(
      &minimo,
      mlfMin(NULL, mlfMin(NULL, mclVa(U01, "U01"), NULL, NULL), NULL, NULL));
    /*
     * 
     * maxi=max(abs(maximo),abs(minimo));
     */
    mlfAssign(
      &maxi,
      mlfMax(
        NULL,
        mlfAbs(mclVv(maximo, "maximo")),
        mlfAbs(mclVv(minimo, "minimo")),
        NULL));
    /*
     * 
     * h = (b-a)/(J+1);
     */
    mlfAssign(
      &h,
      mclMrdivide(
        mclMinus(mclVa(b, "b"), mclVa(a, "a")),
        mclPlus(mclVa(J, "J"), _mxarray7_)));
    /*
     * x = a:h:b;
     */
    mlfAssign(&x, mlfColon(mclVa(a, "a"), mclVv(h, "h"), mclVa(b, "b")));
    /*
     * 
     * [X,Y] = meshgrid(x,x);
     */
    mlfAssign(
      &X, mlfNMeshgrid(2, &Y, NULL, mclVv(x, "x"), mclVv(x, "x"), NULL));
    /*
     * Y=flipud(Y);
     */
    mlfAssign(&Y, mlfFlipud(mclVv(Y, "Y")));
    /*
     * G = numgrid('S',J+2);
     */
    mlfAssign(&G, mlfNumgrid(_mxarray8_, mclPlus(mclVa(J, "J"), _mxarray10_)));
    /*
     * 
     * dt=mu*h;
     */
    mlfAssign(&dt, mclMtimes(mclVa(mu, "mu"), mclVv(h, "h")));
    /*
     * r0= (dt/h)^2;
     */
    mlfAssign(
      &r0, mclMpower(mclMrdivide(mclVv(dt, "dt"), mclVv(h, "h")), _mxarray10_));
    /*
     * 
     * N = ceil(T/dt);
     */
    mlfAssign(&N, mlfCeil(mclMrdivide(mclVa(T, "T"), mclVv(dt, "dt"))));
    /*
     * T=N*dt;
     */
    mlfAssign(&T, mclMtimes(mclVv(N, "N"), mclVv(dt, "dt")));
    /*
     * 
     * [M1] = matr2d(G,J,r0);
     */
    mlfAssign(&M1, mlfMatr2d(mclVv(G, "G"), mclVa(J, "J"), mclVv(r0, "r0")));
    /*
     * 
     * %-------------------------------------------------------------------------------------
     * %				ANIMATION OF THE STABILIZATION
     * %-------------------------------------------------------------------------------------
     * figure(1)
     */
    mclPrintAns(&ans, mlfNFigure(0, _mxarray7_, NULL));
    /*
     * freq = 1;
     */
    mlfAssign(&freq, _mxarray7_);
    /*
     * axe1 = [a b a b -maxi maxi];
     */
    mlfAssign(
      &axe1,
      mlfHorzcat(
        mclVa(a, "a"),
        mclVa(b, "b"),
        mclVa(a, "a"),
        mclVa(b, "b"),
        mclUminus(mclVv(maxi, "maxi")),
        mclVv(maxi, "maxi"),
        NULL));
    /*
     * 
     * %***************** Posting of psi in time 0 ****************************************
     * %axes(axesol);
     * mesh(X,Y,U01);
     */
    mclAssignAns(
      &ans, mlfNMesh(0, mclVv(X, "X"), mclVv(Y, "Y"), mclVa(U01, "U01"), NULL));
    /*
     * title('Position at time t=0');
     */
    mclAssignAns(&ans, mlfNTitle(0, _mxarray11_, NULL));
    /*
     * axis(axe1);
     */
    mclAssignAns(&ans, mlfNAxis(0, NULL, NULL, mclVv(axe1, "axe1"), NULL));
    /*
     * 
     * pause(PAUSE);
     */
    mlfPause(mclVv(PAUSE, "PAUSE"));
    /*
     * 
     * %***************** Calculation of the controle in time 0 **************************************
     * 
     * [c1] = controle2d(ek01(G>0),h,J,G,1);
     */
    mlfAssign(
      &c1,
      mlfControle2d(
        mclArrayRef1(mclVa(ek01, "ek01"), mclGt(mclVv(G, "G"), _mxarray13_)),
        mclVv(h, "h"),
        mclVa(J, "J"),
        mclVv(G, "G"),
        _mxarray7_));
    /*
     * [bc1] = bdycond2d(c1,X,Y,G,r0,h,J);
     */
    mlfAssign(
      &bc1,
      mlfBdycond2d(
        mclVv(c1, "c1"),
        mclVv(X, "X"),
        mclVv(Y, "Y"),
        mclVv(G, "G"),
        mclVv(r0, "r0"),
        mclVv(h, "h"),
        mclVa(J, "J")));
    /*
     * 
     * %***************** Calculation of psi in time dt *********************
     * 
     * psi1n = ( M1*U01(G>0) + 2*dt*U11(G>0) + bc1 ) / 2;
     */
    mlfAssign(
      &psi1n,
      mclMrdivide(
        mclPlus(
          mclPlus(
            mclMtimes(
              mclVv(M1, "M1"),
              mclArrayRef1(
                mclVa(U01, "U01"), mclGt(mclVv(G, "G"), _mxarray13_))),
            mclMtimes(
              mclMtimes(_mxarray10_, mclVv(dt, "dt")),
              mclArrayRef1(
                mclVa(U11, "U11"), mclGt(mclVv(G, "G"), _mxarray13_)))),
          mclVv(bc1, "bc1")),
        _mxarray10_));
    /*
     * 
     * %***************** Calculation of psi in time t without controle *****************************
     * freepsi1n = ( M1*U01(G>0) + 2*dt*U11(G>0) ) / 2;
     */
    mlfAssign(
      &freepsi1n,
      mclMrdivide(
        mclPlus(
          mclMtimes(
            mclVv(M1, "M1"),
            mclArrayRef1(mclVa(U01, "U01"), mclGt(mclVv(G, "G"), _mxarray13_))),
          mclMtimes(
            mclMtimes(_mxarray10_, mclVv(dt, "dt")),
            mclArrayRef1(
              mclVa(U11, "U11"), mclGt(mclVv(G, "G"), _mxarray13_)))),
        _mxarray10_));
    /*
     * 
     * %***************** Calculation of phi in time dt ******************************************
     * phi1n = ( M1*ek01(G>0) + 2*dt*ek11(G>0) ) / 2;
     */
    mlfAssign(
      &phi1n,
      mclMrdivide(
        mclPlus(
          mclMtimes(
            mclVv(M1, "M1"),
            mclArrayRef1(
              mclVa(ek01, "ek01"), mclGt(mclVv(G, "G"), _mxarray13_))),
          mclMtimes(
            mclMtimes(_mxarray10_, mclVv(dt, "dt")),
            mclArrayRef1(
              mclVa(ek11, "ek11"), mclGt(mclVv(G, "G"), _mxarray13_)))),
        _mxarray10_));
    /*
     * 
     * %***************** Initialization of psi and phi in time 0 for the buckle ********************
     * psi1nm1 = U01(G>0);
     */
    mlfAssign(
      &psi1nm1,
      mclArrayRef1(mclVa(U01, "U01"), mclGt(mclVv(G, "G"), _mxarray13_)));
    /*
     * phi1nm1 = ek01(G>0);
     */
    mlfAssign(
      &phi1nm1,
      mclArrayRef1(mclVa(ek01, "ek01"), mclGt(mclVv(G, "G"), _mxarray13_)));
    /*
     * 
     * freepsi1nm1 = U01(G>0);
     */
    mlfAssign(
      &freepsi1nm1,
      mclArrayRef1(mclVa(U01, "U01"), mclGt(mclVv(G, "G"), _mxarray13_)));
    /*
     * 
     * for n = 1:N
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclForIntEnd(mclVv(N, "N"));
        if (v_ > e_) {
            mlfAssign(&n, _mxarray14_);
        } else {
            /*
             * 
             * [c1] = controle2d(phi1n,h,J,G,1);
             * [bc1] = bdycond2d(c1,X,Y,G,r0,h,J);
             * 
             * psi1np1 = M1*psi1n -psi1nm1 + bc1;
             * freepsi1np1 = M1*freepsi1n -freepsi1nm1 ;
             * 
             * %*********************** Posting of psinp1 and freepsinp1 *****************************
             * if rem(n+1,freq) == 0
             * 
             * % Psi1np1 = G; Psi1np1(G>0) = full(psi1np1(G(G>0)));
             * % subplot(2,1,1);mesh(X,Y,Psi1np1+c1);
             * % axis(axe1);
             * % text1 = ['psi1 avec controle t=' num2str((n+1)*dt)];
             * % title(text1);
             * 
             * % Freepsi1np1 = G; Freepsi1np1(G>0) = full(freepsi1np1(G(G>0)));
             * % subplot(2,1,2);mesh(X,Y,Freepsi1np1);
             * % axis(axe1);
             * % text1 = ['psi1 sans controle t=' num2str((n+1)*dt)];
             * % title(text1);
             * 
             * % pause(0.5);
             * 
             * Psi1np1 = G; Psi1np1(G>0) = full(psi1np1(G(G>0)));
             * %axes(axesol);
             * reset(GCF);
             * mesh(X,Y,Psi1np1+c1);
             * 
             * axis(axe1);
             * %       F = getframe(gca);
             * %       mov = addframe(mov,F);
             * 
             * text1 = ['Position at time t =' num2str((n+1)*dt)];
             * title(text1);
             * 
             * % Freepsi1np1 = G; Freepsi1np1(G>0) = full(freepsi1np1(G(G>0)));
             * % subplot(2,1,2);mesh(X,Y,Freepsi1np1);
             * % axis(axe1);
             * % text1 = ['psi1 sans controle t=' num2str((n+1)*dt)];
             * % title(text1);
             * 
             * pause(PAUSE);
             * 
             * end %if
             * 
             * psi1nm1 = psi1n; psi1n = psi1np1;
             * freepsi1nm1 = freepsi1n; freepsi1n = freepsi1np1;
             * 
             * %************* Calculation of dpsi / dt ( T )
             * if n == N
             * dpsi1Np1 = (psi1np1-psi1nm1)/2/dt;
             * end
             * 
             * %************* Calculation of phi for the calculation of the controle in n+2
             * phi1np1 = M1*phi1n - phi1nm1 ;
             * phi1nm1 = phi1n; phi1n = phi1np1;
             * 
             * end %for
             */
            for (; ; ) {
                mlfAssign(
                  &c1,
                  mlfControle2d(
                    mclVv(phi1n, "phi1n"),
                    mclVv(h, "h"),
                    mclVa(J, "J"),
                    mclVv(G, "G"),
                    _mxarray7_));
                mlfAssign(
                  &bc1,
                  mlfBdycond2d(
                    mclVv(c1, "c1"),
                    mclVv(X, "X"),
                    mclVv(Y, "Y"),
                    mclVv(G, "G"),
                    mclVv(r0, "r0"),
                    mclVv(h, "h"),
                    mclVa(J, "J")));
                mlfAssign(
                  &psi1np1,
                  mclPlus(
                    mclMinus(
                      mclMtimes(mclVv(M1, "M1"), mclVv(psi1n, "psi1n")),
                      mclVv(psi1nm1, "psi1nm1")),
                    mclVv(bc1, "bc1")));
                mlfAssign(
                  &freepsi1np1,
                  mclMinus(
                    mclMtimes(mclVv(M1, "M1"), mclVv(freepsi1n, "freepsi1n")),
                    mclVv(freepsi1nm1, "freepsi1nm1")));
                if (mclEqBool(
                      mlfRem(mlfScalar(v_ + 1), mclVv(freq, "freq")),
                      _mxarray13_)) {
                    mlfAssign(&Psi1np1, mclVv(G, "G"));
                    mclArrayAssign1(
                      &Psi1np1,
                      mlfFull(
                        mclArrayRef1(
                          mclVv(psi1np1, "psi1np1"),
                          mclArrayRef1(
                            mclVv(G, "G"), mclGt(mclVv(G, "G"), _mxarray13_)))),
                      mclGt(mclVv(G, "G"), _mxarray13_));
                    mlfReset(mlfGcf());
                    mclAssignAns(
                      &ans,
                      mlfNMesh(
                        0,
                        mclVv(X, "X"),
                        mclVv(Y, "Y"),
                        mclPlus(mclVv(Psi1np1, "Psi1np1"), mclVv(c1, "c1")),
                        NULL));
                    mclAssignAns(
                      &ans, mlfNAxis(0, NULL, NULL, mclVv(axe1, "axe1"), NULL));
                    mlfAssign(
                      &text1,
                      mlfHorzcat(
                        _mxarray15_,
                        mlfNum2str(
                          mclMtimes(mlfScalar(v_ + 1), mclVv(dt, "dt")), NULL),
                        NULL));
                    mclAssignAns(
                      &ans, mlfNTitle(0, mclVv(text1, "text1"), NULL));
                    mlfPause(mclVv(PAUSE, "PAUSE"));
                }
                mlfAssign(&psi1nm1, mclVv(psi1n, "psi1n"));
                mlfAssign(&psi1n, mclVv(psi1np1, "psi1np1"));
                mlfAssign(&freepsi1nm1, mclVv(freepsi1n, "freepsi1n"));
                mlfAssign(&freepsi1n, mclVv(freepsi1np1, "freepsi1np1"));
                if (mclEqBool(mlfScalar(v_), mclVv(N, "N"))) {
                    mlfAssign(
                      &dpsi1Np1,
                      mclMrdivide(
                        mclMrdivide(
                          mclMinus(
                            mclVv(psi1np1, "psi1np1"),
                            mclVv(psi1nm1, "psi1nm1")),
                          _mxarray10_),
                        mclVv(dt, "dt")));
                }
                mlfAssign(
                  &phi1np1,
                  mclMinus(
                    mclMtimes(mclVv(M1, "M1"), mclVv(phi1n, "phi1n")),
                    mclVv(phi1nm1, "phi1nm1")));
                mlfAssign(&phi1nm1, mclVv(phi1n, "phi1n"));
                mlfAssign(&phi1n, mclVv(phi1np1, "phi1np1"));
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&n, mlfScalar(v_));
        }
    }
    /*
     * 
     * Psi1np1 = G; Psi1np1(G>0) = full(psi1n(G(G>0)));
     */
    mlfAssign(&Psi1np1, mclVv(G, "G"));
    mclArrayAssign1(
      &Psi1np1,
      mlfFull(
        mclArrayRef1(
          mclVv(psi1n, "psi1n"),
          mclArrayRef1(mclVv(G, "G"), mclGt(mclVv(G, "G"), _mxarray13_)))),
      mclGt(mclVv(G, "G"), _mxarray13_));
    /*
     * Freepsi1np1 = G; Freepsi1np1(G>0) = full(freepsi1n(G(G>0)));
     */
    mlfAssign(&Freepsi1np1, mclVv(G, "G"));
    mclArrayAssign1(
      &Freepsi1np1,
      mlfFull(
        mclArrayRef1(
          mclVv(freepsi1n, "freepsi1n"),
          mclArrayRef1(mclVv(G, "G"), mclGt(mclVv(G, "G"), _mxarray13_)))),
      mclGt(mclVv(G, "G"), _mxarray13_));
    /*
     * 
     * normfin = normel22(Psi1np1+c1,J,h)/normel22(U01,J,h);
     */
    mlfAssign(
      &normfin,
      mclMrdivide(
        mlfNormel22(
          mclPlus(mclVv(Psi1np1, "Psi1np1"), mclVv(c1, "c1")),
          mclVa(J, "J"),
          mclVv(h, "h")),
        mlfNormel22(mclVa(U01, "U01"), mclVa(J, "J"), mclVv(h, "h"))));
    /*
     * normfin2 = normel22(Freepsi1np1,J,h)/normel22(U01,J,h);
     */
    mlfAssign(
      &normfin2,
      mclMrdivide(
        mlfNormel22(
          mclVv(Freepsi1np1, "Freepsi1np1"), mclVa(J, "J"), mclVv(h, "h")),
        mlfNormel22(mclVa(U01, "U01"), mclVa(J, "J"), mclVv(h, "h"))));
    /*
     * 
     * disp(sprintf('with control ||uc(T)|| L2(omega) / ||u0|| L2(omega) = %g',normfin));
     */
    mlfDisp(mlfSprintf(NULL, _mxarray17_, mclVv(normfin, "normfin"), NULL));
    /*
     * disp(sprintf('without control ||uc(T)|| L2(omega) / ||u0|| L2(omega) = %g',normfin2));
     */
    mlfDisp(mlfSprintf(NULL, _mxarray19_, mclVv(normfin2, "normfin2"), NULL));
    /*
     * 
     * sol=1;
     */
    mlfAssign(&sol, _mxarray7_);
    mclValidateOutput(sol, 1, nargout_, "sol", "animcont_2d");
    mxDestroyArray(ans);
    mxDestroyArray(PAUSE);
    mxDestroyArray(maximo);
    mxDestroyArray(minimo);
    mxDestroyArray(maxi);
    mxDestroyArray(h);
    mxDestroyArray(x);
    mxDestroyArray(X);
    mxDestroyArray(Y);
    mxDestroyArray(G);
    mxDestroyArray(dt);
    mxDestroyArray(r0);
    mxDestroyArray(N);
    mxDestroyArray(M1);
    mxDestroyArray(freq);
    mxDestroyArray(axe1);
    mxDestroyArray(c1);
    mxDestroyArray(bc1);
    mxDestroyArray(psi1n);
    mxDestroyArray(freepsi1n);
    mxDestroyArray(phi1n);
    mxDestroyArray(psi1nm1);
    mxDestroyArray(phi1nm1);
    mxDestroyArray(freepsi1nm1);
    mxDestroyArray(n);
    mxDestroyArray(psi1np1);
    mxDestroyArray(freepsi1np1);
    mxDestroyArray(Psi1np1);
    mxDestroyArray(text1);
    mxDestroyArray(dpsi1Np1);
    mxDestroyArray(phi1np1);
    mxDestroyArray(Freepsi1np1);
    mxDestroyArray(normfin);
    mxDestroyArray(normfin2);
    mxDestroyArray(axesol);
    mxDestroyArray(ek11);
    mxDestroyArray(ek01);
    mxDestroyArray(U11);
    mxDestroyArray(U01);
    mxDestroyArray(T);
    mxDestroyArray(mu);
    mxDestroyArray(J);
    mxDestroyArray(b);
    mxDestroyArray(a);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return sol;
    /*
     * %mov = close(mov);   
     * %end
     * 
     * 
     * 
     */
}
