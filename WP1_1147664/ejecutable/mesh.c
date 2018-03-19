/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "mesh.h"
#include "mwservices.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "parseparams.h"
static mxArray * _mxarray0_;

static mxChar _array2_[5] = { 'c', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray1_;

static mxChar _array4_[4] = { 'n', 'o', 'n', 'e' };
static mxArray * _mxarray3_;
static mxArray * _mxarray5_;
static mxArray * _mxarray6_;

static mxChar _array8_[30] = { 'P', 'r', 'o', 'p', 'e', 'r', 't', 'y',
                               ' ', 'v', 'a', 'l', 'u', 'e', ' ', 'p',
                               'a', 'i', 'r', 's', ' ', 'e', 'x', 'p',
                               'e', 'c', 't', 'e', 'd', '.' };
static mxArray * _mxarray7_;

static mxChar _array10_[9] = { 'F', 'a', 'c', 'e', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray9_;

static mxChar _array12_[9] = { 'E', 'd', 'g', 'e', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray11_;

static mxChar _array14_[4] = { 'f', 'l', 'a', 't' };
static mxArray * _mxarray13_;

static mxChar _array16_[12] = { 'F', 'a', 'c', 'e', 'L', 'i',
                                'g', 'h', 't', 'i', 'n', 'g' };
static mxArray * _mxarray15_;

static mxChar _array18_[12] = { 'E', 'd', 'g', 'e', 'L', 'i',
                                'g', 'h', 't', 'i', 'n', 'g' };
static mxArray * _mxarray17_;
static mxArray * _mxarray19_;

static mxChar _array21_[17] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'a',
                                'r', 'g', 'u', 'm', 'e', 'n', 't', '.' };
static mxArray * _mxarray20_;

static mxChar _array23_[4] = { 'V', 'i', 'e', 'w' };
static mxArray * _mxarray22_;

static mxChar _array25_[24] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ',
                                'i', 'n', 'p', 'u', 't', ' ', 'a', 'r',
                                'g', 'u', 'm', 'e', 'n', 't', 's', '.' };
static mxArray * _mxarray24_;
static mxArray * _mxarray26_;

static mxChar _array28_[2] = { 'o', 'n' };
static mxArray * _mxarray27_;

void InitializeModule_mesh(void) {
    _mxarray0_ = mclInitializeDouble(0.0);
    _mxarray1_ = mclInitializeString(5, _array2_);
    _mxarray3_ = mclInitializeString(4, _array4_);
    _mxarray5_ = mclInitializeDouble(1.0);
    _mxarray6_ = mclInitializeDouble(4.0);
    _mxarray7_ = mclInitializeString(30, _array8_);
    _mxarray9_ = mclInitializeString(9, _array10_);
    _mxarray11_ = mclInitializeString(9, _array12_);
    _mxarray13_ = mclInitializeString(4, _array14_);
    _mxarray15_ = mclInitializeString(12, _array16_);
    _mxarray17_ = mclInitializeString(12, _array18_);
    _mxarray19_ = mclInitializeDouble(2.0);
    _mxarray20_ = mclInitializeString(17, _array21_);
    _mxarray22_ = mclInitializeString(4, _array23_);
    _mxarray24_ = mclInitializeString(24, _array25_);
    _mxarray26_ = mclInitializeDouble(3.0);
    _mxarray27_ = mclInitializeString(2, _array28_);
}

void TerminateModule_mesh(void) {
    mxDestroyArray(_mxarray27_);
    mxDestroyArray(_mxarray26_);
    mxDestroyArray(_mxarray24_);
    mxDestroyArray(_mxarray22_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mmesh(int nargout_, mxArray * varargin);

_mexLocalFunctionTable _local_function_table_mesh
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNMesh" contains the nargout interface for the "mesh"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graph3d\mesh.m" (lines
 * 1-108). This interface is only produced if the M-function uses the special
 * variable "nargout". The nargout interface allows the number of requested
 * outputs to be specified via the nargout argument, as opposed to the normal
 * interface which dynamically calculates the number of outputs based on the
 * number of non-NULL inputs it receives. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
mxArray * mlfNMesh(int nargout, ...) {
    mxArray * varargin = NULL;
    mxArray * h = NULL;
    mlfVarargin(&varargin, nargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    h = Mmesh(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfReturnValue(h);
}

/*
 * The function "mlfMesh" contains the normal interface for the "mesh"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graph3d\mesh.m" (lines
 * 1-108). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfMesh(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    int nargout = 1;
    mxArray * h = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    h = Mmesh(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfReturnValue(h);
}

/*
 * The function "mlfVMesh" contains the void interface for the "mesh"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graph3d\mesh.m" (lines
 * 1-108). The void interface is only produced if the M-function uses the
 * special variable "nargout", and has at least one output. The void interface
 * function specifies zero output arguments to the implementation version of
 * the function, and in the event that the implementation version still returns
 * an output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVMesh(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    mxArray * h = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    h = Mmesh(0, synthetic_varargin_argument);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxMesh" contains the feval interface for the "mesh"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graph3d\mesh.m" (lines
 * 1-108). The feval function calls the implementation version of mesh through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
void mlxMesh(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: mesh Line: 1 Column: 1 The function \"mesh\""
            " was called with more than the declared number of outputs (1)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    mlfEnterNewContext(0, 0);
    mprhs[0] = NULL;
    mlfAssign(&mprhs[0], mclCreateVararginCell(nrhs, prhs));
    mplhs[0] = Mmesh(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 0);
    plhs[0] = mplhs[0];
    mxDestroyArray(mprhs[0]);
}

/*
 * The function "Mmesh" is the implementation version of the "mesh" M-function
 * from file "c:\matlab6p5\toolbox\matlab\graph3d\mesh.m" (lines 1-108). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function h = mesh(varargin)
 */
static mxArray * Mmesh(int nargout_, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_mesh);
    mxArray * h = NULL;
    mxArray * c = NULL;
    mxArray * z = NULL;
    mxArray * nx = NULL;
    mxArray * mx = NULL;
    mxArray * ny = NULL;
    mxArray * my = NULL;
    mxArray * y = NULL;
    mxArray * hh = NULL;
    mxArray * x = NULL;
    mxArray * ans = NULL;
    mxArray * nargs = NULL;
    mxArray * prop = NULL;
    mxArray * reg = NULL;
    mxArray * fc = NULL;
    mxArray * cax = NULL;
    mxArray * user_view = NULL;
    mclCopyArray(&varargin);
    /*
     * %MESH   3-D mesh surface.
     * %   MESH(X,Y,Z,C) plots the colored parametric mesh defined by
     * %   four matrix arguments.  The view point is specified by VIEW.
     * %   The axis labels are determined by the range of X, Y and Z,
     * %   or by the current setting of AXIS.  The color scaling is determined
     * %   by the range of C, or by the current setting of CAXIS.  The scaled
     * %   color values are used as indices into the current COLORMAP.
     * %
     * %   MESH(X,Y,Z) uses C = Z, so color is proportional to mesh height.
     * %
     * %   MESH(x,y,Z) and MESH(x,y,Z,C), with two vector arguments replacing
     * %   the first two matrix arguments, must have length(x) = n and
     * %   length(y) = m where [m,n] = size(Z).  In this case, the vertices
     * %   of the mesh lines are the triples (x(j), y(i), Z(i,j)).
     * %   Note that x corresponds to the columns of Z and y corresponds to
     * %   the rows.
     * %
     * %   MESH(Z) and MESH(Z,C) use x = 1:n and y = 1:m.  In this case,
     * %   the height, Z, is a single-valued function, defined over a
     * %   geometrically rectangular grid.
     * %
     * %   MESH(...,'PropertyName',PropertyValue,...) sets the value of
     * %   the specified surface property.  Multiple property values can be set
     * %   with a single statement.
     * %
     * %   MESH returns a handle to a SURFACE object.
     * %
     * %   AXIS, CAXIS, COLORMAP, HOLD, SHADING, HIDDEN and VIEW set figure,
     * %   axes, and surface properties which affect the display of the mesh.
     * %
     * %   See also SURF, MESHC, MESHZ, WATERFALL.
     * 
     * %-------------------------------
     * %   Additional details:
     * %
     * %   MESH sets the FaceColor property to background color and the EdgeColor
     * %   property to 'flat'.
     * %
     * %   If the NextPlot axis property is REPLACE (HOLD is off), MESH resets 
     * %   all axis properties, except Position, to their default values
     * %   and deletes all axis children (line, patch, surf, image, and 
     * %   text objects).
     * 
     * %   Copyright 1984-2002 The MathWorks, Inc. 
     * %   $Revision: 5.14 $  $Date: 2002/04/08 22:00:15 $
     * 
     * %   J.N. Little 1-5-92
     * %   Modified 2-3-92, LS.
     * 
     * user_view = 0;
     */
    mlfAssign(&user_view, _mxarray0_);
    /*
     * cax = newplot;
     */
    mlfAssign(&cax, mlfNNewplot(1, NULL));
    /*
     * fc = get(gca,'color');
     */
    mlfAssign(&fc, mlfNGet(1, mlfGca(NULL), _mxarray1_, NULL));
    /*
     * if strcmpi(fc,'none')
     */
    if (mlfTobool(mlfStrcmpi(mclVv(fc, "fc"), _mxarray3_))) {
        /*
         * fc = get(gcf,'color');
         */
        mlfAssign(&fc, mlfNGet(1, mlfGcf(), _mxarray1_, NULL));
    /*
     * end
     */
    }
    /*
     * 
     * [reg, prop]=parseparams(varargin);
     */
    mlfAssign(&reg, mlfParseparams(&prop, mclVa(varargin, "varargin")));
    /*
     * nargs=length(reg);
     */
    mlfAssign(&nargs, mlfScalar(mclLengthInt(mclVv(reg, "reg"))));
    /*
     * 
     * error(nargchk(1,4,nargs));
     */
    mlfError(mlfNargchk(_mxarray5_, _mxarray6_, mclVv(nargs, "nargs")), NULL);
    /*
     * if rem(length(prop),2)~=0,
     */
    if (mclNeBool(
          mlfScalar(
            svDoubleScalarRem((double) mclLengthInt(mclVv(prop, "prop")), 2.0)),
          _mxarray0_)) {
        /*
         * error('Property value pairs expected.')
         */
        mlfError(_mxarray7_, NULL);
    /*
     * end
     */
    }
    /*
     * 
     * if nargs == 1
     */
    if (mclEqBool(mclVv(nargs, "nargs"), _mxarray5_)) {
        /*
         * x=reg{1};
         */
        mlfAssign(&x, mlfIndexRef(mclVv(reg, "reg"), "{?}", _mxarray5_));
        /*
         * hh = surface(x,'FaceColor',fc,'EdgeColor','flat', 'FaceLighting', 'none', 'EdgeLighting', 'flat');
         */
        mlfAssign(
          &hh,
          mlfNSurface(
            1,
            mclVv(x, "x"),
            _mxarray9_,
            mclVv(fc, "fc"),
            _mxarray11_,
            _mxarray13_,
            _mxarray15_,
            _mxarray3_,
            _mxarray17_,
            _mxarray13_,
            NULL));
    /*
     * elseif nargs == 2
     */
    } else if (mclEqBool(mclVv(nargs, "nargs"), _mxarray19_)) {
        /*
         * [x,y]=deal(reg{1:2});
         */
        mlfNDeal(
          0,
          mlfVarargout(&x, &y, NULL),
          mlfIndexRef(
            mclVv(reg, "reg"), "{?}", mlfColon(_mxarray5_, _mxarray19_, NULL)),
          NULL);
        /*
         * if isstr(y), error('Invalid argument.'); end
         */
        if (mlfTobool(mlfIsstr(mclVv(y, "y")))) {
            mlfError(_mxarray20_, NULL);
        }
        /*
         * [my ny] = size(y);
         */
        mlfSize(mlfVarargout(&my, &ny, NULL), mclVv(y, "y"), NULL);
        /*
         * [mx nx] = size(x);
         */
        mlfSize(mlfVarargout(&mx, &nx, NULL), mclVv(x, "x"), NULL);
        /*
         * if mx == my & nx == ny
         */
        {
            mxArray * a_
              = mclInitialize(mclEq(mclVv(mx, "mx"), mclVv(my, "my")));
            if (mlfTobool(a_)
                && mlfTobool(
                     mclAnd(a_, mclEq(mclVv(nx, "nx"), mclVv(ny, "ny"))))) {
                mxDestroyArray(a_);
                /*
                 * hh = surface(x,y,'FaceColor',fc,'EdgeColor','flat', 'FaceLighting', 'none', 'EdgeLighting', 'flat');
                 */
                mlfAssign(
                  &hh,
                  mlfNSurface(
                    1,
                    mclVv(x, "x"),
                    mclVv(y, "y"),
                    _mxarray9_,
                    mclVv(fc, "fc"),
                    _mxarray11_,
                    _mxarray13_,
                    _mxarray15_,
                    _mxarray3_,
                    _mxarray17_,
                    _mxarray13_,
                    NULL));
            /*
             * else
             */
            } else {
                mxDestroyArray(a_);
                /*
                 * if my*ny == 2 % must be [az el]
                 */
                if (mclEqBool(
                      mclMtimes(mclVv(my, "my"), mclVv(ny, "ny")),
                      _mxarray19_)) {
                    /*
                     * hh = surface(x,'FaceColor',fc,'EdgeColor','flat', 'FaceLighting', 'none', 'EdgeLighting', 'flat');
                     */
                    mlfAssign(
                      &hh,
                      mlfNSurface(
                        1,
                        mclVv(x, "x"),
                        _mxarray9_,
                        mclVv(fc, "fc"),
                        _mxarray11_,
                        _mxarray13_,
                        _mxarray15_,
                        _mxarray3_,
                        _mxarray17_,
                        _mxarray13_,
                        NULL));
                    /*
                     * set(gca,'View',y);
                     */
                    mclAssignAns(
                      &ans,
                      mlfNSet(
                        0, mlfGca(NULL), _mxarray22_, mclVv(y, "y"), NULL));
                    /*
                     * user_view = 1;
                     */
                    mlfAssign(&user_view, _mxarray5_);
                /*
                 * else
                 */
                } else {
                    /*
                     * error('Invalid input arguments.');
                     */
                    mlfError(_mxarray24_, NULL);
                /*
                 * end
                 */
                }
            }
        /*
         * end
         */
        }
    /*
     * elseif nargs == 3
     */
    } else if (mclEqBool(mclVv(nargs, "nargs"), _mxarray26_)) {
        /*
         * [x,y,z]=deal(reg{1:3});
         */
        mlfNDeal(
          0,
          mlfVarargout(&x, &y, &z, NULL),
          mlfIndexRef(
            mclVv(reg, "reg"), "{?}", mlfColon(_mxarray5_, _mxarray26_, NULL)),
          NULL);
        /*
         * if isstr(y) | isstr(z), error('Invalid argument.'); end
         */
        {
            mxArray * a_ = mclInitialize(mlfIsstr(mclVv(y, "y")));
            if (mlfTobool(a_)
                || mlfTobool(mclOr(a_, mlfIsstr(mclVv(z, "z"))))) {
                mxDestroyArray(a_);
                mlfError(_mxarray20_, NULL);
            } else {
                mxDestroyArray(a_);
            }
        }
        /*
         * if min(size(y)) == 1 & min(size(z)) == 1 % old style
         */
        {
            mxArray * a_
              = mclInitialize(
                  mclEq(
                    mlfMin(
                      NULL,
                      mlfSize(mclValueVarargout(), mclVv(y, "y"), NULL),
                      NULL,
                      NULL),
                    _mxarray5_));
            if (mlfTobool(a_)
                && mlfTobool(
                     mclAnd(
                       a_,
                       mclEq(
                         mlfMin(
                           NULL,
                           mlfSize(mclValueVarargout(), mclVv(z, "z"), NULL),
                           NULL,
                           NULL),
                         _mxarray5_)))) {
                mxDestroyArray(a_);
                /*
                 * hh = surface(x,'FaceColor',fc,'EdgeColor','flat', 'FaceLighting', 'none', 'EdgeLighting', 'flat');
                 */
                mlfAssign(
                  &hh,
                  mlfNSurface(
                    1,
                    mclVv(x, "x"),
                    _mxarray9_,
                    mclVv(fc, "fc"),
                    _mxarray11_,
                    _mxarray13_,
                    _mxarray15_,
                    _mxarray3_,
                    _mxarray17_,
                    _mxarray13_,
                    NULL));
                /*
                 * set(gca,'View',y);
                 */
                mclAssignAns(
                  &ans,
                  mlfNSet(0, mlfGca(NULL), _mxarray22_, mclVv(y, "y"), NULL));
                /*
                 * user_view = 1;
                 */
                mlfAssign(&user_view, _mxarray5_);
            /*
             * else
             */
            } else {
                mxDestroyArray(a_);
                /*
                 * hh = surface(x,y,z,'FaceColor',fc,'EdgeColor','flat', 'FaceLighting', 'none', 'EdgeLighting', 'flat');
                 */
                mlfAssign(
                  &hh,
                  mlfNSurface(
                    1,
                    mclVv(x, "x"),
                    mclVv(y, "y"),
                    mclVv(z, "z"),
                    _mxarray9_,
                    mclVv(fc, "fc"),
                    _mxarray11_,
                    _mxarray13_,
                    _mxarray15_,
                    _mxarray3_,
                    _mxarray17_,
                    _mxarray13_,
                    NULL));
            }
        /*
         * end
         */
        }
    /*
     * elseif nargs == 4
     */
    } else if (mclEqBool(mclVv(nargs, "nargs"), _mxarray6_)) {
        /*
         * [x,y,z,c]=deal(reg{1:4});
         */
        mlfNDeal(
          0,
          mlfVarargout(&x, &y, &z, &c, NULL),
          mlfIndexRef(
            mclVv(reg, "reg"), "{?}", mlfColon(_mxarray5_, _mxarray6_, NULL)),
          NULL);
        /*
         * hh = surface(x,y,z,c,'FaceColor',fc,'EdgeColor','flat', 'FaceLighting', 'none', 'EdgeLighting', 'flat');
         */
        mlfAssign(
          &hh,
          mlfNSurface(
            1,
            mclVv(x, "x"),
            mclVv(y, "y"),
            mclVv(z, "z"),
            mclVv(c, "c"),
            _mxarray9_,
            mclVv(fc, "fc"),
            _mxarray11_,
            _mxarray13_,
            _mxarray15_,
            _mxarray3_,
            _mxarray17_,
            _mxarray13_,
            NULL));
    /*
     * end
     */
    }
    /*
     * if ~isempty(prop),
     */
    if (mclNotBool(mlfIsempty(mclVv(prop, "prop")))) {
        /*
         * set(hh,prop{:})       
         */
        mclPrintAns(
          &ans,
          mlfNSet(
            0,
            mclVv(hh, "hh"),
            mlfIndexRef(mclVv(prop, "prop"), "{?}", mlfCreateColonIndex()),
            NULL));
    /*
     * end 
     */
    }
    /*
     * if ~ishold & ~user_view
     */
    {
        mxArray * a_ = mclInitialize(mclNot(mlfIshold(NULL)));
        if (mlfTobool(a_)
            && mlfTobool(mclAnd(a_, mclNot(mclVv(user_view, "user_view"))))) {
            mxDestroyArray(a_);
            /*
             * view(3); grid on
             */
            mclAssignAns(
              &ans, mlfNView(0, mclAnsVarargout(), _mxarray26_, NULL));
            mlfGrid(_mxarray27_, NULL);
        } else {
            mxDestroyArray(a_);
        }
    /*
     * end
     */
    }
    /*
     * if nargout == 1
     */
    if (nargout_ == 1) {
        /*
         * h = hh;
         */
        mlfAssign(&h, mclVv(hh, "hh"));
    /*
     * end
     */
    }
    mclValidateOutput(h, 1, nargout_, "h", "mesh");
    mxDestroyArray(user_view);
    mxDestroyArray(cax);
    mxDestroyArray(fc);
    mxDestroyArray(reg);
    mxDestroyArray(prop);
    mxDestroyArray(nargs);
    mxDestroyArray(ans);
    mxDestroyArray(x);
    mxDestroyArray(hh);
    mxDestroyArray(y);
    mxDestroyArray(my);
    mxDestroyArray(ny);
    mxDestroyArray(mx);
    mxDestroyArray(nx);
    mxDestroyArray(z);
    mxDestroyArray(c);
    mxDestroyArray(varargin);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return h;
}
