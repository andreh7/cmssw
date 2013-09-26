#ifndef RecoLocalCalo_EcalRecProducers_EcalRecHitWorkerFactoryOld_hh
#define RecoLocalCalo_EcalRecProducers_EcalRecHitWorkerFactoryOld_hh

#include "FWCore/PluginManager/interface/PluginFactory.h"
#include "RecoLocalCalo/EcalRecProducers/interface/EcalRecHitWorkerBaseClass.h"
typedef edmplugin::PluginFactory< EcalRecHitWorkerBaseClass*(const edm::ParameterSet&) > EcalRecHitWorkerFactoryOld;

#endif

