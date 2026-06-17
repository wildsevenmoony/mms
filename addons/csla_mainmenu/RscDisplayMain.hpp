/*
 * Author: Moony
 * Restores the vanilla Arma 3 main menu spotlight controls when CSLA is loaded.
 */

class RscPicture;
class RscText;
class RscMainMenuSpotlight;
class RscActivePictureKeepAspect;
class RscControlsGroupNoScrollbars;
class RscPictureKeepAspect;
class RscVideo;
class RscStructuredText;
class RscButton;

class RscDisplayMain {
	class Controls {
		class BackgroundSpotlight: RscPicture {
			text = "#(argb,8,8,3)color(1,1,1,1)";
			colorText[] = {0,0,0,0.9};
			x = "0.5 - (1.5 * 10) * (pixelW * pixelGridNoUIScale * 2) - 2 * (2 * pixelW)";
			y = "0.5 - (10 / 2) * (pixelH * pixelGridNoUIScale * 2) - (2 * pixelH)";
			w = "3 * 10 * (pixelW * pixelGridNoUIScale * 2) + 4 * (2 * pixelW)";
			h = "10 * (pixelH * pixelGridNoUIScale * 2) + 2 * (2 * pixelH)";
		};

		class BackgroundSpotlightLeft: BackgroundSpotlight {
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradient_ca.paa";
			angle = 180;
			x = "safezoneX";
			w = "(safezoneW - (3 * 10 * (pixelW * pixelGridNoUIScale * 2) + 4 * (2 * pixelW))) / 2";
		};

		class BackgroundSpotlightRight: BackgroundSpotlightLeft {
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradient_ca.paa";
			angle = 0;
			x = "0.5 + (1.5 * 10) * (pixelW * pixelGridNoUIScale * 2) + 2 * (2 * pixelW)";
		};

		class Spotlight1: RscMainMenuSpotlight {
			idc = 1021;
			x = "0.5 - (1.5 * 10) * (pixelW * pixelGridNoUIScale * 2) - (2 * pixelW)";
			class Controls {
				class GroupPicture: RscControlsGroupNoScrollbars {
					x = 0;
					y = 0;
					w = "10 * (pixelW * pixelGridNoUIScale * 2)";
					h = "10 * (pixelH * pixelGridNoUIScale * 2)";
					class Controls {
						class Picture: RscPictureKeepAspect {
							idc = 1023;
							text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlight_2_ca.paa";
							x = 0;
							y = 0;
							w = "10 * (pixelW * pixelGridNoUIScale * 2)";
							h = "10 * (pixelH * pixelGridNoUIScale * 2)";
						};
						class Video: RscVideo {
							idc = 1024;
							show = 0;
							text = "\a3\Ui_f\Video\spotlight_2.ogv";
							x = 0;
							y = 0;
							w = "10 * (pixelW * pixelGridNoUIScale * 2)";
							h = "10 * (pixelH * pixelGridNoUIScale * 2)";
						};
					};
				};
				class GroupHover: RscControlsGroupNoScrollbars {
					idc = 1025;
					fade = 1;
					x = 0;
					y = 0;
					w = "10 * (pixelW * pixelGridNoUIScale * 2)";
					h = "10 * (pixelH * pixelGridNoUIScale * 2)";
					class Controls {
						class Overlay: RscPicture {
							text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\hover_ca.paa";
							colorText[] = {0,0,0,0.5};
							x = 0;
							y = 0;
							w = "10 * (pixelW * pixelGridNoUIScale * 2)";
							h = "10 * (pixelH * pixelGridNoUIScale * 2)";
						};
						class LineLeft: RscText {
							colorBackground[] = {1,1,1,1};
							x = 0;
							y = 0;
							w = "pixelW";
							h = "10 * (pixelH * pixelGridNoUIScale * 2)";
						};
						class LineRight: LineLeft {
							x = "10 * (pixelW * pixelGridNoUIScale * 2) - pixelW";
						};
						class LineTop: LineLeft {
							idc = 1027;
							text = "$STR_A3_RscDisplayMain_Spotlight_Open";
							x = 0;
							y = 0;
							w = "10 * (pixelW * pixelGridNoUIScale * 2)";
							h = "(pixelH * pixelGrid * 2)";
							colorText[] = {0,0,0,1};
							shadow = 0;
							style = 0;
							sizeEx = "(pixelH * pixelGrid * 2)";
							font = "PuristaLight";
							onLoad = "(_this select 0) ctrlsettext toupper ctrltext (_this select 0);";
						};
						class LineBottom: LineTop {
							y = "10 * (pixelH * pixelGridNoUIScale * 2) - pixelH";
							h = "pixelH";
						};
					};
				};
				class TextBackground: RscPicture {
					idc = 1029;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlight_backgroundText_ca.paa";
					colorText[] = {0,0,0,0.5};
					x = 0;
					y = 0;
					w = "10 * (pixelW * pixelGridNoUIScale * 2)";
					h = "10 * (pixelH * pixelGridNoUIScale * 2)";
				};
				class Text: RscStructuredText {
					idc = 1028;
					text = "$STR_A3_RscDisplayMain_GroupMultiplayer_QuickPlay_text";
					size = "1.00 * (pixelH * pixelGridNoUIScale * 2)";
					shadow = 2;
					x = 0;
					y = 0;
					w = "10 * (pixelW * pixelGridNoUIScale * 2)";
					h = "10 * (pixelH * pixelGridNoUIScale * 2)";
					class Attributes {
						align = "center";
						color = "#ffffff";
						font = "PuristaBold";
					};
				};
				class Button: RscButton {
					idc = 1026;
					colorBackground[] = {0,0,0,0};
					colorBackgroundActive[] = {0,0,0,0};
					colorBackgroundDisabled[] = {0,0,0,0};
					colorFocused[] = {0,0,0,0};
					colorDisabled[] = {0,0,0,0};
					x = 0;
					y = 0;
					w = "10 * (pixelW * pixelGridNoUIScale * 2)";
					h = "10 * (pixelH * pixelGridNoUIScale * 2)";
				};
			};
		};

