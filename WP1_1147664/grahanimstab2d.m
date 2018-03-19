function varargout = grahanimstab2d(varargin)
% GRAHANIMSTAB2D M-file for grahanimstab2d.fig
%      GRAHANIMSTAB2D, by itself, creates a new GRAHANIMSTAB2D or raises the existing
%      singleton*.
%
%      H = GRAHANIMSTAB2D returns the handle to a new GRAHANIMSTAB2D or the handle to
%      the existing singleton*.
%
%      GRAHANIMSTAB2D('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in GRAHANIMSTAB2D.M with the given input arguments.
%
%      GRAHANIMSTAB2D('Property','Value',...) creates a new GRAHANIMSTAB2D or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before grahanimstab2d_OpeningFunction gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to grahanimstab2d_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help grahanimstab2d

% Last Modified by GUIDE v2.5 11-Apr-2005 19:15:26

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @grahanimstab2d_OpeningFcn, ...
                   'gui_OutputFcn',  @grahanimstab2d_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin & isstr(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before grahanimstab2d is made visible.
function grahanimstab2d_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to grahanimstab2d (see VARARGIN)

% Choose default command line output for grahanimstab2d
handles.output = hObject;

h=uimenu('ForegroundColor',[1 0 1])

% UIWAIT makes grahanimstab2d wait for user response (see UIRESUME)
% uiwait(handles.grahanimstab2d);


datos=varargin{1};
handles.a=datos.a;
handles.b=datos.b;
handles.n=datos.n;
handles.mu=datos.mu;
handles.T=datos.T;
handles.coeffdamp=datos.coeffdamp;
handles.dampband=datos.dampband;
handles.viscosity=datos.viscosity;
handles.u0=datos.u0;
handles.u1=datos.u1;
handles.axes_sol=datos.axes_sol;

handles.output = hObject;

guidata(hObject,handles);

solu=animstab2d(handles.a,handles.b,handles.n,handles.mu,handles.T,handles.coeffdamp, ...
    handles.dampband,handles.viscosity,handles.u0,handles.u1,handles.axes1,handles.axes3,handles.axes2);


% --- Outputs from this function are returned to the command line.
function varargout = grahanimstab2d_OutputFcn(hObject, eventdata, handles)
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --------------------------------------------------------------------
function stop1_Callback(hObject, eventdata, handles)
% hObject    handle to stop1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

stop1

% --------------------------------------------------------------------
function Untitled_2_Callback(hObject, eventdata, handles)
% hObject    handle to Untitled_2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

%run exit1
close

