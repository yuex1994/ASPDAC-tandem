#include "AES.h"
void AES::decode_AES_BLOCK_STORE_update() {
  c_434 = (AES_aes_address + AES_BLOCK_blk_cnt);
  c_432 = 0;
  c_432 = static_cast<uint16_t>(AES_BLOCK_byte_cnt);
  c_435 = (c_434 + c_432);
  c_585 = (AES_BLOCK_byte_cnt - 0);
  c_588 = c_585 == 15;
  uint8_t tmp_581 = 0 - 1;
  c_581 = static_cast<uint8_t> ((AES_BLOCK_enc_data >> 120) & tmp_581);
  c_575 = (AES_BLOCK_byte_cnt - 0);
  c_578 = c_575 == 14;
  uint8_t tmp_571 = 0 - 1;
  c_571 = static_cast<uint8_t> ((AES_BLOCK_enc_data >> 112) & tmp_571);
  c_565 = (AES_BLOCK_byte_cnt - 0);
  c_568 = c_565 == 13;
  uint8_t tmp_561 = 0 - 1;
  c_561 = static_cast<uint8_t> ((AES_BLOCK_enc_data >> 104) & tmp_561);
  c_555 = (AES_BLOCK_byte_cnt - 0);
  c_558 = c_555 == 12;
  uint8_t tmp_551 = 0 - 1;
  c_551 = static_cast<uint8_t> ((AES_BLOCK_enc_data >> 96) & tmp_551);
  c_545 = (AES_BLOCK_byte_cnt - 0);
  c_548 = c_545 == 11;
  uint8_t tmp_541 = 0 - 1;
  c_541 = static_cast<uint8_t> ((AES_BLOCK_enc_data >> 88) & tmp_541);
  c_535 = (AES_BLOCK_byte_cnt - 0);
  c_538 = c_535 == 10;
  uint8_t tmp_531 = 0 - 1;
  c_531 = static_cast<uint8_t> ((AES_BLOCK_enc_data >> 80) & tmp_531);
  c_525 = (AES_BLOCK_byte_cnt - 0);
  c_528 = c_525 == 9;
  uint8_t tmp_521 = 0 - 1;
  c_521 = static_cast<uint8_t> ((AES_BLOCK_enc_data >> 72) & tmp_521);
  c_515 = (AES_BLOCK_byte_cnt - 0);
  c_518 = c_515 == 8;
  uint8_t tmp_511 = 0 - 1;
  c_511 = static_cast<uint8_t> ((AES_BLOCK_enc_data >> 64) & tmp_511);
  c_505 = (AES_BLOCK_byte_cnt - 0);
  c_508 = c_505 == 7;
  uint8_t tmp_501 = 0 - 1;
  c_501 = static_cast<uint8_t> ((AES_BLOCK_enc_data >> 56) & tmp_501);
  c_495 = (AES_BLOCK_byte_cnt - 0);
  c_498 = c_495 == 6;
  uint8_t tmp_491 = 0 - 1;
  c_491 = static_cast<uint8_t> ((AES_BLOCK_enc_data >> 48) & tmp_491);
  c_485 = (AES_BLOCK_byte_cnt - 0);
  c_488 = c_485 == 5;
  uint8_t tmp_481 = 0 - 1;
  c_481 = static_cast<uint8_t> ((AES_BLOCK_enc_data >> 40) & tmp_481);
  c_475 = (AES_BLOCK_byte_cnt - 0);
  c_478 = c_475 == 4;
  uint8_t tmp_471 = 0 - 1;
  c_471 = static_cast<uint8_t> ((AES_BLOCK_enc_data >> 32) & tmp_471);
  c_465 = (AES_BLOCK_byte_cnt - 0);
  c_468 = c_465 == 3;
  uint8_t tmp_461 = 0 - 1;
  c_461 = static_cast<uint8_t> ((AES_BLOCK_enc_data >> 24) & tmp_461);
  c_455 = (AES_BLOCK_byte_cnt - 0);
  c_458 = c_455 == 2;
  uint8_t tmp_451 = 0 - 1;
  c_451 = static_cast<uint8_t> ((AES_BLOCK_enc_data >> 16) & tmp_451);
  c_445 = (AES_BLOCK_byte_cnt - 0);
  c_448 = c_445 == 1;
  uint8_t tmp_441 = 0 - 1;
  c_441 = static_cast<uint8_t> ((AES_BLOCK_enc_data >> 8) & tmp_441);
  uint8_t tmp_439 = 0 - 1;
  c_439 = static_cast<uint8_t> ((AES_BLOCK_enc_data >> 0) & tmp_439);
  c_450 = (c_448) ? c_441 : c_439;
  c_460 = (c_458) ? c_451 : c_450;
  c_470 = (c_468) ? c_461 : c_460;
  c_480 = (c_478) ? c_471 : c_470;
  c_490 = (c_488) ? c_481 : c_480;
  c_500 = (c_498) ? c_491 : c_490;
  c_510 = (c_508) ? c_501 : c_500;
  c_520 = (c_518) ? c_511 : c_510;
  c_530 = (c_528) ? c_521 : c_520;
  c_540 = (c_538) ? c_531 : c_530;
  c_550 = (c_548) ? c_541 : c_540;
  c_560 = (c_558) ? c_551 : c_550;
  c_570 = (c_568) ? c_561 : c_560;
  c_580 = (c_578) ? c_571 : c_570;
  c_590 = (c_588) ? c_581 : c_580;
  AES_XRAM_type c_591;
  c_591.original_map = AES_XRAM;
  c_591.update_map[c_435] = c_590;
  AES_XRAM_next.original_map = c_591.original_map;
  AES_XRAM_next.update_map = c_591.update_map;
  c_618 = AES_BLOCK_byte_cnt == 15;
  c_612 = (AES_BLOCK_blk_cnt + 16);
  c_613 = c_612 < AES_aes_length;
  c_615 = (c_613) ? 1 : 0;
  c_620 = (c_618) ? c_615 : AES_aes_status;
  AES_aes_status_next = c_620;
  c_603 = AES_BLOCK_byte_cnt == 15;
  c_597 = (AES_BLOCK_blk_cnt + 16);
  c_598 = c_597 < AES_aes_length;
  c_594 = (AES_BLOCK_blk_cnt + 16);
  c_600 = (c_598) ? c_594 : AES_BLOCK_blk_cnt;
  c_605 = (c_603) ? c_600 : AES_BLOCK_blk_cnt;
  AES_BLOCK_blk_cnt_next = c_605;
  c_438 = (AES_BLOCK_byte_cnt + 1);
  AES_BLOCK_byte_cnt_next = c_438;
};