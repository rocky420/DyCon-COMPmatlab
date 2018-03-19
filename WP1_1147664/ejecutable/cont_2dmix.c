/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "cont_2dmix.h"
#include "bdycond2d.h"
#include "controle2d.h"
#include "delsq.h"
#include "error3.h"
#include "forward2d.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "matrsc_mix2d.h"
#include "nl2domeg2d.h"
#include "normehm12d.h"
#include "normel22d.h"
#include "numgrid.h"
#include "phiback2d.h"
#include "prosca2d.h"
#include "psiback2d.h"

static mxChar _array1_[4] = { 'l', 'o', 'n', 'g' };
static mxArray * _mxarray0_;
static mxArray * _mxarray2_;
static mxArray * _mxarray3_;
static mxArray * _mxarray4_;
static mxArray * _mxarray5_;

static mxChar _array7_[1] = { 'S' };
static mxArray * _mxarray6_;
static mxArray * _mxarray8_;
static mxArray * _mxarray9_;

static mxChar _array11_[47] = { '*', '*', '*', '*', '*', '*', '*', '*',
                                '*', '*', '*', '*', '*', '*', '*', '*',
                                '*', '*', '*', '*', '*', '*', '*', '*',
                                '*', '*', '*', '*', '*', '*', '*', '*',
                                '*', '*', '*', '*', '*', '*', '*', '*',
                                '*', '*', '*', '*', '*', '*', '*' };
static mxArray * _mxarray10_;

static mxChar _array13_[26] = { 'i', 't', 'e', 'r', 'a', 't', 'i', 'o', 'n',
                                ' ', 'o', 'f', ' ', 'g', 'r', 'a', 'd', 'i',
                                'e', 'n', 't', ' ', '=', ' ', '%', 'g' };
static mxArray * _mxarray12_;

static mxChar _array15_[17] = { 'e', 'r', 'r', 'o', 'r', ' ', '(', 'n', 'o',
                                'r', 'm', ')', ' ', '=', ' ', '%', 'g' };
static mxArray * _mxarray14_;

static mxChar _array17_[23] = { 'C', 'P', 'U', 'T', 'I', 'M', 'E', ' ',
                                '=', ' ', '%', 'g', ' ', 's', 'e', 'c',
                                'o', 'n', 'd', 'e', '(', 's', ')' };
static mxArray * _mxarray16_;

void InitializeModule_cont_2dmix(void) {
    _mxarray0_ = mclInitializeString(4, _array1_);
    _mxarray2_ = mclInitializeDouble(.001);
    _mxarray3_ = mclInitializeDouble(100.0);
    _mxarray4_ = mclInitializeDouble(1.0);
    _mxarray5_ = mclInitializeDouble(0.0);
    _mxarray6_ = mclInitializeString(1, _array7_);
    _mxarray8_ = mclInitializeDouble(2.0);
    _mxarray9_ = mclInitializeDouble(-1.0);
    _mxarray10_ = mclInitializeString(47, _array11_);
    _mxarray12_ = mclInitializeString(26, _array13_);
    _mxarray14_ = mclInitializeString(17, _array15_);
    _mxarray16_ = mclInitializeString(23, _array17_);
}

void TerminateModule_cont_2dmix(void) {
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mcont_2dmix(mxArray * * Test,
                             mxArray * * temps,
                             mxArray * * ek01,
                             mxArray * * ek11,
                             int nargout_,
                             mxArray * a,
                             mxArray * b,
                             mxArray * J,
                             mxArray * mu,
                             mxArray * T,
                             mxArray * epstest,
                             mxArray * U01,
                             mxArray * U11);

_mexLocalFunctionTable _local_function_table_cont_2dmix
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfCont_2dmix" contains the normal interface for the
 * "cont_2dmix" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\cont_2dmix.m" (lines
 * 1-444). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfCont_2dmix(mxArray * * Test,
                        mxArray * * temps,
                        mxArray * * ek01,
                        mxArray * * ek11,
                        mxArray * a,
                        mxArray * b,
                        mxArray * J,
                        mxArray * mu,
                        mxArray * T,
                        mxArray * epstest,
                        mxArray * U01,
                        mxArray * U11) {
    int nargout = 1;
    mxArray * controlex = NULL;
    mxArray * Test__ = NULL;
    mxArray * temps__ = NULL;
    mxArray * ek01__ = NULL;
    mxArray * ek11__ = NULL;
    mlfEnterNewContext(
      4, 8, Test, temps, ek01, ek11, a, b, J, mu, T, epstest, U01, U11);
    if (Test != NULL) {
        ++nargout;
    }
    if (temps != NULL) {
        ++nargout;
    }
    if (ek01 != NULL) {
        ++nargout;
    }
    if (ek11 != NULL) {
        ++nargout;
    }
    controlex
      = Mcont_2dmix(
          &Test__,
          &temps__,
          &ek01__,
          &ek11__,
          nargout,
          a,
          b,
          J,
          mu,
          T,
          epstest,
          U01,
          U11);
    mlfRestorePreviousContext(
      4, 8, Test, temps, ek01, ek11, a, b, J, mu, T, epstest, U01, U11);
    if (Test != NULL) {
        mclCopyOutputArg(Test, Test__);
    } else {
        mxDestroyArray(Test__);
    }
    if (temps != NULL) {
        mclCopyOutputArg(temps, temps__);
    } else {
        mxDestroyArray(temps__);
    }
    if (ek01 != NULL) {
        mclCopyOutputArg(ek01, ek01__);
    } else {
        mxDestroyArray(ek01__);
    }
    if (ek11 != NULL) {
        mclCopyOutputArg(ek11, ek11__);
    } else {
        mxDestroyArray(ek11__);
    }
    return mlfReturnValue(controlex);
}

