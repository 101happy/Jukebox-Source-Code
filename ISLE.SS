//===========================================================================
// Isle

#define _StartUp                0
#define _InfoMain	            0
#define SoundAndAnim_Action	    0

#include "..\Include\Isle_Actions.h"
#include "..\Include\Floor2_Actions.h"
#include "..\Include\Radio_Actions.h"
#include "..\Include\HelicopterDash_Actions.h"
#include "..\Include\MotorcycleDash_Actions.h"
#include "..\Include\BikeDash_Actions.h"
#include "..\Include\JetskiDash_Actions.h"
#include "..\Include\SkateDash_Actions.h"
#include "..\Include\DuneCarDash_Actions.h"
#include "..\Include\TowTrackDash_Actions.h"
#include "..\Include\AmbulanceDash_Actions.h"
#include "..\Include\ObstDef.hxx"
#include "q:\Lego\Media\WorldDb\Include\Act1Def.h"


defineSettings Configuration
{
    bufferSizeKB = 64;
    buffersNum = 20;
}

defineObject IslePath
{
    handlerClass = "LegoPathPresenter";
    fileName = "q:\lego\media\paths\Isle.gph";
    extra="Triggers_Source:\lego\scripts\sndanim"; // specify triggers source file
}


defineObject Pizzeria_Model
{
    fileName = "inline";
    handlerClass = "LegoModelPresenter";
    extra="DB_CREATE:Pizza";
}


parallelAction Pizzeria_Actor
{
    handlerClass = "LegoActorPresenter";
    location = (-21.375, 0, -41.75);
    direction = (-0.559, 0, 0.829);
    up = (0,1,0);
    Pizzeria_Model;
    extra="Object:Pizzeria";
}


defineObject Cave_Model
{
    fileName = "inline";
    handlerClass = "LegoModelPresenter";
    extra="DB_CREATE:cave";
}

parallelAction Cave_Entity
{
    handlerClass = "LegoEntityPresenter";
    location = (-36.8219, -0.73682, 25.21177);
    direction = (0.000000, 0.000000, 1.000000);
    up = (0.000000, 1.000000, 0.000000);
    Cave_Model;
    extra="Object:CaveEntity";
}


defineObject Jail_Model
{
    fileName = "inline";
    handlerClass = "LegoModelPresenter";
    extra="DB_CREATE:jail";
}

parallelAction Jail_Entity
{
    handlerClass = "LegoEntityPresenter";
    location = (98.875, 0, -46.1564);
    direction = (-1, 0, 0);
    up = (0, 1, 0);
    Jail_Model;
    extra="Object:JailEntity";
}


defineObject GasModel
{
    fileName = "inline";
    handlerClass = "LegoModelPresenter";
    extra="DB_CREATE:Gas";
}
defineObject PoliceModel
{
    fileName = "inline";
    handlerClass = "LegoModelPresenter";
    extra="DB_CREATE:Policsta";
}
defineObject InfCtrModel
{
    fileName = "inline";
    handlerClass = "LegoModelPresenter";
    extra="DB_CREATE:infocen";
}
defineObject BeachModel
{
    fileName = "inline";
    handlerClass = "LegoModelPresenter";
    extra="DB_CREATE:beach";
}
defineObject RacejModel
{
    fileName = "inline";
    handlerClass = "LegoModelPresenter";
    extra="DB_CREATE:racej";
}
defineObject MedCtrModel
{
    fileName = "inline";
    handlerClass = "LegoModelPresenter";
    extra="DB_CREATE:medcntr";
}

parallelAction Gas
{
    handlerClass = "LegoEntityPresenter";
    location = (29.0625, 0, 0.562498);
    direction = (1,0,0);
    up = (0,1,0);
    GasModel;
    extra="Object:GasStationEntity";
 }

parallelAction Police
{
    handlerClass = "LegoEntityPresenter";
    location = (72.502861, 0.999992, -88.696892);
    direction = (0.707, 0, -0.707);
    up = (0,1,0);
    PoliceModel;
    extra="Object:PoliceEntity";
}
parallelAction InfoCenter_Entity
{
    handlerClass = "LegoEntityPresenter";
    location = (92.43492, 8.99999, -10.4015);
    direction = (1,0,0);
    up = (0,1,0);
    InfCtrModel;
    extra="Object:InfoCenterEntity";
}
parallelAction Beach
{
    handlerClass = "LegoEntityPresenter";
    location = (13.99822, -1.8125, -60.1863);
    direction = (0,0,1);
    up = (0,1,0);
    BeachModel;
    extra="Object:BeachHouseEntity";
}
parallelAction Racej
{
    handlerClass = "LegoEntityPresenter";
    location = (-4.40714, 0, 10.375);
    direction = (0,0,1);
    up = (0,1,0);
    RacejModel;
    extra="Object:RaceStandsEntity";
}
parallelAction MedCtr
{
    handlerClass = "LegoEntityPresenter";
    location = (93.49742, 3.990708, 25.34845);
    direction = (1,0,0);
    up = (0,1,0);
    MedCtrModel;
    extra="Object:HospitalEntity";
}

