/**
 * Main app entry point of ActionCam
 * @author StarColon Projects
 * @copyRight 2016-now 
 */

#include <functional>
#include "FilterTransformation.h"
#include "Transformations.h"
#include "VideoCamera.h"

using namespace std;

int main(int argc, char** argv)
{
  // Prepare processors
  IdentityTransformation ti;
  FilterTransformation grayscale = FilterTransformation(
    FilterType::Gray,
    160,
    255
  );
  function<void (Mat)> voidFn = [](Mat){};

  VideoCamera cam("cam");
  cam.captureRealtimeWith(grayscale, voidFn);
  return 0;
}