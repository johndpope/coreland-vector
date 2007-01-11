struct div_test {
  float va[4];
  float vb[4];
  float vr[4];
  unsigned int sz;
  char x[vec_align(sizeof(float) * 12 + sizeof(unsigned int))];
};

struct div_test tests[] = {
  /* GENERATION/div_gen.c */
  {
    {1.000000, 1.000000, 1.000000, 1.000000},
    {1.000000, 1.000000, 1.000000, 1.000000},
    {1.000000, 1.000000, 1.000000, 1.000000},
    4,
    {0},
  },
  {
    {31.207546, -5.672000, 1.000000, 1.000000},
    {4.920319, -3.328557, 1.000000, 1.000000},
    {6.342586, 1.704042, 1.000000, 1.000000},
    2,
    {0},
  },
  {
    {-2.180897, -1.689204, 1.000000, 1.000000},
    {-5.106648, 5.140118, 1.000000, 1.000000},
    {0.427070, -0.328631, 1.000000, 1.000000},
    2,
    {0},
  },
  {
    {2.039474, -13.680366, 1.000000, 1.000000},
    {-10.212435, -4.425076, 1.000000, 1.000000},
    {-0.199705, 3.091555, 1.000000, 1.000000},
    2,
    {0},
  },
  {
    {-6.028986, 4.434610, 1.000000, 1.000000},
    {66.250000, 5.171779, 1.000000, 1.000000},
    {-0.091004, 0.857463, 1.000000, 1.000000},
    2,
    {0},
  },
  {
    {-269.529419, -4.868421, 1.000000, 1.000000},
    {-6.124444, 3.324638, 1.000000, 1.000000},
    {44.008795, -1.464346, 1.000000, 1.000000},
    2,
    {0},
  },
  {
    {14.897436, 7.418919, 1.000000, 1.000000},
    {0.233702, -5.222222, 1.000000, 1.000000},
    {63.745347, -1.420644, 1.000000, 1.000000},
    2,
    {0},
  },
  {
    {5.328671, -7.739583, 1.000000, 1.000000},
    {-0.643018, 4.493458, 1.000000, 1.000000},
    {-8.286971, -1.722412, 1.000000, 1.000000},
    2,
    {0},
  },
  {
    {1.036585, -3.492236, 1.000000, 1.000000},
    {-5.330128, -21.969164, 1.000000, 1.000000},
    {-0.194477, 0.158961, 1.000000, 1.000000},
    2,
    {0},
  },
  {
    {-23.358824, -2.962917, 1.000000, 1.000000},
    {19.294573, -10.310272, 1.000000, 1.000000},
    {-1.210642, 0.287375, 1.000000, 1.000000},
    2,
    {0},
  },
  {
    {1.925373, 22.578947, -2.979131, 1.000000},
    {-1.301282, -85.297874, 9.883333, 1.000000},
    {-1.479597, -0.264707, -0.301430, 1.000000},
    3,
    {0},
  },
  {
    {18.276243, -0.641975, 4.246835, 1.000000},
    {-1.723568, -8.411633, -6.047431, 1.000000},
    {-10.603724, 0.076320, -0.702254, 1.000000},
    3,
    {0},
  },
  {
    {-27.072727, -5.843348, -0.654930, 1.000000},
    {-10.676339, -6.930876, -44.793102, 1.000000},
    {2.535769, 0.843089, 0.014621, 1.000000},
    3,
    {0},
  },
  {
    {2.263074, -3.048883, 28.944000, 1.000000},
    {-106.511108, 1.759155, -4.786861, 1.000000},
    {-0.021247, -1.733152, -6.046551, 1.000000},
    3,
    {0},
  },
  {
    {-2.292025, -8.694118, -3.755814, 1.000000},
    {-3.952077, 6.094017, 31.701492, 1.000000},
    {0.579954, -1.426664, -0.118474, 1.000000},
    3,
    {0},
  },
  {
    {-4.854985, -5.527415, -17.108248, 1.000000},
    {-1.044776, 1.397887, -2.877483, 1.000000},
    {4.646914, -3.954121, 5.945559, 1.000000},
    3,
    {0},
  },
  {
    {-7.399599, 14.726315, 6.405286, 1.000000},
    {-5.906250, 22.448980, 10.190698, 1.000000},
    {1.252842, 0.655990, 0.628542, 1.000000},
    3,
    {0},
  },
  {
    {4.114286, 4.176909, -7.748032, 1.000000},
    {15.833333, -3.595412, 4.024297, 1.000000},
    {0.259850, -1.161733, -1.925313, 1.000000},
    3,
    {0},
  },
  {
    {1.742015, 5.060606, 24.613094, 1.000000},
    {2.500000, 6.340289, 16.017986, 1.000000},
    {0.696806, 0.798166, 1.536591, 1.000000},
    3,
    {0},
  },
  {
    {3.402047, -12.853659, -3.731629, 1.000000},
    {-1.804636, 7.771583, 3.945312, 1.000000},
    {-1.885171, -1.653931, -0.945839, 1.000000},
    3,
    {0},
  },
  {
    {-1.177606, -1.547779, 1.670968, -3.496063},
    {44.656715, 6.539568, -14.602230, -179.227280},
    {-0.026370, -0.236679, -0.114432, 0.019506},
    4,
    {0},
  },
  {
    {-3.556728, 3.848825, -4.484848, -2923.000000},
    {-3.407192, -10.813084, -6.897547, 3.553741},
    {1.043888, -0.355942, 0.650209, -822.513409},
    4,
    {0},
  },
  {
    {-0.255181, 619.200012, 6.293388, 14.037931},
    {8.044628, -4.349227, 68.836731, -1.700767},
    {-0.031721, -142.370131, 0.091425, -8.253881},
    4,
    {0},
  },
  {
    {-31.400000, 3.286274, 1.731765, -7.892532},
    {-6.747612, 5.537559, -6.557858, -4.075980},
    {4.653498, 0.593452, -0.264075, 1.936352},
    4,
    {0},
  },
  {
    {-5.142336, 2.667434, -1.600559, 17.552347},
    {3.377079, 5.415423, 38.050632, 4.960059},
    {-1.522717, 0.492562, -0.042064, 3.538737},
    4,
    {0},
  },
  {
    {-2.441815, -5.512739, 291.500000, -8.243986},
    {2.139657, -1.189024, -61.441177, -4.905016},
    {-1.141218, 4.636354, -4.744375, 1.680726},
    4,
    {0},
  },
  {
    {-7.709480, 22.738255, 1.653199, -1.303318},
    {2.051458, 3.176275, 3.296211, -0.515625},
    {-3.758050, 7.158780, 0.501545, 2.527646},
    4,
    {0},
  },
  {
    {-93.714287, 0.538062, -7.885463, 2.769418},
    {-10.269114, 1.140777, 3.714454, 3.694346},
    {9.125840, 0.471663, -2.122913, 0.749637},
    4,
    {0},
  },
  {
    {-2.933128, -3.889764, 4.887404, 7.885033},
    {-13.468750, 1.428994, 6.676096, -4.094193},
    {0.217773, -2.722029, 0.732075, -1.925906},
    4,
    {0},
  },
  {
    {10.696594, -28.423729, 0.052570, 7.661290},
    {-1.338611, -1.967895, -0.441211, 1.626405},
    {-7.990813, 14.443719, -0.119150, 4.710569},
    4,
    {0},
  },
};
