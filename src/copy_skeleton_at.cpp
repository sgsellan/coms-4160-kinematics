#include "copy_skeleton_at.h"
Skeleton copy_skeleton_at(
  const Skeleton & skeleton, 
  const Eigen::VectorXd & A)
{
  Skeleton copy = skeleton;
  for(int si = 0;si<skeleton.size();si++)
  {
    copy[si].xzx = A.block(si*3,0,3,1);
  }
  return copy;
}
