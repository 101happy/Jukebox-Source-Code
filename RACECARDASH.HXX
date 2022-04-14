//===========================================================================
// RaceCar Dashboard

defineStill RaceCarArms_Mask_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\Arms.BMP";
    duration=INDEFINITE;
    location=(194,432,-2);
    paletteManagement=NONE;
	extra="BMP_ISMAP";
}

parallelAction RaceCarArms_Ctl
{
    handlerClass = "MxControlPresenter";
    RaceCarArms_Mask_Bitmap;
    loopingMethod=CACHE;
    extra="Style:Map, World:current";
}

parallelAction RaceCarDashboard Weave
{
    RaceCarArms_Ctl;
}

defineStill RaceCarDashboard11_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash11.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard12_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash12.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard13_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash13.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard14_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash14.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard15_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash15.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard16_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash16.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard21_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash21.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard22_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash22.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard23_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash23.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard24_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash24.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard25_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash25.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard26_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash26.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard31_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash31.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard32_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash32.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard33_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash33.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard34_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash34.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard35_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash35.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard36_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash36.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard41_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash41.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard42_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash42.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard43_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash43.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard44_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash44.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard45_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash45.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard46_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash46.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard51_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash51.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard52_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash52.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard53_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash53.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard54_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash54.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard55_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash55.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard56_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash56.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard61_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash61.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard62_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash62.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard63_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash63.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard64_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash64.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard65_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash65.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill RaceCarDashboard66_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\RaceCar\dash66.BMP";
    duration=INDEFINITE;
    location=(0,308,-1);
    transparency=TRUE;
    extra="World:current";
}
