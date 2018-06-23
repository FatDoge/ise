/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    xilinxcorelib_ver_m_00000000001358910285_1420689212_init();
    xilinxcorelib_ver_m_00000000001687936702_1862936372_init();
    xilinxcorelib_ver_m_00000000000277421008_2825863522_init();
    xilinxcorelib_ver_m_00000000001603977570_1722470092_init();
    work_m_00000000002489990758_2749554317_init();
    work_m_00000000002321240549_3332440113_init();
    work_m_00000000002339868717_2787258270_init();
    work_m_00000000003460477252_0886308060_init();
    work_m_00000000000575797895_3508565487_init();
    work_m_00000000001135980544_3683860065_init();
    work_m_00000000001655490041_4255915051_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001655490041_4255915051");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