		class Spotlight2: RscText {
			idc = 1020;
			x = "0.5 - (0.5 * 10) * (pixelW * pixelGridNoUIScale * 2)";
			y = "0.5 - (10 / 2) * (pixelH * pixelGridNoUIScale * 2)";
			w = "10 * (pixelW * pixelGridNoUIScale * 2)";
			h = "10 * (pixelH * pixelGridNoUIScale * 2)";
			show = 0;
		};

		class Spotlight3: RscMainMenuSpotlight {
			idc = 1022;
			x = "0.5 + (0.5 * 10) * (pixelW * pixelGridNoUIScale * 2) + (2 * pixelW)";
			class Controls {
				class GroupPicture: RscControlsGroupNoScrollbars {
					x = 0;
					y = 0;
					w = "10 * (pixelW * pixelGridNoUIScale * 2)";
					h = "10 * (pixelH * pixelGridNoUIScale * 2)";
					class Controls {
						class Picture: RscPictureKeepAspect {
							idc = 1023;
							text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlight_3_ca.paa";
							x = 0;
							y = 0;
							w = "10 * (pixelW * pixelGridNoUIScale * 2)";
							h = "10 * (pixelH * pixelGridNoUIScale * 2)";
						};
						class Video: RscVideo {
							idc = 1024;
							show = 0;
							text = "\a3\Ui_f\Video\spotlight3.ogv";
							x = 0;
							y = 0;
							w = "10 * (pixelW * pixelGridNoUIScale * 2)";
							h = "10 * (pixelH * pixelGridNoUIScale * 2)";
						};
					};
				};
				class GroupHover: RscControlsGroupNoScrollbars {
					idc = 1025;
					fade = 1;
					x = 0;
					y = 0;
					w = "10 * (pixelW * pixelGridNoUIScale * 2)";
					h = "10 * (pixelH * pixelGridNoUIScale * 2)";
					class Controls {
						class Overlay: RscPicture {
							text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\hover_ca.paa";
							colorText[] = {0,0,0,0.5};
							x = 0;
							y = 0;
							w = "10 * (pixelW * pixelGridNoUIScale * 2)";
							h = "10 * (pixelH * pixelGridNoUIScale * 2)";
						};
						class LineLeft: RscText {
							colorBackground[] = {1,1,1,1};
							x = 0;
							y = 0;
							w = "pixelW";
							h = "10 * (pixelH * pixelGridNoUIScale * 2)";
						};
						class LineRight: LineLeft {
							x = "10 * (pixelW * pixelGridNoUIScale * 2) - pixelW";
						};
						class LineTop: LineLeft {
							idc = 1027;
							text = "$STR_A3_RscDisplayMain_Spotlight_Create";
							x = 0;
							y = 0;
							w = "10 * (pixelW * pixelGridNoUIScale * 2)";
							h = "(pixelH * pixelGrid * 2)";
							colorText[] = {0,0,0,1};
							shadow = 0;
							style = 0;
							sizeEx = "(pixelH * pixelGrid * 2)";
							font = "PuristaLight";
							onLoad = "(_this select 0) ctrlsettext toupper ctrltext (_this select 0);";
						};
						class LineBottom: LineTop {
							y = "10 * (pixelH * pixelGridNoUIScale * 2) - pixelH";
							h = "pixelH";
						};
					};
				};
				class TextBackground: RscPicture {
					idc = 1029;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlight_backgroundText_ca.paa";
					colorText[] = {0,0,0,0.5};
					x = 0;
					y = 0;
					w = "10 * (pixelW * pixelGridNoUIScale * 2)";
					h = "10 * (pixelH * pixelGridNoUIScale * 2)";
				};
				class Text: RscStructuredText {
					idc = 1028;
					text = "$STR_A3_RscDisplayMain_ButtonEditor";
					size = "1.00 * (pixelH * pixelGridNoUIScale * 2)";
					shadow = 2;
					x = 0;
					y = 0;
					w = "10 * (pixelW * pixelGridNoUIScale * 2)";
					h = "10 * (pixelH * pixelGridNoUIScale * 2)";
					class Attributes {
						align = "center";
						color = "#ffffff";
						font = "PuristaBold";
					};
				};
				class Button: RscButton {
					idc = 1026;
					colorBackground[] = {0,0,0,0};
					colorBackgroundActive[] = {0,0,0,0};
					colorBackgroundDisabled[] = {0,0,0,0};
					colorFocused[] = {0,0,0,0};
					colorDisabled[] = {0,0,0,0};
					x = 0;
					y = 0;
					w = "10 * (pixelW * pixelGridNoUIScale * 2)";
					h = "10 * (pixelH * pixelGridNoUIScale * 2)";
				};
			};
		};

