#Custom message for Quadrobot

Header header
float64 width
float64 height
float64 depth
geometry_msgs/Point center      # center point of cuboid
geometry_msgs/Point[4] corners  # 8 points of the cuboid
float64[4] coef                 # Representation of a plane, using the plane equation ax + by + cz + d = 0
                                # float64[0] = a, float64[1] = b, ...