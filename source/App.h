/** \file App.h */
#ifndef App_h
#define App_h

#include <G3D/G3DAll.h>
#include "RayTracer.h"

/** Application framework. */
class App : public GApp {
protected:
  shared_ptr<RayTracer>  m_rayTracer;
  RayTracer::Settings    m_rayTracerSettings;
  RayTracer::Stats       m_rayTracerStats;
  GuiDropDownList*       m_resolutionList = nullptr;

  bool                   m_showWireframe = false;
  bool                   m_showPhotons = false;
  bool                   m_showPhotonMap = false;

  /** Tracks the last time that the scene was updated in the ray tracer. */
  RealTime               m_lastSceneUpdateTime = 0;
  RealTime               m_lastPhotonUpdateTime = 0;

  /** Called from onInit */
  void makeGUI();

public:

  App(const GApp::Settings& settings = GApp::Settings());

  virtual void onInit() override;

  virtual void onGraphics3D(RenderDevice* rd, Array<shared_ptr<Surface> >& posed3D) override;

  void onRenderButton();
  void onResolutionChange();
};

/** Global pointer back to the app for showMessage calls */
extern App* app;

#endif