		class SpotlightPrev: RscActivePictureKeepAspect {
			idc = 1060;
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlightPrev_ca.paa";
			color[] = {1,1,1,0.25};
			fade = 1;
			x = "0.5 - (0.5 * 10) * (pixelW * pixelGridNoUIScale * 2)";
			y = "0.5 - (10 / 2 + (10 / 8)) * (pixelH * pixelGridNoUIScale * 2)";
			w = "10 * (pixelW * pixelGridNoUIScale * 2)";
			h = "(10 / 8) * (pixelH * pixelGridNoUIScale * 2)";
		};

		class SpotlightNext: SpotlightPrev {
			idc = 1061;
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlightNext_ca.paa";
			y = "0.5 + (10 / 2) * (pixelH * pixelGridNoUIScale * 2)";
			angle = 180;
		};

		class BackgroundBarLeft: RscPicture {
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradientMods_ca.paa";
			colorText[] = {0,0,0,1};
			angle = 180;
			x = "0.5 - 4 * 2 * (pixelW * pixelGrid * 2)";
			y = "safezoneY + 2 * (pixelH * pixelGrid * 2)";
			w = "2 * 2 * (pixelW * pixelGrid * 2)";
			h = "2 * (pixelH * pixelGrid * 2)";
		};

		class BackgroundBarRight: BackgroundBarLeft {
			angle = 0;
			x = "0.5 + 2 * 2 * (pixelW * pixelGrid * 2)";
		};
	};
};
