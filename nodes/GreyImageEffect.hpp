#ifndef __NODES_GREY_IMAGE_EFFECT__
#define __NODES_GREY_IMAGE_EFFECT__

#include "ImageEffect.hpp"

namespace nodes
{
  class Camera;

  class GreyToneEffect :
    public ImageEffect
  {
  public:
    NODES_API
    virtual void compute( Renderer*, Camera* camera ) override;
    NODES_API
    virtual void apply( Renderer*, Camera* camera ) override;
  protected:
    int shader;
  };
}

#endif /* __NODES_GREY_IMAGE_EFFECT__ */
