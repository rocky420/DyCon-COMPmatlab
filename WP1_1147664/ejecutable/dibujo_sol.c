/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:58 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "dibujo_sol.h"
#include "libmatlbm.h"
#include "libmmfile.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;
static mxArray * _mxarray3_;
static mxArray * _mxarray4_;
static mxArray * _mxarray5_;

void InitializeModule_dibujo_sol(void) {
    _mxarray0_ = mclInitializeDouble(1.0);
    _mxarray1_ = mclInitializeDouble(2.0);
    _mxarray2_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray3_ = mclInitializeDouble(-1.0);
    _mxarray4_ = mclInitializeDouble(.5);
    _mxarray5_ = mclInitializeDouble(0.0);
}

void TerminateModule_dibujo_sol(void) {
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mdibujo_sol(int nargout_,
                             mxArray * n,
                             mxArray * l,
                             mxArray * a,
                             mxArray * b,
                             mxArray * t,
                             mxArray * phix,
                             mxArray * u0,
                             mxArray * u1);

_mexLocalFunctionTable _local_function_table_dibujo_sol
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfDibujo_sol" contains the normal interface for the
 * "dibujo_sol" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\dibujo_sol.m" (lines
 * 1-68). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfDibujo_sol(mxArray * n,
                        mxArray * l,
                        mxArray * a,
                        mxArray * b,
                        mxArray * t,
                        mxArray * phix,
                        mxArray * u0,
                        mxArray * u1) {
    int nargout = 1;
    mxArray * resu = NULL;
    mlfEnterNewContext(0, 8, n, l, a, b, t, phix, u0, u1);
    resu = Mdibujo_sol(nargout, n, l, a, b, t, phix, u0, u1);
    mlfRestorePreviousContext(0, 8, n, l, a, b, t, phix, u0, u1);
    return mlfReturnValue(resu);
}

/*
 * The function "mlxDibujo_sol" contains the feval interface for the
 * "dibujo_sol" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\dibujo_sol.m" (lines
 * 1-68). The feval function calls the implementation version of dibujo_sol
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxDibujo_sol(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[8];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: dibujo_sol Line: 20 Column"
            ": 1 The function \"dibujo_sol\" was called with "
            "more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 8) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: dibujo_sol Line: 20 Column"
            ": 1 The function \"dibujo_sol\" was called with "
            "more than the declared number of inputs (8)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
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
      = Mdibujo_sol(
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
}

/*
 * The function "Mdibujo_sol" is the implementation version of the "dibujo_sol"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\dibujo_sol.m" (lines 1-68). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * % Program: 'Ondas3.m'
 * 
 * % Wave equation in dimension 1: 
 * % u_tt-u_xx=0 en (a,b)
 * % u(a,t)=0, u(b,t)=f(t),
 * % u(x,0)=u0(x).
 * % u_t(x,0)=u1(x).
 * 
 * % Parameters of entry:
 * %    n = number of interior points in the variable x
 * %    l = number of courant
 * %    T = final time 
 * %    a = left wing of the interval
 * %    b = right wing of the interval
 * %    phix = solution in x=1
 * 
 * % Parameters of exit
 * %    solution in space-time
 * 
 * function resu=dibujo_sol(n,l,a,b,t,phix,u0,u1)
 */
