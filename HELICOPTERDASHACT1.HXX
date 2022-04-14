//arms.bmp				X 190	Y 348
//takeoffA, takeoffS, takeoffI. bmp	X 129	Y 342
//landA, landS, landI. bmp		X 129	Y 378

defineStill Helicopter_TakeOff_Up_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\takeoffa.BMP";
    duration=INDEFINITE;
    location=(129,342,-2);
    paletteManagement=NONE;
    transparency=TRUE;
}

defineStill Helicopter_TakeOff_Down_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\takeoffs.BMP";
    duration=INDEFINITE;
    location=(129,342,-2);
    paletteManagement=NONE;
    transparency=TRUE;
}

parallelAction Helicopter_TakeOff_Ctl
{
    handlerClass = "MxControlPresenter";
    Helicopter_TakeOff_Up_Bitmap;
    Helicopter_TakeOff_Down_Bitmap;
    loopingMethod=CACHE;
    extra="World:current";
}

defineStill Helicopter_Land_Up_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\landA.BMP";
    duration=INDEFINITE;
    location=(129,378,-2);
    paletteManagement=NONE;
    transparency=TRUE;
}

defineStill Helicopter_Land_Down_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\lands.BMP";
    duration=INDEFINITE;
    location=(129,378,-2);
    paletteManagement=NONE;
    transparency=TRUE;
}

parallelAction Helicopter_Land_Ctl
{
    handlerClass = "MxControlPresenter";
    Helicopter_Land_Up_Bitmap;
    Helicopter_Land_Down_Bitmap;
    loopingMethod=CACHE;
    extra="World:current";
}


defineStill HelicopterArms_Mask_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\Arms.BMP";
    duration=INDEFINITE;
    location=(190,348,-2);
    paletteManagement=NONE;
    transparency=TRUE;
	extra="BMP_ISMAP";
}

parallelAction HelicopterArms_Ctl
{
    handlerClass = "MxControlPresenter";
    HelicopterArms_Mask_Bitmap;
    HelicopterArms_Mask_Bitmap;
    loopingMethod=CACHE;
    extra="Style:Map, World:current";
}

defineStill HelicopterDashboard_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\dash2.BMP";
    duration=INDEFINITE;
    location=(89,321,-1);
    transparency=TRUE;
    extra="World:current";
}

parallelAction HelicopterDashboard Weave
{
    HelicopterDashboard_Bitmap;
    HelicopterArms_Ctl;
    Helicopter_TakeOff_Ctl;
    Helicopter_Land_Ctl;
    Helicopter_Info_Ctl;
}

