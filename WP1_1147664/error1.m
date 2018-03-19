function varargout = error1(varargin)
% ERROR1 M-file for error1.fig
%      ERROR1, by itself, creates a new ERROR1 or raises the existing
%      singleton*.
%
%      H = ERROR1 returns the handle to a new ERROR1 or the handle to
%      the existing singleton*.
%
%      ERROR1('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in ERROR1.M with the given input arguments.
%
%      ERROR1('Property','Value',...) creates a new ERROR1 or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before error1_OpeningFunction gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to error1_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help error1

% Last Modified by GUIDE v2.5 21-May-2004 11:41:01

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @error1_OpeningFcn, ...
                   'gui_OutputFcn',  @error1_OutputFcn, ...
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


% --- Executes just before error1 is made visible.
function error1_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to error1 (see VARARGIN)

% Choose default command line output for error1
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes error1 wait for user response (see UIRESUME)
 uiwait;


% --- Outputs from this function are returned to the command line.
function varargout = error1_OutputFcn(hObject, eventdata, handles)
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;
varargout{2} = handles.resp;

% --- Executes on button press in push_si.
function push_si_Callback(hObject, eventdata, handles)
% hObject    handle to push_si (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

handles.resp='si';
guidata(hObject,handles);
uiresume

% --- Executes on button press in push_no.
function push_no_Callback(hObject, eventdata, handles)
% hObject    handle to push_no (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

handles.resp='no';
guidata(hObject,handles);
uiresume