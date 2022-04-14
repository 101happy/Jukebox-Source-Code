//===========================================================================
// MotoBike Dashboard
//copied from readme.doc
//dash.bmp				X 0	Y 292
//arms.bmp				X 0	Y 298
//infoA, infoS.bmp			X 291	Y 402
//mapA, mapS. bmp			X 400	Y 185
//speed.bmp				X 372	Y 449
//fuel.bmp				X 253	Y 433

defineStill MotoBikeDashboard_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Motor\dash.BMP";
    duration=INDEFINITE;
    location=(0,292,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill MotoBikeArms_Mask_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Motor\Arms.BMP";
    duration=INDEFINITE;
    location=(0,298,-2);
    paletteManagement=NONE;
	extra="BMP_ISMAP";
}

parallelAction MotoBikeArms_Ctl
{
    handlerClass = "MxControlPresenter";
    MotoBikeArms_Mask_Bitmap;
    loopingMethod=CACHE;
    extra="Style:Map, World:current";
}

//---------------------------------------------------------------------------
// Info control

defineStill MotoBikeInfoUp_Bitmap
{
    fileName = "q:\lego\Scripts\Dashbrds\Motor\InfoA.bmp";
    duration=INDEFINITE;
    location=(291,402,-10);
    paletteManagement=NONE;
    transparency=YES;
}

defineStill MotoBikeInfoDown_Bitmap
{
    fileName = "q:\lego\Scripts\Dashbrds\Motor\InfoS.bmp";
    duration=INDEFINITE;
    location=(291,402,-10);
    paletteManagement=NONE;
    transparency=YES;
}

parallelAction MotoBikeInfo_Ctl
{
    handlerClass="MxControlPresenter";
    MotoBikeInfoUp_Bitmap;
    MotoBikeInfoDown_Bitmap;
    loopingMethod = CACHE;
	extra="World:current";
}

//===========================================================================
// Meters

defineStill MotoBikeSpeedMeter
{
    handlerClass = "LegoMeterPresenter";
    fileName = "q:\lego\Scripts\Dashbrds\Motor\speed.bmp";
    duration = INDEFINITE;
    location=(372,449,-10);
    paletteManagement=NONE;
    transparency=YES;
    extra="Variable:motoSPEED, Filler_index:218, Type:left_to_right, World:current";
}


defineStill MotoBikeFuelMeter
{
    handlerClass = "LegoMeterPresenter";
    fileName = "q:\lego\Scripts\Dashbrds\Motor\fuel.bmp";
    duration = INDEFINITE;
    location=(253,433,-10);
    paletteManagement=NONE;
    transparency=YES;
    extra="Variable:motoFUEL, Filler_index:160, Type:bottom_to_top, World:current";
}

parallelAction MotoBikeDashboard Weave
{
    MotoBikeDashboard_Bitmap;
    MotoBikeArms_Ctl;
	MotoBikeInfo_Ctl;
	MotoBikeSpeedMeter;
	MotoBikeFuelMeter;
}


