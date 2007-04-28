struct dotprod_test {
  float va[4];
  float vb[4];
  float res;
  unsigned int sz;
};

struct dotprod_test tests[] = {
  /* GENERATION/dotprod_gen.c */
  {
    {0.000000, 0.000000, 0.000000, 0.000000},
    {0.000000, 0.000000, 0.000000, 0.000000},
    0.000000,
    4,
    
  },
  {
    {-1.960000, 1.166461, 0.000000, 0.000000},
    {1.665899, 2.738510, 0.000000, 0.000000},
    -0.070795,
    2,
    
  },
  {
    {5.708696, -1.050236, 0.000000, 0.000000},
    {-2.345454, 7.622881, 0.000000, 0.000000},
    -21.395307,
    2,
    
  },
  {
    {-1.730000, 3.483436, 0.000000, 0.000000},
    {-4.753275, -6.355092, 0.000000, 0.000000},
    -13.914387,
    2,
    
  },
  {
    {1.125296, -6.857895, 0.000000, 0.000000},
    {-18.199263, -3.593857, 0.000000, 0.000000},
    4.166742,
    2,
    
  },
  {
    {-11.054245, -6.711947, 0.000000, 0.000000},
    {-2.634279, -6.853968, 0.000000, 0.000000},
    75.123445,
    2,
    
  },
  {
    {12.273585, 15.694736, 0.000000, 0.000000},
    {-3.312789, -7.845982, 0.000000, 0.000000},
    -163.800419,
    2,
    
  },
  {
    {9.828125, -4.346667, 0.000000, 0.000000},
    {-4.624811, -4.178782, 0.000000, 0.000000},
    -27.289445,
    2,
    
  },
  {
    {3.185567, 1.412048, 0.000000, 0.000000},
    {2.192348, 0.992188, 0.000000, 0.000000},
    8.384889,
    2,
    
  },
  {
    {0.627240, 11.464622, 0.000000, 0.000000},
    {2.321244, 7.771028, 0.000000, 0.000000},
    90.547880,
    2,
    
  },
  {
    {2.015951, -37.594826, 7.804000, 0.000000},
    {-15.178011, -5.070363, -6.951872, 0.000000},
    105.768865,
    3,
    
  },
  {
    {-1.958835, -15.285714, 12.546154, 0.000000},
    {-4.085405, 0.042254, 4.166398, 0.000000},
    59.629027,
    3,
    
  },
  {
    {5.177033, -39.160000, 3.575301, 0.000000},
    {8.427441, -22.726776, -6.350340, 0.000000},
    910.905312,
    3,
    
  },
  {
    {1.595628, -5.751866, 2.013458, 0.000000},
    {-2.737401, 5.814371, -27.161905, 0.000000},
    -92.500700,
    3,
    
  },
  {
    {-1.588957, -4.938134, 7.483108, 0.000000},
    {-6.843750, -2.684211, -0.713985, 0.000000},
    18.786587,
    3,
    
  },
  {
    {0.825127, 10.140845, -40.041237, 0.000000},
    {-0.768483, -1.925474, 3.320356, 0.000000},
    -153.111190,
    3,
    
  },
  {
    {-8.916883, -1.937500, -11.906921, 0.000000},
    {-2.936651, -9.260521, -5.097484, 0.000000},
    104.823381,
    3,
    
  },
  {
    {7.014142, -4.633188, -8.779605, 0.000000},
    {-2.352140, 9.974138, 6.482906, 0.000000},
    -119.627652,
    3,
    
  },
  {
    {-3.591933, -10.575000, -9.406015, 0.000000},
    {-0.133929, 13.808664, -3.541667, 0.000000},
    -112.232588,
    3,
    
  },
  {
    {-14.892045, -11.516624, 4.355005, 0.000000},
    {1.853659, 0.337110, -137.655167, 0.000000},
    -630.976117,
    3,
    
  },
  {
    {-39.657894, -21.460228, 4.861060, -7.715084},
    {3.379171, 14.312797, 4.154167, -14.400000},
    -309.875824,
    4,
    
  },
  {
    {-14.840909, -41.547947, -8.795259, 3.129496},
    {-16.367924, -0.863850, 51.574074, 17.441380},
    -120.218528,
    4,
    
  },
  {
    {-10.199288, -2.208745, -0.471910, 134.357147},
    {2.820895, 8.924528, -5.355109, -1.245902},
    -213.351783,
    4,
    
  },
  {
    {-2.617574, -1.237089, -2.939884, 17.635246},
    {-5.137790, -3.313433, 0.006211, 5.107224},
    107.596442,
    4,
    
  },
  {
    {-0.553776, -4.669117, -14.588000, -0.914347},
    {2.542218, -3.981482, -5.510719, -34.060608},
    128.715765,
    4,
    
  },
  {
    {9.135371, 2.015267, 20.397261, 4.090909},
    {4.249420, 9.051359, 9.399433, 2.644128},
    259.600512,
    4,
    
  },
  {
    {-0.497143, 4.438185, -4.839187, 0.706806},
    {-59.424999, 9.495763, 15.004464, -4.282103},
    -3.949357,
    4,
    
  },
  {
    {-2.501746, 6.663812, 5.064892, 3.783019},
    {6.985981, -0.315634, -21.834124, 3.427105},
    -117.203152,
    4,
    
  },
  {
    {0.236051, 2.438833, -8.935135, -2.604748},
    {-4.745299, -0.263158, -14.643836, -7.044586},
    147.432092,
    4,
    
  },
  {
    {13.041420, 4.340384, -5.717125, -3.232036},
    {-2.007625, -57.580002, -0.819861, 2.296636},
    -278.837192,
    4,
    
  },
};
