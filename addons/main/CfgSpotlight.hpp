class RscPicture;
class RscText;
class RscStandardDisplay;
class RscControlsGroupNoScrollbars;
class RscMainMenuSpotlight: RscControlsGroupNoScrollbars {
    class Controls {
        class GroupPicture: RscControlsGroupNoScrollbars {
            class Controls {
                class Picture;
                class Video;
            };
        };
        class GroupHover: RscControlsGroupNoScrollbars {
            class Controls {
                class Overlay;
                class LineLeft;
                class LineRight;
                class LineTop;
                class LineBottom;
            };
        };
        class TextBackground;
        class Text;
        class Button;
    };
};
class RscDisplayMain: RscStandardDisplay {
    enableDisplay = 1;

    class controls {
        class BackgroundSpotlight: RscPicture {
            text = "#(argb,8,8,3)color(1,1,1,1)";
            colorText[] = {0, 0, 0, 0.9};
            x = "0.5 - (1.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2) - 2 * 	(2 * pixelW)";
            y = "0.5 - (	10 / 2) * 	(pixelH * pixelGridNoUIScale * 2) - 	(2 * pixelH)";
            w = "3 * 	10 * 	(pixelW * pixelGridNoUIScale * 2) + 4 * 	(2 * pixelW)";
            h = "(	10) * 	(pixelH * pixelGridNoUIScale * 2) + 2 * 	(2 * pixelH)";
        };
        class BackgroundSpotlightLeft: BackgroundSpotlight {
            text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradient_ca.paa";
            angle = 180;
            x = "safezoneX";
            w = "(safezoneW - (3 * 	10 * 	(pixelW * pixelGridNoUIScale * 2) + 4 * 	(2 * pixelW))) / 2";
        };
        class BackgroundSpotlightRight: BackgroundSpotlightLeft {
            text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradient_ca.paa";
            angle = 0;
            x = "0.5 + (1.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2) + 2 * 	(2 * pixelW)";
        };
        class Spotlight1: RscMainMenuSpotlight {
            idc = 1021;
            x = "0.5 - (1.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2) - 	(2 * pixelW)";
            class Controls: Controls {
                class GroupPicture: GroupPicture {
                    class Controls: Controls {
                        class Picture: Picture {
                            text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlight_2_ca.paa";
                        };
                        class Video: Video {
                            text = "\a3\Ui_f\Video\spotlight_2.ogv";
                        };
                    };
                };
                class GroupHover: GroupHover {
                    class Controls: Controls {
                        class Overlay: Overlay {};
                        class LineLeft: LineLeft {};
                        class LineRight: LineRight {};
                        class LineTop: LineTop {
                            text = "$STR_A3_RscDisplayMain_Spotlight_Open";
                        };
                        class LineBottom: LineBottom {};
                    };
                };
                class TextBackground: TextBackground {};
                class Text: Text {
                    text = "$STR_A3_RscDisplayMain_GroupMultiplayer_QuickPlay_text";
                };
                class Button: Button {};
            };
        };
        class Spotlight2: RscText {
            idc = 1020;
            x = "0.5 - (0.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2)";
            y = "0.5 - (	10 / 2) * 	(pixelH * pixelGridNoUIScale * 2)";
            w = "10 * 	(pixelW * pixelGridNoUIScale * 2)";
            h = "10 * 	(pixelH * pixelGridNoUIScale * 2)";
            show = 0;
        };
        class Spotlight3: RscMainMenuSpotlight {
            idc = 1022;
            x = "0.5 + (0.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2) + 	(2 * pixelW)";
            class Controls: Controls {
                class GroupPicture: GroupPicture {
                    class Controls: Controls {
                        class Picture: Picture {
                            text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlight_3_ca.paa";
                        };
                        class Video: Video {
                            text = "\a3\Ui_f\Video\spotlight3.ogv";
                        };
                    };
                };
                class GroupHover: GroupHover {
                    class Controls: Controls {
                        class Overlay: Overlay {};
                        class LineLeft: LineLeft {};
                        class LineRight: LineRight {};
                        class LineTop: LineTop {
                            text = "$STR_A3_RscDisplayMain_Spotlight_Create";
                        };
                        class LineBottom: LineBottom {};
                    };
                };
                class TextBackground: TextBackground {};
                class Text: Text {
                    text = "$STR_A3_RscDisplayMain_ButtonEditor";
                };
                class Button: Button {};
            };
        };
    };
};
