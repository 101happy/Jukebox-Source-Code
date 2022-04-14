//===========================================================================
// Jetski Dashboard

defineStill JetskiArms_Mask_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\Arms.BMP";
    duration=INDEFINITE;
    location=(0,298,-2);
    paletteManagement=NONE;
	extra="BMP_ISMAP";
}

parallelAction JetskiArms_Ctl
{
    handlerClass = "MxControlPresenter";
    JetskiArms_Mask_Bitmap;
    loopingMethod=CACHE;
    extra="Style:Map, World:current";
}


//---------------------------------------------------------------------------
// Info control

defineStill JetskiInfoUp_Bitmap
{
    fileName = "q:\lego\Scripts\Dashbrds\Jetski\InfoA.bmp";
    duration=INDEFINITE;
    location=(296,372,-10);
    paletteManagement=NONE;
    transparency=YES;
}

defineStill JetskiInfoDown_Bitmap
{
    fileName = "q:\lego\Scripts\Dashbrds\Jetski\InfoS.bmp";
    duration=INDEFINITE;
    location=(296,372,-10);
    paletteManagement=NONE;
    transparency=YES;
}

parallelAction JetskiInfo_Ctl
{
    handlerClass="MxControlPresenter";
    JetskiInfoUp_Bitmap;
    JetskiInfoDown_Bitmap;
    loopingMethod = CACHE;
	extra="World:current";
}

//===========================================================================
// Meters

defineStill JetskiSpeedMeter
{
    handlerClass = "LegoMeterPresenter";
    fileName = "q:\lego\Scripts\Dashbrds\Jetski\speed.bmp";
    duration = INDEFINITE;
    location=(457,385,-10);
    paletteManagement=NONE;
    transparency=YES;
    extra="Variable:jetSPEED, Filler_index:218, Type:left_to_right, World:current";
}

defineStill JetskiFuelMeter
{
    handlerClass = "LegoMeterPresenter";
    fileName = "q:\lego\Scripts\Dashbrds\Jetski\fuel.bmp";
    duration = INDEFINITE;
    location=(157,356,-10);
    paletteManagement=NONE;
    transparency=YES;
    extra="Variable:jetFUEL, Filler_index:160, Type:bottom_to_top, World:current";
}

parallelAction JetskiDashboard Weave
{
    JetskiArms_Ctl;
	JetskiInfo_Ctl;
	JetskiSpeedMeter;
	JetskiFuelMeter;
}

defineStill JetskiDashboard11_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash11.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard12_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash12.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard13_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash13.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard14_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash14.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard15_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash15.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard16_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash16.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard21_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash21.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard22_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash22.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard23_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash23.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard24_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash24.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard25_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash25.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard26_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash26.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard31_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash31.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard32_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash32.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard33_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash33.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard34_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash34.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard35_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash35.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard36_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash36.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard41_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash41.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard42_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash42.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard43_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash43.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard44_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash44.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard45_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash45.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard46_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash46.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard51_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash51.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard52_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash52.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard53_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash53.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard54_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash54.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard55_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash55.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard56_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash56.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard61_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash61.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard62_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash62.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard63_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash63.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard64_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash64.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard65_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash65.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill JetskiDashboard66_Bitmap Weave
{
    fileName = "q:\Lego\Scripts\Dashbrds\Jetski\dash66.BMP";
    duration=INDEFINITE;
    location=(0,284,-1);
    transparency=TRUE;
    extra="World:current";
}
