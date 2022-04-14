//===========================================================================
// Ambulance Dashboard

defineStill AmbulanceDashboard_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Ambul\dash.BMP";
    duration=INDEFINITE;
    location=(0,344,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill AmbulanceArms_Mask_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Ambul\Arms.BMP";
    duration=INDEFINITE;
    location=(168,426,-2);
    paletteManagement=NONE;
	extra="BMP_ISMAP";
}

parallelAction AmbulanceArms_Ctl
{
    handlerClass = "MxControlPresenter";
    AmbulanceArms_Mask_Bitmap;
    loopingMethod=CACHE;
    extra="Style:Map, World:current";
}

//---------------------------------------------------------------------------
// Horn control

defineSound AmbulanceHorn_Sound
{
    fileName="q:\lego\Audio\SoundEfx\globalsn\xhorn1.wav";
    loopingMethod=CACHE;
	extra="Sound:FALSE, World:current";
}

// Up
defineStill AmbulanceHornUp_Bitmap
{
    fileName = "q:\lego\Scripts\Dashbrds\Ambul\HornA.bmp";
    duration=INDEFINITE;
    location=(288,408,-10);
    paletteManagement=NONE;
    transparency=YES;
}

// Down
defineStill AmbulanceHornDown_Bitmap
{
    fileName = "q:\lego\Scripts\Dashbrds\Ambul\HornS.bmp";
    duration=INDEFINITE;
    location=(288,408,-10);
    paletteManagement=NONE;
    transparency=YES;
}

parallelAction AmbulanceHornDown
{
    AmbulanceHornDown_Bitmap;
}

parallelAction AmbulanceHorn_Ctl
{
    handlerClass="MxControlPresenter";
    AmbulanceHornUp_Bitmap;
    AmbulanceHornDown; 
    loopingMethod = CACHE;
	extra="World:current";
}

//---------------------------------------------------------------------------
// Info control

defineStill AmbulanceInfoUp_Bitmap
{
    fileName = "q:\lego\Scripts\Dashbrds\Ambul\InfoA.bmp";
    duration=INDEFINITE;
    location=(437,401,-10);
    paletteManagement=NONE;
    transparency=YES;
}

defineStill AmbulanceInfoDown_Bitmap
{
    fileName = "q:\lego\Scripts\Dashbrds\Ambul\InfoS.bmp";
    duration=INDEFINITE;
    location=(437,401,-10);
    paletteManagement=NONE;
    transparency=YES;
}

parallelAction AmbulanceInfo_Ctl
{
    handlerClass="MxControlPresenter";
    AmbulanceInfoUp_Bitmap;
    AmbulanceInfoDown_Bitmap;
    loopingMethod = CACHE;
	extra="World:current";
}

//===========================================================================
// Meters

defineStill AmbulanceSpeedMeter
{
    handlerClass = "LegoMeterPresenter";
    fileName = "q:\lego\Scripts\Dashbrds\Ambul\speed.bmp";
    duration = INDEFINITE;
    location=(151,433,-10);
    paletteManagement=NONE;
    transparency=YES;
    extra="Variable:ambulSPEED, Filler_index:218, Type:left_to_right, World:current";
}

defineStill AmbulanceFuelMeter
{
    handlerClass = "LegoMeterPresenter";
    fileName = "q:\lego\Scripts\Dashbrds\Ambul\fuel.bmp";
    duration = INDEFINITE;
    location=(116,415,-10);
    paletteManagement=NONE;
    transparency=YES;
    extra="Variable:ambulFUEL, Filler_index:160, Type:bottom_to_top, World:current";
}

parallelAction AmbulanceDashboard Weave
{
    AmbulanceDashboard_Bitmap;
    AmbulanceArms_Ctl;
	AmbulanceHorn_Ctl;
	AmbulanceInfo_Ctl;
	AmbulanceHorn_Sound;
	AmbulanceSpeedMeter;
	AmbulanceFuelMeter;
}
