//pizzaA., pizzaS, pizzaI.bmp		X 114	Y 419
//donutA., donutS., donut I.bmp	X 455 	Y 423

defineStill Helicopter_Pizza_Up_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\pizzaA.BMP";
    duration=INDEFINITE;
    location=(114,419,-2);
    paletteManagement=NONE;
    transparency=TRUE;
}

defineStill Helicopter_Pizza_Down_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\pizzas.BMP";
    duration=INDEFINITE;
    location=(114,419,-2);
    paletteManagement=NONE;
    transparency=TRUE;
}

parallelAction Helicopter_Pizza_Ctl
{
    handlerClass = "MxControlPresenter";
    Helicopter_Pizza_Up_Bitmap;
    Helicopter_Pizza_Down_Bitmap;
    loopingMethod=CACHE;
    extra="World:current";
}

defineStill Helicopter_Donut_Up_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\DonutA.BMP";
    duration=INDEFINITE;
    location=(455,423,-2);
    paletteManagement=NONE;
    transparency=TRUE;
}

defineStill Helicopter_Donut_Down_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\Donuts.BMP";
    duration=INDEFINITE;
    location=(455,423,-2);
    paletteManagement=NONE;
    transparency=TRUE;
}

parallelAction Helicopter_Donut_Ctl
{
    handlerClass = "MxControlPresenter";
    Helicopter_Donut_Up_Bitmap;
    Helicopter_Donut_Down_Bitmap;
    loopingMethod=CACHE;
    extra="World:current";
}

defineStill HelicopterDashboard_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\dash.BMP";
    duration=INDEFINITE;
    location=(89,321,-1);
    transparency=TRUE;
    extra="World:current";
}

defineStill HelicopterDotOn1_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\DotOn.BMP";
    duration=INDEFINITE;
    location=(431,358,-2);
    transparency=TRUE;
    extra="World:current, Visibility:FALSE";
}

defineStill HelicopterDotOn2_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\DotOn.BMP";
    duration=INDEFINITE;
    location=(442,358,-2);
    transparency=TRUE;
    extra="World:current, Visibility:FALSE";
}

defineStill HelicopterDotOn3_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\DotOn.BMP";
    duration=INDEFINITE;
    location=(453,358,-2);
    transparency=TRUE;
    extra="World:current, Visibility:FALSE";
}

defineStill HelicopterDotOn4_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\DotOn.BMP";
    duration=INDEFINITE;
    location=(464,358,-2);
    transparency=TRUE;
    extra="World:current, Visibility:FALSE";
}

defineStill HelicopterDotOn5_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\DotOn.BMP";
    duration=INDEFINITE;
    location=(475,358,-2);
    transparency=TRUE;
    extra="World:current, Visibility:FALSE";
}

defineStill HelicopterDotOn6_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\DotOn.BMP";
    duration=INDEFINITE;
    location=(487,358,-2);
    transparency=TRUE;
    extra="World:current, Visibility:FALSE";
}

defineStill HelicopterDotOn7_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\DotOn.BMP";
    duration=INDEFINITE;
    location=(498,358,-2);
    transparency=TRUE;
    extra="World:current, Visibility:FALSE";
}

defineStill HelicopterDotOn8_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\DotOn.BMP";
    duration=INDEFINITE;
    location=(425,366,-2);
    transparency=TRUE;
    extra="World:current, Visibility:FALSE";
}

defineStill HelicopterDotOn9_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\DotOn.BMP";
    duration=INDEFINITE;
    location=(436,366,-2);
    transparency=TRUE;
    extra="World:current, Visibility:FALSE";
}

defineStill HelicopterDotOn10_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\DotOn.BMP";
    duration=INDEFINITE;
    location=(447,366,-2);
    transparency=TRUE;
    extra="World:current, Visibility:FALSE";
}

defineStill HelicopterDotOn11_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\DotOn.BMP";
    duration=INDEFINITE;
    location=(458,366,-2);
    transparency=TRUE;
    extra="World:current, Visibility:FALSE";
}

defineStill HelicopterDotOn12_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\DotOn.BMP";
    duration=INDEFINITE;
    location=(469,366,-2);
    transparency=TRUE;
    extra="World:current, Visibility:FALSE";
}

defineStill HelicopterDotOn13_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\DotOn.BMP";
    duration=INDEFINITE;
    location=(481,366,-2);
    transparency=TRUE;
    extra="World:current, Visibility:FALSE";
}

defineStill HelicopterDotOn14_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\DotOn.BMP";
    duration=INDEFINITE;
    location=(492,366,-2);
    transparency=TRUE;
    extra="World:current, Visibility:FALSE";
}

defineStill HelicopterDotOn15_Bitmap
{
    fileName = "q:\Lego\Scripts\Dashbrds\Copter\DotOn.BMP";
    duration=INDEFINITE;
    location=(503,366,-2);
    transparency=TRUE;
    extra="World:current, Visibility:FALSE";
}

parallelAction HelicopterDashboard Weave
{
    HelicopterDashboard_Bitmap;
    Helicopter_Pizza_Ctl;
    Helicopter_Donut_Ctl;
    Helicopter_Info_Ctl;
    HelicopterDotOn1_Bitmap;
    HelicopterDotOn2_Bitmap;
    HelicopterDotOn3_Bitmap;
    HelicopterDotOn4_Bitmap;
    HelicopterDotOn5_Bitmap;
    HelicopterDotOn6_Bitmap;
    HelicopterDotOn7_Bitmap;
    HelicopterDotOn8_Bitmap;
    HelicopterDotOn9_Bitmap;
    HelicopterDotOn10_Bitmap;
    HelicopterDotOn11_Bitmap;
    HelicopterDotOn12_Bitmap;
    HelicopterDotOn13_Bitmap;
    HelicopterDotOn14_Bitmap;
    HelicopterDotOn15_Bitmap;
}
