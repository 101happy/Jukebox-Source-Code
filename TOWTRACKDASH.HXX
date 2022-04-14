//===========================================================================
// TowTrack Dashboard

defineStill TowTrackDashboard_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Tow\dash.BMP";
    duration=INDEFINITE;
    location=(0,336,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill TowTrackArms_Mask_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Tow\Arms.BMP";
    duration=INDEFINITE;
    location=(136,423,-2);
    paletteManagement=NONE;
	extra="BMP_ISMAP";
}

parallelAction TowTrackArms_Ctl
{
    handlerClass = "MxControlPresenter";
    TowTrackArms_Mask_Bitmap;
    loopingMethod=CACHE;
    extra="Style:Map, World:current";
}

//---------------------------------------------------------------------------
// Horn control

defineSound TowHorn_Sound
{
    fileName="q:\lego\Audio\SoundEfx\globalsn\xhorn2.wav";
    loopingMethod=CACHE;
	extra="Sound:FALSE, World:current";
}

// Up
defineStill TowHornUp_Bitmap
{
    fileName = "q:\lego\Scripts\Dashbrds\Tow\HornA.bmp";
    duration=INDEFINITE;
    location=(291,406,-10);
    paletteManagement=NONE;
    transparency=YES;
}

// Down
defineStill TowHornDown_Bitmap
{
    fileName = "q:\lego\Scripts\Dashbrds\Tow\HornS.bmp";
    duration=INDEFINITE;
    location=(291,406,-10);
    paletteManagement=NONE;
    transparency=YES;
}

parallelAction TowHornDown
{
    TowHornDown_Bitmap;
}

parallelAction TowHorn_Ctl
{
    handlerClass="MxControlPresenter";
    TowHornUp_Bitmap;
    TowHornDown; 
    loopingMethod = CACHE;
	extra="World:current";
}

//---------------------------------------------------------------------------
// Info control

defineStill TowInfoUp_Bitmap
{
    fileName = "q:\lego\Scripts\Dashbrds\Tow\InfoA.bmp";
    duration=INDEFINITE;
    location=(530,420,-10);
    paletteManagement=NONE;
    transparency=YES;
}

defineStill TowInfoDown_Bitmap
{
    fileName = "q:\lego\Scripts\Dashbrds\Tow\InfoS.bmp";
    duration=INDEFINITE;
    location=(530,420,-10);
    paletteManagement=NONE;
    transparency=YES;
}

parallelAction TowInfo_Ctl
{
    handlerClass="MxControlPresenter";
    TowInfoUp_Bitmap;
    TowInfoDown_Bitmap;
    loopingMethod = CACHE;
	extra="World:current";
}

//===========================================================================
// Meters

defineStill TowSpeedMeter
{
    handlerClass = "LegoMeterPresenter";
    fileName = "q:\lego\Scripts\Dashbrds\Tow\speed.bmp";
    duration = INDEFINITE;
    location=(179,414,-10);
    paletteManagement=NONE;
    transparency=YES;
    extra="Variable:towSPEED, Filler_index:218, Type:left_to_right, World:current";
}

defineStill TowFuelMeter
{
    handlerClass = "LegoMeterPresenter";
    fileName = "q:\lego\Scripts\Dashbrds\Tow\fuel.bmp";
    duration = INDEFINITE;
    location=(92,432,-10);
    paletteManagement=NONE;
    transparency=YES;
    extra="Variable:towFUEL, Filler_index:160, Type:bottom_to_top, World:current";
}

parallelAction TowTrackDashboard Weave
{
    TowTrackDashboard_Bitmap;
    TowTrackArms_Ctl;
	TowHorn_Ctl;
	TowInfo_Ctl;
	TowHorn_Sound;
	TowSpeedMeter;
	TowFuelMeter;
}