/*
 * The function "mlxCont_2dmix" contains the feval interface for the
 * "cont_2dmix" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\cont_2dmix.m" (lines
 * 1-444). The feval function calls the implementation version of cont_2dmix
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxCont_2dmix(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[8];
    mxArray * mplhs[5];
    int i;
    if (nlhs > 5) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_2dmix Line: 35 Column"
            ": 1 The function \"cont_2dmix\" was called with "
            "more than the declared number of outputs (5)."),
          NULL);
    }
    if (nrhs > 8) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cont_2dmix Line: 35 Column"
            ": 1 The function \"cont_2dmix\" was called with "
            "more than the declared number of inputs (8)."),
          NULL);
    }
    for (i = 0; i < 5; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 8 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 8; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(
      0,
      8,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6],
      mprhs[7]);
    mplhs[0]
      = Mcont_2dmix(
          &mplhs[1],
          &mplhs[2],
          &mplhs[3],
          &mplhs[4],
          nlhs,
          mprhs[0],
          mprhs[1],
          mprhs[2],
          mprhs[3],
          mprhs[4],
          mprhs[5],
          mprhs[6],
          mprhs[7]);
    mlfRestorePreviousContext(
      0,
      8,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6],
      mprhs[7]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 5 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 5; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "Mcont_2dmix" is the implementation version of the "cont_2dmix"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\cont_2dmix.m" (lines 1-444). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * % We consider the 2-D version of the above problem in a square domain
 * % Omega =(a,b)×(a,b) subset in R^2.
 * % We assume that the control is located at two adjacent sides of the boundary
 * % of Omega, that we denote by Gamma_1.
 * 
 * % The control problem reads as follows: given T>0 and the initial data (u^0,u^1)
 * % in L^2(Omega)× H^(-1)(Omega), find v(x,t) in L^2(Gamma_1 x(0,T)) such
 * % that the solution u of the constant coefficient 2-D wave system:
 * %           u_(tt)- Laplacian (u) =0    in Omega x(0,T)
 * %           u(x,t)=0                    on Gamma_0 = Gamma\Gamma_1, 0<t<T
 * %           u(x,t)=v(x,t)               on Gamma_1, 0<t<T
 * %           u(x,0)=u^0(x),      u_t (x,0)=u^1(x)    in Omega
 * % satisfies
 * %           u(x,T)=u_t (x,T)=0,     x in Omega.
 * 
 * % Parameters of entry:
 * % a = left wing of the interval
 * % b = right wing of the interval
 * % J = number of interior points in the variable x
 * % mu = number of courant
 * % T = final time 
 * % epstest = tolerance
 * % U01= final position
 * % U11= final speed
 * 
 * % Parameters of exit:
 * % controlex = control of problem
 * % Test = norm of the solutions
 * % temps = final time in the step, temps=n*dt
 * % ek01fg =  data e^0_0 in step k
 * % ek11fg =  data e^1_0 in step k      
 * 
 * 
 * 
 * function [controlex,Test,temps,ek01,ek11]=cont_2dmix(a,b,J,mu,T,epstest,U01,U11)
 */
