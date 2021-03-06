#include "BaconPlugs.hpp"


Plugin *plugin;

void init(rack::Plugin *p) {
  plugin = p;
  p->slug = "BaconMusic";
#ifdef VERSION
  p->version = TOSTRING(VERSION);
#endif
  p->website = "https://github.com/baconpaul/Bacon Music";
  
  p->addModel( modelHarMoNee );
  p->addModel( modelGlissinator );
  p->addModel( modelPolyGnome );
  p->addModel( modelQuantEyes );
  p->addModel( modelSampleDelay );
  
#ifdef BUILD_SORTACHORUS
  p->addModel( modelSortaChorus );
#endif
  
  p->addModel( modelChipNoise );
  p->addModel( modelChipWaves );
  p->addModel( modelChipYourWave );

#ifdef BUILD_GENERICLSFR
  p->addModel( modelGenericLFSR );
#endif

  p->addModel( modelKarplusStrongPoly );
  
  p->addModel( modelALingADing );
  p->addModel( modelBitulator );
#ifdef BUILD_PHASER
  p->addModel( modelPhaser );
#endif

}
