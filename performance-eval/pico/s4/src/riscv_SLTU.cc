#include "riscv.h"
void riscv::decode_riscv_SLTU_update() {
  c_2847 = (riscv_pc + 4);
  riscv_pc_next = c_2847;
  riscv_x0_next = 0;
  uint5_t tmp_17 = 0 - 1;
  c_17 = static_cast<uint5_t> ((riscv_inst >> 7) & tmp_17);
  c_4437 = c_17 == 1;
  uint5_t tmp_19 = 0 - 1;
  c_19 = static_cast<uint5_t> ((riscv_inst >> 15) & tmp_19);
  c_2681 = c_19 == 31;
  c_2676 = c_19 == 30;
  c_2671 = c_19 == 29;
  c_2666 = c_19 == 28;
  c_2661 = c_19 == 27;
  c_2656 = c_19 == 26;
  c_2651 = c_19 == 25;
  c_2646 = c_19 == 24;
  c_2641 = c_19 == 23;
  c_2636 = c_19 == 22;
  c_2631 = c_19 == 21;
  c_2626 = c_19 == 20;
  c_2621 = c_19 == 19;
  c_2616 = c_19 == 18;
  c_2611 = c_19 == 17;
  c_2606 = c_19 == 16;
  c_2601 = c_19 == 15;
  c_2596 = c_19 == 14;
  c_2591 = c_19 == 13;
  c_2586 = c_19 == 12;
  c_2581 = c_19 == 11;
  c_2576 = c_19 == 10;
  c_2571 = c_19 == 9;
  c_2566 = c_19 == 8;
  c_2561 = c_19 == 7;
  c_2556 = c_19 == 6;
  c_2551 = c_19 == 5;
  c_2546 = c_19 == 4;
  c_2541 = c_19 == 3;
  c_2536 = c_19 == 2;
  c_2531 = c_19 == 1;
  c_2533 = (c_2531) ? riscv_x1 : 0;
  c_2538 = (c_2536) ? riscv_x2 : c_2533;
  c_2543 = (c_2541) ? riscv_x3 : c_2538;
  c_2548 = (c_2546) ? riscv_x4 : c_2543;
  c_2553 = (c_2551) ? riscv_x5 : c_2548;
  c_2558 = (c_2556) ? riscv_x6 : c_2553;
  c_2563 = (c_2561) ? riscv_x7 : c_2558;
  c_2568 = (c_2566) ? riscv_x8 : c_2563;
  c_2573 = (c_2571) ? riscv_x9 : c_2568;
  c_2578 = (c_2576) ? riscv_x10 : c_2573;
  c_2583 = (c_2581) ? riscv_x11 : c_2578;
  c_2588 = (c_2586) ? riscv_x12 : c_2583;
  c_2593 = (c_2591) ? riscv_x13 : c_2588;
  c_2598 = (c_2596) ? riscv_x14 : c_2593;
  c_2603 = (c_2601) ? riscv_x15 : c_2598;
  c_2608 = (c_2606) ? riscv_x16 : c_2603;
  c_2613 = (c_2611) ? riscv_x17 : c_2608;
  c_2618 = (c_2616) ? riscv_x18 : c_2613;
  c_2623 = (c_2621) ? riscv_x19 : c_2618;
  c_2628 = (c_2626) ? riscv_x20 : c_2623;
  c_2633 = (c_2631) ? riscv_x21 : c_2628;
  c_2638 = (c_2636) ? riscv_x22 : c_2633;
  c_2643 = (c_2641) ? riscv_x23 : c_2638;
  c_2648 = (c_2646) ? riscv_x24 : c_2643;
  c_2653 = (c_2651) ? riscv_x25 : c_2648;
  c_2658 = (c_2656) ? riscv_x26 : c_2653;
  c_2663 = (c_2661) ? riscv_x27 : c_2658;
  c_2668 = (c_2666) ? riscv_x28 : c_2663;
  c_2673 = (c_2671) ? riscv_x29 : c_2668;
  c_2678 = (c_2676) ? riscv_x30 : c_2673;
  c_2683 = (c_2681) ? riscv_x31 : c_2678;
  uint5_t tmp_21 = 0 - 1;
  c_21 = static_cast<uint5_t> ((riscv_inst >> 20) & tmp_21);
  c_2838 = c_21 == 31;
  c_2833 = c_21 == 30;
  c_2828 = c_21 == 29;
  c_2823 = c_21 == 28;
  c_2818 = c_21 == 27;
  c_2813 = c_21 == 26;
  c_2808 = c_21 == 25;
  c_2803 = c_21 == 24;
  c_2798 = c_21 == 23;
  c_2793 = c_21 == 22;
  c_2788 = c_21 == 21;
  c_2783 = c_21 == 20;
  c_2778 = c_21 == 19;
  c_2773 = c_21 == 18;
  c_2768 = c_21 == 17;
  c_2763 = c_21 == 16;
  c_2758 = c_21 == 15;
  c_2753 = c_21 == 14;
  c_2748 = c_21 == 13;
  c_2743 = c_21 == 12;
  c_2738 = c_21 == 11;
  c_2733 = c_21 == 10;
  c_2728 = c_21 == 9;
  c_2723 = c_21 == 8;
  c_2718 = c_21 == 7;
  c_2713 = c_21 == 6;
  c_2708 = c_21 == 5;
  c_2703 = c_21 == 4;
  c_2698 = c_21 == 3;
  c_2693 = c_21 == 2;
  c_2688 = c_21 == 1;
  c_2690 = (c_2688) ? riscv_x1 : 0;
  c_2695 = (c_2693) ? riscv_x2 : c_2690;
  c_2700 = (c_2698) ? riscv_x3 : c_2695;
  c_2705 = (c_2703) ? riscv_x4 : c_2700;
  c_2710 = (c_2708) ? riscv_x5 : c_2705;
  c_2715 = (c_2713) ? riscv_x6 : c_2710;
  c_2720 = (c_2718) ? riscv_x7 : c_2715;
  c_2725 = (c_2723) ? riscv_x8 : c_2720;
  c_2730 = (c_2728) ? riscv_x9 : c_2725;
  c_2735 = (c_2733) ? riscv_x10 : c_2730;
  c_2740 = (c_2738) ? riscv_x11 : c_2735;
  c_2745 = (c_2743) ? riscv_x12 : c_2740;
  c_2750 = (c_2748) ? riscv_x13 : c_2745;
  c_2755 = (c_2753) ? riscv_x14 : c_2750;
  c_2760 = (c_2758) ? riscv_x15 : c_2755;
  c_2765 = (c_2763) ? riscv_x16 : c_2760;
  c_2770 = (c_2768) ? riscv_x17 : c_2765;
  c_2775 = (c_2773) ? riscv_x18 : c_2770;
  c_2780 = (c_2778) ? riscv_x19 : c_2775;
  c_2785 = (c_2783) ? riscv_x20 : c_2780;
  c_2790 = (c_2788) ? riscv_x21 : c_2785;
  c_2795 = (c_2793) ? riscv_x22 : c_2790;
  c_2800 = (c_2798) ? riscv_x23 : c_2795;
  c_2805 = (c_2803) ? riscv_x24 : c_2800;
  c_2810 = (c_2808) ? riscv_x25 : c_2805;
  c_2815 = (c_2813) ? riscv_x26 : c_2810;
  c_2820 = (c_2818) ? riscv_x27 : c_2815;
  c_2825 = (c_2823) ? riscv_x28 : c_2820;
  c_2830 = (c_2828) ? riscv_x29 : c_2825;
  c_2835 = (c_2833) ? riscv_x30 : c_2830;
  c_2840 = (c_2838) ? riscv_x31 : c_2835;
  c_4430 = c_2683 < c_2840;
  c_4432 = (c_4430) ? 1 : 0;
  c_4439 = (c_4437) ? c_4432 : riscv_x1;
  riscv_x1_next = c_4439;
  c_4482 = c_17 == 10;
  c_4484 = (c_4482) ? c_4432 : riscv_x10;
  riscv_x10_next = c_4484;
  c_4487 = c_17 == 11;
  c_4489 = (c_4487) ? c_4432 : riscv_x11;
  riscv_x11_next = c_4489;
  c_4492 = c_17 == 12;
  c_4494 = (c_4492) ? c_4432 : riscv_x12;
  riscv_x12_next = c_4494;
  c_4497 = c_17 == 13;
  c_4499 = (c_4497) ? c_4432 : riscv_x13;
  riscv_x13_next = c_4499;
  c_4502 = c_17 == 14;
  c_4504 = (c_4502) ? c_4432 : riscv_x14;
  riscv_x14_next = c_4504;
  c_4507 = c_17 == 15;
  c_4509 = (c_4507) ? c_4432 : riscv_x15;
  riscv_x15_next = c_4509;
  c_4512 = c_17 == 16;
  c_4514 = (c_4512) ? c_4432 : riscv_x16;
  riscv_x16_next = c_4514;
  c_4517 = c_17 == 17;
  c_4519 = (c_4517) ? c_4432 : riscv_x17;
  riscv_x17_next = c_4519;
  c_4522 = c_17 == 18;
  c_4524 = (c_4522) ? c_4432 : riscv_x18;
  riscv_x18_next = c_4524;
  c_4527 = c_17 == 19;
  c_4529 = (c_4527) ? c_4432 : riscv_x19;
  riscv_x19_next = c_4529;
  c_4442 = c_17 == 2;
  c_4444 = (c_4442) ? c_4432 : riscv_x2;
  riscv_x2_next = c_4444;
  c_4532 = c_17 == 20;
  c_4534 = (c_4532) ? c_4432 : riscv_x20;
  riscv_x20_next = c_4534;
  c_4537 = c_17 == 21;
  c_4539 = (c_4537) ? c_4432 : riscv_x21;
  riscv_x21_next = c_4539;
  c_4542 = c_17 == 22;
  c_4544 = (c_4542) ? c_4432 : riscv_x22;
  riscv_x22_next = c_4544;
  c_4547 = c_17 == 23;
  c_4549 = (c_4547) ? c_4432 : riscv_x23;
  riscv_x23_next = c_4549;
  c_4552 = c_17 == 24;
  c_4554 = (c_4552) ? c_4432 : riscv_x24;
  riscv_x24_next = c_4554;
  c_4557 = c_17 == 25;
  c_4559 = (c_4557) ? c_4432 : riscv_x25;
  riscv_x25_next = c_4559;
  c_4562 = c_17 == 26;
  c_4564 = (c_4562) ? c_4432 : riscv_x26;
  riscv_x26_next = c_4564;
  c_4567 = c_17 == 27;
  c_4569 = (c_4567) ? c_4432 : riscv_x27;
  riscv_x27_next = c_4569;
  c_4572 = c_17 == 28;
  c_4574 = (c_4572) ? c_4432 : riscv_x28;
  riscv_x28_next = c_4574;
  c_4577 = c_17 == 29;
  c_4579 = (c_4577) ? c_4432 : riscv_x29;
  riscv_x29_next = c_4579;
  c_4447 = c_17 == 3;
  c_4449 = (c_4447) ? c_4432 : riscv_x3;
  riscv_x3_next = c_4449;
  c_4582 = c_17 == 30;
  c_4584 = (c_4582) ? c_4432 : riscv_x30;
  riscv_x30_next = c_4584;
  c_4587 = c_17 == 31;
  c_4589 = (c_4587) ? c_4432 : riscv_x31;
  riscv_x31_next = c_4589;
  c_4452 = c_17 == 4;
  c_4454 = (c_4452) ? c_4432 : riscv_x4;
  riscv_x4_next = c_4454;
  c_4457 = c_17 == 5;
  c_4459 = (c_4457) ? c_4432 : riscv_x5;
  riscv_x5_next = c_4459;
  c_4462 = c_17 == 6;
  c_4464 = (c_4462) ? c_4432 : riscv_x6;
  riscv_x6_next = c_4464;
  c_4467 = c_17 == 7;
  c_4469 = (c_4467) ? c_4432 : riscv_x7;
  riscv_x7_next = c_4469;
  c_4472 = c_17 == 8;
  c_4474 = (c_4472) ? c_4432 : riscv_x8;
  riscv_x8_next = c_4474;
  c_4477 = c_17 == 9;
  c_4479 = (c_4477) ? c_4432 : riscv_x9;
  riscv_x9_next = c_4479;
};