defineObject Bike_Model
{
    fileName = "inline";
    handlerClass = "LegoModelPresenter";
    extra="DB_CREATE:Bike";
}

parallelAction Bike_Actor
{
    handlerClass = "LegoActorPresenter";
    Bike_Model;
    extra = "Object:Bike,
Path:int44;2;0.5;0;0.5";
}

defineObject MotoBk_Model
{
    fileName = "inline";
    handlerClass = "LegoModelPresenter";
    extra="DB_CREATE:MotoBk";
}

parallelAction MotoBk_Actor
{
    handlerClass = "LegoActorPresenter";
    MotoBk_Model;
    extra = "Object:Motocycle,
Path:int43;4;0.5;1;0.5";
}

defineObject Ambul_Model
{
    fileName = "inline";
    handlerClass = "LegoModelPresenter";
    extra="DB_CREATE:Ambul";
}

parallelAction Ambul_Actor
{
    handlerClass = "LegoActorPresenter";
    Ambul_Model;
    extra="Object:Ambulance,
Visibility:FALSE,
Speed:0.0, 
Path:edg02_28;2;0.5;0;0.5";
}

defineObject Towtk_Model
{
    fileName = "inline";
    handlerClass = "LegoModelPresenter";
    extra="DB_CREATE:Towtk";
}

parallelAction Towtk_Actor
{
    handlerClass = "LegoActorPresenter";
    Towtk_Model;
    extra = "Object:TowTrack,
Visibility:FALSE,
Speed:0.0, 
Path:edg01_44;0;0.5;2;0.5";
}

defineObject SkateBoard_Model
{
    fileName = "inline";
    handlerClass = "LegoModelPresenter";
    extra="DB_CREATE:skate";
}

parallelAction SkateBoard_Actor
{
    handlerClass = "LegoActorPresenter";
    location = (-18.8282,0.138684,-43.779);
    direction = (0.0000,0.0000,1.0000);
    up = (0,1,0);
    SkateBoard_Model;
    extra="Object:SkateBoard,
Speed:0.0, 
Path:edg02_84;4;0.5;0;0.5";
}

defineObject JukeBox_Model
{
    fileName = "inline";
    handlerClass = "LegoModelPresenter";
    extra="DB_CREATE:juke";
}

parallelAction JukeBox_Entity
{
    handlerClass = "LegoEntityPresenter";
    location = (-17.3904, 0.000000, -36.1830);
    direction = (-0.707107, 0.000000, 0.707107);
    up = (0,1,0);
    JukeBox_Model;
    extra="Object:JukeBoxEntity";
}

defineObject Pizpie_Model
{
    fileName = "inline";
    handlerClass = "LegoModelPresenter";
    extra="DB_CREATE:pizpie";
}

parallelAction Pizza_Actor
{
    handlerClass = "LegoActorPresenter";
    Pizpie_Model;
    extra = "Object:Pizza";
}

defineObject BumpBouy_Model
{
    fileName = "inline";
    handlerClass = "LegoModelPresenter";
    extra="DB_CREATE:BouyBump";
}

parallelAction BumpBouy_Actor
{
    handlerClass = "LegoActorPresenter";
    BumpBouy_Model;
    extra="Object:BumpBouy,
Speed:0.0, 
Path:edg12_07;2;0.01;2;0.5";
}

#include "..\include\walkcycles.hxx"


defineObject SoundAndAnim
{
    fileName = "inline";
    handlerClass = "LegoActionControlPresenter";
    siFile = "openram;\lego\scripts\sndanim";
    startAction = "SoundAndAnim_Action";
}

defineSound TransitionSound1
{
    fileName = "Q:\Lego\Audio\SoundEfx\SJA001BR\110_pop.wav";
    loopingMethod=CACHE;
    extra="Sound:FALSE, World:current";
}

defineSound TransitionSound2
{
    fileName = "Q:\Lego\Audio\SoundEfx\WGS003NU\11_pull.wav";
    loopingMethod=CACHE;
    extra="Sound:FALSE, World:current";
}

