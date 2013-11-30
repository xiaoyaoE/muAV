#ifndef _atanLUT_H
#define _atanLUT_H

#include <avr/pgmspace.h>
// atan LUT defined from 0 to 1.0 for angles (0 to 1/4*pi)

#define LUTSIZE 512

#define GETINDEX(Y,X) (((Y * 511) / X))

const uint16_t atanLUT[LUTSIZE] PROGMEM = {

	0, 41, 82, 122, 163, 204, 245, 286, 327, 367,
	408, 449, 490, 531, 571, 612, 653, 694, 735, 775,
	816, 857, 898, 938, 979, 1020, 1060, 1101, 1142, 1183,
	1223, 1264, 1305, 1345, 1386, 1427, 1467, 1508, 1548, 1589,
	1630, 1670, 1711, 1751, 1792, 1832, 1873, 1913, 1954, 1994,
	2035, 2075, 2116, 2156, 2196, 2237, 2277, 2317, 2358, 2398,
	2438, 2478, 2519, 2559, 2599, 2639, 2680, 2720, 2760, 2800,
	2840, 2880, 2920, 2960, 3000, 3040, 3080, 3120, 3160, 3200,
	3240, 3279, 3319, 3359, 3399, 3439, 3478, 3518, 3558, 3597,
	3637, 3676, 3716, 3755, 3795, 3834, 3874, 3913, 3953, 3992,
	4031, 4071, 4110, 4149, 4188, 4228, 4267, 4306, 4345, 4384,
	4423, 4462, 4501, 4540, 4579, 4618, 4657, 4695, 4734, 4773,
	4812, 4850, 4889, 4928, 4966, 5005, 5043, 5082, 5120, 5158,
	5197, 5235, 5273, 5312, 5350, 5388, 5426, 5464, 5502, 5540,
	5578, 5616, 5654, 5692, 5730, 5768, 5806, 5843, 5881, 5919,
	5956, 5994, 6031, 6069, 6106, 6144, 6181, 6218, 6256, 6293,
	6330, 6367, 6404, 6441, 6478, 6515, 6552, 6589, 6626, 6663,
	6700, 6736, 6773, 6810, 6846, 6883, 6919, 6956, 6992, 7029,
	7065, 7101, 7138, 7174, 7210, 7246, 7282, 7318, 7354, 7390,
	7426, 7462, 7498, 7533, 7569, 7605, 7640, 7676, 7711, 7747,
	7782, 7818, 7853, 7888, 7924, 7959, 7994, 8029, 8064, 8099,
	8134, 8169, 8204, 8239, 8273, 8308, 8343, 8377, 8412, 8446,
	8481, 8515, 8550, 8584, 8618, 8652, 8687, 8721, 8755, 8789,
	8823, 8857, 8891, 8924, 8958, 8992, 9026, 9059, 9093, 9126,
	9160, 9193, 9227, 9260, 9293, 9326, 9359, 9393, 9426, 9459,
	9492, 9525, 9557, 9590, 9623, 9656, 9688, 9721, 9754, 9786,
	9818, 9851, 9883, 9916, 9948, 9980, 10012, 10044, 10076, 10108,
	10140, 10172, 10204, 10236, 10267, 10299, 10331, 10362, 10394, 10425,
	10457, 10488, 10519, 10551, 10582, 10613, 10644, 10675, 10706, 10737,
	10768, 10799, 10830, 10861, 10891, 10922, 10952, 10983, 11013, 11044,
	11074, 11105, 11135, 11165, 11195, 11225, 11256, 11286, 11316, 11345,
	11375, 11405, 11435, 11465, 11494, 11524, 11553, 11583, 11612, 11642,
	11671, 11700, 11730, 11759, 11788, 11817, 11846, 11875, 11904, 11933,
	11962, 11991, 12019, 12048, 12077, 12105, 12134, 12162, 12191, 12219,
	12247, 12276, 12304, 12332, 12360, 12388, 12416, 12444, 12472, 12500,
	12528, 12556, 12583, 12611, 12638, 12666, 12694, 12721, 12748, 12776,
	12803, 12830, 12858, 12885, 12912, 12939, 12966, 12993, 13020, 13047,
	13073, 13100, 13127, 13154, 13180, 13207, 13233, 13260, 13286, 13312,
	13339, 13365, 13391, 13417, 13444, 13470, 13496, 13522, 13547, 13573,
	13599, 13625, 13651, 13676, 13702, 13728, 13753, 13779, 13804, 13829,
	13855, 13880, 13905, 13930, 13956, 13981, 14006, 14031, 14056, 14081,
	14105, 14130, 14155, 14180, 14204, 14229, 14254, 14278, 14303, 14327,
	14351, 14376, 14400, 14424, 14449, 14473, 14497, 14521, 14545, 14569,
	14593, 14617, 14640, 14664, 14688, 14712, 14735, 14759, 14782, 14806,
	14829, 14853, 14876, 14900, 14923, 14946, 14969, 14992, 15016, 15039,
	15062, 15085, 15108, 15130, 15153, 15176, 15199, 15221, 15244, 15267,
	15289, 15312, 15334, 15357, 15379, 15402, 15424, 15446, 15468, 15491,
	15513, 15535, 15557, 15579, 15601, 15623, 15645, 15666, 15688, 15710,
	15732, 15753, 15775, 15797, 15818, 15840, 15861, 15882, 15904, 15925,
	15946, 15968, 15989, 16010, 16031, 16052, 16073, 16094, 16115, 16136,
	16157, 16178, 16199, 16219, 16240, 16261, 16281, 16302, 16323, 16343,
16364, 16384 };



#endif