static mxArray * Mcont_2dmix(mxArray * * Test,
                             mxArray * * temps,
                             mxArray * * ek01,
                             mxArray * * ek11,
                             int nargout_,
                             mxArray * a,
                             mxArray * b,
                             mxArray * J,
                             mxArray * mu,
                             mxArray * T,
                             mxArray * epstest,
                             mxArray * U01,
                             mxArray * U11) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_cont_2dmix);
    mxArray * controlex = NULL;
    mxArray * time2 = NULL;
    mxArray * normecontr = NULL;
    mxArray * p = NULL;
    mxArray * gammak = NULL;
    mxArray * normgkp1 = NULL;
    mxArray * rhok = NULL;
    mxArray * ps = NULL;
    mxArray * Gbk11 = NULL;
    mxArray * Gbk01 = NULL;
    mxArray * gbk01 = NULL;
    mxArray * psibk11 = NULL;
    mxArray * psibk1nm1 = NULL;
    mxArray * phibk1n = NULL;
    mxArray * psibk1n = NULL;
    mxArray * psibk1np1 = NULL;
    mxArray * phibk1np1 = NULL;
    mxArray * phibk1np2 = NULL;
    mxArray * psibk1Nm1 = NULL;
    mxArray * phibk1Np1 = NULL;
    mxArray * phibk1N = NULL;
    mxArray * passage = NULL;
    mxArray * test = NULL;
    mxArray * Wk11 = NULL;
    mxArray * Wk01 = NULL;
    mxArray * normgk = NULL;
    mxArray * normg0 = NULL;
    mxArray * u01 = NULL;
    mxArray * Gk11 = NULL;
    mxArray * Gk01 = NULL;
    mxArray * gk01 = NULL;
    mxArray * D = NULL;
    mxArray * smbre1 = NULL;
    mxArray * psik11 = NULL;
    mxArray * psik1nm1 = NULL;
    mxArray * phik1n = NULL;
    mxArray * n = NULL;
    mxArray * psik1n = NULL;
    mxArray * psik1np1 = NULL;
    mxArray * phik1np1 = NULL;
    mxArray * phik1np2 = NULL;
    mxArray * psik1Nm1 = NULL;
    mxArray * bc1 = NULL;
    mxArray * c1 = NULL;
    mxArray * phik1Np1 = NULL;
    mxArray * phik1N = NULL;
    mxArray * M2 = NULL;
    mxArray * M1 = NULL;
    mxArray * time1 = NULL;
    mxArray * r0 = NULL;
    mxArray * N = NULL;
    mxArray * dt = NULL;
    mxArray * G = NULL;
    mxArray * Y = NULL;
    mxArray * X = NULL;
    mxArray * y = NULL;
    mxArray * x = NULL;
    mxArray * h = NULL;
    mxArray * limite = NULL;
    mxArray * PAUSE = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&a);
    mclCopyArray(&b);
    mclCopyArray(&J);
    mclCopyArray(&mu);
    mclCopyArray(&T);
    mclCopyArray(&epstest);
    mclCopyArray(&U01);
    mclCopyArray(&U11);
    /*
     * 
     * format long;
     */
    mlfFormat(_mxarray0_, NULL);
    /*
     * % h = distance between two consecutive points (space)
     * % x,y = spatial coordinates of the nodes
     * % limite = condition of stop, maximum number of iterations
     * % dt = distance between two consecutive points (time)
     * % N = number of points in the temporary variable
     * 
     * %-------------------------------------------------------------------------
     * % PARAMETRES DIVERS
     * %-------------------------------------------------------------------------
     * 
     * %********************* test d'arret du gradient **************************
     * 
     * %echelle=5.;
     * PAUSE=0.001;
     */
    mlfAssign(&PAUSE, _mxarray2_);
    /*
     * limite = 100;
     */
    mlfAssign(&limite, _mxarray3_);
    /*
     * 
     * %-------------------------------------------------------------------------
     * % PARAMETRIZE FOR THE MESHING
     * %-------------------------------------------------------------------------
     * 
     * h = 1/(J+1);
     */
    mlfAssign(&h, mclMrdivide(_mxarray4_, mclPlus(mclVa(J, "J"), _mxarray4_)));
    /*
     * x = 0:h:1;
     */
    mlfAssign(&x, mlfColon(_mxarray5_, mclVv(h, "h"), _mxarray4_));
    /*
     * y = x;
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
    mlfAssign(&G, mlfNumgrid(_mxarray6_, mclPlus(mclVa(J, "J"), _mxarray8_)));
    /*
     * 
     * %-------------------------------------------------------------------------
     * % CONDITION C.F.L. OF THE SCHEME ( 2,2 ) RESOLVING THE SYSTEM 
     * %-------------------------------------------------------------------------
     * 
     * dt = mu*h;
     */
    mlfAssign(&dt, mclMtimes(mclVa(mu, "mu"), mclVv(h, "h")));
    /*
     * 
     * %-------------------------------------------------------------------------
     * % The TIME T to which the system must be stabilized
     * %-------------------------------------------------------------------------
     * 
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
     * r0 = (dt/h)^2;
     */
    mlfAssign(
      &r0, mclMpower(mclMrdivide(mclVv(dt, "dt"), mclVv(h, "h")), _mxarray8_));
    /*
     * time1=cputime;
     */
    mlfAssign(&time1, mlfCputime());
    /*
     * %--------------------------------------------------------------------------
     * % RESOLUTION FOR PHI_0 OF THE EQUATION 
     * %       (d^2/dt^2 - Laplacian )phi_0 =0     in Omega x(0,T)
     * %       phi_0=0                             on Gamma x(0,T)
     * %       phi_0(0)=e^0_0,     (d/dt)phi_0(0)=e^1_0    in Omega.  
     * % WITH ONE CONDITIONS OF EDGE INVALID AND INITIALIZED BY 
     * %       phi_0(t=0)=0     and    (d/dt)phi_0(t=0)=0
     * %--------------------------------------------------------------------------
     * 
     * [M1,M2] = matrsc_mix2d(G,J,r0);
     */
    mlfAssign(
      &M1, mlfMatrsc_mix2d(&M2, mclVv(G, "G"), mclVa(J, "J"), mclVv(r0, "r0")));
    /*
     * ek01 = zeros(J+2);
     */
    mlfAssign(ek01, mlfZeros(mclPlus(mclVa(J, "J"), _mxarray8_), NULL));
    /*
     * ek11 = ek01;
     */
    mlfAssign(ek11, mclVv(*ek01, "ek01"));
    /*
     * 
     * [phik1N,phik1Np1] = forward2d(X,Y,G,J,dt,N,M1,ek01,ek11);
     */
    mlfAssign(
      &phik1N,
      mlfForward2d(
        &phik1Np1,
        mclVv(X, "X"),
        mclVv(Y, "Y"),
        mclVv(G, "G"),
        mclVa(J, "J"),
        mclVv(dt, "dt"),
        mclVv(N, "N"),
        mclVv(M1, "M1"),
        mclVv(*ek01, "ek01"),
        mclVv(*ek11, "ek11")));
    /*
     * 
     * %---------------------------------------------------------------------------
     * % RESOLUTION FOR PSI_0 OF THE EQUATION 
     * %       (d^2/dt^2 - Laplacian )psi_0 =0     in Omega x(0,T)
     * %       psi_0= (d/dn) phi_0                 on Gamma_1 x(0,T)
     * %       psi_0(T)=0,     (d/dt)psi_0(T)=0    in Omega.  
     * %---------------------------------------------------------------------------
     * 
     * %*********************** Case n=N == > calculation of psi_0 (N-1)***********
     * 
     * %**********************************
     * % Calculation of psi_0 in time N  *
     * %**********************************
     * 
     * [c1] = controle2d(phik1N,h,J,G,1);
     */
    mlfAssign(
      &c1,
      mlfControle2d(
        mclVv(phik1N, "phik1N"),
        mclVv(h, "h"),
        mclVa(J, "J"),
        mclVv(G, "G"),
        _mxarray4_));
    /*
     * double(c1);
     */
    mclAssignAns(&ans, mlfDouble(mclVv(c1, "c1")));
    /*
     * 
     * %***********************************
     * % Calculation of psi_0 in time N-1 *
     * %***********************************
     * 
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
     * double(bc1);
     */
    mclAssignAns(&ans, mlfDouble(mclVv(bc1, "bc1")));
    /*
     * bc1=M2*bc1;
     */
    mlfAssign(&bc1, mclMtimes(mclVv(M2, "M2"), mclVv(bc1, "bc1")));
    /*
     * psik1Nm1 = bc1/2;
     */
    mlfAssign(&psik1Nm1, mclMrdivide(mclVv(bc1, "bc1"), _mxarray8_));
    /*
     * 
     * phik1np2 = phik1Np1; phik1np1 = phik1N; 
     */
    mlfAssign(&phik1np2, mclVv(phik1Np1, "phik1Np1"));
    mlfAssign(&phik1np1, mclVv(phik1N, "phik1N"));
    /*
     * psik1np1 = zeros(J^2,1); 
     */
    mlfAssign(
      &psik1np1,
      mlfZeros(mclMpower(mclVa(J, "J"), _mxarray8_), _mxarray4_, NULL));
    /*
     * psik1n = psik1Nm1; 
     */
    mlfAssign(&psik1n, mclVv(psik1Nm1, "psik1Nm1"));
    /*
     * 
     * for n = N-1:-1:0
     */
    {
        mclForLoopIterator viter__;
        for (mclForStart(
               &viter__,
               mclMinus(mclVv(N, "N"), _mxarray4_),
               _mxarray9_,
               _mxarray5_);
             mclForNext(&viter__, &n);
             ) {
            /*
             * 
             * %*********************** Case n<N ==> calculation of psi_0 (n-1)************
             * 
             * %*********************************
             * % Calculation of phi_0 in time n *
             * %*********************************
             * 
             * [phik1n] = phiback2d(n,dt,J,G,M1,phik1np2,phik1np1);
             */
            mlfAssign(
              &phik1n,
              mlfPhiback2d(
                mclVv(n, "n"),
                mclVv(dt, "dt"),
                mclVa(J, "J"),
                mclVv(G, "G"),
                mclVv(M1, "M1"),
                mclVv(phik1np2, "phik1np2"),
                mclVv(phik1np1, "phik1np1")));
            /*
             * 
             * %**********************************
             * % Calculation of psi_0 in time n-1 *
             * %**********************************
             * 
             * [c1] = controle2d(phik1n,h,J,G,1);
             */
            mlfAssign(
              &c1,
              mlfControle2d(
                mclVv(phik1n, "phik1n"),
                mclVv(h, "h"),
                mclVa(J, "J"),
                mclVv(G, "G"),
                _mxarray4_));
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
             * bc1=M2*bc1;
             */
            mlfAssign(&bc1, mclMtimes(mclVv(M2, "M2"), mclVv(bc1, "bc1")));
            /*
             * [psik1nm1] = psiback2d(M1,bc1,psik1np1,psik1n);
             */
            mlfAssign(
              &psik1nm1,
              mlfPsiback2d(
                mclVv(M1, "M1"),
                mclVv(bc1, "bc1"),
                mclVv(psik1np1, "psik1np1"),
                mclVv(psik1n, "psik1n")));
            /*
             * 
             * %************************************************
             * % Preparation of the next passage in the buckle *
             * %************************************************
             * 
             * phik1np2 = phik1np1; phik1np1=phik1n;
             */
            mlfAssign(&phik1np2, mclVv(phik1np1, "phik1np1"));
            mlfAssign(&phik1np1, mclVv(phik1n, "phik1n"));
            /*
             * psik1np1 = psik1n; psik1n = psik1nm1;
             */
            mlfAssign(&psik1np1, mclVv(psik1n, "psik1n"));
            mlfAssign(&psik1n, mclVv(psik1nm1, "psik1nm1"));
            /*
             * 
             * if n==1
             */
            if (mclEqBool(mclVv(n, "n"), _mxarray4_)) {
                /*
                 * 
                 * % Saving of psi in time 1 for the calculation of (d/dt)psi(t=0)
                 * psik11 = psik1np1;
                 */
                mlfAssign(&psik11, mclVv(psik1np1, "psik1np1"));
            /*
             * 
             * end %if
             */
            }
        /*
         * 
         * end %for
         */
        }
        mclDestroyForLoopIterator(viter__);
    }
    /*
     * 
     * %------------------------------------------------------------------------
     * % Calculation of residues g0 and g1
     * %------------------------------------------------------------------------
     * 
     * smbre1 = h^2*((psik11-psik1n)/(2*dt) - U11(G>0)) ;
     */
    mlfAssign(
      &smbre1,
      mclMtimes(
        mclMpower(mclVv(h, "h"), _mxarray8_),
        mclMinus(
          mclMrdivide(
            mclMinus(mclVv(psik11, "psik11"), mclVv(psik1n, "psik1n")),
            mclMtimes(_mxarray8_, mclVv(dt, "dt"))),
          mclArrayRef1(mclVa(U11, "U11"), mclGt(mclVv(G, "G"), _mxarray5_)))));
    /*
     * 
     * D = delsq(G);
     */
    mlfAssign(&D, mlfDelsq(mclVv(G, "G")));
    /*
     * 
     * gk01 = D\smbre1;
     */
    mlfAssign(&gk01, mlfMldivide(mclVv(D, "D"), mclVv(smbre1, "smbre1")));
    /*
     * 
     * %gk11 = U01 - psik1np1;
     * %gk12 = U02 - psik2np1;
     * 
     * % Put under matrix shape of g0 and g1
     * 
     * Gk01 = zeros(J+2);
     */
    mlfAssign(&Gk01, mlfZeros(mclPlus(mclVa(J, "J"), _mxarray8_), NULL));
    /*
     * Gk01(G>0) = full(gk01(G(G>0)));
     */
    mclArrayAssign1(
      &Gk01,
      mlfFull(
        mclArrayRef1(
          mclVv(gk01, "gk01"),
          mclArrayRef1(mclVv(G, "G"), mclGt(mclVv(G, "G"), _mxarray5_)))),
      mclGt(mclVv(G, "G"), _mxarray5_));
    /*
     * 
     * Gk11 = zeros(J+2);
     */
    mlfAssign(&Gk11, mlfZeros(mclPlus(mclVa(J, "J"), _mxarray8_), NULL));
    /*
     * u01 =  U01(G>0);
     */
    mlfAssign(
      &u01, mclArrayRef1(mclVa(U01, "U01"), mclGt(mclVv(G, "G"), _mxarray5_)));
    /*
     * Gk11(G>0) = full(u01(G(G>0))-psik1np1(G(G>0)));
     */
    mclArrayAssign1(
      &Gk11,
      mlfFull(
        mclMinus(
          mclArrayRef1(
            mclVv(u01, "u01"),
            mclArrayRef1(mclVv(G, "G"), mclGt(mclVv(G, "G"), _mxarray5_))),
          mclArrayRef1(
            mclVv(psik1np1, "psik1np1"),
            mclArrayRef1(mclVv(G, "G"), mclGt(mclVv(G, "G"), _mxarray5_))))),
      mclGt(mclVv(G, "G"), _mxarray5_));
    /*
     * %Gk11 = Gk11 + U01;
     * clear u01;
     */
    mlfClear(&u01, NULL);
    /*
     * 
     * % Norm of (g0,g1)
     * 
     * normg0 = sqrt(prosca2d(Gk01,Gk11,Gk01,Gk11,x,J,h,G,X,Y) );
     */
    mlfAssign(
      &normg0,
      mlfSqrt(
        mlfProsca2d(
          mclVv(Gk01, "Gk01"),
          mclVv(Gk11, "Gk11"),
          mclVv(Gk01, "Gk01"),
          mclVv(Gk11, "Gk11"),
          mclVv(x, "x"),
          mclVa(J, "J"),
          mclVv(h, "h"),
          mclVv(G, "G"),
          mclVv(X, "X"),
          mclVv(Y, "Y"))));
    /*
     * normgk = normg0;
     */
    mlfAssign(&normgk, mclVv(normg0, "normg0"));
    /*
     * 
     * %---------------------------------------------------
     * % Calculation of the new direction of descent
     * %---------------------------------------------------
     * 
     * Wk01=Gk01; Wk11=Gk11;
     */
    mlfAssign(&Wk01, mclVv(Gk01, "Gk01"));
    mlfAssign(&Wk11, mclVv(Gk11, "Gk11"));
    /*
     * 
     * test = normg0^2/(normel22d(U01,J,h)^2+normehm12d(U11(G>0),D,G,J,x,y,h)^2);
     */
    mlfAssign(
      &test,
      mclMrdivide(
        mclMpower(mclVv(normg0, "normg0"), _mxarray8_),
        mclPlus(
          mclMpower(
            mlfNormel22d(NULL, mclVa(U01, "U01"), mclVa(J, "J"), mclVv(h, "h")),
            _mxarray8_),
          mclMpower(
            mlfNormehm12d(
              mclArrayRef1(mclVa(U11, "U11"), mclGt(mclVv(G, "G"), _mxarray5_)),
              mclVv(D, "D"),
              mclVv(G, "G"),
              mclVa(J, "J"),
              mclVv(x, "x"),
              mclVv(y, "y"),
              mclVv(h, "h")),
            _mxarray8_))));
    /*
     * 
     * passage = 0;
     */
    mlfAssign(&passage, _mxarray5_);
    /*
     * Test = test;
     */
    mlfAssign(Test, mclVv(test, "test"));
    /*
     * 
     * while (test > epstest) & (passage<limite)
     */
    for (;;) {
        mxArray * a_
          = mclInitialize(
              mclGt(mclVv(test, "test"), mclVa(epstest, "epstest")));
        if (mlfTobool(a_)
            && mlfTobool(
                 mclAnd(
                   a_,
                   mclLt(
                     mclVv(passage, "passage"), mclVv(limite, "limite"))))) {
            mxDestroyArray(a_);
        } else {
            mxDestroyArray(a_);
            break;
        }
        /*
         * 
         * %**************************************************************************
         * %**************************************************************************
         * %**									 **
         * %**				STAGE 1					 **
         * %**									 **
         * %**		       	DESCENT					 **
         * %**									 **
         * %**************************************************************************
         * %**************************************************************************
         * 
         * 
         * 
         * %--------------------------------------------------------------------------
         * % RESOLUTION FOR PHI_k OF THE EQUATION 
         * %       (d^2/dt^2 - Laplacian )phi_k =0     in Omega x(0,T)
         * %       phi_k=0                             on Gamma x(0,T)
         * %       phi_k(0)=w^0_k,     (d/dt)phi_k(0)=w^1_k    in Omega.  
         * %--------------------------------------------------------------------------
         * 
         * [phibk1N,phibk1Np1] = forward2d(X,Y,G,J,dt,N,M1,Wk01,Wk11);
         */
        mlfAssign(
          &phibk1N,
          mlfForward2d(
            &phibk1Np1,
            mclVv(X, "X"),
            mclVv(Y, "Y"),
            mclVv(G, "G"),
            mclVa(J, "J"),
            mclVv(dt, "dt"),
            mclVv(N, "N"),
            mclVv(M1, "M1"),
            mclVv(Wk01, "Wk01"),
            mclVv(Wk11, "Wk11")));
        /*
         * 
         * %---------------------------------------------------------------------------
         * % RESOLUTION FOR PSI_k OF THE EQUATION 
         * %       (d^2/dt^2 - Laplacian )psi_k =0     in Omega x(0,T)
         * %       psi_k= (d/dn) phi_k                 on Gamma_1 x(0,T)
         * %       psi_k(T)=0,     (d/dt)psi_k(T)=0    in Omega.  
         * %---------------------------------------------------------------------------
         * 
         * %*********************** Case n=N ==> calculation of psi_k(N-1)**************
         * 
         * %*********************************
         * % Calculation of psi_k in time N *
         * %*********************************
         * 
         * [c1] = controle2d(phibk1N,h,J,G,1);
         */
        mlfAssign(
          &c1,
          mlfControle2d(
            mclVv(phibk1N, "phibk1N"),
            mclVv(h, "h"),
            mclVa(J, "J"),
            mclVv(G, "G"),
            _mxarray4_));
        /*
         * 
         * %***********************************
         * % Calculation of psi_k in time N-1 *
         * %***********************************
         * 
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
         * bc1=M2*bc1;
         */
        mlfAssign(&bc1, mclMtimes(mclVv(M2, "M2"), mclVv(bc1, "bc1")));
        /*
         * psibk1Nm1 = bc1/2;
         */
        mlfAssign(&psibk1Nm1, mclMrdivide(mclVv(bc1, "bc1"), _mxarray8_));
        /*
         * 
         * phibk1np2 = phibk1Np1; phibk1np1 = phibk1N; 
         */
        mlfAssign(&phibk1np2, mclVv(phibk1Np1, "phibk1Np1"));
        mlfAssign(&phibk1np1, mclVv(phibk1N, "phibk1N"));
        /*
         * psibk1np1 = zeros(J^2,1); psibk1n = psibk1Nm1; 
         */
        mlfAssign(
          &psibk1np1,
          mlfZeros(mclMpower(mclVa(J, "J"), _mxarray8_), _mxarray4_, NULL));
        mlfAssign(&psibk1n, mclVv(psibk1Nm1, "psibk1Nm1"));
        /*
         * 
         * for n = N-1:-1:0
         */
        {
            mclForLoopIterator viter__;
            for (mclForStart(
                   &viter__,
                   mclMinus(mclVv(N, "N"), _mxarray4_),
                   _mxarray9_,
                   _mxarray5_);
                 mclForNext(&viter__, &n);
                 ) {
                /*
                 * 
                 * %*********************** case n<N ==> calculation of psi_k(n-1)************
                 * 
                 * %*********************************
                 * % Calculation of phi_k in time n *
                 * %*********************************
                 * 
                 * [phibk1n] = phiback2d(n,dt,J,G,M1,phibk1np2,phibk1np1);
                 */
                mlfAssign(
                  &phibk1n,
                  mlfPhiback2d(
                    mclVv(n, "n"),
                    mclVv(dt, "dt"),
                    mclVa(J, "J"),
                    mclVv(G, "G"),
                    mclVv(M1, "M1"),
                    mclVv(phibk1np2, "phibk1np2"),
                    mclVv(phibk1np1, "phibk1np1")));
                /*
                 * 
                 * %***********************************
                 * % Calculation of psi_k in time n-1 *
                 * %***********************************
                 * 
                 * [c1] = controle2d(phibk1n,h,J,G,1);
                 */
                mlfAssign(
                  &c1,
                  mlfControle2d(
                    mclVv(phibk1n, "phibk1n"),
                    mclVv(h, "h"),
                    mclVa(J, "J"),
                    mclVv(G, "G"),
                    _mxarray4_));
                /*
                 * 
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
                 * bc1=M2*bc1;
                 */
                mlfAssign(&bc1, mclMtimes(mclVv(M2, "M2"), mclVv(bc1, "bc1")));
                /*
                 * [psibk1nm1] = psiback2d(M1,bc1,psibk1np1,psibk1n);
                 */
                mlfAssign(
                  &psibk1nm1,
                  mlfPsiback2d(
                    mclVv(M1, "M1"),
                    mclVv(bc1, "bc1"),
                    mclVv(psibk1np1, "psibk1np1"),
                    mclVv(psibk1n, "psibk1n")));
                /*
                 * 
                 * %************************************************
                 * % Preparation of the next passage in the buckle *
                 * %************************************************
                 * 
                 * phibk1np2 = phibk1np1; phibk1np1=phibk1n;
                 */
                mlfAssign(&phibk1np2, mclVv(phibk1np1, "phibk1np1"));
                mlfAssign(&phibk1np1, mclVv(phibk1n, "phibk1n"));
                /*
                 * psibk1np1 = psibk1n; psibk1n = psibk1nm1;
                 */
                mlfAssign(&psibk1np1, mclVv(psibk1n, "psibk1n"));
                mlfAssign(&psibk1n, mclVv(psibk1nm1, "psibk1nm1"));
                /*
                 * 
                 * if n==1
                 */
                if (mclEqBool(mclVv(n, "n"), _mxarray4_)) {
                    /*
                     * 
                     * % Saving of psi in time 1 for the calculation of (d/dt)psi(t=0)
                     * psibk11 = psibk1np1;
                     */
                    mlfAssign(&psibk11, mclVv(psibk1np1, "psibk1np1"));
                /*
                 * 
                 * end %if
                 */
                }
            /*
             * end %for
             */
            }
            mclDestroyForLoopIterator(viter__);
        }
        /*
         * 
         * %------------------------------------------------------------------------
         * % Calculation of residues g0 and g1
         * %------------------------------------------------------------------------
         * 
         * smbre1 = h^2*(psibk11-psibk1n)/(2*dt);
         */
        mlfAssign(
          &smbre1,
          mclMrdivide(
            mclMtimes(
              mclMpower(mclVv(h, "h"), _mxarray8_),
              mclMinus(mclVv(psibk11, "psibk11"), mclVv(psibk1n, "psibk1n"))),
            mclMtimes(_mxarray8_, mclVv(dt, "dt"))));
        /*
         * 
         * gbk01 = D\smbre1;
         */
        mlfAssign(&gbk01, mlfMldivide(mclVv(D, "D"), mclVv(smbre1, "smbre1")));
        /*
         * 
         * % Injection of the second member on the meshing G2
         * 
         * Gbk01 = zeros(J+2);
         */
        mlfAssign(&Gbk01, mlfZeros(mclPlus(mclVa(J, "J"), _mxarray8_), NULL));
        /*
         * Gbk01(G>0) = full(gbk01(G(G>0)));
         */
        mclArrayAssign1(
          &Gbk01,
          mlfFull(
            mclArrayRef1(
              mclVv(gbk01, "gbk01"),
              mclArrayRef1(mclVv(G, "G"), mclGt(mclVv(G, "G"), _mxarray5_)))),
          mclGt(mclVv(G, "G"), _mxarray5_));
        /*
         * 
         * Gbk11 = zeros(J+2);
         */
        mlfAssign(&Gbk11, mlfZeros(mclPlus(mclVa(J, "J"), _mxarray8_), NULL));
        /*
         * Gbk11(G>0) = full(-psibk1np1(G(G>0)));
         */
        mclArrayAssign1(
          &Gbk11,
          mlfFull(
            mclUminus(
              mclArrayRef1(
                mclVv(psibk1np1, "psibk1np1"),
                mclArrayRef1(
                  mclVv(G, "G"), mclGt(mclVv(G, "G"), _mxarray5_))))),
          mclGt(mclVv(G, "G"), _mxarray5_));
        /*
         * 
         * ps = prosca2d(Gbk01,Gbk11,Wk01,Wk11,x,J,h,G,X,Y);
         */
        mlfAssign(
          &ps,
          mlfProsca2d(
            mclVv(Gbk01, "Gbk01"),
            mclVv(Gbk11, "Gbk11"),
            mclVv(Wk01, "Wk01"),
            mclVv(Wk11, "Wk11"),
            mclVv(x, "x"),
            mclVa(J, "J"),
            mclVv(h, "h"),
            mclVv(G, "G"),
            mclVv(X, "X"),
            mclVv(Y, "Y")));
        /*
         * rhok = normgk^2/ps;
         */
        mlfAssign(
          &rhok,
          mclMrdivide(
            mclMpower(mclVv(normgk, "normgk"), _mxarray8_), mclVv(ps, "ps")));
        /*
         * 
         * %----------------------------------------------------------------
         * % Updating of variables for the next passage in the buckle
         * %----------------------------------------------------------------
         * 
         * % update of e^k
         * ek01 = ek01 - rhok*Wk01;
         */
        mlfAssign(
          ek01,
          mclMinus(
            mclVv(*ek01, "ek01"),
            mclMtimes(mclVv(rhok, "rhok"), mclVv(Wk01, "Wk01"))));
        /*
         * ek11 = ek11 - rhok*Wk11;
         */
        mlfAssign(
          ek11,
          mclMinus(
            mclVv(*ek11, "ek11"),
            mclMtimes(mclVv(rhok, "rhok"), mclVv(Wk11, "Wk11"))));
        /*
         * 
         * % update of g^k
         * Gk01 = Gk01 - rhok*Gbk01;
         */
        mlfAssign(
          &Gk01,
          mclMinus(
            mclVv(Gk01, "Gk01"),
            mclMtimes(mclVv(rhok, "rhok"), mclVv(Gbk01, "Gbk01"))));
        /*
         * Gk11 = Gk11 - rhok*Gbk11;
         */
        mlfAssign(
          &Gk11,
          mclMinus(
            mclVv(Gk11, "Gk11"),
            mclMtimes(mclVv(rhok, "rhok"), mclVv(Gbk11, "Gbk11"))));
        /*
         * 
         * %**************************************************************************
         * %**************************************************************************
         * %**									 **                                     
         * %**				STAGE 2					     **
         * %**									 **
         * %**		       	CONVERGENCE					 **
         * %**									 **
         * %**************************************************************************
         * %**************************************************************************
         * 
         * normgkp1 = sqrt( prosca2d(Gk01,Gk11,Gk01,Gk11,x,J,h,G,X,Y) );
         */
        mlfAssign(
          &normgkp1,
          mlfSqrt(
            mlfProsca2d(
              mclVv(Gk01, "Gk01"),
              mclVv(Gk11, "Gk11"),
              mclVv(Gk01, "Gk01"),
              mclVv(Gk11, "Gk11"),
              mclVv(x, "x"),
              mclVa(J, "J"),
              mclVv(h, "h"),
              mclVv(G, "G"),
              mclVv(X, "X"),
              mclVv(Y, "Y"))));
        /*
         * 
         * test = ( normgkp1/normg0 )^2;
         */
        mlfAssign(
          &test,
          mclMpower(
            mclMrdivide(mclVv(normgkp1, "normgkp1"), mclVv(normg0, "normg0")),
            _mxarray8_));
        /*
         * Test=[Test;test];
         */
        mlfAssign(
          Test, mlfVertcat(mclVv(*Test, "Test"), mclVv(test, "test"), NULL));
        /*
         * 
         * gammak = ( normgkp1/normgk )^2;
         */
        mlfAssign(
          &gammak,
          mclMpower(
            mclMrdivide(mclVv(normgkp1, "normgkp1"), mclVv(normgk, "normgk")),
            _mxarray8_));
        /*
         * 
         * Wk01 = Gk01 + gammak*Wk01;
         */
        mlfAssign(
          &Wk01,
          mclPlus(
            mclVv(Gk01, "Gk01"),
            mclMtimes(mclVv(gammak, "gammak"), mclVv(Wk01, "Wk01"))));
        /*
         * Wk11 = Gk11 + gammak*Wk11;
         */
        mlfAssign(
          &Wk11,
          mclPlus(
            mclVv(Gk11, "Gk11"),
            mclMtimes(mclVv(gammak, "gammak"), mclVv(Wk11, "Wk11"))));
        /*
         * 
         * normgk = normgkp1;
         */
        mlfAssign(&normgk, mclVv(normgkp1, "normgkp1"));
        /*
         * 
         * passage = passage+1;
         */
        mlfAssign(&passage, mclPlus(mclVv(passage, "passage"), _mxarray4_));
        /*
         * disp('***********************************************');
         */
        mlfDisp(_mxarray10_);
        /*
         * disp(sprintf('iteration of gradient = %g',passage));
         */
        mlfDisp(mlfSprintf(NULL, _mxarray12_, mclVv(passage, "passage"), NULL));
        /*
         * disp(sprintf('error (norm) = %g',test));
         */
        mlfDisp(mlfSprintf(NULL, _mxarray14_, mclVv(test, "test"), NULL));
        /*
         * disp('***********************************************');
         */
        mlfDisp(_mxarray10_);
    /*
     * 
     * end %while
     */
    }
    /*
     * 
     * passage=passage+1;
     */
    mlfAssign(&passage, mclPlus(mclVv(passage, "passage"), _mxarray4_));
    /*
     * 
     * if (test > epstest) & (passage > limite)
     */
    {
        mxArray * a_
          = mclInitialize(
              mclGt(mclVv(test, "test"), mclVa(epstest, "epstest")));
        if (mlfTobool(a_)
            && mlfTobool(
                 mclAnd(
                   a_,
                   mclGt(
                     mclVv(passage, "passage"), mclVv(limite, "limite"))))) {
            mxDestroyArray(a_);
            /*
             * [p] = error3;
             */
            mlfAssign(&p, mlfNError3(0, mclValueVarargout(), NULL));
            /*
             * delete(p);
             */
            mlfDelete(mclVv(p, "p"), NULL);
        } else {
            mxDestroyArray(a_);
        }
    /*
     * end
     */
    }
    /*
     * 
     * %**************************************************************************
     * %**************************************************************************
     * %**									 **
     * %**				CONTROL					 **
     * %**									 **
     * %**************************************************************************
     * %**************************************************************************
     * 
     * [phik1N,phik1Np1] = forward2d(X,Y,G,J,dt,N,M1,ek01,ek11);
     */
    mlfAssign(
      &phik1N,
      mlfForward2d(
        &phik1Np1,
        mclVv(X, "X"),
        mclVv(Y, "Y"),
        mclVv(G, "G"),
        mclVa(J, "J"),
        mclVv(dt, "dt"),
        mclVv(N, "N"),
        mclVv(M1, "M1"),
        mclVv(*ek01, "ek01"),
        mclVv(*ek11, "ek11")));
    /*
     * 
     * %---------------------------------------------------------------------------
     * % RESOLUTION FOR PSI_k OF THE EQUATION 
     * %       (d^2/dt^2 - Laplacian )psi_k =0     in Omega x(0,T)
     * %       psi_k= (d/dn) phi_k                 on Gamma_1 x(0,T)
     * %       psi_k(T)=0,     (d/dt)psi_k(T)=0    in Omega.  
     * %---------------------------------------------------------------------------
     * 
     * %*********************** case n=N ==> calculation of psi_k(N-1)**************
     * 
     * %*********************************
     * % Calculation of psi_k in time N *
     * %*********************************
     * 
     * [c1] = controle2d(phik1N,h,J,G,1);
     */
    mlfAssign(
      &c1,
      mlfControle2d(
        mclVv(phik1N, "phik1N"),
        mclVv(h, "h"),
        mclVa(J, "J"),
        mclVv(G, "G"),
        _mxarray4_));
    /*
     * 
     * %****************************************
     * % Calculation of the norm L2 of control	*
     * %****************************************
     * 
     * normecontr = nl2domeg2d(c1,X,Y,J,h);
     */
    mlfAssign(
      &normecontr,
      mlfNl2domeg2d(
        mclVv(c1, "c1"),
        mclVv(X, "X"),
        mclVv(Y, "Y"),
        mclVa(J, "J"),
        mclVv(h, "h")));
    /*
     * temps = N*dt;
     */
    mlfAssign(temps, mclMtimes(mclVv(N, "N"), mclVv(dt, "dt")));
    /*
     * 
     * %***********************************
     * % Calculation of psi_k in time N-1 *
     * %***********************************
     * 
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
     * psik1Nm1 = bc1/2;
     */
    mlfAssign(&psik1Nm1, mclMrdivide(mclVv(bc1, "bc1"), _mxarray8_));
    /*
     * bc1=M2*bc1;
     */
    mlfAssign(&bc1, mclMtimes(mclVv(M2, "M2"), mclVv(bc1, "bc1")));
    /*
     * 
     * phik1np2 = phik1Np1; phik1np1 = phik1N; 
     */
    mlfAssign(&phik1np2, mclVv(phik1Np1, "phik1Np1"));
    mlfAssign(&phik1np1, mclVv(phik1N, "phik1N"));
    /*
     * psik1np1 = zeros(J^2,1); psik1n = psik1Nm1; 
     */
    mlfAssign(
      &psik1np1,
      mlfZeros(mclMpower(mclVa(J, "J"), _mxarray8_), _mxarray4_, NULL));
    mlfAssign(&psik1n, mclVv(psik1Nm1, "psik1Nm1"));
    /*
     * 
     * for n = N-1:-1:0
     */
    {
        mclForLoopIterator viter__;
        for (mclForStart(
               &viter__,
               mclMinus(mclVv(N, "N"), _mxarray4_),
               _mxarray9_,
               _mxarray5_);
             mclForNext(&viter__, &n);
             ) {
            /*
             * 
             * %*********************** case n<N ==> calculation of psi_k(n-1)**********
             * 
             * %*********************************
             * % Calculation of phi_k in time n *
             * %*********************************
             * 
             * [phik1n] = phiback2d(n,dt,J,G,M1,phik1np2,phik1np1);
             */
            mlfAssign(
              &phik1n,
              mlfPhiback2d(
                mclVv(n, "n"),
                mclVv(dt, "dt"),
                mclVa(J, "J"),
                mclVv(G, "G"),
                mclVv(M1, "M1"),
                mclVv(phik1np2, "phik1np2"),
                mclVv(phik1np1, "phik1np1")));
            /*
             * 
             * %***********************************
             * % Calculation of psi_k in time n-1 *
             * %***********************************
             * 
             * [c1] = controle2d(phik1n,h,J,G,1);
             */
            mlfAssign(
              &c1,
              mlfControle2d(
                mclVv(phik1n, "phik1n"),
                mclVv(h, "h"),
                mclVa(J, "J"),
                mclVv(G, "G"),
                _mxarray4_));
            /*
             * 
             * %****************************************
             * % Calculation of the norm L2 of control *
             * %****************************************
             * 
             * normecontr = [normecontr;nl2domeg2d(c1,X,Y,J,h)];
             */
            mlfAssign(
              &normecontr,
              mlfVertcat(
                mclVv(normecontr, "normecontr"),
                mlfNl2domeg2d(
                  mclVv(c1, "c1"),
                  mclVv(X, "X"),
                  mclVv(Y, "Y"),
                  mclVa(J, "J"),
                  mclVv(h, "h")),
                NULL));
            /*
             * temps = [temps;n*dt];
             */
            mlfAssign(
              temps,
              mlfVertcat(
                mclVv(*temps, "temps"),
                mclMtimes(mclVv(n, "n"), mclVv(dt, "dt")),
                NULL));
            /*
             * 
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
             * bc1=M2*bc1;
             */
            mlfAssign(&bc1, mclMtimes(mclVv(M2, "M2"), mclVv(bc1, "bc1")));
            /*
             * 
             * [psik1nm1] = psiback2d(M1,bc1,psik1np1,psik1n);
             */
            mlfAssign(
              &psik1nm1,
              mlfPsiback2d(
                mclVv(M1, "M1"),
                mclVv(bc1, "bc1"),
                mclVv(psik1np1, "psik1np1"),
                mclVv(psik1n, "psik1n")));
            /*
             * 
             * %************************************************
             * % Preparation of the next passage in the buckle * 
             * %************************************************
             * 
             * phik1np2 = phik1np1; phik1np1=phik1n;
             */
            mlfAssign(&phik1np2, mclVv(phik1np1, "phik1np1"));
            mlfAssign(&phik1np1, mclVv(phik1n, "phik1n"));
            /*
             * psik1np1 = psik1n; psik1n = psik1nm1;
             */
            mlfAssign(&psik1np1, mclVv(psik1n, "psik1n"));
            mlfAssign(&psik1n, mclVv(psik1nm1, "psik1nm1"));
            /*
             * 
             * if n==1
             */
            if (mclEqBool(mclVv(n, "n"), _mxarray4_)) {
                /*
                 * 
                 * % Saving of psi in time 1 for the calculation of (d/dt)psi(t=0)
                 * psik11 = psik1np1;
                 */
                mlfAssign(&psik11, mclVv(psik1np1, "psik1np1"));
            /*
             * 
             * end %if
             */
            }
        /*
         * 
         * end %for
         */
        }
        mclDestroyForLoopIterator(viter__);
    }
    /*
     * 
     * time2=cputime-time1;
     */
    mlfAssign(&time2, mclMinus(mlfCputime(), mclVv(time1, "time1")));
    /*
     * 
     * disp(sprintf('CPUTIME = %g seconde(s)', time2));
     */
    mlfDisp(mlfSprintf(NULL, _mxarray16_, mclVv(time2, "time2"), NULL));
    /*
     * controlex=normecontr;
     */
    mlfAssign(&controlex, mclVv(normecontr, "normecontr"));
    mclValidateOutput(controlex, 1, nargout_, "controlex", "cont_2dmix");
    mclValidateOutput(*Test, 2, nargout_, "Test", "cont_2dmix");
    mclValidateOutput(*temps, 3, nargout_, "temps", "cont_2dmix");
    mclValidateOutput(*ek01, 4, nargout_, "ek01", "cont_2dmix");
    mclValidateOutput(*ek11, 5, nargout_, "ek11", "cont_2dmix");
    mxDestroyArray(ans);
    mxDestroyArray(PAUSE);
    mxDestroyArray(limite);
    mxDestroyArray(h);
    mxDestroyArray(x);
    mxDestroyArray(y);
    mxDestroyArray(X);
    mxDestroyArray(Y);
    mxDestroyArray(G);
    mxDestroyArray(dt);
    mxDestroyArray(N);
    mxDestroyArray(r0);
    mxDestroyArray(time1);
    mxDestroyArray(M1);
    mxDestroyArray(M2);
    mxDestroyArray(phik1N);
    mxDestroyArray(phik1Np1);
    mxDestroyArray(c1);
    mxDestroyArray(bc1);
    mxDestroyArray(psik1Nm1);
    mxDestroyArray(phik1np2);
    mxDestroyArray(phik1np1);
    mxDestroyArray(psik1np1);
    mxDestroyArray(psik1n);
    mxDestroyArray(n);
    mxDestroyArray(phik1n);
    mxDestroyArray(psik1nm1);
    mxDestroyArray(psik11);
    mxDestroyArray(smbre1);
    mxDestroyArray(D);
    mxDestroyArray(gk01);
    mxDestroyArray(Gk01);
    mxDestroyArray(Gk11);
    mxDestroyArray(u01);
    mxDestroyArray(normg0);
    mxDestroyArray(normgk);
    mxDestroyArray(Wk01);
    mxDestroyArray(Wk11);
    mxDestroyArray(test);
    mxDestroyArray(passage);
    mxDestroyArray(phibk1N);
    mxDestroyArray(phibk1Np1);
    mxDestroyArray(psibk1Nm1);
    mxDestroyArray(phibk1np2);
    mxDestroyArray(phibk1np1);
    mxDestroyArray(psibk1np1);
    mxDestroyArray(psibk1n);
    mxDestroyArray(phibk1n);
    mxDestroyArray(psibk1nm1);
    mxDestroyArray(psibk11);
    mxDestroyArray(gbk01);
    mxDestroyArray(Gbk01);
    mxDestroyArray(Gbk11);
    mxDestroyArray(ps);
    mxDestroyArray(rhok);
    mxDestroyArray(normgkp1);
    mxDestroyArray(gammak);
    mxDestroyArray(p);
    mxDestroyArray(normecontr);
    mxDestroyArray(time2);
    mxDestroyArray(U11);
    mxDestroyArray(U01);
    mxDestroyArray(epstest);
    mxDestroyArray(T);
    mxDestroyArray(mu);
    mxDestroyArray(J);
    mxDestroyArray(b);
    mxDestroyArray(a);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return controlex;
    /*
     * %end
     */
}
