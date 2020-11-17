#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 1
#define VOLUME 1650
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 3.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define COLOR_CHANGE_DIRECT
#define DISABLE_DIAGNOSTIC_COMMANDS
#define FETT263_STAB_ON
#define FETT263_SWING_ON
#define FETT263_THRUST_ON
#define FETT263_FORCE_PUSH
#define IDLE_OFF_TIME 60*5*1000
#endif

#ifdef CONFIG_PROP
#include "../props/saber_sa22c_buttons.h"
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
   { "GeneralPrincess", "tracks/General.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<RandomFlicker<ColorChange<TrInstant,DeepSkyBlue,Blue,Cyan,DodgerBlue,Green,Rgb<28,255,28>,Red,Magenta,Rgb<255,80,154>,Yellow,Orange,Azure>,ColorChange<TrInstant,Rgb<0,107,205>,Rgb<0,0,205>,Rgb<0,205,205>,Rgb<0,60,205>,Rgb<0,205,0>,Rgb<22,205,22>,Rgb<205,0,0>,Rgb<205,0,205>,Rgb<205,62,115>,Rgb<205,205,0>,Rgb<205,79,0>,Rgb<178,205,205>>>,ColorChange<TrInstant,Red,Red,Red,Red,Red,Red,LightYellow,Blue,Blue,Red,Blue,Red>>,Strobe<ColorChange<TrInstant,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Yellow>,Black,20,16>,Strobe<ColorChange<TrInstant,White,White,White,White,White,White,White,White,White,Red,Rgb<200,255,255>,Red>,Black,20,16>>,Strobe<ColorChange<TrInstant,Yellow,Yellow,Yellow,Yellow,LemonChiffon,Red,Yellow,Yellow,Yellow,Cyan,White,Yellow>,Black,28,25>,260>,700,1100>>()},
   { "FinalSteps", "tracks/FinalSteps.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<RandomFlicker<ColorChange<TrInstant,DeepSkyBlue,Blue,Cyan,DodgerBlue,Green,Rgb<28,255,28>,Red,Magenta,Rgb<255,80,154>,Yellow,Orange,Azure>,ColorChange<TrInstant,Rgb<0,107,205>,Rgb<0,0,205>,Rgb<0,205,205>,Rgb<0,60,205>,Rgb<0,205,0>,Rgb<22,205,22>,Rgb<205,0,0>,Rgb<205,0,205>,Rgb<205,62,115>,Rgb<205,205,0>,Rgb<205,79,0>,Rgb<178,205,205>>>,ColorChange<TrInstant,Red,Red,Red,Red,Red,Red,LightYellow,Blue,Blue,Red,Blue,Red>>,Strobe<ColorChange<TrInstant,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Yellow>,Black,20,16>,Strobe<ColorChange<TrInstant,White,White,White,White,White,White,White,White,White,Red,Rgb<200,255,255>,Red>,Black,20,16>>,Strobe<ColorChange<TrInstant,Yellow,Yellow,Yellow,Yellow,LemonChiffon,Red,Yellow,Yellow,Yellow,Cyan,White,Yellow>,Black,28,25>,260>,700,1100>>()},
   { "Ascension", "tracks/Ascension.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<RandomFlicker<ColorChange<TrInstant,DeepSkyBlue,Blue,Cyan,DodgerBlue,Green,Rgb<28,255,28>,Red,Magenta,Rgb<255,80,154>,Yellow,Orange,Azure>,ColorChange<TrInstant,Rgb<0,107,205>,Rgb<0,0,205>,Rgb<0,205,205>,Rgb<0,60,205>,Rgb<0,205,0>,Rgb<22,205,22>,Rgb<205,0,0>,Rgb<205,0,205>,Rgb<205,62,115>,Rgb<205,205,0>,Rgb<205,79,0>,Rgb<178,205,205>>>,ColorChange<TrInstant,Red,Red,Red,Red,Red,Red,LightYellow,Blue,Blue,Red,Blue,Red>>,Strobe<ColorChange<TrInstant,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Yellow>,Black,20,16>,Strobe<ColorChange<TrInstant,White,White,White,White,White,White,White,White,White,Red,Rgb<200,255,255>,Red>,Black,20,16>>,Strobe<ColorChange<TrInstant,Yellow,Yellow,Yellow,Yellow,LemonChiffon,Red,Yellow,Yellow,Yellow,Cyan,White,Yellow>,Black,28,25>,260>,700,1100>>()},
   { "Traveler", "tracks/Traveler.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<RandomFlicker<ColorChange<TrInstant,DeepSkyBlue,Blue,Cyan,DodgerBlue,Green,Rgb<28,255,28>,Red,Magenta,Rgb<255,80,154>,Yellow,Orange,Azure>,ColorChange<TrInstant,Rgb<0,107,205>,Rgb<0,0,205>,Rgb<0,205,205>,Rgb<0,60,205>,Rgb<0,205,0>,Rgb<22,205,22>,Rgb<205,0,0>,Rgb<205,0,205>,Rgb<205,62,115>,Rgb<205,205,0>,Rgb<205,79,0>,Rgb<178,205,205>>>,ColorChange<TrInstant,Red,Red,Red,Red,Red,Red,LightYellow,Blue,Blue,Red,Blue,Red>>,Strobe<ColorChange<TrInstant,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Yellow>,Black,20,16>,Strobe<ColorChange<TrInstant,White,White,White,White,White,White,White,White,White,Red,Rgb<200,255,255>,Red>,Black,20,16>>,Strobe<ColorChange<TrInstant,Yellow,Yellow,Yellow,Yellow,LemonChiffon,Red,Yellow,Yellow,Yellow,Cyan,White,Yellow>,Black,28,25>,260>,700,1100>>()},
   { "YoungSolo", "tracks/JFO5.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<RandomFlicker<ColorChange<TrInstant,DeepSkyBlue,Blue,Cyan,DodgerBlue,Green,Rgb<28,255,28>,Red,Magenta,Rgb<255,80,154>,Yellow,Orange,Azure>,ColorChange<TrInstant,Rgb<0,107,205>,Rgb<0,0,205>,Rgb<0,205,205>,Rgb<0,60,205>,Rgb<0,205,0>,Rgb<22,205,22>,Rgb<205,0,0>,Rgb<205,0,205>,Rgb<205,62,115>,Rgb<205,205,0>,Rgb<205,79,0>,Rgb<178,205,205>>>,ColorChange<TrInstant,Red,Red,Red,Red,Red,Red,LightYellow,Blue,Blue,Red,Blue,Red>>,Strobe<ColorChange<TrInstant,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Yellow>,Black,20,16>,Strobe<ColorChange<TrInstant,White,White,White,White,White,White,White,White,White,Red,Rgb<200,255,255>,Red>,Black,20,16>>,Strobe<ColorChange<TrInstant,Yellow,Yellow,Yellow,Yellow,LemonChiffon,Red,Yellow,Yellow,Yellow,Cyan,White,Yellow>,Black,28,25>,260>,700,1100>>()},
   { "Empress", "tracks/Empress.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<RandomFlicker<ColorChange<TrInstant,DeepSkyBlue,Blue,Cyan,DodgerBlue,Green,Rgb<28,255,28>,Red,Magenta,Rgb<255,80,154>,Yellow,Orange,Azure>,ColorChange<TrInstant,Rgb<0,107,205>,Rgb<0,0,205>,Rgb<0,205,205>,Rgb<0,60,205>,Rgb<0,205,0>,Rgb<22,205,22>,Rgb<205,0,0>,Rgb<205,0,205>,Rgb<205,62,115>,Rgb<205,205,0>,Rgb<205,79,0>,Rgb<178,205,205>>>,ColorChange<TrInstant,Red,Red,Red,Red,Red,Red,LightYellow,Blue,Blue,Red,Blue,Red>>,Strobe<ColorChange<TrInstant,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Yellow>,Black,20,16>,Strobe<ColorChange<TrInstant,White,White,White,White,White,White,White,White,White,Red,Rgb<200,255,255>,Red>,Black,20,16>>,Strobe<ColorChange<TrInstant,Yellow,Yellow,Yellow,Yellow,LemonChiffon,Red,Yellow,Yellow,Yellow,Cyan,White,Yellow>,Black,28,25>,260>,700,1100>>()},
   { "Duke", "tracks/Duke.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<RandomFlicker<ColorChange<TrInstant,DeepSkyBlue,Blue,Cyan,DodgerBlue,Green,Rgb<28,255,28>,Red,Magenta,Rgb<255,80,154>,Yellow,Orange,Azure>,ColorChange<TrInstant,Rgb<0,107,205>,Rgb<0,0,205>,Rgb<0,205,205>,Rgb<0,60,205>,Rgb<0,205,0>,Rgb<22,205,22>,Rgb<205,0,0>,Rgb<205,0,205>,Rgb<205,62,115>,Rgb<205,205,0>,Rgb<205,79,0>,Rgb<178,205,205>>>,ColorChange<TrInstant,Red,Red,Red,Red,Red,Red,LightYellow,Blue,Blue,Red,Blue,Red>>,Strobe<ColorChange<TrInstant,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Yellow>,Black,20,16>,Strobe<ColorChange<TrInstant,White,White,White,White,White,White,White,White,White,Red,Rgb<200,255,255>,Red>,Black,20,16>>,Strobe<ColorChange<TrInstant,Yellow,Yellow,Yellow,Yellow,LemonChiffon,Red,Yellow,Yellow,Yellow,Cyan,White,Yellow>,Black,28,25>,260>,700,1100>>()},
   { "TheBoldOne", "tracks/TheBoldOne.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<RandomFlicker<ColorChange<TrInstant,DeepSkyBlue,Blue,Cyan,DodgerBlue,Green,Rgb<28,255,28>,Red,Magenta,Rgb<255,80,154>,Yellow,Orange,Azure>,ColorChange<TrInstant,Rgb<0,107,205>,Rgb<0,0,205>,Rgb<0,205,205>,Rgb<0,60,205>,Rgb<0,205,0>,Rgb<22,205,22>,Rgb<205,0,0>,Rgb<205,0,205>,Rgb<205,62,115>,Rgb<205,205,0>,Rgb<205,79,0>,Rgb<178,205,205>>>,ColorChange<TrInstant,Red,Red,Red,Red,Red,Red,LightYellow,Blue,Blue,Red,Blue,Red>>,Strobe<ColorChange<TrInstant,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Yellow>,Black,20,16>,Strobe<ColorChange<TrInstant,White,White,White,White,White,White,White,White,White,Red,Rgb<200,255,255>,Red>,Black,20,16>>,Strobe<ColorChange<TrInstant,Yellow,Yellow,Yellow,Yellow,LemonChiffon,Red,Yellow,Yellow,Yellow,Cyan,White,Yellow>,Black,28,25>,260>,700,1100>>()},
   { "KRossguardv3", "tracks/TFA_Battle.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<RandomFlicker<ColorChange<TrInstant,DeepSkyBlue,Blue,Cyan,DodgerBlue,Green,Rgb<28,255,28>,Red,Magenta,Rgb<255,80,154>,Yellow,Orange,Azure>,ColorChange<TrInstant,Rgb<0,107,205>,Rgb<0,0,205>,Rgb<0,205,205>,Rgb<0,60,205>,Rgb<0,205,0>,Rgb<22,205,22>,Rgb<205,0,0>,Rgb<205,0,205>,Rgb<205,62,115>,Rgb<205,205,0>,Rgb<205,79,0>,Rgb<178,205,205>>>,ColorChange<TrInstant,Red,Red,Red,Red,Red,Red,LightYellow,Blue,Blue,Red,Blue,Red>>,Strobe<ColorChange<TrInstant,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Yellow>,Black,20,16>,Strobe<ColorChange<TrInstant,White,White,White,White,White,White,White,White,White,Red,Rgb<200,255,255>,Red>,Black,20,16>>,Strobe<ColorChange<TrInstant,Yellow,Yellow,Yellow,Yellow,LemonChiffon,Red,Yellow,Yellow,Yellow,Cyan,White,Yellow>,Black,28,25>,260>,700,1100>>()},
   { "TeensySF", "tracks/venus.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<RandomFlicker<ColorChange<TrInstant,DeepSkyBlue,Blue,Cyan,DodgerBlue,Green,Rgb<28,255,28>,Red,Magenta,Rgb<255,80,154>,Yellow,Orange,Azure>,ColorChange<TrInstant,Rgb<0,107,205>,Rgb<0,0,205>,Rgb<0,205,205>,Rgb<0,60,205>,Rgb<0,205,0>,Rgb<22,205,22>,Rgb<205,0,0>,Rgb<205,0,205>,Rgb<205,62,115>,Rgb<205,205,0>,Rgb<205,79,0>,Rgb<178,205,205>>>,ColorChange<TrInstant,Red,Red,Red,Red,Red,Red,LightYellow,Blue,Blue,Red,Blue,Red>>,Strobe<ColorChange<TrInstant,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Yellow>,Black,20,16>,Strobe<ColorChange<TrInstant,White,White,White,White,White,White,White,White,White,Red,Rgb<200,255,255>,Red>,Black,20,16>>,Strobe<ColorChange<TrInstant,Yellow,Yellow,Yellow,Yellow,LemonChiffon,Red,Yellow,Yellow,Yellow,Cyan,White,Yellow>,Black,28,25>,260>,700,1100>>()},
   { "SmthJedi", "tracks/mars.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<RandomFlicker<ColorChange<TrInstant,DeepSkyBlue,Blue,Cyan,DodgerBlue,Green,Rgb<28,255,28>,Red,Magenta,Rgb<255,80,154>,Yellow,Orange,Azure>,ColorChange<TrInstant,Rgb<0,107,205>,Rgb<0,0,205>,Rgb<0,205,205>,Rgb<0,60,205>,Rgb<0,205,0>,Rgb<22,205,22>,Rgb<205,0,0>,Rgb<205,0,205>,Rgb<205,62,115>,Rgb<205,205,0>,Rgb<205,79,0>,Rgb<178,205,205>>>,ColorChange<TrInstant,Red,Red,Red,Red,Red,Red,LightYellow,Blue,Blue,Red,Blue,Red>>,Strobe<ColorChange<TrInstant,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Yellow>,Black,20,16>,Strobe<ColorChange<TrInstant,White,White,White,White,White,White,White,White,White,Red,Rgb<200,255,255>,Red>,Black,20,16>>,Strobe<ColorChange<TrInstant,Yellow,Yellow,Yellow,Yellow,LemonChiffon,Red,Yellow,Yellow,Yellow,Cyan,White,Yellow>,Black,28,25>,260>,700,1100>>()},
   { "SmthGrey", "tracks/mercury.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<RandomFlicker<ColorChange<TrInstant,DeepSkyBlue,Blue,Cyan,DodgerBlue,Green,Rgb<28,255,28>,Red,Magenta,Rgb<255,80,154>,Yellow,Orange,Azure>,ColorChange<TrInstant,Rgb<0,107,205>,Rgb<0,0,205>,Rgb<0,205,205>,Rgb<0,60,205>,Rgb<0,205,0>,Rgb<22,205,22>,Rgb<205,0,0>,Rgb<205,0,205>,Rgb<205,62,115>,Rgb<205,205,0>,Rgb<205,79,0>,Rgb<178,205,205>>>,ColorChange<TrInstant,Red,Red,Red,Red,Red,Red,LightYellow,Blue,Blue,Red,Blue,Red>>,Strobe<ColorChange<TrInstant,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Yellow>,Black,20,16>,Strobe<ColorChange<TrInstant,White,White,White,White,White,White,White,White,White,Red,Rgb<200,255,255>,Red>,Black,20,16>>,Strobe<ColorChange<TrInstant,Yellow,Yellow,Yellow,Yellow,LemonChiffon,Red,Yellow,Yellow,Yellow,Cyan,White,Yellow>,Black,28,25>,260>,700,1100>>()},
   { "SmthFuzz", "tracks/uranus.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<RandomFlicker<ColorChange<TrInstant,DeepSkyBlue,Blue,Cyan,DodgerBlue,Green,Rgb<28,255,28>,Red,Magenta,Rgb<255,80,154>,Yellow,Orange,Azure>,ColorChange<TrInstant,Rgb<0,107,205>,Rgb<0,0,205>,Rgb<0,205,205>,Rgb<0,60,205>,Rgb<0,205,0>,Rgb<22,205,22>,Rgb<205,0,0>,Rgb<205,0,205>,Rgb<205,62,115>,Rgb<205,205,0>,Rgb<205,79,0>,Rgb<178,205,205>>>,ColorChange<TrInstant,Red,Red,Red,Red,Red,Red,LightYellow,Blue,Blue,Red,Blue,Red>>,Strobe<ColorChange<TrInstant,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Yellow>,Black,20,16>,Strobe<ColorChange<TrInstant,White,White,White,White,White,White,White,White,White,Red,Rgb<200,255,255>,Red>,Black,20,16>>,Strobe<ColorChange<TrInstant,Yellow,Yellow,Yellow,Yellow,LemonChiffon,Red,Yellow,Yellow,Yellow,Cyan,White,Yellow>,Black,28,25>,260>,700,1100>>()},
   { "CrimsonMenace", "tracks/CrimsonMenace.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<RandomFlicker<ColorChange<TrInstant,DeepSkyBlue,Blue,Cyan,DodgerBlue,Green,Rgb<28,255,28>,Red,Magenta,Rgb<255,80,154>,Yellow,Orange,Azure>,ColorChange<TrInstant,Rgb<0,107,205>,Rgb<0,0,205>,Rgb<0,205,205>,Rgb<0,60,205>,Rgb<0,205,0>,Rgb<22,205,22>,Rgb<205,0,0>,Rgb<205,0,205>,Rgb<205,62,115>,Rgb<205,205,0>,Rgb<205,79,0>,Rgb<178,205,205>>>,ColorChange<TrInstant,Red,Red,Red,Red,Red,Red,LightYellow,Blue,Blue,Red,Blue,Red>>,Strobe<ColorChange<TrInstant,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Yellow>,Black,20,16>,Strobe<ColorChange<TrInstant,White,White,White,White,White,White,White,White,White,Red,Rgb<200,255,255>,Red>,Black,20,16>>,Strobe<ColorChange<TrInstant,Yellow,Yellow,Yellow,Yellow,LemonChiffon,Red,Yellow,Yellow,Yellow,Cyan,White,Yellow>,Black,28,25>,260>,700,1100>>()},
   { "RgueCmdr", "tracks/LvsV.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<RandomFlicker<ColorChange<TrInstant,DeepSkyBlue,Blue,Cyan,DodgerBlue,Green,Rgb<28,255,28>,Red,Magenta,Rgb<255,80,154>,Yellow,Orange,Azure>,ColorChange<TrInstant,Rgb<0,107,205>,Rgb<0,0,205>,Rgb<0,205,205>,Rgb<0,60,205>,Rgb<0,205,0>,Rgb<22,205,22>,Rgb<205,0,0>,Rgb<205,0,205>,Rgb<205,62,115>,Rgb<205,205,0>,Rgb<205,79,0>,Rgb<178,205,205>>>,ColorChange<TrInstant,Red,Red,Red,Red,Red,Red,LightYellow,Blue,Blue,Red,Blue,Red>>,Strobe<ColorChange<TrInstant,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Yellow>,Black,20,16>,Strobe<ColorChange<TrInstant,White,White,White,White,White,White,White,White,White,Red,Rgb<200,255,255>,Red>,Black,20,16>>,Strobe<ColorChange<TrInstant,Yellow,Yellow,Yellow,Yellow,LemonChiffon,Red,Yellow,Yellow,Yellow,Cyan,White,Yellow>,Black,28,25>,260>,700,1100>>()},
   { "TthCrstl", "tracks/mars.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<RandomFlicker<ColorChange<TrInstant,DeepSkyBlue,Blue,Cyan,DodgerBlue,Green,Rgb<28,255,28>,Red,Magenta,Rgb<255,80,154>,Yellow,Orange,Azure>,ColorChange<TrInstant,Rgb<0,107,205>,Rgb<0,0,205>,Rgb<0,205,205>,Rgb<0,60,205>,Rgb<0,205,0>,Rgb<22,205,22>,Rgb<205,0,0>,Rgb<205,0,205>,Rgb<205,62,115>,Rgb<205,205,0>,Rgb<205,79,0>,Rgb<178,205,205>>>,ColorChange<TrInstant,Red,Red,Red,Red,Red,Red,LightYellow,Blue,Blue,Red,Blue,Red>>,Strobe<ColorChange<TrInstant,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Rgb<200,255,255>,Yellow>,Black,20,16>,Strobe<ColorChange<TrInstant,White,White,White,White,White,White,White,White,White,Red,Rgb<200,255,255>,Red>,Black,20,16>>,Strobe<ColorChange<TrInstant,Yellow,Yellow,Yellow,Yellow,LemonChiffon,Red,Yellow,Yellow,Yellow,Cyan,White,Yellow>,Black,28,25>,260>,700,1100>>()},
   { "TthCrstl", "tracks/uranus.wav",
    StyleStrobePtr<WHITE, Rainbow, 15, 300, 800>(), "strobe"},
   { "SmthJedi", "tracks/mars.wav",
    &style_charging, "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, SimpleBladePtr<CreeXPE2RedTemplate<1000>, CreeXPE2GreenTemplate<0>, CreeXPE2BlueTemplate<240>, NoLED, bladePowerPin1, bladePowerPin2, bladePowerPin3, -1>(), CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
#endif
