#include "..\Include\JukeBoxWorld_Actions.h"

defineSettings Configuration
{
    bufferSizeKB = 64;
    buffersNum = 16;
}


//=================================================================
// Bitmaps

defineStill Background_Bitmap
{
    fileName = "Q:\Lego\Media\JukeBox\backgrnd.bmp";
    duration = INDEFINITE;
    location=(0,0,10);
    extra="World:current";
}

defineStill Right_Bitmap
{
    fileName = "q:\Lego\Media\JukeBox\Right.bmp";
    duration=INDEFINITE;
    location=(145,20,8);
//    transparency=FAST;
    extra="Visibility:FALSE, World:current";
}

defineStill Decal_Bitmap
{
    fileName = "q:\Lego\Media\JukeBox\Decal.bmp";
    duration=INDEFINITE;
    location=(145,20,8);
//    transparency=FAST;
    extra="Visibility:FALSE, World:current";
}

defineStill Wallis_Bitmap
{
    fileName = "q:\Lego\Media\JukeBox\Wallis.bmp";
    duration=INDEFINITE;
    location=(145,20,8);
//    transparency=FAST;
    extra="Visibility:FALSE, World:current";
}

defineStill Nelson_Bitmap
{
    fileName = "q:\Lego\Media\JukeBox\Nelson.bmp";
    duration=INDEFINITE;
    location=(145,20,8);
//    transparency=FAST;
    extra="Visibility:FALSE, World:current";
}

defineStill Torpedos_Bitmap
{
    fileName = "q:\Lego\Media\JukeBox\Torpedos.bmp";
    duration=INDEFINITE;
    location=(145,20,8);
//    transparency=FAST;
    extra="Visibility:FALSE, World:current";
}

//=================================================================
// Controls

//
// Volume down button
//

defineStill Voldown_Up_Bitmap
{
    fileName = "Q:\Lego\media\jukebox\voldown.bmp";
    duration=INDEFINITE;
    location=(32,413,9);
    paletteManagement=NONE;
    transparency=YES;
    extra="BMP_ISMAP";
}

defineStill Voldown_Down_Bitmap
{
    fileName = "Q:\Lego\media\jukebox\voldownS.bmp";
    duration=INDEFINITE;
    location=(32,413,9);
    paletteManagement=NONE;
    transparency=YES;
    extra="BMP_ISMAP";
}

parallelAction Voldown_Ctl
{
    handlerClass="MxControlPresenter";
    Voldown_Up_Bitmap;
    Voldown_Down_Bitmap;
    loopingMethod=CACHE;
    extra="Style:Map, World:current";
}

//
// Volume up button
//

defineStill Volup_Up_Bitmap
{
    fileName = "Q:\Lego\media\jukebox\volup.bmp";
    duration=INDEFINITE;
    location=(558,417,9);
    paletteManagement=NONE;
    transparency=YES;
    extra="BMP_ISMAP";
}

defineStill Volup_Down_Bitmap
{
    fileName = "Q:\Lego\media\jukebox\volupS.bmp";
    duration=INDEFINITE;
    location=(558,417,9);
    paletteManagement=NONE;
    transparency=YES;
    extra="BMP_ISMAP";
}

parallelAction Volup_Ctl
{
    handlerClass="MxControlPresenter";
    Volup_Up_Bitmap;
    Volup_Down_Bitmap;
    loopingMethod=CACHE;
    extra="Style:Map, World:current";
}

//
// disk back button
//

defineStill Dback_Up_Bitmap
{
    fileName = "Q:\Lego\media\jukebox\dback.bmp";
    duration=INDEFINITE;
    location=(159,422,9);
    paletteManagement=NONE;
    transparency=YES;
    extra="BMP_ISMAP";
}

defineStill Dback_Down_Bitmap
{
    fileName = "Q:\Lego\media\jukebox\dbackS.bmp";
    duration=INDEFINITE;
    location=(159,422,9);
    paletteManagement=NONE;
    transparency=YES;
    extra="BMP_ISMAP";
}

parallelAction Dback_Ctl
{
    handlerClass="MxControlPresenter";
    Dback_Up_Bitmap;
    Dback_Down_Bitmap;
    loopingMethod=CACHE;
    extra="Style:Map, World:current";
}

//
// disk forward button
//

defineStill Dfwd_Up_Bitmap
{
    fileName = "Q:\Lego\media\jukebox\dfwd.bmp";
    duration=INDEFINITE;
    location=(391,422,9);
    paletteManagement=NONE;
    transparency=YES;
    extra="BMP_ISMAP";
}

defineStill Dfwd_Down_Bitmap
{
    fileName = "Q:\Lego\media\jukebox\dfwdS.bmp";
    duration=INDEFINITE;
    location=(391,422,9);
    paletteManagement=NONE;
    transparency=YES;
    extra="BMP_ISMAP";
}

parallelAction Dfwd_Ctl
{
    handlerClass="MxControlPresenter";
    Dfwd_Up_Bitmap;
    Dfwd_Down_Bitmap;
    loopingMethod=CACHE;
    extra="Style:Map, World:current";
}

//
// Note button
//

defineStill Note_Up_Bitmap
{
    fileName = "Q:\Lego\media\jukebox\note.bmp";
    duration=INDEFINITE;
    location=(270,420,9);
    paletteManagement=NONE;
    transparency=YES;
    extra="BMP_ISMAP";
}

defineStill Note_Down_Bitmap
{
    fileName = "Q:\Lego\media\jukebox\noteS.bmp";
    duration=INDEFINITE;
    location=(270,420,9);
    paletteManagement=NONE;
    transparency=YES;
    extra="BMP_ISMAP";
}

parallelAction Note_Ctl
{
    handlerClass="MxControlPresenter";
    Note_Up_Bitmap;
    Note_Down_Bitmap;
    loopingMethod=CACHE;
    extra="Style:Map, World:current";
}


//=================================================================
// StartUp

parallelAction _StartUp Weave
{
    handlerClass = "LegoWorldPresenter";
    extra="Object:JukeBox";
    
    Background_Bitmap;
    Right_Bitmap;
    Decal_Bitmap;
    Wallis_Bitmap;
    Nelson_Bitmap;
    Torpedos_Bitmap;
    Voldown_Ctl;
    Volup_Ctl;
    Dback_Ctl;
    Dfwd_Ctl;
    Note_Ctl;
}
