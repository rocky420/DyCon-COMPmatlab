function varargout = stab_1d(varargin)
% STAB_1D M-file for stab_1d.fig
%      STAB_1D, by itself, creates a new STAB_1D or raises the existing
%      singleton*.
%
%      H = STAB_1D returns the handle to a new STAB_1D or the handle to
%      the existing singleton*.
%
%      STAB_1D('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in STAB_1D.M with the given input arguments.
%
%      STAB_1D('Property','Value',...) creates a new STAB_1D or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before stab_1d_OpeningFunction gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to stab_1d_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help stab_1d

% Last Modified by GUIDE v2.5 08-Jul-2005 12:04:21

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @stab_1d_OpeningFcn, ...
                   'gui_OutputFcn',  @stab_1d_OutputFcn, ...
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


% --- Executes just before stab_1d is made visible.
function stab_1d_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to stab_1d (see VARARGIN)


% Metodo de resolucion por defecto
handles.file = 'difcent'; 

% Parametros del programa por defecto
data.n = 41;
data.mu = 0.8;
data.a = 0;
data.b = 1;
data.T = 10.;
data.coeffdamp=10;
data.dampa=0.8;
data.dampb=0.9;
data.viscosity=0.;
%setappdata(hObject, 'data', data);

% Dibujo de los datos iniciales
h=(data.b-data.a)/(data.n+1);
x=[data.a:h:data.b];
[u0 u1]=data1(x);
axes(handles.axes_u0);
plot(x,u0);
axes(handles.axes_u1);
plot(x,u1);
handles.u0=u0;
handles.u1=u1;
handles.x=x;
guidata(hObject, handles);

data.u0='sin(pi*x)';
data.u1='-pi*sin(pi*x)';
data.x=handles.x;
setappdata(hObject, 'data', data);

% cla
% Variable que permite saber si se ha realizado el calculo necesario para
% dibujar la solucion 
handles.solactual=0;

% Choose default command line output for stab_1d
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes stab_1d wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = stab_1d_OutputFcn(hObject, eventdata, handles)
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in des_push.
function des_push_Callback(hObject, eventdata, handles)
% hObject    handle to des_push (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% --- Executes on button press in par_push.
function par_push_Callback(hObject, eventdata, handles)
% hObject    handle to par_push (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

data=getappdata(gcbf,'data');
%paramet=[data.n data.l data.a data.b data.T data.ep];
[h1 data.a data.b data.n data.mu data.T data.coeffdamp data.dampa data.dampb data.viscosity]=paramstab1d(data);
delete(h1);
setappdata(gcbf,'data',data);


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% --- Executes on button press in par_push.
function push_cambcf_Callback(hObject, eventdata, handles)
% hObject    handle to par_push (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

data=getappdata(gcbf,'data');
%paramet=[data.n data.l data.a data.b data.T data.ep];
[h1 data.a data.b data.n data.mu data.T data.coeffdamp data.dampa data.dampb data.viscosity data.u0 data.u1]=initialdatastab1(data);
delete(h1);
cla
axes(handles.axes_u0);
plot(handles.x,data.u0);
axes(handles.axes_u1);
plot(handles.x,data.u1);
%G=[0 ones(1,data.n) 0];
handles.u0=data.u0;%(G>0);
handles.u1=data.u1;%(G>0);
setappdata(gcbf,'data',data);
guidata(hObject,handles);

%setappdata(gcbf,'data',data);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%5

% --- Executes during object creation, after setting all properties.
function pop_gra_CreateFcn(hObject, eventdata, handles)
% hObject    handle to pop_gra (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc
    set(hObject,'BackgroundColor','white');
else
    set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
end

% --- Executes on selection change in pop_gra.
function pop_gra_Callback(hObject, eventdata, handles)
% hObject    handle to pop_gra (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = get(hObject,'String') returns pop_gra contents as cell array
%        contents{get(hObject,'Value')} returns selected item from pop_gra

val = get(hObject,'Value');
str = get(hObject, 'String');
switch str{val};
case 'energy' % User selects peaks
    param=getappdata(gcbf,'data');
    axes(handles.axes_sol);
     N=size(handles.temps)
    plot(handles.temps(2:N(2)-1),log(handles.ener(1:N(2)-2)))
     xlabel('time');
     ylabel('log(Energy)');
     axis([0 param.T min(log(handles.ener(1:N(2)-2)))*0.95 max(log(handles.ener(1:N(2)-2)))*1.05])
     hold on
     [p,s]=polyfit(handles.temps(2:N(2)-1),log(handles.ener(1:N(2)-2)),1)
     plog=p(1)*handles.temps(2:N(2)-1)+p(2);
     plot(handles.temps(2:N(2)-1),plog,'red');
     hold off
case 'animation' 
    param=getappdata(gcbf,'data');
    %if handles.solactual==0
        solu=animstab1d(param.a,param.b,param.n,param.mu,param.T,param.coeffdamp,param.dampa,param.dampb,param.viscosity,handles.u0,handles.u1,handles.axes_sol);
    %    h=(param.b-param.a)/(param.n+1);
    %    x=[param.a:h:param.b];
    %    handles.solactual=1;
    %    handles.x=x;
    %    handles.solu=solu;
    %end    
    %axes(handles.axes_sol);
    %maximo=max(max(handles.solu));
    %minimo=min(min(handles.solu));
    %for i=1:length(handles.solu(1,:))
    %   plot(handles.x,handles.solu(:,i));
    %   axis([param.a param.b minimo maximo]);
    %   pause(.1);
    %end
end
guidata(hObject,handles)

% --- Executes on button press in sol_push.
function sol_push_Callback(hObject, eventdata, handles)
% hObject    handle to sol_push (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

param=getappdata(gcbf,'data');

[ener temps]=stab1dcalcul(param.a,param.b,param.n,param.mu,param.T,param.coeffdamp,param.dampa,param.dampb,param.viscosity,handles.u0,handles.u1);
    axes(handles.axes_sol);
    N=size(temps)
    plot(temps(2:N(2)-1),log(ener(1:N(2)-2)))
     xlabel('time');
     ylabel('log(Energy)');
     axis([0 param.T min(log(ener(1:N(2)-2)))*0.95 max(log(ener(1:N(2)-2)))*1.05])
     hold on
     [p,s]=polyfit(temps(2:N(2)-1),log(ener(1:N(2)-2)),1)
     plog=p(1)*temps(2:N(2)-1)+p(2);
     plot(temps(2:N(2)-1),plog,'red');
     handles.solactual=0;
     hold off

handles.temps=temps;
handles.ener=ener;
guidata(hObject,handles)

% --- Executes during object creation, after setting all properties.
function pop_met_CreateFcn(hObject, eventdata, handles)
% hObject    handle to pop_met (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc
    set(hObject,'BackgroundColor','white');
else
    set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
end

% --- Executes on selection change in pop_met.
function pop_met_Callback(hObject, eventdata, handles)
% hObject    handle to pop_met (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = get(hObject,'String') returns pop_met contents as cell array
%        contents{get(hObject,'Value')} returns selected item from pop_met

val = get(hObject,'Value');
str = get(hObject, 'String');
switch str{val};
case 'diferencias finitas' % User selects peaks
    handles.file = 'difcent';
end
guidata(hObject,handles)

% % --- Executes on button press in push_cambcf.
% function push_cambcf_Callback(hObject, eventdata, handles)
% % hObject    handle to push_cambcf (see GCBO)
% % eventdata  reserved - to be defined in a future version of MATLAB
% % handles    structure with handles and user data (see GUIDATA)
% 
% %edit datos.m

% --- Executes during object creation, after setting all properties.
function pop_in_CreateFcn(hObject, eventdata, handles)
% hObject    handle to pop_in (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc
    set(hObject,'BackgroundColor','white');
else
    set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
end

% --- Executes on selection change in pop_in.
function pop_in_Callback(hObject, eventdata, handles)
% hObject    handle to pop_in (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = get(hObject,'String') returns pop_in contents as cell array
%        contents{get(hObject,'Value')} returns selected item from pop_in

param=getappdata(gcbf,'data');
h=(param.b-param.a)/(param.n+1);
x=[param.a:h:param.b];
val = get(hObject,'Value');
str = get(hObject, 'String');
switch str{val};
case 'Example1' % User selects difcent
[u0 u1]=data1(x);
cla
case 'Example2' 
[u0 u1]=data2(x); 
cla
case 'Example3'
[u0 u1]=data3(x);
cla
case 'Example4'
[u0 u1]=data4(x);
cla
end;
axes(handles.axes_u0);
plot(x,u0);
axes(handles.axes_u1);
plot(x,u1);
handles.u0=u0;
handles.u1=u1;
guidata(hObject,handles)

% --- Executes on button press in pushbutton7.
function pushbutton7_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton7 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

close




