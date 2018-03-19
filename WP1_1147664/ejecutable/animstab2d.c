/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "animstab2d.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "matrstab2d.h"
#include "mesh.h"
#include "numgrid.h"
#include "spy.h"
#include "title.h"

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
static mxArray * _mxarray9_;

static mxChar _array11_[1] = { 'S' };
static mxArray * _mxarray10_;
static mxArray * _mxarray12_;
static mxArray * _mxarray13_;
static mxArray * _mxarray14_;

static mxChar _array16_[19] = { 'P', 'o', 's', 'i', 't', 'i', 'o',
                                'n', ' ', 'a', 't', ' ', 't', 'i',
                                'm', 'e', ' ', 't', '=' };
static mxArray * _mxarray15_;
static mxArray * _mxarray17_;
static mxArray * _mxarray18_;

void InitializeModule_animstab2d(void) {
    _mxarray0_ = mclInitializeString(4, _array1_);
    _mxarray2_ = mclInitializeString(75, _array3_);
    _mxarray4_ = mclInitializeString(75, _array5_);
    _mxarray6_ = mclInitializeString(75, _array7_);
    _mxarray8_ = mclInitializeDouble(1e-20);
    _mxarray9_ = mclInitializeDouble(1.0);
    _mxarray10_ = mclInitializeString(1, _array11_);
    _mxarray12_ = mclInitializeDouble(2.0);
    _mxarray13_ = mclInitializeDouble(0.0);
    _mxarray14_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray15_ = mclInitializeString(19, _array16_);
    _mxarray17_ = mclInitializeDouble(-60.0);
    _mxarray18_ = mclInitializeDouble(5.0);
}

