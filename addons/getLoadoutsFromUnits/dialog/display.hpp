class RscText;
class RscButtonMenu;
class RscListbox;
class RscButtonMenuOK;
class RscButtonMenuCancel;

class RscTitles {
	class GVAR(getUnitsLoadoutsGui) {
		idd = 57834212;
		enableSimulation = 1;
		movingEnable = 0;
		fadeIn=0;
		fadeOut=1;
		duration = 10e10;
		onLoad = "";
		class controls {
			class grad_medicClassFull: RscText
			{
				idc = 1000;
				text = "";
				x = 3.5 * GUI_GRID_W + GUI_GRID_X;
				y = 4.5 * GUI_GRID_H + GUI_GRID_Y;
				w = 30 * GUI_GRID_W;
				h = 1 * GUI_GRID_H;
				colorText[] = {-1,1,-1,1};
			};
			class grad_medicBackground: RscButtonMenu
			{
				idc = 2400;
				x = 0 * GUI_GRID_W + GUI_GRID_X;
				y = 0 * GUI_GRID_H + GUI_GRID_Y;
				w = 40 * GUI_GRID_W;
				h = 25 * GUI_GRID_H;
			};
			class grad_configNameText: RscText
			{
				idc = 3456;
				text = "Loadout Name:";
				x = 3.5 * GUI_GRID_W + GUI_GRID_X;
				y = 9.5 * GUI_GRID_H + GUI_GRID_Y;
				w = 30 * GUI_GRID_W;
				h = 1 * GUI_GRID_H;
				colorText[] = {-1,1,-1,1};
			};
			class grad_medicClassHalf: RscText
			{
				idc = 3457;
				text = "";
				x = 3.5 * GUI_GRID_W + GUI_GRID_X;
				y = 9.5 * GUI_GRID_H + GUI_GRID_Y;
				w = 30 * GUI_GRID_W;
				h = 1 * GUI_GRID_H;
				colorText[] = {-1,1,-1,1};
			};
			class grad_medicClassCFR: RscText
			{
				idc = 3458;
				text = "";
				x = 4 * GUI_GRID_W + GUI_GRID_X;
				y = 15 * GUI_GRID_H + GUI_GRID_Y;
				w = 30 * GUI_GRID_W;
				h = 1 * GUI_GRID_H;
				colorText[] = {-1,1,-1,1};
			};
			class grad_medicSelectFull: RscListbox
			{
				idc = 3459;
				x = 3.5 * GUI_GRID_W + GUI_GRID_X;
				y = 6 * GUI_GRID_H + GUI_GRID_Y;
				w = 30 * GUI_GRID_W;
				h = 2.5 * GUI_GRID_H;
			};
			class grad_medicSelectHalf: RscListbox
			{
				idc = 3460;
				x = 3.5 * GUI_GRID_W + GUI_GRID_X;
				y = 11 * GUI_GRID_H + GUI_GRID_Y;
				w = 30 * GUI_GRID_W;
				h = 2.5 * GUI_GRID_H;
			};
			class grad_medicButtonMenuOK: RscButtonMenuOK
			{
				x = 6.5 * GUI_GRID_W + GUI_GRID_X;
				y = 20 * GUI_GRID_H + GUI_GRID_Y;
				w = 4 * GUI_GRID_W;
				h = 2.5 * GUI_GRID_H;
			};
			class grad_medicButtonMenuCancel: RscButtonMenuCancel
			{
				x = 20 * GUI_GRID_W + GUI_GRID_X;
				y = 20 * GUI_GRID_H + GUI_GRID_Y;
				w = 4 * GUI_GRID_W;
				h = 2.5 * GUI_GRID_H;
			};
		};
	};
};
