#include <AES.h>
bool AES::decode_AES_BLOCK_LOAD() {
uint2_t local_var_1 = 1;
bool local_var_2 = (AES_aes_status == local_var_1);
auto& univ_var_2 = local_var_2;
return univ_var_2;
}
void AES::update_AES_BLOCK_LOAD() {
uint4_t local_var_1 = 15;
bool local_var_2 = (AES_BLOCK_byte_cnt == local_var_1);
uint2_t local_var_3 = 2;
auto local_var_5 = (local_var_2) ? local_var_3 : AES_aes_status;
auto local_var_5_nxt_holder = local_var_5;
auto AES_BLOCK_blk_cnt_nxt_holder = AES_BLOCK_blk_cnt;
uint4_t local_var_7 = 1;
uint4_t local_var_8 = (AES_BLOCK_byte_cnt + local_var_7);
auto local_var_8_nxt_holder = local_var_8;
uint4_t local_var_9 = 0;
uint4_t local_var_10 = (AES_BLOCK_byte_cnt - local_var_9);
uint4_t local_var_11 = 15;
bool local_var_12 = (local_var_10 == local_var_11);
uint16_t local_var_15 = (AES_aes_address + AES_BLOCK_blk_cnt);
uint16_t local_var_16 = boost::numeric_cast<uint16_t>(((AES_BLOCK_byte_cnt >> 3) == 1) ? (~AES_BLOCK_byte_cnt) : AES_BLOCK_byte_cnt);
local_var_16 = ((AES_BLOCK_byte_cnt >> 3) == 1) ? (~local_var_16) : local_var_16;
uint16_t local_var_17 = (local_var_15 + local_var_16);
auto local_var_18 = AES_XRAM[local_var_17];
auto local_var_20_shifted = AES_BLOCK_rd_data >> 120;
auto local_var_20_mask = AES_BLOCK_rd_data;
local_var_20_mask = (1 << (127 - 120 + 1)) - 1;
local_var_20_mask &= local_var_20_shifted;
uint8_t local_var_20 = boost::numeric_cast<uint8_t>(local_var_20_mask);
auto local_var_21 = (local_var_12) ? local_var_18 : local_var_20;
uint4_t local_var_22 = 0;
uint4_t local_var_23 = (AES_BLOCK_byte_cnt - local_var_22);
uint4_t local_var_24 = 14;
bool local_var_25 = (local_var_23 == local_var_24);
auto local_var_26_shifted = AES_BLOCK_rd_data >> 112;
auto local_var_26_mask = AES_BLOCK_rd_data;
local_var_26_mask = (1 << (119 - 112 + 1)) - 1;
local_var_26_mask &= local_var_26_shifted;
uint8_t local_var_26 = boost::numeric_cast<uint8_t>(local_var_26_mask);
auto local_var_27 = (local_var_25) ? local_var_18 : local_var_26;
uint4_t local_var_28 = 0;
uint4_t local_var_29 = (AES_BLOCK_byte_cnt - local_var_28);
uint4_t local_var_30 = 13;
bool local_var_31 = (local_var_29 == local_var_30);
auto local_var_32_shifted = AES_BLOCK_rd_data >> 104;
auto local_var_32_mask = AES_BLOCK_rd_data;
local_var_32_mask = (1 << (111 - 104 + 1)) - 1;
local_var_32_mask &= local_var_32_shifted;
uint8_t local_var_32 = boost::numeric_cast<uint8_t>(local_var_32_mask);
auto local_var_33 = (local_var_31) ? local_var_18 : local_var_32;
uint4_t local_var_34 = 0;
uint4_t local_var_35 = (AES_BLOCK_byte_cnt - local_var_34);
uint4_t local_var_36 = 12;
bool local_var_37 = (local_var_35 == local_var_36);
auto local_var_38_shifted = AES_BLOCK_rd_data >> 96;
auto local_var_38_mask = AES_BLOCK_rd_data;
local_var_38_mask = (1 << (103 - 96 + 1)) - 1;
local_var_38_mask &= local_var_38_shifted;
uint8_t local_var_38 = boost::numeric_cast<uint8_t>(local_var_38_mask);
auto local_var_39 = (local_var_37) ? local_var_18 : local_var_38;
uint4_t local_var_40 = 0;
uint4_t local_var_41 = (AES_BLOCK_byte_cnt - local_var_40);
uint4_t local_var_42 = 11;
bool local_var_43 = (local_var_41 == local_var_42);
auto local_var_44_shifted = AES_BLOCK_rd_data >> 88;
auto local_var_44_mask = AES_BLOCK_rd_data;
local_var_44_mask = (1 << (95 - 88 + 1)) - 1;
local_var_44_mask &= local_var_44_shifted;
uint8_t local_var_44 = boost::numeric_cast<uint8_t>(local_var_44_mask);
auto local_var_45 = (local_var_43) ? local_var_18 : local_var_44;
uint4_t local_var_46 = 0;
uint4_t local_var_47 = (AES_BLOCK_byte_cnt - local_var_46);
uint4_t local_var_48 = 10;
bool local_var_49 = (local_var_47 == local_var_48);
auto local_var_50_shifted = AES_BLOCK_rd_data >> 80;
auto local_var_50_mask = AES_BLOCK_rd_data;
local_var_50_mask = (1 << (87 - 80 + 1)) - 1;
local_var_50_mask &= local_var_50_shifted;
uint8_t local_var_50 = boost::numeric_cast<uint8_t>(local_var_50_mask);
auto local_var_51 = (local_var_49) ? local_var_18 : local_var_50;
uint4_t local_var_52 = 0;
uint4_t local_var_53 = (AES_BLOCK_byte_cnt - local_var_52);
uint4_t local_var_54 = 9;
bool local_var_55 = (local_var_53 == local_var_54);
auto local_var_56_shifted = AES_BLOCK_rd_data >> 72;
auto local_var_56_mask = AES_BLOCK_rd_data;
local_var_56_mask = (1 << (79 - 72 + 1)) - 1;
local_var_56_mask &= local_var_56_shifted;
uint8_t local_var_56 = boost::numeric_cast<uint8_t>(local_var_56_mask);
auto local_var_57 = (local_var_55) ? local_var_18 : local_var_56;
uint4_t local_var_58 = 0;
uint4_t local_var_59 = (AES_BLOCK_byte_cnt - local_var_58);
uint4_t local_var_60 = 8;
bool local_var_61 = (local_var_59 == local_var_60);
auto local_var_62_shifted = AES_BLOCK_rd_data >> 64;
auto local_var_62_mask = AES_BLOCK_rd_data;
local_var_62_mask = (1 << (71 - 64 + 1)) - 1;
local_var_62_mask &= local_var_62_shifted;
uint8_t local_var_62 = boost::numeric_cast<uint8_t>(local_var_62_mask);
auto local_var_63 = (local_var_61) ? local_var_18 : local_var_62;
uint4_t local_var_64 = 0;
uint4_t local_var_65 = (AES_BLOCK_byte_cnt - local_var_64);
uint4_t local_var_66 = 7;
bool local_var_67 = (local_var_65 == local_var_66);
auto local_var_68_shifted = AES_BLOCK_rd_data >> 56;
auto local_var_68_mask = AES_BLOCK_rd_data;
local_var_68_mask = (1 << (63 - 56 + 1)) - 1;
local_var_68_mask &= local_var_68_shifted;
uint8_t local_var_68 = boost::numeric_cast<uint8_t>(local_var_68_mask);
auto local_var_69 = (local_var_67) ? local_var_18 : local_var_68;
uint4_t local_var_70 = 0;
uint4_t local_var_71 = (AES_BLOCK_byte_cnt - local_var_70);
uint4_t local_var_72 = 6;
bool local_var_73 = (local_var_71 == local_var_72);
auto local_var_74_shifted = AES_BLOCK_rd_data >> 48;
auto local_var_74_mask = AES_BLOCK_rd_data;
local_var_74_mask = (1 << (55 - 48 + 1)) - 1;
local_var_74_mask &= local_var_74_shifted;
uint8_t local_var_74 = boost::numeric_cast<uint8_t>(local_var_74_mask);
auto local_var_75 = (local_var_73) ? local_var_18 : local_var_74;
uint4_t local_var_76 = 0;
uint4_t local_var_77 = (AES_BLOCK_byte_cnt - local_var_76);
uint4_t local_var_78 = 5;
bool local_var_79 = (local_var_77 == local_var_78);
auto local_var_80_shifted = AES_BLOCK_rd_data >> 40;
auto local_var_80_mask = AES_BLOCK_rd_data;
local_var_80_mask = (1 << (47 - 40 + 1)) - 1;
local_var_80_mask &= local_var_80_shifted;
uint8_t local_var_80 = boost::numeric_cast<uint8_t>(local_var_80_mask);
auto local_var_81 = (local_var_79) ? local_var_18 : local_var_80;
uint4_t local_var_82 = 0;
uint4_t local_var_83 = (AES_BLOCK_byte_cnt - local_var_82);
uint4_t local_var_84 = 4;
bool local_var_85 = (local_var_83 == local_var_84);
auto local_var_86_shifted = AES_BLOCK_rd_data >> 32;
auto local_var_86_mask = AES_BLOCK_rd_data;
local_var_86_mask = (1 << (39 - 32 + 1)) - 1;
local_var_86_mask &= local_var_86_shifted;
uint8_t local_var_86 = boost::numeric_cast<uint8_t>(local_var_86_mask);
auto local_var_87 = (local_var_85) ? local_var_18 : local_var_86;
uint4_t local_var_88 = 0;
uint4_t local_var_89 = (AES_BLOCK_byte_cnt - local_var_88);
uint4_t local_var_90 = 3;
bool local_var_91 = (local_var_89 == local_var_90);
auto local_var_92_shifted = AES_BLOCK_rd_data >> 24;
auto local_var_92_mask = AES_BLOCK_rd_data;
local_var_92_mask = (1 << (31 - 24 + 1)) - 1;
local_var_92_mask &= local_var_92_shifted;
uint8_t local_var_92 = boost::numeric_cast<uint8_t>(local_var_92_mask);
auto local_var_93 = (local_var_91) ? local_var_18 : local_var_92;
uint4_t local_var_94 = 0;
uint4_t local_var_95 = (AES_BLOCK_byte_cnt - local_var_94);
uint4_t local_var_96 = 2;
bool local_var_97 = (local_var_95 == local_var_96);
auto local_var_98_shifted = AES_BLOCK_rd_data >> 16;
auto local_var_98_mask = AES_BLOCK_rd_data;
local_var_98_mask = (1 << (23 - 16 + 1)) - 1;
local_var_98_mask &= local_var_98_shifted;
uint8_t local_var_98 = boost::numeric_cast<uint8_t>(local_var_98_mask);
auto local_var_99 = (local_var_97) ? local_var_18 : local_var_98;
uint4_t local_var_100 = 0;
uint4_t local_var_101 = (AES_BLOCK_byte_cnt - local_var_100);
uint4_t local_var_102 = 1;
bool local_var_103 = (local_var_101 == local_var_102);
auto local_var_104_shifted = AES_BLOCK_rd_data >> 8;
auto local_var_104_mask = AES_BLOCK_rd_data;
local_var_104_mask = (1 << (15 - 8 + 1)) - 1;
local_var_104_mask &= local_var_104_shifted;
uint8_t local_var_104 = boost::numeric_cast<uint8_t>(local_var_104_mask);
auto local_var_105 = (local_var_103) ? local_var_18 : local_var_104;
uint4_t local_var_106 = 0;
uint4_t local_var_107 = (AES_BLOCK_byte_cnt - local_var_106);
uint4_t local_var_108 = 0;
bool local_var_109 = (local_var_107 == local_var_108);
auto local_var_110_shifted = AES_BLOCK_rd_data >> 0;
auto local_var_110_mask = AES_BLOCK_rd_data;
local_var_110_mask = (1 << (7 - 0 + 1)) - 1;
local_var_110_mask &= local_var_110_shifted;
uint8_t local_var_110 = boost::numeric_cast<uint8_t>(local_var_110_mask);
auto local_var_111 = (local_var_109) ? local_var_18 : local_var_110;
univ_var_3 = (boost::numeric_cast<uint16_t>(local_var_105) << 8) + boost::numeric_cast<uint16_t>(local_var_111);
univ_var_4 = (boost::numeric_cast<uint24_t>(local_var_99) << 16) + boost::numeric_cast<uint24_t>(univ_var_3);
univ_var_5 = (boost::numeric_cast<uint32_t>(local_var_93) << 24) + boost::numeric_cast<uint32_t>(univ_var_4);
univ_var_6 = (boost::numeric_cast<uint40_t>(local_var_87) << 32) + boost::numeric_cast<uint40_t>(univ_var_5);
univ_var_7 = (boost::numeric_cast<uint48_t>(local_var_81) << 40) + boost::numeric_cast<uint48_t>(univ_var_6);
univ_var_8 = (boost::numeric_cast<uint56_t>(local_var_75) << 48) + boost::numeric_cast<uint56_t>(univ_var_7);
univ_var_9 = (boost::numeric_cast<uint64_t>(local_var_69) << 56) + boost::numeric_cast<uint64_t>(univ_var_8);
univ_var_10 = (boost::numeric_cast<uint72_t>(local_var_63) << 64) + boost::numeric_cast<uint72_t>(univ_var_9);
univ_var_11 = (boost::numeric_cast<uint80_t>(local_var_57) << 72) + boost::numeric_cast<uint80_t>(univ_var_10);
univ_var_12 = (boost::numeric_cast<uint88_t>(local_var_51) << 80) + boost::numeric_cast<uint88_t>(univ_var_11);
univ_var_13 = (boost::numeric_cast<uint96_t>(local_var_45) << 88) + boost::numeric_cast<uint96_t>(univ_var_12);
univ_var_14 = (boost::numeric_cast<uint104_t>(local_var_39) << 96) + boost::numeric_cast<uint104_t>(univ_var_13);
univ_var_15 = (boost::numeric_cast<uint112_t>(local_var_33) << 104) + boost::numeric_cast<uint112_t>(univ_var_14);
univ_var_16 = (boost::numeric_cast<uint120_t>(local_var_27) << 112) + boost::numeric_cast<uint120_t>(univ_var_15);
univ_var_17 = (boost::numeric_cast<uint128_t>(local_var_21) << 120) + boost::numeric_cast<uint128_t>(univ_var_16);
auto univ_var_17_nxt_holder = univ_var_17;
AES_aes_status = local_var_5_nxt_holder;
AES_BLOCK_blk_cnt = AES_BLOCK_blk_cnt_nxt_holder;
AES_BLOCK_byte_cnt = local_var_8_nxt_holder;
AES_BLOCK_rd_data = univ_var_17_nxt_holder;
#ifdef ILATOR_VERBOSE
instr_update_log << "No." << std::dec << GetInstrCntr() << '\t' << "LOAD state updates:" << std::endl;
instr_update_log << "    AES_aes_status => " << std::hex << "0x" << AES_aes_status << std::endl; 
instr_update_log << "    AES_BLOCK_blk_cnt => " << std::hex << "0x" << AES_BLOCK_blk_cnt << std::endl; 
instr_update_log << "    AES_BLOCK_byte_cnt => " << std::hex << "0x" << AES_BLOCK_byte_cnt << std::endl; 
instr_update_log << "    AES_BLOCK_rd_data => " << std::hex << "0x" << AES_BLOCK_rd_data << std::endl; 
instr_update_log << std::endl;
#endif
}