void TerminateModule_animstab2d(void) {
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Manimstab2d(int nargout_,
                             mxArray * a,
                             mxArray * b,
                             mxArray * J,
                             mxArray * mu,
                             mxArray * T,
                             mxArray * coeffdamp,
                             mxArray * dampband,
                             mxArray * viscos,
                             mxArray * U01,
                             mxArray * U11,
                             mxArray * axes1,
                             mxArray * axes3,
                             mxArray * axes2);

_mexLocalFunctionTable _local_function_table_animstab2d
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfAnimstab2d" contains the normal interface for the
 * "animstab2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\animstab2d.m" (lines
 * 1-124). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfAnimstab2d(mxArray * a,
                        mxArray * b,
                        mxArray * J,
                        mxArray * mu,
                        mxArray * T,
                        mxArray * coeffdamp,
                        mxArray * dampband,
                        mxArray * viscos,
                        mxArray * U01,
                        mxArray * U11,
                        mxArray * axes1,
                        mxArray * axes3,
                        mxArray * axes2) {
    int nargout = 1;
    mxArray * sol = NULL;
    mlfEnterNewContext(
      0,
      13,
      a,
      b,
      J,
      mu,
      T,
      coeffdamp,
      dampband,
      viscos,
      U01,
      U11,
      axes1,
      axes3,
      axes2);
    sol
      = Manimstab2d(
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
          U11,
          axes1,
          axes3,
          axes2);
    mlfRestorePreviousContext(
      0,
      13,
      a,
      b,
      J,
      mu,
      T,
      coeffdamp,
      dampband,
      viscos,
      U01,
      U11,
      axes1,
      axes3,
      axes2);
    return mlfReturnValue(sol);
}

/*
 * The function "mlxAnimstab2d" contains the feval interface for the
 * "animstab2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\animstab2d.m" (lines
 * 1-124). The feval function calls the implementation version of animstab2d
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxAnimstab2d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[13];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: animstab2d Line: 1 Column:"
            " 1 The function \"animstab2d\" was called with m"
            "ore than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 13) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: animstab2d Line: 1 Column:"
            " 1 The function \"animstab2d\" was called with m"
            "ore than the declared number of inputs (13)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 13 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 13; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(
      0,
      13,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6],
      mprhs[7],
      mprhs[8],
      mprhs[9],
      mprhs[10],
      mprhs[11],
      mprhs[12]);
    mplhs[0]
      = Manimstab2d(
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
          mprhs[9],
          mprhs[10],
          mprhs[11],
          mprhs[12]);
    mlfRestorePreviousContext(
      0,
      13,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6],
      mprhs[7],
      mprhs[8],
      mprhs[9],
      mprhs[10],
      mprhs[11],
      mprhs[12]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Manimstab2d" is the implementation version of the "animstab2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\animstab2d.m" (lines 1-124). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function sol=animstab2d(a,b,J,mu,T,coeffdamp,dampband,viscos,U01,U11,axes1,axes3,axes2)
 */
static mxArray * Manimstab2d(int nargout_,
                             mxArray * a,
                             mxArray * b,
                             mxArray * J,
                             mxArray * mu,
                             mxArray * T,
                             mxArray * coeffdamp,
                             mxArray * dampband,
                             mxArray * viscos,
                             mxArray * U01,
                             mxArray * U11,
                             mxArray * axes1,
                             mxArray * axes3,
                             mxArray * axes2) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_animstab2d);
    mxArray * sol = NULL;
    mxArray * text = NULL;
    mxArray * totnp1 = NULL;
    mxArray * Y1np1 = NULL;
    mxArray * totn = NULL;
    mxArray * totnm1 = NULL;
    mxArray * n = NULL;
    mxArray * axe = NULL;
    mxArray * Y1n = NULL;
    mxArray * Y1nm1 = NULL;
    mxArray * du1 = NULL;
    mxArray * u1 = NULL;
    mxArray * maxi = NULL;
    mxArray * minimo = NULL;
    mxArray * maximo = NULL;
    mxArray * M3 = NULL;
    mxArray * M2 = NULL;
    mxArray * M1 = NULL;
    mxArray * r0 = NULL;
    mxArray * temps = NULL;
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
    mxArray * PAUSE = NULL;
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
    mclCopyArray(&axes1);
    mclCopyArray(&axes3);
    mclCopyArray(&axes2);
    /*
     * 
     * 
     * 
     * format long;
     */
    mlfFormat(_mxarray0_, NULL);
    /*
     * 
     * 
     * % mov = avifile('movie1.avi')
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
     * PAUSE=1e-20;
     */
    mlfAssign(&PAUSE, _mxarray8_);
    /*
     * h = 1/(J+1);
     */
    mlfAssign(&h, mclMrdivide(_mxarray9_, mclPlus(mclVa(J, "J"), _mxarray9_)));
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
    mlfAssign(&G, mlfNumgrid(_mxarray10_, mclPlus(mclVa(J, "J"), _mxarray12_)));
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
          mclMinus(mclVa(J, "J"), _mxarray9_), mclVa(dampband, "dampband"))));
    /*
     * G1(p+2:J+1,1:J+1-p)=0;
     */
    mclArrayAssign2(
      &G1,
      _mxarray13_,
      mlfColon(
        mclPlus(mclVv(p, "p"), _mxarray12_),
        mclPlus(mclVa(J, "J"), _mxarray9_),
        NULL),
      mlfColon(
        _mxarray9_,
        mclMinus(mclPlus(mclVa(J, "J"), _mxarray9_), mclVv(p, "p")),
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
    if (mclNeBool(mclVa(viscos, "viscos"), _mxarray13_)) {
        /*
         * viscos=1.;
         */
        mlfAssign(&viscos, _mxarray9_);
    /*
     * end
     */
    }
    /*
     * 
     * %-------------------------------------------------------------------------
     * % TIME T to which the system owes etre stabilized
     * %-------------------------------------------------------------------------
     * %figure(1)
     * 
     * N = ceil(T/dt);
     */
    mlfAssign(&N, mlfCeil(mclMrdivide(mclVa(T, "T"), mclVv(dt, "dt"))));
    /*
     * temps=0:dt:T;
     */
    mlfAssign(&temps, mlfColon(_mxarray13_, mclVv(dt, "dt"), mclVa(T, "T")));
    /*
     * 
     * r0 = (dt/h)^2;
     */
    mlfAssign(
      &r0, mclMpower(mclMrdivide(mclVv(dt, "dt"), mclVv(h, "h")), _mxarray12_));
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
     * u1 = U01;
     */
    mlfAssign(&u1, mclVa(U01, "U01"));
    /*
     * du1 = U11;
     */
    mlfAssign(&du1, mclVa(U11, "U11"));
    /*
     * Y1nm1 = u1;
     */
    mlfAssign(&Y1nm1, mclVv(u1, "u1"));
    /*
     * Y1nm1 = Y1nm1(G>0);
     */
    mlfAssign(
      &Y1nm1,
      mclArrayRef1(mclVv(Y1nm1, "Y1nm1"), mclGt(mclVv(G, "G"), _mxarray13_)));
    /*
     * du1 = du1(G>0);
     */
    mlfAssign(
      &du1, mclArrayRef1(mclVv(du1, "du1"), mclGt(mclVv(G, "G"), _mxarray13_)));
    /*
     * 
     * Y1n = Y1nm1 + dt*du1;
     */
    mlfAssign(
      &Y1n,
      mclPlus(
        mclVv(Y1nm1, "Y1nm1"), mclMtimes(mclVv(dt, "dt"), mclVv(du1, "du1"))));
    /*
     * 
     * 
     * axe = [a b a b -maxi maxi];
     */
    mlfAssign(
      &axe,
      mlfHorzcat(
        mclVa(a, "a"),
        mclVa(b, "b"),
        mclVa(a, "a"),
        mclVa(b, "b"),
        mclUminus(mclVv(maxi, "maxi")),
        mclVv(maxi, "maxi"),
        NULL));
    /*
     * %axes(axesol);
     * n=0;
     */
    mlfAssign(&n, _mxarray13_);
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
          mclArrayRef1(mclVv(G, "G"), mclGt(mclVv(G, "G"), _mxarray13_)))),
      mclGt(mclVv(G, "G"), _mxarray13_));
    /*
     * %mesh(X,Y,totnm1);
     * 
     * %axis(axe);
     * %text= ['Position at time t=', num2str((n*dt))];
     * %title(text);
     * %pause(PAUSE);
     * 
     * n=1;
     */
    mlfAssign(&n, _mxarray9_);
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
          mclArrayRef1(mclVv(G, "G"), mclGt(mclVv(G, "G"), _mxarray13_)))),
      mclGt(mclVv(G, "G"), _mxarray13_));
    /*
     * reset(GCF);
     */
    mlfReset(mlfGcf());
    /*
     * %mesh(X,Y,totn);
     * %axis(axe);
     * %text= ['Position at time t=', num2str((n*dt))];
     * %title(text);
     * 
     * %pause(PAUSE);
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
            mlfAssign(&n, _mxarray14_);
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
             * reset(GCF);
             * 
             * axes(axes1);
             * 
             * mesh(X,Y,totnp1);
             * %  colormap hot
             * axis(axe);
             * text= ['Position at time t=', num2str((n*dt))];
             * title(text);
             * pause(PAUSE);
             * 
             * axes(axes3);
             * mesh(X,Y,totnp1);
             * view(-60,5)
             * %  colormap hot
             * axis(axe);
             * text= ['Position at time t=', num2str((n*dt))];
             * title(text);
             * pause(PAUSE);
             * totnm1=totn;
             * totn=totnp1;    
             * %       F = getframe(gca);
             * %   	mov = addframe(mov,F);
             * axes(axes2);
             * spy(G1);
             * 
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
                        mclVv(G, "G"), mclGt(mclVv(G, "G"), _mxarray13_)))),
                  mclGt(mclVv(G, "G"), _mxarray13_));
                mlfReset(mlfGcf());
                mclAssignAns(&ans, mlfNAxes(0, mclVa(axes1, "axes1"), NULL));
                mclAssignAns(
                  &ans,
                  mlfNMesh(
                    0,
                    mclVv(X, "X"),
                    mclVv(Y, "Y"),
                    mclVv(totnp1, "totnp1"),
                    NULL));
                mclAssignAns(
                  &ans, mlfNAxis(0, NULL, NULL, mclVv(axe, "axe"), NULL));
                mlfAssign(
                  &text,
                  mlfHorzcat(
                    _mxarray15_,
                    mlfNum2str(mclMtimes(mlfScalar(v_), mclVv(dt, "dt")), NULL),
                    NULL));
                mclAssignAns(&ans, mlfNTitle(0, mclVv(text, "text"), NULL));
                mlfPause(mclVv(PAUSE, "PAUSE"));
                mclAssignAns(&ans, mlfNAxes(0, mclVa(axes3, "axes3"), NULL));
                mclAssignAns(
                  &ans,
                  mlfNMesh(
                    0,
                    mclVv(X, "X"),
                    mclVv(Y, "Y"),
                    mclVv(totnp1, "totnp1"),
                    NULL));
                mclPrintAns(
                  &ans,
                  mlfNView(
                    0, mclAnsVarargout(), _mxarray17_, _mxarray18_, NULL));
                mclAssignAns(
                  &ans, mlfNAxis(0, NULL, NULL, mclVv(axe, "axe"), NULL));
                mlfAssign(
                  &text,
                  mlfHorzcat(
                    _mxarray15_,
                    mlfNum2str(mclMtimes(mlfScalar(v_), mclVv(dt, "dt")), NULL),
                    NULL));
                mclAssignAns(&ans, mlfNTitle(0, mclVv(text, "text"), NULL));
                mlfPause(mclVv(PAUSE, "PAUSE"));
                mlfAssign(&totnm1, mclVv(totn, "totn"));
                mlfAssign(&totn, mclVv(totnp1, "totnp1"));
                mclAssignAns(&ans, mlfNAxes(0, mclVa(axes2, "axes2"), NULL));
                mlfSpy(mclVv(G1, "G1"), NULL, NULL);
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
     * sol=1;
     */
    mlfAssign(&sol, _mxarray9_);
    mclValidateOutput(sol, 1, nargout_, "sol", "animstab2d");
    mxDestroyArray(ans);
    mxDestroyArray(PAUSE);
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
    mxDestroyArray(temps);
    mxDestroyArray(r0);
    mxDestroyArray(M1);
    mxDestroyArray(M2);
    mxDestroyArray(M3);
    mxDestroyArray(maximo);
    mxDestroyArray(minimo);
    mxDestroyArray(maxi);
    mxDestroyArray(u1);
    mxDestroyArray(du1);
    mxDestroyArray(Y1nm1);
    mxDestroyArray(Y1n);
    mxDestroyArray(axe);
    mxDestroyArray(n);
    mxDestroyArray(totnm1);
    mxDestroyArray(totn);
    mxDestroyArray(Y1np1);
    mxDestroyArray(totnp1);
    mxDestroyArray(text);
    mxDestroyArray(axes2);
    mxDestroyArray(axes3);
    mxDestroyArray(axes1);
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
    return sol;
    /*
     * %  mov = close(mov); 
     * %end
     */
}
