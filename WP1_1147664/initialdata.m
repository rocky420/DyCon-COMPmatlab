function varargout = initialdata(varargin)
% INITIALDATA M-file for initialdata.fig
%      INITIALDATA, by itself, creates a new INITIALDATA or raises the existing
%      singleton*.
%
%      H = INITIALDATA returns the handle to a new INITIALDATA or the handle to
%      the existing singleton*.
%
%      INITIALDATA('Property','Value',...) creates a new INITIALDATA using the
%      given property value pairs. Unrecognized properties are passed via
%      varargin to initialdata_OpeningFcn.  This calling syntax produces a
%      warning when there is an existing singleton*.
%
%      INITIALDATA('CALLBACK') and INITIALDATA('CALLBACK',hObject,...) call the
%      local function named CALLBACK in INITIALDATA.M with the given input
%      arguments.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help initialdata

% Last Modified by GUIDE v2.5 07-Jul-2005 15:21:08

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @initialdata_OpeningFcn, ...
                   'gui_OutputFcn',  @initialdata_OutputFcn, ...
                   'gui_LayoutFcn',  [], ...
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


% --- Executes just before initialdata is made visible.
function initialdata_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   unrecognized PropertyName/PropertyValue pairs from the
%            command line (see VARARGIN)
datos=varargin{1};
handles.n=datos.n;
handles.a=datos.a;
handles.b=datos.b;
handles.T=datos.T;
handles.eps=datos.eps;
handles.mu=datos.mu;
handles.beta=datos.beta;
handles.gamma=datos.gamma;
handles.masa=datos.masa;


% % u0='sin(pi*x)';
% u1='-pi*sin(pi*x)';

% set(handles.u0,'string','sin(pi*x)');
% set(handles.u1,'string',u1);

% Choose default command line output for initialdata
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes initialdata wait for user response (see UIRESUME)
%  uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = initialdata_OutputFcn(hObject, eventdata, handles)
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;
varargout{2} = handles.u0;
varargout{3} = handles.u1;


% --- Executes during object creation, after setting all properties.
function u0_CreateFcn(hObject, eventdata, handles)
% hObject    handle to u0 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc
    set(hObject,'BackgroundColor','white');
else
    set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
end
% set(hObject,'String','sin(pi*x)');
set(hObject,'String','2');



function u0_Callback(hObject, eventdata, handles)
% hObject    handle to u0 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit3 as text
%        str2double(get(hObject,'String')) returns contents of edit3 as a double
h=(handles.b-handles.a)/(handles.n+1);
x=[handles.a:h:handles.b];
data=getappdata(gcbf,'metricdata');
u0=str2double(get(hObject,'String'));
if isnan(u0)
    set(hObject, 'String', 0);
    errordlg('Input must be a number','Error');
end

handles.u0=u0
guidata(hObject,handles);

% u0=get(hObject,'String');
% u0=vectorize(u0);
% data=getappdata(gcbf,'metricdata');
% data.u0=u0;
% setappdata(gcbf,'metricdata',data);

% handles.u0=u0;
% guidata(hObject,handles);


% --- Executes during object creation, after setting all properties.
function u1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to u1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc
    set(hObject,'BackgroundColor','white');
else
    set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
end

set(hObject,'String','-pi*sin(pi*x)');

function u1_Callback(hObject, eventdata, handles)
% hObject    handle to u1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit4 as text
%        str2double(get(hObject,'String')) returns contents of edit4 as a double

u1=get(hObject,'String');
u1=vectorize(u1);
data=getappdata(gcbf,'metricdata');
data.u1=u1;
setappdata(gcbf,'metricdata',data);
% handles.u1=u1;
% guidata(hObject,handles);


% --- Executes on button press in pushbutton1.
function pushbutton1_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

 uiresume;

% h=(handles.b-handles.a)/(handles.n+1);
% x=[handles.a:h:handles.b];
% x=datos.x;
data=getappdata(gcbf,'metricdata');

u0=eval(data.u0,[]);
u1=eval(data.u1,[]);
% 
% u0=str2double(data.u0);
% u1=str2double(data.u1);
% 
handles.u0=u0;
handles.u1=u1;
guidata(hObject,handles)
