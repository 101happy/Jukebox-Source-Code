
//===========================================================================
// Skate Dashboard

defineStill SkatePizza_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Skate\Pizza.BMP";
    duration=INDEFINITE;
    location=(0, 299,-1);
    transparency=TRUE;
    extra="Visibility:FALSE, World:current";
}

defineStill SkateArms_Mask_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Skate\Arm.BMP";
    duration=INDEFINITE;
    location=(0,387,-2);
    transparency=TRUE;
    paletteManagement=NONE;
}

parallelAction SkateArms_Ctl
{
    handlerClass = "MxControlPresenter";
    SkateArms_Mask_Bitmap;
    SkateArms_Mask_Bitmap;
    loopingMethod=CACHE;
    extra="World:current";
}

parallelAction SkateDashboard Weave
{
    SkatePizza_Bitmap;
    SkateArms_Ctl;
}


//===========================================================================
// DuneCar Dashboard

defineStill DuneCarArms_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\DuneCar\Arms.BMP";
    duration=INDEFINITE;
    location=(0,300,-2);
    paletteManagement=NONE;
	extra="BMP_ISMAP";
}

parallelAction DuneCarArms_Ctl
{
    handlerClass = "MxControlPresenter";
    DuneCarArms_Bitmap;
    loopingMethod=CACHE;
    extra="Style:Map, World:current";
}

//---------------------------------------------------------------------------
// Horn control

defineSound DuneCarHorn_Sound
{
    fileName="q:\lego\Audio\SoundEfx\globalsn\xhorn3.wav";
    loopingMethod=CACHE;
	extra="Sound:FALSE, World:current";
}

// Up
defineStill DuneCarHornUp_Bitmap
{
    fileName = "q:\lego\Scripts\Dashbrds\DuneCar\HornA.bmp";
    duration=INDEFINITE;
    location=(299,364,-10);
    paletteManagement=NONE;
    transparency=YES;
}

// Down
defineStill DuneCarHornDown_Bitmap
{
    fileName = "q:\lego\Scripts\Dashbrds\DuneCar\HornS.bmp";
    duration=INDEFINITE;
    location=(299,364,-10);
    paletteManagement=NONE;
    transparency=YES;
}

parallelAction DuneCarHornDown
{
    DuneCarHornDown_Bitmap;
}

parallelAction DuneCarHorn_Ctl
{
    handlerClass="MxControlPresenter";
    DuneCarHornUp_Bitmap;
    DuneCarHornDown; 
    loopingMethod = CACHE;
	extra="World:current";
}

//---------------------------------------------------------------------------
// Info control

defineStill DuneCarInfoUp_Bitmap
{
    fileName = "q:\lego\Scripts\Dashbrds\DuneCar\InfoA.bmp";
    duration=INDEFINITE;
    location=(212,413,-10);
    paletteManagement=NONE;
    transparency=YES;
}

defineStill DuneCarInfoDown_Bitmap
{
    fileName = "q:\lego\Scripts\Dashbrds\DuneCar\InfoS.bmp";
    duration=INDEFINITE;
    location=(212,413,-10);
    paletteManagement=NONE;
    transparency=YES;
}

parallelAction DuneCarInfo_Ctl
{
    handlerClass="MxControlPresenter";
    DuneCarInfoUp_Bitmap;
    DuneCarInfoDown_Bitmap;
    loopingMethod = CACHE;
	extra="World:current";
}

//===========================================================================
// Meters

defineStill DuneCarSpeedMeter
{
    handlerClass = "LegoMeterPresenter";
    fileName = "q:\lego\Scripts\Dashbrds\DuneCar\speed.bmp";
    duration = INDEFINITE;
    location=(331,450,-10);
    paletteManagement=NONE;
    transparency=YES;
    extra="Variable:duneSPEED, Filler_index:218, Type:left_to_right, World:current";
}

defineStill DuneCarFuelMeter
{
    handlerClass = "LegoMeterPresenter";
    fileName = "q:\lego\Scripts\Dashbrds\DuneCar\fuel.bmp";
    duration = INDEFINITE;
    location=(299,435,-10);
    paletteManagement=NONE;
    transparency=YES;
    extra="Variable:duneFUEL, Filler_index:160, Type:bottom_to_top, World:current";
}

parallelAction DuneCarDashboard Weave
{
    DuneCarArms_Ctl;
	DuneCarHorn_Ctl;
	DuneCarInfo_Ctl;
	DuneCarHorn_Sound;
	DuneCarSpeedMeter;
	DuneCarFuelMeter;
}

defineStill DuneCarDashboard1_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\DuneCar\dash1.BMP";
    duration=INDEFINITE;
    location=(0,280,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill DuneCarDashboard2_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\DuneCar\dash2.BMP";
    duration=INDEFINITE;
    location=(0,280,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill DuneCarDashboard3_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\DuneCar\dash3.BMP";
    duration=INDEFINITE;
    location=(0,280,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill DuneCarDashboard4_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\DuneCar\dash4.BMP";
    duration=INDEFINITE;
    location=(0,280,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill DuneCarDashboard5_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\DuneCar\dash5.BMP";
    duration=INDEFINITE;
    location=(0,280,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill DuneCarDashboard6_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\DuneCar\dash6.BMP";
    duration=INDEFINITE;
    location=(0,280,-1);
    transparency=TRUE;
    extra="World:current";
}

