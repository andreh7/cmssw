#ifndef PYTHIAHEPMCFILTERGAMMAGAMMA_h
#define PYTHIAHEPMCFILTERGAMMAGAMMA_h

//
// Package:    GeneratorInterface/GenFilters
// Class:      PythiaHepMCFilterGammaGamma
// 
// Original Author:  Matteo Sani
//
//

#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "GeneratorInterface/Core/interface/BaseHepMCFilter.h"
#include "FWCore/Framework/interface/EDFilter.h"

#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"

#include "SimDataFormats/GeneratorProducts/interface/HepMCProduct.h"

#include "TH1D.h"
#include "TH1I.h"

class PythiaHepMCFilterGammaGamma : public BaseHepMCFilter {
 public:
  explicit PythiaHepMCFilterGammaGamma(const edm::ParameterSet&);
  ~PythiaHepMCFilterGammaGamma();
  
  /** @return true if this GenEvent passes the double EM enrichment
      criterion */
  virtual bool filter(const HepMC::GenEvent* myGenEvent) override;
 private:

  const HepMC::GenEvent *myGenEvent;

  edm::EDGetTokenT<edm::HepMCProduct> token_;
  double minptcut;
  double maxptcut;
  double minetacut;
  double maxetacut;
  int maxEvents;
  int nSelectedEvents, nGeneratedEvents, counterPrompt;

  double ptSeedThr, etaSeedThr, ptGammaThr, etaGammaThr, ptTkThr, etaTkThr;
  double ptElThr, etaElThr, dRTkMax, dRSeedMax, dPhiSeedMax, dEtaSeedMax, dRNarrowCone, pTMinCandidate1, pTMinCandidate2, etaMaxCandidate;
  double invMassMin, invMassMax;
  double energyCut;
  int nTkConeMax, nTkConeSum;
  bool acceptPrompts;
  double promptPtThreshold;

};
#endif
