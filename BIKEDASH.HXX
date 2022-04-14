//===========================================================================
// Bike Dashboard

defineStill BikeDashboard_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Bike\dash.BMP";
    duration=INDEFINITE;
    location=(0,330,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill BikeArms_Mask_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Bike\Arms.BMP";
    duration=INDEFINITE;
    location=(0,341,-2);
    paletteManagement=NONE;
	extra="BMP_ISMAP";
}

parallelAction BikeArms_Ctl
{
    handlerClass = "MxControlPresenter";
    BikeArms_Mask_Bitmap;
    loopingMethod=CACHE;
    extra="Style:Map, World:current";
}

//---------------------------------------------------------------------------
// Horn control

defineSound BikeHorn_Sound
{
    fileName="q:\lego\Audio\SoundEfx\globalsn\xding.wav";
    loopingMethod=CACHE;
	extra="Sound:FALSE, World:current";
}

// Up
defineStill BikeHornUp_Bitmap
{
    fileName = "q:\lego\Scripts\Dashbrds\Bike\HornA.bmp";
    duration=INDEFINITE;
    location=(289,281,-10);
    paletteManagement=NONE;
    transparency=YES;
}

// Down
defineStill BikeHornDown_Bitmap
{
    fileName = "q:\lego\Scripts\Dashbrds\Bike\HornS.bmp";
    duration=INDEFINITE;
    location=(289,273,-10);
    paletteManagement=NONE;
    transparency=YES;
}

parallelAction BikeHornDown
{
    BikeHornDown_Bitmap;
}

parallelAction BikeHorn_Ctl
{
    handlerClass="MxControlPresenter";
    BikeHornUp_Bitmap;
    BikeHornDown; 
    loopingMethod = CACHE;
	extra="World:current";
}

//---------------------------------------------------------------------------
// Info control

defineStill BikeInfoUp_Bitmap
{
    fileName = "q:\lego\Scripts\Dashbrds\Bike\InfoA.bmp";
    duration=INDEFINITE;
    location=(296,388,-10);
    paletteManagement=NONE;
    transparency=YES;
}

defineStill BikeInfoDown_Bitmap
{
    fileName = "q:\lego\Scripts\Dashbrds\Bike\InfoS.bmp";
    duration=INDEFINITE;
    location=(296,388,-10);
    paletteManagement=NONE;
    transparency=YES;
}

parallelAction BikeInfo_Ctl
{
    handlerClass="MxControlPresenter";
    BikeInfoUp_Bitmap;
    BikeInfoDown_Bitmap;
    loopingMethod = CACHE;
	extra="World:current";
}

parallelAction BikeDashboard Weave
{
    BikeDashboard_Bitmap;
    BikeArms_Ctl;
	BikeHorn_Ctl;
	BikeInfo_Ctl;
	BikeHorn_Sound;
}

