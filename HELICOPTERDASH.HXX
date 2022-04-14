//===========================================================================
// Helicopter Dashboard
//COPIED FROM README.DOC 5/2/97
//dash.bmp				X 89	Y 321
//dash2.bmp (no turbochucker)		"	"
//infoA    			X 446	Y 378
//infoS.bmp			X 444	Y 379

defineStill Helicopter_Info_Up_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\InfoA.BMP";
    duration=INDEFINITE;
    location=(446,378,-2);
    paletteManagement=NONE;
    transparency=TRUE;
    extra="BMP_ISMAP";
}

defineStill Helicopter_Info_Down_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\Infos.BMP";
    duration=INDEFINITE;
    location=(444,379,-2);
    paletteManagement=NONE;
    transparency=TRUE;
    extra="BMP_ISMAP";
}

parallelAction Helicopter_Info_Ctl
{
    handlerClass = "MxControlPresenter";
    Helicopter_Info_Up_Bitmap;
    Helicopter_Info_Down_Bitmap;
    loopingMethod=CACHE;
    extra="Style:Map, World:current";
}


defineObject HelicopterTakeOff_Anim Weave
{
    fileName = "q:\lego\media\ani\worlds\chprflt.ani";
    handlerClass = "LegoAnimPresenter";
}

defineObject HelicopterLand_Anim Weave
{
    fileName = "q:\lego\media\ani\worlds\Chprlnd.ani";
    handlerClass = "LegoAnimPresenter";
}