static mxArray * Mdibujo_sol(int nargout_,
                             mxArray * n,
                             mxArray * l,
                             mxArray * a,
                             mxArray * b,
                             mxArray * t,
                             mxArray * phix,
                             mxArray * u0,
                             mxArray * u1) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_dibujo_sol);
    mxArray * resu = NULL;
    mxArray * dem = NULL;
    mxArray * auxi = NULL;
    mxArray * iter = NULL;
    mxArray * so = NULL;
    mxArray * dep = NULL;
    mxArray * de = NULL;
    mxArray * F = NULL;
    mxArray * i = NULL;
    mxArray * K = NULL;
    mxArray * e1 = NULL;
    mxArray * e0 = NULL;
    mxArray * N = NULL;
    mxArray * k = NULL;
    mxArray * x = NULL;
    mxArray * h = NULL;
    mclCopyArray(&n);
    mclCopyArray(&l);
    mclCopyArray(&a);
    mclCopyArray(&b);
    mclCopyArray(&t);
    mclCopyArray(&phix);
    mclCopyArray(&u0);
    mclCopyArray(&u1);
    /*
     * % calculate of:
     * % h = Distance between two consecutive points 
     * % x = Coordinates of the interior points
     * % k = step of time
     * % N = number of iterations T/k
     * 
     * h=(b-a)/(n+1);
     */
    mlfAssign(
      &h,
      mclMrdivide(
        mclMinus(mclVa(b, "b"), mclVa(a, "a")),
        mclPlus(mclVa(n, "n"), _mxarray0_)));
    /*
     * x = a+h:h:b-h;
     */
    mlfAssign(
      &x,
      mlfColon(
        mclPlus(mclVa(a, "a"), mclVv(h, "h")),
        mclVv(h, "h"),
        mclMinus(mclVa(b, "b"), mclVv(h, "h"))));
    /*
     * k = l*h;
     */
    mlfAssign(&k, mclMtimes(mclVa(l, "l"), mclVv(h, "h")));
    /*
     * N=length(t)-1;
     */
    mlfAssign(&N, mlfScalar(mclLengthInt(mclVa(t, "t")) - 1));
    /*
     * 
     * e0=u0';
     */
    mlfAssign(&e0, mlfCtranspose(mclVa(u0, "u0")));
    /*
     * e1=u1';
     */
    mlfAssign(&e1, mlfCtranspose(mclVa(u1, "u1")));
    /*
     * 
     * % Matrix K: discretization of the laplacian
     * K = 2*speye(n); 
     */
    mlfAssign(&K, mclMtimes(_mxarray1_, mlfSpeye(mclVa(n, "n"), NULL)));
    /*
     * for i=2:n
     */
    {
        int v_ = mclForIntStart(2);
        int e_ = mclForIntEnd(mclVa(n, "n"));
        if (v_ > e_) {
            mlfAssign(&i, _mxarray2_);
        } else {
            /*
             * K(i-1,i)=-1;
             * K(i,i-1)=-1;
             * end
             */
            for (; ; ) {
                mclIntArrayAssign2(&K, _mxarray3_, v_ - 1, v_);
                mclIntArrayAssign2(&K, _mxarray3_, v_, v_ - 1);
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&i, mlfScalar(v_));
        }
    }
    /*
     * K=(1/(h^2))*K;
     */
    mlfAssign(
      &K,
      mclMtimes(
        mclMrdivide(_mxarray0_, mclMpower(mclVv(h, "h"), _mxarray1_)),
        mclVv(K, "K")));
    /*
     * 
     * % Vector F: second member
     * F=zeros(n,1);
     */
    mlfAssign(&F, mlfZeros(mclVa(n, "n"), _mxarray0_, NULL));
    /*
     * F(n)=(1/h^2)*phix(1);
     */
    mclArrayAssign1(
      &F,
      mclMtimes(
        mclMrdivide(_mxarray0_, mclMpower(mclVv(h, "h"), _mxarray1_)),
        mclIntArrayRef1(mclVa(phix, "phix"), 1)),
      mclVa(n, "n"));
    /*
     * 
     * % Inicialization 
     * de=e0;
     */
    mlfAssign(&de, mclVv(e0, "e0"));
    /*
     * dep=k*e1+e0-.5*(k^2)*K*e0+k^2*F;
     */
    mlfAssign(
      &dep,
      mclPlus(
        mclMinus(
          mclPlus(mclMtimes(mclVv(k, "k"), mclVv(e1, "e1")), mclVv(e0, "e0")),
          mclMtimes(
            mclMtimes(
              mclMtimes(_mxarray4_, mclMpower(mclVv(k, "k"), _mxarray1_)),
              mclVv(K, "K")),
            mclVv(e0, "e0"))),
        mclMtimes(mclMpower(mclVv(k, "k"), _mxarray1_), mclVv(F, "F"))));
    /*
     * 
     * % Beginning of the iterations
     * so(2:n+1,1)=de;
     */
    mclArrayAssign2(
      &so,
      mclVv(de, "de"),
      mlfColon(_mxarray1_, mclPlus(mclVa(n, "n"), _mxarray0_), NULL),
      _mxarray0_);
    /*
     * so(n+2,1)=phix(1);
     */
    mclArrayAssign2(
      &so,
      mclIntArrayRef1(mclVa(phix, "phix"), 1),
      mclPlus(mclVa(n, "n"), _mxarray1_),
      _mxarray0_);
    /*
     * for iter =1:N-1
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclForIntEnd(mclMinus(mclVv(N, "N"), _mxarray0_));
        if (v_ > e_) {
            mlfAssign(&iter, _mxarray2_);
        } else {
            /*
             * auxi=dep;
             * % Update of F
             * F(n) = (1/(h^2))*phix(iter+1);
             * 
             * dep = 2*dep-de-k^2*K*dep+k^2*F;
             * dem=de;
             * de=auxi;
             * so(2:n+1,iter+1)=de;
             * so(n+2,iter+1)=phix(iter+1);
             * end
             */
            for (; ; ) {
                mlfAssign(&auxi, mclVv(dep, "dep"));
                mclArrayAssign1(
                  &F,
                  mclMtimes(
                    mclMrdivide(
                      _mxarray0_, mclMpower(mclVv(h, "h"), _mxarray1_)),
                    mclIntArrayRef1(mclVa(phix, "phix"), v_ + 1)),
                  mclVa(n, "n"));
                mlfAssign(
                  &dep,
                  mclPlus(
                    mclMinus(
                      mclMinus(
                        mclMtimes(_mxarray1_, mclVv(dep, "dep")),
                        mclVv(de, "de")),
                      mclMtimes(
                        mclMtimes(
                          mclMpower(mclVv(k, "k"), _mxarray1_), mclVv(K, "K")),
                        mclVv(dep, "dep"))),
                    mclMtimes(
                      mclMpower(mclVv(k, "k"), _mxarray1_), mclVv(F, "F"))));
                mlfAssign(&dem, mclVv(de, "de"));
                mlfAssign(&de, mclVv(auxi, "auxi"));
                mclArrayAssign2(
                  &so,
                  mclVv(de, "de"),
                  mlfColon(
                    _mxarray1_, mclPlus(mclVa(n, "n"), _mxarray0_), NULL),
                  mlfScalar(v_ + 1));
                mclArrayAssign2(
                  &so,
                  mclIntArrayRef1(mclVa(phix, "phix"), v_ + 1),
                  mclPlus(mclVa(n, "n"), _mxarray1_),
                  mlfScalar(v_ + 1));
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&iter, mlfScalar(v_));
        }
    }
    /*
     * so(2:n+1,N+1)=dep;
     */
    mclArrayAssign2(
      &so,
      mclVv(dep, "dep"),
      mlfColon(_mxarray1_, mclPlus(mclVa(n, "n"), _mxarray0_), NULL),
      mclPlus(mclVv(N, "N"), _mxarray0_));
    /*
     * so(n+2,N+1)=0;
     */
    mclArrayAssign2(
      &so,
      _mxarray5_,
      mclPlus(mclVa(n, "n"), _mxarray1_),
      mclPlus(mclVv(N, "N"), _mxarray0_));
    /*
     * resu=so;
     */
    mlfAssign(&resu, mclVv(so, "so"));
    mclValidateOutput(resu, 1, nargout_, "resu", "dibujo_sol");
    mxDestroyArray(h);
    mxDestroyArray(x);
    mxDestroyArray(k);
    mxDestroyArray(N);
    mxDestroyArray(e0);
    mxDestroyArray(e1);
    mxDestroyArray(K);
    mxDestroyArray(i);
    mxDestroyArray(F);
    mxDestroyArray(de);
    mxDestroyArray(dep);
    mxDestroyArray(so);
    mxDestroyArray(iter);
    mxDestroyArray(auxi);
    mxDestroyArray(dem);
    mxDestroyArray(u1);
    mxDestroyArray(u0);
    mxDestroyArray(phix);
    mxDestroyArray(t);
    mxDestroyArray(b);
    mxDestroyArray(a);
    mxDestroyArray(l);
    mxDestroyArray(n);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return resu;
}