defineObject NoPizza_Texture Weave
{
   handlerClass="LegoTexturePresenter";
   fileName="Q:\Lego\Media\Isle\Textures\NoPizza\NoPizza.tex";
}

defineObject NoPizaz_Texture Weave
{
   handlerClass="LegoTexturePresenter";
   fileName="Q:\Lego\Media\Isle\Textures\NoPizaz\NoPizza.tex";
}

serialAction _Isle Weave
{
    handlerClass = "LegoWorldPresenter";
    extra="Object:Isle, World:ACT1";
    
    IslePath;
    Pizzeria_Actor;
    Gas;
	Police;
	InfoCenter_Entity;
	Beach;
	Racej;
	MedCtr;
    BumpBouy_Actor;
    Bike_Actor;
    MotoBk_Actor;
    Ambul_Actor;
    Towtk_Actor;
    SkateBoard_Actor;
    JukeBox_Entity;
    Pizza_Actor;
	Cave_Entity;
    Jail_Entity;
	TransitionSound1;
	TransitionSound2;

    SoundAndAnim;
	CNs001xx;
    CNs002xx;
    CNs003xx;
    CNs004xx;
    CNs005xx;
    CNs007xx;
    CNs006xx;
    CNs008xx;
    CNs009xx;
    CNs010xx;
    CNs011xx;
    CNs012xx;
    CNs001Pe;
    CNs002Pe;
    CNs003Pe;
    CNs004Pe;
    CNs005Pe;
    CNs007Pe;
    CNs006Pe;
    CNs008Pe;
    CNs009Pe;
    CNs010Pe;
    CNs001Ma;
    CNs002Ma;
    CNs003Ma;
    CNs004Ma;
    CNs005Ma;
    CNs007Ma;
    CNs006Ma;
    CNs008Ma;
    CNs009Ma;
    CNs010Ma;
    CNs011Ma;
    CNs012Ma;
    CNs013Ma;
    CNs0x4Ma;
    CNs001Pa;
    CNs002Pa;
    CNs003Pa;
    CNs004Pa;
    CNs005Pa;
    CNs007Pa;
    CNs006Pa;
    CNs008Pa;
    CNs009Pa;
    CNs010Pa;
    CNs011Pa;
    CNs012Pa;
    CNs013Pa;
    CNs0x4Pa;
    CNs001Ni;
    CNs002Ni;
    CNs003Ni;
    CNs004Ni;
    CNs005Ni;
    CNs007Ni;
    CNs006Ni;
    CNs008Ni;
    CNs009Ni;
    CNs010Ni;
    CNs011Ni;
    CNsx11Ni;
    CNs001La;
    CNs002La;
    CNs003La;
    CNs004La;
    CNs005La;
    CNs007La;
    CNs006La;
    CNs008La;
    CNs009La;
    CNs010La;
    CNs011La;
    CNsx11La;
    CNs001Br;
    CNs002Br;
    CNs003Br;
    CNs004Br;
    CNs005Br;
    CNs007Br;
    CNs006Br;
    CNs008Br;
    CNs009Br;
    CNs010Br;
    CNs011Br;
    CNs012Br;
    CNs013Br;
    CNs014Br;
    CNs900Br;
    CNs901BR;
    CNs001Bd;
    CNs001Pg;
    CNs001Rd;
    CNs001Sy;
    CNs001Sk;
    BNsAss01;
    BNsAss02;
    BNsAss03;
    BNsDis01;
    BNsDis02;
    BNsDis03;
    crash5_PlayWav;
    s12_crash_PlayWav;
}

#include "Rides.hxx"
#include "JetskiDash.hxx"
#include "HelicopterDash.hxx"
#include "HelicopterDashAct1.hxx"
#include "MotorcycleDash.hxx"
#include "BikeDash.hxx"
#include "TowTrackDash.hxx"
#include "AmbulanceDash.hxx"
#include "..\Infocntr\Floor2.hxx"
#include "..\Infocntr\ElevRide.hxx"
#include "..\Infocntr\ElevOpen.hxx"
#include "..\Infocntr\Observe.hxx"
#include "..\Infocntr\SeaView.hxx"
#include "..\Infocntr\ElevDown.hxx"
#include "..\Police\PoliDoor.hxx"
#include "..\Garage\GaraDoor.hxx"
#include "q:\Lego\Media\WorldDb\Include\Act1Ani.h"
#include "..\Include\ObstAni.hxx"

