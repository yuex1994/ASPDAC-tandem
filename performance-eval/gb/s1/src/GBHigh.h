#include <boost/multiprecision/cpp_int.hpp>
// #define TANDEM_VERIFICATION
#ifdef TANDEM_VERIFICATION
class GBHighException : public std::exception
{
  std::string _msg;
public:
  GBHighException(const std::string& msg) : _msg(msg){}
  virtual const char* what() const noexcept override
  {
    return _msg.c_str();
  }
};
#define Write 0
#define Read 1
#endif
using namespace boost::multiprecision;
typedef number<cpp_int_backend<1, 1, unsigned_magnitude, unchecked, void> > uint1_t;
typedef number<cpp_int_backend<3, 3, unsigned_magnitude, unchecked, void> > uint3_t;
typedef number<cpp_int_backend<4, 4, unsigned_magnitude, unchecked, void> > uint4_t;
typedef number<cpp_int_backend<9, 9, unsigned_magnitude, unchecked, void> > uint9_t;
typedef number<cpp_int_backend<10, 10, unsigned_magnitude, unchecked, void> > uint10_t;
typedef number<cpp_int_backend<24, 24, unsigned_magnitude, unchecked, void> > uint24_t;
typedef number<cpp_int_backend<40, 40, unsigned_magnitude, unchecked, void> > uint40_t;
typedef number<cpp_int_backend<48, 48, unsigned_magnitude, unchecked, void> > uint48_t;
typedef number<cpp_int_backend<56, 56, unsigned_magnitude, unchecked, void> > uint56_t;
typedef number<cpp_int_backend<72, 72, unsigned_magnitude, unchecked, void> > uint72_t;
typedef number<cpp_int_backend<144, 144, unsigned_magnitude, unchecked, void> > uint144_t;
typedef number<cpp_int_backend<216, 216, unsigned_magnitude, unchecked, void> > uint216_t;
typedef number<cpp_int_backend<288, 288, unsigned_magnitude, unchecked, void> > uint288_t;
typedef number<cpp_int_backend<360, 360, unsigned_magnitude, unchecked, void> > uint360_t;
typedef number<cpp_int_backend<432, 432, unsigned_magnitude, unchecked, void> > uint432_t;
typedef number<cpp_int_backend<504, 504, unsigned_magnitude, unchecked, void> > uint504_t;
typedef number<cpp_int_backend<576, 576, unsigned_magnitude, unchecked, void> > uint576_t;
typedef number<cpp_int_backend<648, 648, unsigned_magnitude, unchecked, void> > uint648_t;
#include <map>
class GBHigh {
public:
  uint1_t GBHigh_arg_0_TREADY;
  uint1_t GBHigh_arg_1_TVALID;
  uint8_t GBHigh_arg_1_TDATA;
  uint1_t GBHigh_arg_1_TREADY = 1;
  uint1_t GBHigh_arg_1_TREADY_next;
  uint1_t GBHigh_arg_0_TVALID;
  uint1_t GBHigh_arg_0_TVALID_next;
  uint8_t GBHigh_arg_0_TDATA;
  uint8_t GBHigh_arg_0_TDATA_next;
  uint1_t GBHigh_st_ready = 1;
  uint1_t GBHigh_st_ready_next;
  uint8_t GBHigh_cur_pic;
  uint8_t GBHigh_cur_pic_next;
  uint9_t GBHigh_ram_x;
  uint9_t GBHigh_ram_x_next;
  uint10_t GBHigh_ram_y;
  uint10_t GBHigh_ram_y_next;
  uint3_t GBHigh_ram_w;
  uint3_t GBHigh_ram_w_next;
  uint4_t GBHigh_gbit;
  uint4_t GBHigh_gbit_next;
  uint72_t GBHigh_stencil0;
  uint72_t GBHigh_stencil0_next;
  uint72_t GBHigh_stencil1;
  uint72_t GBHigh_stencil1_next;
  uint72_t GBHigh_stencil2;
  uint72_t GBHigh_stencil2_next;
  uint72_t GBHigh_stencil3;
  uint72_t GBHigh_stencil3_next;
  uint72_t GBHigh_stencil4;
  uint72_t GBHigh_stencil4_next;
  uint72_t GBHigh_stencil5;
  uint72_t GBHigh_stencil5_next;
  uint72_t GBHigh_stencil6;
  uint72_t GBHigh_stencil6_next;
  uint72_t GBHigh_stencil7;
  uint72_t GBHigh_stencil7_next;
  uint72_t GBHigh_stencil8;
  uint72_t GBHigh_stencil8_next;
  uint8_t GBHigh_ram0[512];
  typedef struct {
    std::map<uint9_t, uint8_t> update_map;
    uint8_t* original_map;
  } GBHigh_ram0_type;
  GBHigh_ram0_type GBHigh_ram0_next;
  uint8_t GBHigh_ram1[512];
  typedef struct {
    std::map<uint9_t, uint8_t> update_map;
    uint8_t* original_map;
  } GBHigh_ram1_type;
  GBHigh_ram1_type GBHigh_ram1_next;
  uint8_t GBHigh_ram2[512];
  typedef struct {
    std::map<uint9_t, uint8_t> update_map;
    uint8_t* original_map;
  } GBHigh_ram2_type;
  GBHigh_ram2_type GBHigh_ram2_next;
  uint8_t GBHigh_ram3[512];
  typedef struct {
    std::map<uint9_t, uint8_t> update_map;
    uint8_t* original_map;
  } GBHigh_ram3_type;
  GBHigh_ram3_type GBHigh_ram3_next;
  uint8_t GBHigh_ram4[512];
  typedef struct {
    std::map<uint9_t, uint8_t> update_map;
    uint8_t* original_map;
  } GBHigh_ram4_type;
  GBHigh_ram4_type GBHigh_ram4_next;
  uint8_t GBHigh_ram5[512];
  typedef struct {
    std::map<uint9_t, uint8_t> update_map;
    uint8_t* original_map;
  } GBHigh_ram5_type;
  GBHigh_ram5_type GBHigh_ram5_next;
  uint8_t GBHigh_ram6[512];
  typedef struct {
    std::map<uint9_t, uint8_t> update_map;
    uint8_t* original_map;
  } GBHigh_ram6_type;
  GBHigh_ram6_type GBHigh_ram6_next;
  uint8_t GBHigh_ram7[512];
  typedef struct {
    std::map<uint9_t, uint8_t> update_map;
    uint8_t* original_map;
  } GBHigh_ram7_type;
  GBHigh_ram7_type GBHigh_ram7_next;
  uint8_t Propagate_pre_pix;
  uint8_t Propagate_pre_pix_next;
  uint648_t Propagate_proc_in;
  uint648_t Propagate_proc_in_next;
  void init_Propagate();
  bool c_154;
  bool c_152;
  bool c_156;
  bool decode_GBHigh_Write();
  bool c_103;
  bool c_101;
  bool c_105;
  bool c_98;
  bool c_96;
  bool c_100;
  bool c_106;
  bool c_114;
  bool c_112;
  bool c_116;
  bool c_110;
  bool c_117;
  bool c_108;
  bool c_118;
  bool decode_GBHigh_Read();
  bool c_124;
  bool c_122;
  bool c_126;
  bool c_120;
  bool c_127;
  bool decode_Propagate_prop0();
  bool c_166;
  bool c_164;
  bool c_168;
  bool c_162;
  bool c_169;
  bool decode_Propagate_prop1();
  bool c_951;
  bool c_949;
  bool c_953;
  bool c_947;
  bool c_954;
  #ifdef TANDEM_VERIFICATION
  int tandem_f_ptr;
  GBHigh();
  void check_arg_1_TREADY(RTLVerilated* v);
  void check_arg_0_TVALID(RTLVerilated* v);
  void check_arg_0_TDATA(RTLVerilated* v);
  void check_st_ready(RTLVerilated* v);
  void check_cur_pic(RTLVerilated* v);
  void check_ram_x(RTLVerilated* v);
  void check_ram_y(RTLVerilated* v);
  void check_ram_w(RTLVerilated* v);
  void check_gbit(RTLVerilated* v);
  void check_stencil0(RTLVerilated* v);
  void check_stencil1(RTLVerilated* v);
  void check_stencil2(RTLVerilated* v);
  void check_stencil3(RTLVerilated* v);
  void check_stencil4(RTLVerilated* v);
  void check_stencil5(RTLVerilated* v);
  void check_stencil6(RTLVerilated* v);
  void check_stencil7(RTLVerilated* v);
  void check_stencil8(RTLVerilated* v);
  void tandem_instr_Write(RTLVerilated* v);
  void tandem_instr_Read(RTLVerilated* v);
  typedef void (GBHigh::*tandem_f_type)(RTLVerilated*);
  tandem_f_type tandem_f[3];
  #endif
  void decode_GBHigh_Write_update();
  void decode_GBHigh_Read_update();
  bool c_134;
  bool c_130;
  bool c_136;
  bool c_137;
  bool c_143;
  bool c_141;
  bool c_145;
  uint4_t c_140;
  uint4_t c_146;
  void decode_Propagate_prop0_update();
  bool c_176;
  bool c_172;
  bool c_178;
  uint1_t c_185;
  bool c_181;
  uint1_t c_183;
  uint1_t c_184;
  bool c_217;
  uint9_t c_213;
  bool c_227;
  uint9_t c_223;
  bool c_237;
  uint9_t c_233;
  bool c_247;
  uint9_t c_243;
  bool c_257;
  uint9_t c_253;
  bool c_267;
  uint9_t c_263;
  bool c_277;
  uint9_t c_273;
  bool c_287;
  uint9_t c_283;
  bool c_208;
  bool c_205;
  uint3_t c_204;
  uint3_t c_207;
  uint3_t c_210;
  bool c_189;
  uint9_t c_188;
  uint9_t c_191;
  uint9_t c_192;
  bool c_199;
  bool c_196;
  uint10_t c_195;
  uint10_t c_198;
  uint10_t c_201;
  uint1_t c_944;
  uint1_t c_945;
  bool c_941;
  bool c_888;
  uint9_t c_883;
  uint8_t c_884;
  bool c_878;
  uint9_t c_873;
  uint8_t c_874;
  bool c_868;
  uint9_t c_863;
  uint8_t c_864;
  bool c_858;
  uint9_t c_853;
  uint8_t c_854;
  bool c_848;
  uint9_t c_843;
  uint8_t c_844;
  bool c_838;
  uint9_t c_833;
  uint8_t c_834;
  bool c_828;
  uint9_t c_823;
  uint8_t c_824;
  uint9_t c_818;
  uint8_t c_819;
  uint8_t c_830;
  uint8_t c_840;
  uint8_t c_850;
  uint8_t c_860;
  uint8_t c_870;
  uint8_t c_880;
  uint8_t c_890;
  bool c_813;
  uint9_t c_808;
  uint8_t c_809;
  bool c_803;
  uint9_t c_798;
  uint8_t c_799;
  bool c_793;
  uint9_t c_788;
  uint8_t c_789;
  bool c_783;
  uint9_t c_778;
  uint8_t c_779;
  bool c_773;
  uint9_t c_768;
  uint8_t c_769;
  bool c_763;
  uint9_t c_758;
  uint8_t c_759;
  bool c_753;
  uint9_t c_748;
  uint8_t c_749;
  uint9_t c_743;
  uint8_t c_744;
  uint8_t c_755;
  uint8_t c_765;
  uint8_t c_775;
  uint8_t c_785;
  uint8_t c_795;
  uint8_t c_805;
  uint8_t c_815;
  bool c_738;
  uint9_t c_733;
  uint8_t c_734;
  bool c_728;
  uint9_t c_723;
  uint8_t c_724;
  bool c_718;
  uint9_t c_713;
  uint8_t c_714;
  bool c_708;
  uint9_t c_703;
  uint8_t c_704;
  bool c_698;
  uint9_t c_693;
  uint8_t c_694;
  bool c_688;
  uint9_t c_683;
  uint8_t c_684;
  bool c_678;
  uint9_t c_673;
  uint8_t c_674;
  uint9_t c_668;
  uint8_t c_669;
  uint8_t c_680;
  uint8_t c_690;
  uint8_t c_700;
  uint8_t c_710;
  uint8_t c_720;
  uint8_t c_730;
  uint8_t c_740;
  bool c_663;
  uint9_t c_658;
  uint8_t c_659;
  bool c_653;
  uint9_t c_648;
  uint8_t c_649;
  bool c_643;
  uint9_t c_638;
  uint8_t c_639;
  bool c_633;
  uint9_t c_628;
  uint8_t c_629;
  bool c_623;
  uint9_t c_618;
  uint8_t c_619;
  bool c_613;
  uint9_t c_608;
  uint8_t c_609;
  bool c_603;
  uint9_t c_598;
  uint8_t c_599;
  uint9_t c_593;
  uint8_t c_594;
  uint8_t c_605;
  uint8_t c_615;
  uint8_t c_625;
  uint8_t c_635;
  uint8_t c_645;
  uint8_t c_655;
  uint8_t c_665;
  bool c_588;
  uint9_t c_583;
  uint8_t c_584;
  bool c_578;
  uint9_t c_573;
  uint8_t c_574;
  bool c_568;
  uint9_t c_563;
  uint8_t c_564;
  bool c_558;
  uint9_t c_553;
  uint8_t c_554;
  bool c_548;
  uint9_t c_543;
  uint8_t c_544;
  bool c_538;
  uint9_t c_533;
  uint8_t c_534;
  bool c_528;
  uint9_t c_523;
  uint8_t c_524;
  uint9_t c_518;
  uint8_t c_519;
  uint8_t c_530;
  uint8_t c_540;
  uint8_t c_550;
  uint8_t c_560;
  uint8_t c_570;
  uint8_t c_580;
  uint8_t c_590;
  bool c_513;
  uint9_t c_508;
  uint8_t c_509;
  bool c_503;
  uint9_t c_498;
  uint8_t c_499;
  bool c_493;
  uint9_t c_488;
  uint8_t c_489;
  bool c_483;
  uint9_t c_478;
  uint8_t c_479;
  bool c_473;
  uint9_t c_468;
  uint8_t c_469;
  bool c_463;
  uint9_t c_458;
  uint8_t c_459;
  bool c_453;
  uint9_t c_448;
  uint8_t c_449;
  uint9_t c_443;
  uint8_t c_444;
  uint8_t c_455;
  uint8_t c_465;
  uint8_t c_475;
  uint8_t c_485;
  uint8_t c_495;
  uint8_t c_505;
  uint8_t c_515;
  bool c_438;
  uint9_t c_433;
  uint8_t c_434;
  bool c_428;
  uint9_t c_423;
  uint8_t c_424;
  bool c_418;
  uint9_t c_413;
  uint8_t c_414;
  bool c_408;
  uint9_t c_403;
  uint8_t c_404;
  bool c_398;
  uint9_t c_393;
  uint8_t c_394;
  bool c_388;
  uint9_t c_383;
  uint8_t c_384;
  bool c_378;
  uint9_t c_373;
  uint8_t c_374;
  uint9_t c_368;
  uint8_t c_369;
  uint8_t c_380;
  uint8_t c_390;
  uint8_t c_400;
  uint8_t c_410;
  uint8_t c_420;
  uint8_t c_430;
  uint8_t c_440;
  bool c_363;
  uint9_t c_358;
  uint8_t c_359;
  bool c_353;
  uint9_t c_348;
  uint8_t c_349;
  bool c_343;
  uint9_t c_338;
  uint8_t c_339;
  bool c_333;
  uint9_t c_328;
  uint8_t c_329;
  bool c_323;
  uint9_t c_318;
  uint8_t c_319;
  bool c_313;
  uint9_t c_308;
  uint8_t c_309;
  bool c_303;
  uint9_t c_298;
  uint8_t c_299;
  uint9_t c_293;
  uint8_t c_294;
  uint8_t c_305;
  uint8_t c_315;
  uint8_t c_325;
  uint8_t c_335;
  uint8_t c_345;
  uint8_t c_355;
  uint8_t c_365;
  uint16_t c_895;
  uint24_t c_901;
  uint32_t c_907;
  uint40_t c_913;
  uint48_t c_919;
  uint56_t c_925;
  uint64_t c_931;
  uint72_t c_937;
  uint72_t c_943;
  void decode_Propagate_prop1_update();
  bool c_970;
  bool c_966;
  bool c_972;
  bool c_1673;
  bool c_1666;
  bool c_1668;
  bool c_1670;
  bool c_1675;
  bool c_1661;
  bool c_1657;
  bool c_1663;
  bool c_1676;
  uint8_t c_1599;
  bool c_1010;
  uint72_t c_1012;
  uint8_t c_1591;
  bool c_1005;
  uint72_t c_1007;
  uint8_t c_1583;
  bool c_1000;
  uint72_t c_1002;
  uint8_t c_1575;
  bool c_995;
  uint72_t c_997;
  uint8_t c_1567;
  bool c_990;
  uint72_t c_992;
  uint8_t c_1559;
  bool c_985;
  uint72_t c_987;
  uint8_t c_1551;
  bool c_980;
  uint72_t c_982;
  uint8_t c_1543;
  bool c_975;
  uint72_t c_977;
  uint8_t c_1541;
  uint16_t c_1549;
  uint24_t c_1557;
  uint32_t c_1565;
  uint40_t c_1573;
  uint48_t c_1581;
  uint56_t c_1589;
  uint64_t c_1597;
  uint72_t c_1605;
  uint8_t c_1533;
  uint8_t c_1525;
  uint8_t c_1517;
  uint8_t c_1509;
  uint8_t c_1501;
  uint8_t c_1493;
  uint8_t c_1485;
  uint8_t c_1477;
  uint8_t c_1475;
  uint16_t c_1483;
  uint24_t c_1491;
  uint32_t c_1499;
  uint40_t c_1507;
  uint48_t c_1515;
  uint56_t c_1523;
  uint64_t c_1531;
  uint72_t c_1539;
  uint8_t c_1467;
  uint8_t c_1459;
  uint8_t c_1451;
  uint8_t c_1443;
  uint8_t c_1435;
  uint8_t c_1427;
  uint8_t c_1419;
  uint8_t c_1411;
  uint8_t c_1409;
  uint16_t c_1417;
  uint24_t c_1425;
  uint32_t c_1433;
  uint40_t c_1441;
  uint48_t c_1449;
  uint56_t c_1457;
  uint64_t c_1465;
  uint72_t c_1473;
  uint8_t c_1401;
  uint8_t c_1393;
  uint8_t c_1385;
  uint8_t c_1377;
  uint8_t c_1369;
  uint8_t c_1361;
  uint8_t c_1353;
  uint8_t c_1345;
  uint8_t c_1343;
  uint16_t c_1351;
  uint24_t c_1359;
  uint32_t c_1367;
  uint40_t c_1375;
  uint48_t c_1383;
  uint56_t c_1391;
  uint64_t c_1399;
  uint72_t c_1407;
  uint8_t c_1335;
  uint8_t c_1327;
  uint8_t c_1319;
  uint8_t c_1311;
  uint8_t c_1303;
  uint8_t c_1295;
  uint8_t c_1287;
  uint8_t c_1279;
  uint8_t c_1277;
  uint16_t c_1285;
  uint24_t c_1293;
  uint32_t c_1301;
  uint40_t c_1309;
  uint48_t c_1317;
  uint56_t c_1325;
  uint64_t c_1333;
  uint72_t c_1341;
  uint8_t c_1269;
  uint8_t c_1261;
  uint8_t c_1253;
  uint8_t c_1245;
  uint8_t c_1237;
  uint8_t c_1229;
  uint8_t c_1221;
  uint8_t c_1213;
  uint8_t c_1211;
  uint16_t c_1219;
  uint24_t c_1227;
  uint32_t c_1235;
  uint40_t c_1243;
  uint48_t c_1251;
  uint56_t c_1259;
  uint64_t c_1267;
  uint72_t c_1275;
  uint8_t c_1203;
  uint8_t c_1195;
  uint8_t c_1187;
  uint8_t c_1179;
  uint8_t c_1171;
  uint8_t c_1163;
  uint8_t c_1155;
  uint8_t c_1147;
  uint8_t c_1145;
  uint16_t c_1153;
  uint24_t c_1161;
  uint32_t c_1169;
  uint40_t c_1177;
  uint48_t c_1185;
  uint56_t c_1193;
  uint64_t c_1201;
  uint72_t c_1209;
  uint8_t c_1137;
  uint8_t c_1129;
  uint8_t c_1121;
  uint8_t c_1113;
  uint8_t c_1105;
  uint8_t c_1097;
  uint8_t c_1089;
  uint8_t c_1081;
  uint8_t c_1079;
  uint16_t c_1087;
  uint24_t c_1095;
  uint32_t c_1103;
  uint40_t c_1111;
  uint48_t c_1119;
  uint56_t c_1127;
  uint64_t c_1135;
  uint72_t c_1143;
  uint8_t c_1071;
  uint8_t c_1063;
  uint8_t c_1055;
  uint8_t c_1047;
  uint8_t c_1039;
  uint8_t c_1031;
  uint8_t c_1023;
  uint8_t c_1015;
  uint8_t c_1013;
  uint16_t c_1021;
  uint24_t c_1029;
  uint32_t c_1037;
  uint40_t c_1045;
  uint48_t c_1053;
  uint56_t c_1061;
  uint64_t c_1069;
  uint72_t c_1077;
  uint144_t c_1611;
  uint216_t c_1617;
  uint288_t c_1623;
  uint360_t c_1629;
  uint432_t c_1635;
  uint504_t c_1641;
  uint576_t c_1647;
  uint648_t c_1653;
  uint648_t c_1677;
  uint648_t c_1678;
  uint8_t kernel(uint648_t arg_0);
  uint8_t c_1704;
  uint8_t c_1705;
  bool c_1698;
  bool c_1691;
  bool c_1693;
  bool c_1695;
  bool c_1700;
  bool c_1686;
  bool c_1682;
  bool c_1688;
  bool c_1701;
  uint1_t c_1702;
  uint1_t c_1703;
  uint9_t c_962;
  bool c_963;
  uint10_t c_957;
  bool c_958;
  bool c_965;
  uint1_t c_1679;
  #ifdef TANDEM_VERIFICATION
  void compute(RTLVerilated* v);
  #else
  void compute();
  #endif
};
