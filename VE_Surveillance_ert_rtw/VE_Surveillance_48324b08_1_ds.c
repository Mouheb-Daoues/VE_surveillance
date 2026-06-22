/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'VE_Surveillance/Capteurs_Physiques/Solver Configuration'.
 */
/* VE_Surveillance_48324b08_1_ds.c - body for module VE_Surveillance_48324b08_1_ds */

#include "ne_ds.h"
#include "VE_Surveillance_48324b08_1_ds_zc.h"
#include "VE_Surveillance_48324b08_1_ds_obs_il.h"
#include "VE_Surveillance_48324b08_1_ds_obs_exp.h"
#include "VE_Surveillance_48324b08_1_ds_m_p.h"
#include "VE_Surveillance_48324b08_1_ds_log.h"
#include "VE_Surveillance_48324b08_1_ds_obs_all.h"
#include "VE_Surveillance_48324b08_1_ds_imax.h"
#include "VE_Surveillance_48324b08_1_ds_obs_act.h"
#include "VE_Surveillance_48324b08_1_ds_imin.h"
#include "VE_Surveillance_48324b08_1_ds_dnf_p.h"
#include "VE_Surveillance_48324b08_1_ds_tdxf_p.h"
#include "VE_Surveillance_48324b08_1_ds_a_p.h"
#include "VE_Surveillance_48324b08_1_ds_dxf_p.h"
#include "VE_Surveillance_48324b08_1_ds_dxf.h"
#include "VE_Surveillance_48324b08_1_ds_mode.h"
#include "VE_Surveillance_48324b08_1_ds_f.h"
#include "VE_Surveillance_48324b08_1_ds_assert.h"
#include "VE_Surveillance_48324b08_1_ds.h"
#include "ssc_ml_fun.h"
#include "VE_Surveillance_48324b08_1_ds_external_struct.h"
#include "VE_Surveillance_48324b08_1_ds_sys_struct.h"
#include "VE_Surveillance_48324b08_1_ds_externals.h"

static int32_T ds_m(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_vmm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dxm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_ddm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dum_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dum(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dtm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dpm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dpm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_a(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_b_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_b(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_c_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_c(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_vmf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_vpf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_vsf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_slf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_slf0(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_duf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_duf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dtf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_ddf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dpdxf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_dpdxf(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dwf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dwf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_tduf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dnf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dnf_v_x(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_cer(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dxcer(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxcer_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_ic(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_icr(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_icr_im(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icr_id(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icr_il(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxicr(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_ddicr(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_tduicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icrm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icrm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dxicrm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxicrm(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicrm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicrm(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mdxy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_tduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_tdxy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_y(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_dxy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_duy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_duy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dty_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dty(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_cache_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_cache_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_update_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_update_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_update2_r(const NeDynamicSystem *ds, const
  NeDynamicSystemInput *in, NeDsMethodOutput *out);
static int32_T ds_update2_i(const NeDynamicSystem *ds, const
  NeDynamicSystemInput *in, NeDsMethodOutput *out);
static int32_T ds_lock_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lock_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lock2_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_lock2_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_sfo(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_sfp(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_init_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_init_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_passert(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_iassert(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_del_t(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_v(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_v0(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_tmax(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxdelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxdelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dudelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dudelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtdelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtdelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dp_l(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_j(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qx(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qu(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qt(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_q1(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qx_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qu_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_q1_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_var_tol(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_eq_tol(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lv(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_slv(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_nldv(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_sclv(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dimin(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dimax(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dpm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dpm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_a_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_c_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_c(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vpf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vsf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dpdxf_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dpdxf(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dwf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dwf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_cer(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxcer(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxcer_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_il(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ddicr(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_icrm_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ddicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_cache_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_cache_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_lock_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lock_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lock2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_lock2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_passert(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_iassert(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_nldv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_sclv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_imin(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_imax(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dimin(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dimax(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static void release_reference(NeDynamicSystem *ds);
static void get_reference(NeDynamicSystem *ds);
static NeDynamicSystem *diagnostics(NeDynamicSystem *ds, boolean_T);
static void expand(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                   PmRealVector *out, boolean_T kp);
static void rtpmap(const NeDynamicSystem * ds, const PmIntVector* inl, const
                   PmIntVector* ini, const PmIntVector* inj, const PmRealVector*
                   inr, PmIntVector* outl, PmIntVector* outi, PmIntVector* outj,
                   PmRealVector* outr);
static NeEquationData s_equation_data[29] = { { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME,
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 2U, 0U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 2U, 2U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "VE_Surveillance/Capteurs_Physiques/Ideal Rotational Motion Sensor", 2U, 4U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "VE_Surveillance/Capteurs_Physiques/PMSM", 2U, 6U, TRUE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "VE_Surveillance/Capteurs_Physiques/PMSM",
    1U, 8U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 9U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "VE_Surveillance/Capteurs_Physiques/PMSM",
    1U, 10U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 11U, TRUE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME,
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 12U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 13U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 14U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 15U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 16U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 3U, 17U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 3U, 20U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 3U, 23U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 3U, 26U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 3U, 29U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 3U, 32U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 35U, TRUE,
    1.0, "1", }, { "", 1U, 8, NE_EQUATION_DOMAIN_TIME,
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 35U, TRUE,
    1.0, "1", }, { "", 2U, 8, NE_EQUATION_DOMAIN_TIME,
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 35U, TRUE,
    1.0, "1", }, { "", 3U, 8, NE_EQUATION_DOMAIN_TIME,
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 35U, TRUE,
    1.0, "1", }, { "", 4U, 8, NE_EQUATION_DOMAIN_TIME,
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 35U, TRUE,
    1.0, "1", }, { "", 5U, 8, NE_EQUATION_DOMAIN_TIME,
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 35U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 36U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "VE_Surveillance/Capteurs_Physiques/PMSM",
    1U, 37U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 38U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "VE_Surveillance/Capteurs_Physiques/PMSM",
    1U, 39U, FALSE, 1.0, "1", } };

static NeCERData *s_cer_data = NULL;
static NeICRData s_icr_data[7] = { { "", 0U, 0,
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 0U, }, { "",
    0U, 0, "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 1U, },
  { "", 0U, 0, "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U,
    2U, }, { "", 0U, 0,
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 3U, }, { "",
    0U, 0, "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 4U, },
  { "", 0U, 0, "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 5U, }, { "", 0U, 0,
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 6U, } };

static NeVariableData s_variable_data[29] = { {
    "Capteurs_Physiques.Battery_Table_Based.charge", 0U, 0,
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1.0, "1", 0.0,
    TRUE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Charge", }, {
    "Capteurs_Physiques.Battery_Table_Based.num_cycles", 0U, 0,
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1.0, "1", 0.0,
    TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Discharge cycles", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.angular_velocity", 0U, 0,
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1.0, "1", 0.0, TRUE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Rotor speed", }, {
    "Capteurs_Physiques.Ideal_Rotational_Motion_Sensor.phi", 0U, 0,
    "VE_Surveillance/Capteurs_Physiques/Ideal Rotational Motion Sensor", 1.0,
    "1", 0.0, TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Angle", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.angular_position_diff", 0U, 0,
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1.0, "1", 0.0, TRUE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "angular_position_diff", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.i_0", 0U, 0,
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1.0, "1", 0.0, TRUE, FALSE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "Zero-sequence current", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.i_d", 0U, 0,
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1.0, "1", 0.0, TRUE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "D-axis current", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.i_q", 0U, 0,
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1.0, "1", 0.0, TRUE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Q-axis current", }, {
    "Capteurs_Physiques.Battery_Table_Based.i", 0U, 0,
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Current (positive in)", }, {
    "Capteurs_Physiques.Battery_Table_Based.p.v", 0U, 1,
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Capteurs_Physiques.Battery_Table_Based.xVint", 0U, 0,
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Capteurs_Physiques.Battery_Table_Based.xR0", 0U, 0,
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Capteurs_Physiques.Battery_Table_Based.stateOfCharge", 0U, 0,
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "State of charge", }, {
    "Capteurs_Physiques.Battery_Table_Based.xqnom", 0U, 0,
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.G1p.v",
    0U, 0, "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.G2p.v",
    0U, 0, "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.G3p.v",
    0U, 0, "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.G4p.v",
    0U, 0, "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.G5p.v",
    0U, 0, "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.G6p.v",
    0U, 0, "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Capteurs_Physiques.PMSM.n.v", 0U, 1,
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.v_a", 0U, 0,
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "v_a", }, { "Capteurs_Physiques.PMSM.pm_dq0_Xabc.v_b",
    0U, 0, "VE_Surveillance/Capteurs_Physiques/PMSM", 1.0, "1", 0.0, FALSE,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "v_b", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.v_c", 0U, 0,
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "v_c", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q3.i", 0U, 0,
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "i", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q5.i", 0U, 0,
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "i", }, {
    "Capteurs_Physiques.PMSM.phase_splitter.i_b", 0U, 0,
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "i_b", }, {
    "Capteurs_Physiques.PMSM.phase_splitter.i_c", 0U, 0,
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "i_c", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.electrical_torque", 0U, 0,
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Electrical torque", } };

static NeVariableData *s_discrete_data = NULL;
static NeObservableData s_observable_data[168] = { {
    "Capteurs_Physiques.Battery_Table_Based.charge",
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 1U, "hr*A",
    1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Charge", }, {
    "Capteurs_Physiques.Battery_Table_Based.i",
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Capteurs_Physiques.Battery_Table_Based.n.v",
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Battery_Table_Based.num_cycles",
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Capteurs_Physiques.Battery_Table_Based.p.v",
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Battery_Table_Based.power_dissipated",
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Capteurs_Physiques.Battery_Table_Based.stateOfCharge",
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Capteurs_Physiques.Battery_Table_Based.v",
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Battery_Table_Based.vrc1",
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc1", }, {
    "Capteurs_Physiques.Battery_Table_Based.vrc2",
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc2", }, {
    "Capteurs_Physiques.Battery_Table_Based.vrc3",
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc3", }, {
    "Capteurs_Physiques.Battery_Table_Based.vrc4",
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc4", }, {
    "Capteurs_Physiques.Battery_Table_Based.vrc5",
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc5", }, {
    "Capteurs_Physiques.Battery_Table_Based.xG1",
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 1U, "1/Ohm",
    1.0, "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R1(SOC,T,N)", }, {
    "Capteurs_Physiques.Battery_Table_Based.xG2",
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 1U, "1/Ohm",
    1.0, "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R2(SOC,T,N)", }, {
    "Capteurs_Physiques.Battery_Table_Based.xG3",
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 1U, "1/Ohm",
    1.0, "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R3(SOC,T,N)", }, {
    "Capteurs_Physiques.Battery_Table_Based.xG4",
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 1U, "1/Ohm",
    1.0, "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R4(SOC,T,N)", }, {
    "Capteurs_Physiques.Battery_Table_Based.xG5",
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 1U, "1/Ohm",
    1.0, "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R5(SOC,T,N)", }, {
    "Capteurs_Physiques.Battery_Table_Based.xGsd",
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 1U, "1/Ohm",
    1.0, "s*C^2/m^2/kg", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/Rleak(T,N)", }, {
    "Capteurs_Physiques.Battery_Table_Based.xR0",
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 1U, "Ohm",
    1.0, "m^2*kg/s/C^2", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Capteurs_Physiques.Battery_Table_Based.xVint",
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Capteurs_Physiques.Battery_Table_Based.xqnom",
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 1U, "hr*A",
    1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Capteurs_Physiques.Converter_Three_Phase.G.V",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 12U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Capteurs_Physiques.Converter_Three_Phase.N.V",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 3U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.G.V",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 12U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q1.A.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q1.G",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "G", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q1.K.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q1.i",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q1.power_dissipated",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "W",
    1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q1.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q2.A.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q2.G",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "G", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q2.K.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q2.i",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q2.power_dissipated",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "W",
    1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q2.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q3.A.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q3.G",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "G", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q3.K.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q3.i",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q3.power_dissipated",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "W",
    1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q3.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q4.A.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q4.G",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "G", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q4.K.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q4.i",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q4.power_dissipated",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "W",
    1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q4.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q5.A.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q5.G",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "G", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q5.K.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q5.i",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q5.power_dissipated",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "W",
    1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q5.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q6.A.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q6.G",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "G", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q6.K.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q6.i",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q6.power_dissipated",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "W",
    1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q6.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.a.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.b.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.c.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.G1",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "G1", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.G1n.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.G1p.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.G2",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "G2", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.G2n.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.G2p.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.G3",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "G3", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.G3n.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.G3p.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.G4",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "G4", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.G4n.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.G4p.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.G5",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "G5", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.G5n.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.G5p.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.G6",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "G6", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.G6n.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.G6p.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.I",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 12U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "I", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.i1n",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "i1n", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.i1p",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "i1p", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.i2n",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "i2n", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.i2p",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "i2p", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.i3n",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "i3n", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.i3p",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "i3p", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.i4n",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "i4n", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.i4p",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "i4p", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.i5n",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "i5n", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.i5p",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "i5p", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.i6n",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "i6n", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.i6p",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "i6p", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.demux_gates.p.V",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 12U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "V", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.n.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.p.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.n.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.p.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.phase_splitter.I",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 3U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Capteurs_Physiques.Converter_Three_Phase.phase_splitter.N.V",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 3U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Capteurs_Physiques.Converter_Three_Phase.phase_splitter.a.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.phase_splitter.b.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.phase_splitter.c.v",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Converter_Three_Phase.phase_splitter.i_a",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Capteurs_Physiques.Converter_Three_Phase.phase_splitter.i_b",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Capteurs_Physiques.Converter_Three_Phase.phase_splitter.i_c",
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "Capteurs_Physiques.Current_Sensor.I",
    "VE_Surveillance/Capteurs_Physiques/Current Sensor", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Capteurs_Physiques.Current_Sensor.i1",
    "VE_Surveillance/Capteurs_Physiques/Current Sensor", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Capteurs_Physiques.Current_Sensor.n.v",
    "VE_Surveillance/Capteurs_Physiques/Current Sensor", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Current_Sensor.p.v",
    "VE_Surveillance/Capteurs_Physiques/Current Sensor", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Current_Sensor_I", "VE_Surveillance/Capteurs_Physiques",
    1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Current_Sensor_I", }, {
    "Capteurs_Physiques.Electrical_Reference.V.v",
    "VE_Surveillance/Capteurs_Physiques/Electrical Reference", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Ideal_Rotational_Motion_Sensor.A",
    "VE_Surveillance/Capteurs_Physiques/Ideal Rotational Motion Sensor", 1U, 1U,
    "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "A", }, {
    "Capteurs_Physiques.Ideal_Rotational_Motion_Sensor.C.w",
    "VE_Surveillance/Capteurs_Physiques/Ideal Rotational Motion Sensor", 1U, 1U,
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Capteurs_Physiques.Ideal_Rotational_Motion_Sensor.R.w",
    "VE_Surveillance/Capteurs_Physiques/Ideal Rotational Motion Sensor", 1U, 1U,
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Capteurs_Physiques.Ideal_Rotational_Motion_Sensor.W",
    "VE_Surveillance/Capteurs_Physiques/Ideal Rotational Motion Sensor", 1U, 1U,
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "W", }, {
    "Capteurs_Physiques.Ideal_Rotational_Motion_Sensor.phi",
    "VE_Surveillance/Capteurs_Physiques/Ideal Rotational Motion Sensor", 1U, 1U,
    "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angle", }, {
    "Capteurs_Physiques.Ideal_Rotational_Motion_Sensor_W",
    "VE_Surveillance/Capteurs_Physiques", 1U, 1U, "rad/s", 1.0, "1/s",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Ideal_Rotational_Motion_Sensor_W", }, {
    "Capteurs_Physiques.Mechanical_Rotational_Reference.W.w",
    "VE_Surveillance/Capteurs_Physiques/Mechanical Rotational Reference", 1U, 1U,
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Capteurs_Physiques.Mechanical_Rotational_Reference1.W.w",
    "VE_Surveillance/Capteurs_Physiques/Mechanical Rotational Reference1", 1U,
    1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Capteurs_Physiques.PMSM.C.w", "VE_Surveillance/Capteurs_Physiques/PMSM", 1U,
    1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Capteurs_Physiques.PMSM.N.V", "VE_Surveillance/Capteurs_Physiques/PMSM", 1U,
    3U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Capteurs_Physiques.PMSM.R.w",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "rad/s", 1.0, "1/s",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Capteurs_Physiques.PMSM.angular_position",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "deg", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotor angle", }, {
    "Capteurs_Physiques.PMSM.angular_velocity",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "rpm", 1.0, "1/s",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotor speed", }, {
    "Capteurs_Physiques.PMSM.i_d", "VE_Surveillance/Capteurs_Physiques/PMSM", 1U,
    1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "D-axis current", }, {
    "Capteurs_Physiques.PMSM.i_q", "VE_Surveillance/Capteurs_Physiques/PMSM", 1U,
    1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Q-axis current", }, {
    "Capteurs_Physiques.PMSM.n.v", "VE_Surveillance/Capteurs_Physiques/PMSM", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.PMSM.phase_splitter.I",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 3U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Capteurs_Physiques.PMSM.phase_splitter.N.V",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Capteurs_Physiques.PMSM.phase_splitter.a.v",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.PMSM.phase_splitter.b.v",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.PMSM.phase_splitter.c.v",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.PMSM.phase_splitter.i_a",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Capteurs_Physiques.PMSM.phase_splitter.i_b",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Capteurs_Physiques.PMSM.phase_splitter.i_c",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.C.w",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "rad/s", 1.0, "1/s",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.R.w",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "rad/s", 1.0, "1/s",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.a.v",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.angular_position",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "deg", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotor angle", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.angular_position_diff",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "rad", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "angular_position_diff", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.angular_velocity",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "rpm", 1.0, "1/s",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotor speed", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.b.v",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.c.v",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.electrical_torque",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "N*m", 1.0, "N*m",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Electrical torque", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.i_0",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Zero-sequence current", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.i_a",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.i_b",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.i_c",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.i_d",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "D-axis current", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.i_n",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_n", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.i_q",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Q-axis current", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.n.v",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.power_dissipated",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.torque",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "N*m", 1.0, "N*m",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.v_a",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v_a", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.v_b",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v_b", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.v_c",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v_c", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.x_Ld",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "H", 1.0e-6, "H",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "x_Ld", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.x_Lq",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "H", 1.0e-6, "H",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "x_Lq", }, {
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc.x_pm_flux_linkage",
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 1U, "Wb", 1.0e-6, "Wb",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "x_pm_flux_linkage", }, {
    "Capteurs_Physiques.PMSM.torque", "VE_Surveillance/Capteurs_Physiques/PMSM",
    1U, 1U, "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Capteurs_Physiques.Voltage_Sensor.V",
    "VE_Surveillance/Capteurs_Physiques/Voltage Sensor", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Capteurs_Physiques.Voltage_Sensor.n.v",
    "VE_Surveillance/Capteurs_Physiques/Voltage Sensor", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Voltage_Sensor.p.v",
    "VE_Surveillance/Capteurs_Physiques/Voltage Sensor", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Capteurs_Physiques.Voltage_Sensor_V", "VE_Surveillance/Capteurs_Physiques",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage_Sensor_V", } };

static NeModeData *s_major_mode_data = NULL;
static NeZCData s_zc_data[10] = { {
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 0U,
    "Capteurs_Physiques.Battery_Table_Based",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 1U,
    "Capteurs_Physiques.Battery_Table_Based",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_TRUE, }, {
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 2U,
    "Capteurs_Physiques.Battery_Table_Based",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 3U,
    "Capteurs_Physiques.Battery_Table_Based",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_TRUE, }, {
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 4U,
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q1",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 5U,
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q2",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 6U,
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q3",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 7U,
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q4",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 8U,
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q5",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 9U,
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q6",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    NE_ZC_TYPE_FALSE, } };

static NeRange s_range[10] = { {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData s_assert_data[24] = { {
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 0U,
    "Capteurs_Physiques.Battery_Table_Based",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted ampere-hour rating must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 1U,
    "Capteurs_Physiques.Battery_Table_Based",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted no-load voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 2U,
    "Capteurs_Physiques.Battery_Table_Based",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded, aged, and temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 3U,
    "Capteurs_Physiques.Battery_Table_Based",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "State of charge must be greater than or equal to minimum value of the Vector of state-of-charge values, SOC.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqual", }, {
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 4U,
    "Capteurs_Physiques.Battery_Table_Based",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 5U,
    "Capteurs_Physiques.Battery_Table_Based",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 6U,
    "Capteurs_Physiques.Battery_Table_Based",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 7U,
    "Capteurs_Physiques.Battery_Table_Based",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 8U,
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 9U,
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 10U,
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 11U,
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 12U,
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "VE_Surveillance/Capteurs_Physiques/PMSM", 1U, 13U,
    "Capteurs_Physiques.PMSM.pm_dq0_Xabc",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 14U,
    "Capteurs_Physiques.Battery_Table_Based",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 15U,
    "Capteurs_Physiques.Battery_Table_Based",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 16U,
    "Capteurs_Physiques.Battery_Table_Based",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:expr:analyze:RequireArgumentNonnegative", }, {
    "VE_Surveillance/Capteurs_Physiques/Battery (Table-Based)", 1U, 17U,
    "Capteurs_Physiques.Battery_Table_Based",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:expr:analyze:RequireArgumentNonnegative", }, {
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 18U,
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q1",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 19U,
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q2",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 20U,
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q3",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 21U,
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q4",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 22U,
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q5",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "VE_Surveillance/Capteurs_Physiques/Converter (Three-Phase)", 1U, 23U,
    "Capteurs_Physiques.Converter_Three_Phase.converter_Xabc.Q6",
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", } };

static NeRange s_assert_range[24] = { {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData *s_param_assert_data = NULL;
static NeRange *s_param_assert_range = NULL;
static NeAssertData *s_initial_assert_data = NULL;
static NeRange *s_initial_assert_range = NULL;
static NeRange s_equation_range[40] = { {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    46U, 5U, 46U, 12U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    46U, 9U, 46U, 17U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal_semiconductor_switch/ps.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+converter/six_pulse_gate_splitter.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeRange *s_cer_range = NULL;
static NeRange s_icr_range[7] = { {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/Polyspace/R2021a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+pmsm/abc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeParameterData *s_logical_parameter_data = NULL;
static NeParameterData *s_integer_parameter_data = NULL;
static NeParameterData *s_index_parameter_data = NULL;
static NeParameterData *s_real_parameter_data = NULL;
static real_T s_constant_table0[12] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
  0.0, 0.0, 0.0, 0.0 };

static real_T s_constant_table1[18] = { 340.0, 355.0, 368.0, 380.0, 392.0, 400.0,
  345.0, 360.0, 373.0, 385.0, 397.0, 405.0, 342.0, 357.0, 370.0, 382.0, 394.0,
  402.0 };

static real_T s_constant_table2[18] = { 0.08, 0.06, 0.05, 0.04, 0.04, 0.05, 0.06,
  0.05, 0.04, 0.03, 0.03, 0.04, 0.07, 0.055, 0.045, 0.035, 0.035, 0.045 };

static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM_P.mNumCol = 29;
  out->mM_P.mNumRow = 29;
  out->mM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  out->mM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    8);
  return out;
}

static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM.mN = 8;
  out->mM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 8);
  return out;
}

static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMM.mN = 8;
  out->mVMM.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    8);
  return out;
}

static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM_P.mNumCol = 29;
  out->mDXM_P.mNumRow = 8;
  out->mDXM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  out->mDXM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM.mN = 0;
  out->mDXM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDM_P.mNumCol = 0;
  out->mDDM_P.mNumRow = 8;
  out->mDDM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDDM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDM.mN = 0;
  out->mDDM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM_P.mNumCol = 0;
  out->mDUM_P.mNumRow = 8;
  out->mDUM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDUM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM.mN = 0;
  out->mDUM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM_P.mNumCol = 1;
  out->mDTM_P.mNumRow = 8;
  out->mDTM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM.mN = 0;
  out->mDTM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dpm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPM_P.mNumCol = 0;
  out->mDPM_P.mNumRow = 8;
  out->mDPM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDPM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dpm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPM.mN = 0;
  out->mDPM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_a_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA_P.mNumCol = 29;
  out->mA_P.mNumRow = 29;
  out->mA_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  out->mA_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    24);
  return out;
}

static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA.mN = 24;
  out->mA.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 24);
  return out;
}

static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB_P.mNumCol = 0;
  out->mB_P.mNumRow = 29;
  out->mB_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mB_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB.mN = 0;
  out->mB.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_c_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mC_P.mNumCol = 1;
  out->mC_P.mNumRow = 29;
  out->mC_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mC_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_c(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mC.mN = 0;
  out->mC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mF.mN = 29;
  out->mF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 29);
  return out;
}

static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMF.mN = 29;
  out->mVMF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    29);
  return out;
}

static NeDsMethodOutput *ds_output_vpf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVPF.mN = 29;
  out->mVPF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    29);
  return out;
}

static NeDsMethodOutput *ds_output_vsf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVSF.mN = 29;
  out->mVSF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    29);
  return out;
}

static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF.mN = 29;
  out->mSLF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    29);
  return out;
}

static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF0.mN = 29;
  out->mSLF0.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 29);
  return out;
}

static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF_P.mNumCol = 29;
  out->mDXF_P.mNumRow = 29;
  out->mDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  out->mDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    66);
  return out;
}

static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF.mN = 66;
  out->mDXF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 66);
  return out;
}

static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF_P.mNumCol = 0;
  out->mDUF_P.mNumRow = 29;
  out->mDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF.mN = 0;
  out->mDUF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF_P.mNumCol = 1;
  out->mDTF_P.mNumRow = 29;
  out->mDTF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF.mN = 0;
  out->mDTF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF_P.mNumCol = 0;
  out->mDDF_P.mNumRow = 29;
  out->mDDF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDDF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF.mN = 0;
  out->mDDF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dpdxf_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPDXF_P.mNumCol = 0;
  out->mDPDXF_P.mNumRow = 66;
  out->mDPDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDPDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dpdxf(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPDXF.mN = 0;
  out->mDPDXF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dwf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDWF_P.mNumCol = 0;
  out->mDWF_P.mNumRow = 29;
  out->mDWF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDWF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dwf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDWF.mN = 0;
  out->mDWF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUF_P.mNumCol = 0;
  out->mTDUF_P.mNumRow = 29;
  out->mTDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mTDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXF_P.mNumCol = 29;
  out->mTDXF_P.mNumRow = 29;
  out->mTDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  out->mTDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    96);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_P.mNumCol = 34;
  out->mDNF_P.mNumRow = 29;
  out->mDNF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    35);
  out->mDNF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    9);
  return out;
}

static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF.mN = 9;
  out->mDNF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 9);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_V_X.mN = 29;
  out->mDNF_V_X.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 29);
  return out;
}

static NeDsMethodOutput *ds_output_cer(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCER.mN = 0;
  out->mCER.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxcer(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXCER.mN = 0;
  out->mDXCER.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxcer_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXCER_P.mNumCol = 29;
  out->mDXCER_P.mNumRow = 0;
  out->mDXCER_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 30);
  out->mDXCER_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIC.mN = 29;
  out->mIC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 29);
  return out;
}

static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR.mN = 7;
  out->mICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 7);
  return out;
}

static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IM.mN = 7;
  out->mICR_IM.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    7);
  return out;
}

static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_ID.mN = 7;
  out->mICR_ID.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 7);
  return out;
}

static NeDsMethodOutput *ds_output_icr_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IL.mN = 7;
  out->mICR_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 7);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR.mN = 2;
  out->mDXICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 2);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR_P.mNumCol = 29;
  out->mDXICR_P.mNumRow = 7;
  out->mDXICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 30);
  out->mDXICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 2);
  return out;
}

static NeDsMethodOutput *ds_output_ddicr(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICR.mN = 0;
  out->mDDICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICR_P.mNumCol = 0;
  out->mDDICR_P.mNumRow = 7;
  out->mDDICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDDICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUICR_P.mNumCol = 0;
  out->mTDUICR_P.mNumRow = 7;
  out->mTDUICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mTDUICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_icrm_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICRM_P.mNumCol = 29;
  out->mICRM_P.mNumRow = 7;
  out->mICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  out->mICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_icrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICRM.mN = 0;
  out->mICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICRM_P.mNumCol = 29;
  out->mDXICRM_P.mNumRow = 0;
  out->mDXICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 30);
  out->mDXICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICRM.mN = 0;
  out->mDXICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICRM_P.mNumCol = 0;
  out->mDDICRM_P.mNumRow = 0;
  out->mDDICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDDICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICRM.mN = 0;
  out->mDDICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDUY_P.mNumCol = 0;
  out->mMDUY_P.mNumRow = 3;
  out->mMDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mMDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDXY_P.mNumCol = 29;
  out->mMDXY_P.mNumRow = 3;
  out->mMDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  out->mMDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUY_P.mNumCol = 0;
  out->mTDUY_P.mNumRow = 3;
  out->mTDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mTDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXY_P.mNumCol = 29;
  out->mTDXY_P.mNumRow = 3;
  out->mTDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  out->mTDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    3);
  return out;
}

static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mY.mN = 3;
  out->mY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 3);
  return out;
}

static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY_P.mNumCol = 29;
  out->mDXY_P.mNumRow = 3;
  out->mDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  out->mDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    3);
  return out;
}

static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY.mN = 3;
  out->mDXY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 3);
  return out;
}

static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY_P.mNumCol = 0;
  out->mDUY_P.mNumRow = 3;
  out->mDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY.mN = 0;
  out->mDUY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY_P.mNumCol = 1;
  out->mDTY_P.mNumRow = 3;
  out->mDTY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY.mN = 0;
  out->mDTY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMODE.mN = 10;
  out->mMODE.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    10);
  return out;
}

static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mZC.mN = 10;
  out->mZC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 10);
  return out;
}

static NeDsMethodOutput *ds_output_cache_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCACHE_R.mN = 0;
  out->mCACHE_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_cache_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCACHE_I.mN = 0;
  out->mCACHE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_R.mN = 0;
  out->mUPDATE_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_I.mN = 0;
  out->mUPDATE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_update2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE2_R.mN = 0;
  out->mUPDATE2_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE2_I.mN = 0;
  out->mUPDATE2_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK_R.mN = 0;
  out->mLOCK_R.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK_I.mN = 0;
  out->mLOCK_I.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK2_R.mN = 0;
  out->mLOCK2_R.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK2_I.mN = 0;
  out->mLOCK2_I.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFO.mN = 0;
  out->mSFO.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFP.mN = 0;
  out->mSFP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_R.mN = 0;
  out->mINIT_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_I.mN = 0;
  out->mINIT_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOG.mN = 224;
  out->mLOG.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 224);
  return out;
}

static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mASSERT.mN = 24;
  out->mASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    24);
  return out;
}

static NeDsMethodOutput *ds_output_passert(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mPASSERT.mN = 0;
  out->mPASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_iassert(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIASSERT.mN = 0;
  out->mIASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_T.mN = 0;
  out->mDEL_T.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V.mN = 0;
  out->mDEL_V.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V0.mN = 0;
  out->mDEL_V0.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_TMAX.mN = 0;
  out->mDEL_TMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT_P.mNumCol = 29;
  out->mDXDELT_P.mNumRow = 0;
  out->mDXDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 30);
  out->mDXDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT.mN = 0;
  out->mDXDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT_P.mNumCol = 0;
  out->mDUDELT_P.mNumRow = 0;
  out->mDUDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDUDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT.mN = 0;
  out->mDUDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT_P.mNumCol = 1;
  out->mDTDELT_P.mNumRow = 0;
  out->mDTDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 2);
  out->mDTDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT.mN = 0;
  out->mDTDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_EXP.mN = 221;
  out->mOBS_EXP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    221);
  return out;
}

static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ACT.mN = 221;
  out->mOBS_ACT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    221);
  return out;
}

static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ALL.mN = 221;
  out->mOBS_ALL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    221);
  return out;
}

static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_IL.mN = 221;
  out->mOBS_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 221);
  return out;
}

static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_L.mN = 0;
  out->mDP_L.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_I.mN = 0;
  out->mDP_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_J.mN = 0;
  out->mDP_J.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_R.mN = 0;
  out->mDP_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX.mN = 0;
  out->mQX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU.mN = 0;
  out->mQU.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT.mN = 0;
  out->mQT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1.mN = 0;
  out->mQ1.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX_P.mNumCol = 29;
  out->mQX_P.mNumRow = 29;
  out->mQX_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    30);
  out->mQX_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU_P.mNumCol = 0;
  out->mQU_P.mNumRow = 29;
  out->mQU_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mQU_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT_P.mNumCol = 1;
  out->mQT_P.mNumRow = 29;
  out->mQT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1_P.mNumCol = 1;
  out->mQ1_P.mNumRow = 29;
  out->mQ1_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQ1_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVAR_TOL.mN = 29;
  out->mVAR_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    29);
  return out;
}

static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mEQ_TOL.mN = 29;
  out->mEQ_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    29);
  return out;
}

static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLV.mN = 29;
  out->mLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    29);
  return out;
}

static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLV.mN = 29;
  out->mSLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    29);
  return out;
}

static NeDsMethodOutput *ds_output_nldv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mNLDV.mN = 29;
  out->mNLDV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 29);
  return out;
}

static NeDsMethodOutput *ds_output_sclv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSCLV.mN = 29;
  out->mSCLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 29);
  return out;
}

static NeDsMethodOutput *ds_output_imin(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMIN.mN = 29;
  out->mIMIN.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 29);
  return out;
}

static NeDsMethodOutput *ds_output_imax(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMAX.mN = 29;
  out->mIMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 29);
  return out;
}

static NeDsMethodOutput *ds_output_dimin(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDIMIN.mN = 0;
  out->mDIMIN.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dimax(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDIMAX.mN = 0;
  out->mDIMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static void release_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  if (--_ds->mRefCnt == 0) {
    _ds->mAlloc.mFreeFcn(&_ds->mAlloc, _ds);
  }
}

static void get_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  ++_ds->mRefCnt;
}

static NeDynamicSystem *diagnostics(NeDynamicSystem *ds, boolean_T kp)
{
  _NeDynamicSystem *_ds = (_NeDynamicSystem *)ds;
  (void) kp;
  ne_ds_get_reference(&_ds->mBase);
  return &_ds->mBase;
}

static void expand(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                   PmRealVector *out, boolean_T kp)
{
  (void)ds;
  (void)kp;
  memcpy(out->mX, in->mX.mX, sizeof(real_T)*out->mN);
}

static void rtpmap(const NeDynamicSystem * ds, const PmIntVector* inl, const
                   PmIntVector* ini, const PmIntVector* inj, const PmRealVector*
                   inr, PmIntVector* outl, PmIntVector* outi, PmIntVector* outj,
                   PmRealVector* outr)
{
  (void)ds;
  memcpy(outl->mX, inl->mX, sizeof(int32_T)*inl->mN);
  memcpy(outi->mX, ini->mX, sizeof(int32_T)*ini->mN);
  memcpy(outj->mX, inj->mX, sizeof(int32_T)*inj->mN);
  memcpy(outr->mX, inr->mX, sizeof(real_T)*inr->mN);
}

NeDynamicSystem *VE_Surveillance_48324b08_1_dae_ds(PmAllocator *allocator)
{
  NeDynamicSystem *ds;
  _NeDynamicSystem *_ds;
  static NeDsIoInfo output_info[3];

  /* allocate dynamic system data and extended data */
  _ds = (_NeDynamicSystem *)allocator->mCallocFcn( allocator, sizeof
    (_NeDynamicSystem), 1);
  _ds->mAlloc = *allocator;
  _ds->mRefCnt = 1;
  ds = &_ds->mBase;

  /* setup sizes */
  ds->mNumVariables = 29;
  ds->mNumDiscreteRealVariables = 0;
  ds->mNumDifferentialVariables = 8;
  ds->mNumEquations = 29;
  ds->mNumCEResiduals = 0;
  ds->mNumICResiduals = 7;
  ds->mNumModes = 10;
  ds->mNumMajorModes = 0;
  ds->mNumRealCache = 0;
  ds->mNumIntCache = 0;
  ds->mNumObservables = 168;
  ds->mNumObservableElements = 221;
  ds->mNumZcs = 10;
  ds->mNumAsserts = 24;
  ds->mNumAssertRanges = 24;
  ds->mNumParamAsserts = 0;
  ds->mNumParamAssertRanges = 0;
  ds->mNumInitialAsserts = 0;
  ds->mNumInitialAssertRanges = 0;
  ds->mNumRanges = 10;
  ds->mNumEquationRanges = 40;
  ds->mNumCERRanges = 0;
  ds->mNumICRRanges = 7;
  ds->mNumFundamentalSamples = 0;
  ds->mNumDelays = 0;
  ds->mNumLogicalParameters = 0;
  ds->mNumIntegerParameters = 0;
  ds->mNumIndexParameters = 0;
  ds->mNumRealParameters = 0;
  ds->mNumLogicalDerivedParameters = 0;
  ds->mNumIntegerDerivedParameters = 0;
  ds->mNumIndexDerivedParameters = 0;
  ds->mNumRealDerivedParameters = 0;
  ds->mIsOutputLinear = TRUE;
  ds->mIsOutputSwitchedLinear = TRUE;

  /* setup ios */
  ds->mNumIo[NE_INPUT_IO_TYPE] = 0;
  ds->mNumIo[NE_OUTPUT_IO_TYPE] = 3;
  output_info[0].mIdentifier = "Capteurs_Physiques.Current_Sensor_I";
  output_info[0].mM = 1;
  output_info[0].mN = 1;
  output_info[0].mName = "Capteurs_Physiques.Current_Sensor_I";
  output_info[0].mUnit = "A";
  output_info[1].mIdentifier =
    "Capteurs_Physiques.Ideal_Rotational_Motion_Sensor_W";
  output_info[1].mM = 1;
  output_info[1].mN = 1;
  output_info[1].mName = "Capteurs_Physiques.Ideal_Rotational_Motion_Sensor_W";
  output_info[1].mUnit = "rad/s";
  output_info[2].mIdentifier = "Capteurs_Physiques.Voltage_Sensor_V";
  output_info[2].mM = 1;
  output_info[2].mN = 1;
  output_info[2].mName = "Capteurs_Physiques.Voltage_Sensor_V";
  output_info[2].mUnit = "V";
  ds->mIo[NE_OUTPUT_IO_TYPE] = output_info;

  /* setup administration methods */
  ds->mReleaseReference = release_reference;
  ds->mGetReference = get_reference;
  ds->mDiagnosticsDsFcn = diagnostics;
  ds->mExpandFcn = expand;
  ds->mRtpMapFcn = rtpmap;
  ds->mMethods[NE_DS_METHOD_M_P] = VE_Surveillance_48324b08_1_ds_m_p;
  ds->mMakeOutput[NE_DS_METHOD_M_P] = ds_output_m_p;
  ds->mMethods[NE_DS_METHOD_M] = ds_m;
  ds->mMakeOutput[NE_DS_METHOD_M] = ds_output_m;
  ds->mMethods[NE_DS_METHOD_VMM] = ds_vmm;
  ds->mMakeOutput[NE_DS_METHOD_VMM] = ds_output_vmm;
  ds->mMethods[NE_DS_METHOD_DXM_P] = ds_dxm_p;
  ds->mMakeOutput[NE_DS_METHOD_DXM_P] = ds_output_dxm_p;
  ds->mMethods[NE_DS_METHOD_DXM] = ds_dxm;
  ds->mMakeOutput[NE_DS_METHOD_DXM] = ds_output_dxm;
  ds->mMethods[NE_DS_METHOD_DDM_P] = ds_ddm_p;
  ds->mMakeOutput[NE_DS_METHOD_DDM_P] = ds_output_ddm_p;
  ds->mMethods[NE_DS_METHOD_DDM] = ds_ddm;
  ds->mMakeOutput[NE_DS_METHOD_DDM] = ds_output_ddm;
  ds->mMethods[NE_DS_METHOD_DUM_P] = ds_dum_p;
  ds->mMakeOutput[NE_DS_METHOD_DUM_P] = ds_output_dum_p;
  ds->mMethods[NE_DS_METHOD_DUM] = ds_dum;
  ds->mMakeOutput[NE_DS_METHOD_DUM] = ds_output_dum;
  ds->mMethods[NE_DS_METHOD_DTM_P] = ds_dtm_p;
  ds->mMakeOutput[NE_DS_METHOD_DTM_P] = ds_output_dtm_p;
  ds->mMethods[NE_DS_METHOD_DTM] = ds_dtm;
  ds->mMakeOutput[NE_DS_METHOD_DTM] = ds_output_dtm;
  ds->mMethods[NE_DS_METHOD_DPM_P] = ds_dpm_p;
  ds->mMakeOutput[NE_DS_METHOD_DPM_P] = ds_output_dpm_p;
  ds->mMethods[NE_DS_METHOD_DPM] = ds_dpm;
  ds->mMakeOutput[NE_DS_METHOD_DPM] = ds_output_dpm;
  ds->mMethods[NE_DS_METHOD_A_P] = VE_Surveillance_48324b08_1_ds_a_p;
  ds->mMakeOutput[NE_DS_METHOD_A_P] = ds_output_a_p;
  ds->mMethods[NE_DS_METHOD_A] = ds_a;
  ds->mMakeOutput[NE_DS_METHOD_A] = ds_output_a;
  ds->mMethods[NE_DS_METHOD_B_P] = ds_b_p;
  ds->mMakeOutput[NE_DS_METHOD_B_P] = ds_output_b_p;
  ds->mMethods[NE_DS_METHOD_B] = ds_b;
  ds->mMakeOutput[NE_DS_METHOD_B] = ds_output_b;
  ds->mMethods[NE_DS_METHOD_C_P] = ds_c_p;
  ds->mMakeOutput[NE_DS_METHOD_C_P] = ds_output_c_p;
  ds->mMethods[NE_DS_METHOD_C] = ds_c;
  ds->mMakeOutput[NE_DS_METHOD_C] = ds_output_c;
  ds->mMethods[NE_DS_METHOD_F] = VE_Surveillance_48324b08_1_ds_f;
  ds->mMakeOutput[NE_DS_METHOD_F] = ds_output_f;
  ds->mMethods[NE_DS_METHOD_VMF] = ds_vmf;
  ds->mMakeOutput[NE_DS_METHOD_VMF] = ds_output_vmf;
  ds->mMethods[NE_DS_METHOD_VPF] = ds_vpf;
  ds->mMakeOutput[NE_DS_METHOD_VPF] = ds_output_vpf;
  ds->mMethods[NE_DS_METHOD_VSF] = ds_vsf;
  ds->mMakeOutput[NE_DS_METHOD_VSF] = ds_output_vsf;
  ds->mMethods[NE_DS_METHOD_SLF] = ds_slf;
  ds->mMakeOutput[NE_DS_METHOD_SLF] = ds_output_slf;
  ds->mMethods[NE_DS_METHOD_SLF0] = ds_slf0;
  ds->mMakeOutput[NE_DS_METHOD_SLF0] = ds_output_slf0;
  ds->mMethods[NE_DS_METHOD_DXF_P] = VE_Surveillance_48324b08_1_ds_dxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DXF_P] = ds_output_dxf_p;
  ds->mMethods[NE_DS_METHOD_DXF] = VE_Surveillance_48324b08_1_ds_dxf;
  ds->mMakeOutput[NE_DS_METHOD_DXF] = ds_output_dxf;
  ds->mMethods[NE_DS_METHOD_DUF_P] = ds_duf_p;
  ds->mMakeOutput[NE_DS_METHOD_DUF_P] = ds_output_duf_p;
  ds->mMethods[NE_DS_METHOD_DUF] = ds_duf;
  ds->mMakeOutput[NE_DS_METHOD_DUF] = ds_output_duf;
  ds->mMethods[NE_DS_METHOD_DTF_P] = ds_dtf_p;
  ds->mMakeOutput[NE_DS_METHOD_DTF_P] = ds_output_dtf_p;
  ds->mMethods[NE_DS_METHOD_DTF] = ds_dtf;
  ds->mMakeOutput[NE_DS_METHOD_DTF] = ds_output_dtf;
  ds->mMethods[NE_DS_METHOD_DDF_P] = ds_ddf_p;
  ds->mMakeOutput[NE_DS_METHOD_DDF_P] = ds_output_ddf_p;
  ds->mMethods[NE_DS_METHOD_DDF] = ds_ddf;
  ds->mMakeOutput[NE_DS_METHOD_DDF] = ds_output_ddf;
  ds->mMethods[NE_DS_METHOD_DPDXF_P] = ds_dpdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DPDXF_P] = ds_output_dpdxf_p;
  ds->mMethods[NE_DS_METHOD_DPDXF] = ds_dpdxf;
  ds->mMakeOutput[NE_DS_METHOD_DPDXF] = ds_output_dpdxf;
  ds->mMethods[NE_DS_METHOD_DWF_P] = ds_dwf_p;
  ds->mMakeOutput[NE_DS_METHOD_DWF_P] = ds_output_dwf_p;
  ds->mMethods[NE_DS_METHOD_DWF] = ds_dwf;
  ds->mMakeOutput[NE_DS_METHOD_DWF] = ds_output_dwf;
  ds->mMethods[NE_DS_METHOD_TDUF_P] = ds_tduf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUF_P] = ds_output_tduf_p;
  ds->mMethods[NE_DS_METHOD_TDXF_P] = VE_Surveillance_48324b08_1_ds_tdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXF_P] = ds_output_tdxf_p;
  ds->mMethods[NE_DS_METHOD_DNF_P] = VE_Surveillance_48324b08_1_ds_dnf_p;
  ds->mMakeOutput[NE_DS_METHOD_DNF_P] = ds_output_dnf_p;
  ds->mMethods[NE_DS_METHOD_DNF] = ds_dnf;
  ds->mMakeOutput[NE_DS_METHOD_DNF] = ds_output_dnf;
  ds->mMethods[NE_DS_METHOD_DNF_V_X] = ds_dnf_v_x;
  ds->mMakeOutput[NE_DS_METHOD_DNF_V_X] = ds_output_dnf_v_x;
  ds->mMethods[NE_DS_METHOD_CER] = ds_cer;
  ds->mMakeOutput[NE_DS_METHOD_CER] = ds_output_cer;
  ds->mMethods[NE_DS_METHOD_DXCER] = ds_dxcer;
  ds->mMakeOutput[NE_DS_METHOD_DXCER] = ds_output_dxcer;
  ds->mMethods[NE_DS_METHOD_DXCER_P] = ds_dxcer_p;
  ds->mMakeOutput[NE_DS_METHOD_DXCER_P] = ds_output_dxcer_p;
  ds->mMethods[NE_DS_METHOD_IC] = ds_ic;
  ds->mMakeOutput[NE_DS_METHOD_IC] = ds_output_ic;
  ds->mMethods[NE_DS_METHOD_ICR] = ds_icr;
  ds->mMakeOutput[NE_DS_METHOD_ICR] = ds_output_icr;
  ds->mMethods[NE_DS_METHOD_ICR_IM] = ds_icr_im;
  ds->mMakeOutput[NE_DS_METHOD_ICR_IM] = ds_output_icr_im;
  ds->mMethods[NE_DS_METHOD_ICR_ID] = ds_icr_id;
  ds->mMakeOutput[NE_DS_METHOD_ICR_ID] = ds_output_icr_id;
  ds->mMethods[NE_DS_METHOD_ICR_IL] = ds_icr_il;
  ds->mMakeOutput[NE_DS_METHOD_ICR_IL] = ds_output_icr_il;
  ds->mMethods[NE_DS_METHOD_DXICR] = ds_dxicr;
  ds->mMakeOutput[NE_DS_METHOD_DXICR] = ds_output_dxicr;
  ds->mMethods[NE_DS_METHOD_DXICR_P] = ds_dxicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICR_P] = ds_output_dxicr_p;
  ds->mMethods[NE_DS_METHOD_DDICR] = ds_ddicr;
  ds->mMakeOutput[NE_DS_METHOD_DDICR] = ds_output_ddicr;
  ds->mMethods[NE_DS_METHOD_DDICR_P] = ds_ddicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DDICR_P] = ds_output_ddicr_p;
  ds->mMethods[NE_DS_METHOD_TDUICR_P] = ds_tduicr_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUICR_P] = ds_output_tduicr_p;
  ds->mMethods[NE_DS_METHOD_ICRM_P] = ds_icrm_p;
  ds->mMakeOutput[NE_DS_METHOD_ICRM_P] = ds_output_icrm_p;
  ds->mMethods[NE_DS_METHOD_ICRM] = ds_icrm;
  ds->mMakeOutput[NE_DS_METHOD_ICRM] = ds_output_icrm;
  ds->mMethods[NE_DS_METHOD_DXICRM_P] = ds_dxicrm_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICRM_P] = ds_output_dxicrm_p;
  ds->mMethods[NE_DS_METHOD_DXICRM] = ds_dxicrm;
  ds->mMakeOutput[NE_DS_METHOD_DXICRM] = ds_output_dxicrm;
  ds->mMethods[NE_DS_METHOD_DDICRM_P] = ds_ddicrm_p;
  ds->mMakeOutput[NE_DS_METHOD_DDICRM_P] = ds_output_ddicrm_p;
  ds->mMethods[NE_DS_METHOD_DDICRM] = ds_ddicrm;
  ds->mMakeOutput[NE_DS_METHOD_DDICRM] = ds_output_ddicrm;
  ds->mMethods[NE_DS_METHOD_MDUY_P] = ds_mduy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDUY_P] = ds_output_mduy_p;
  ds->mMethods[NE_DS_METHOD_MDXY_P] = ds_mdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDXY_P] = ds_output_mdxy_p;
  ds->mMethods[NE_DS_METHOD_TDUY_P] = ds_tduy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUY_P] = ds_output_tduy_p;
  ds->mMethods[NE_DS_METHOD_TDXY_P] = ds_tdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXY_P] = ds_output_tdxy_p;
  ds->mMethods[NE_DS_METHOD_Y] = ds_y;
  ds->mMakeOutput[NE_DS_METHOD_Y] = ds_output_y;
  ds->mMethods[NE_DS_METHOD_DXY_P] = ds_dxy_p;
  ds->mMakeOutput[NE_DS_METHOD_DXY_P] = ds_output_dxy_p;
  ds->mMethods[NE_DS_METHOD_DXY] = ds_dxy;
  ds->mMakeOutput[NE_DS_METHOD_DXY] = ds_output_dxy;
  ds->mMethods[NE_DS_METHOD_DUY_P] = ds_duy_p;
  ds->mMakeOutput[NE_DS_METHOD_DUY_P] = ds_output_duy_p;
  ds->mMethods[NE_DS_METHOD_DUY] = ds_duy;
  ds->mMakeOutput[NE_DS_METHOD_DUY] = ds_output_duy;
  ds->mMethods[NE_DS_METHOD_DTY_P] = ds_dty_p;
  ds->mMakeOutput[NE_DS_METHOD_DTY_P] = ds_output_dty_p;
  ds->mMethods[NE_DS_METHOD_DTY] = ds_dty;
  ds->mMakeOutput[NE_DS_METHOD_DTY] = ds_output_dty;
  ds->mMethods[NE_DS_METHOD_MODE] = VE_Surveillance_48324b08_1_ds_mode;
  ds->mMakeOutput[NE_DS_METHOD_MODE] = ds_output_mode;
  ds->mMethods[NE_DS_METHOD_ZC] = VE_Surveillance_48324b08_1_ds_zc;
  ds->mMakeOutput[NE_DS_METHOD_ZC] = ds_output_zc;
  ds->mMethods[NE_DS_METHOD_CACHE_R] = ds_cache_r;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_R] = ds_output_cache_r;
  ds->mMethods[NE_DS_METHOD_CACHE_I] = ds_cache_i;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_I] = ds_output_cache_i;
  ds->mMethods[NE_DS_METHOD_UPDATE_R] = ds_update_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_R] = ds_output_update_r;
  ds->mMethods[NE_DS_METHOD_UPDATE_I] = ds_update_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_I] = ds_output_update_i;
  ds->mMethods[NE_DS_METHOD_UPDATE2_R] = ds_update2_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE2_R] = ds_output_update2_r;
  ds->mMethods[NE_DS_METHOD_UPDATE2_I] = ds_update2_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE2_I] = ds_output_update2_i;
  ds->mMethods[NE_DS_METHOD_LOCK_R] = ds_lock_r;
  ds->mMakeOutput[NE_DS_METHOD_LOCK_R] = ds_output_lock_r;
  ds->mMethods[NE_DS_METHOD_LOCK_I] = ds_lock_i;
  ds->mMakeOutput[NE_DS_METHOD_LOCK_I] = ds_output_lock_i;
  ds->mMethods[NE_DS_METHOD_LOCK2_R] = ds_lock2_r;
  ds->mMakeOutput[NE_DS_METHOD_LOCK2_R] = ds_output_lock2_r;
  ds->mMethods[NE_DS_METHOD_LOCK2_I] = ds_lock2_i;
  ds->mMakeOutput[NE_DS_METHOD_LOCK2_I] = ds_output_lock2_i;
  ds->mMethods[NE_DS_METHOD_SFO] = ds_sfo;
  ds->mMakeOutput[NE_DS_METHOD_SFO] = ds_output_sfo;
  ds->mMethods[NE_DS_METHOD_SFP] = ds_sfp;
  ds->mMakeOutput[NE_DS_METHOD_SFP] = ds_output_sfp;
  ds->mMethods[NE_DS_METHOD_INIT_R] = ds_init_r;
  ds->mMakeOutput[NE_DS_METHOD_INIT_R] = ds_output_init_r;
  ds->mMethods[NE_DS_METHOD_INIT_I] = ds_init_i;
  ds->mMakeOutput[NE_DS_METHOD_INIT_I] = ds_output_init_i;
  ds->mMethods[NE_DS_METHOD_LOG] = VE_Surveillance_48324b08_1_ds_log;
  ds->mMakeOutput[NE_DS_METHOD_LOG] = ds_output_log;
  ds->mMethods[NE_DS_METHOD_ASSERT] = VE_Surveillance_48324b08_1_ds_assert;
  ds->mMakeOutput[NE_DS_METHOD_ASSERT] = ds_output_assert;
  ds->mMethods[NE_DS_METHOD_PASSERT] = ds_passert;
  ds->mMakeOutput[NE_DS_METHOD_PASSERT] = ds_output_passert;
  ds->mMethods[NE_DS_METHOD_IASSERT] = ds_iassert;
  ds->mMakeOutput[NE_DS_METHOD_IASSERT] = ds_output_iassert;
  ds->mMethods[NE_DS_METHOD_DEL_T] = ds_del_t;
  ds->mMakeOutput[NE_DS_METHOD_DEL_T] = ds_output_del_t;
  ds->mMethods[NE_DS_METHOD_DEL_V] = ds_del_v;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V] = ds_output_del_v;
  ds->mMethods[NE_DS_METHOD_DEL_V0] = ds_del_v0;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V0] = ds_output_del_v0;
  ds->mMethods[NE_DS_METHOD_DEL_TMAX] = ds_del_tmax;
  ds->mMakeOutput[NE_DS_METHOD_DEL_TMAX] = ds_output_del_tmax;
  ds->mMethods[NE_DS_METHOD_DXDELT_P] = ds_dxdelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT_P] = ds_output_dxdelt_p;
  ds->mMethods[NE_DS_METHOD_DXDELT] = ds_dxdelt;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT] = ds_output_dxdelt;
  ds->mMethods[NE_DS_METHOD_DUDELT_P] = ds_dudelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT_P] = ds_output_dudelt_p;
  ds->mMethods[NE_DS_METHOD_DUDELT] = ds_dudelt;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT] = ds_output_dudelt;
  ds->mMethods[NE_DS_METHOD_DTDELT_P] = ds_dtdelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT_P] = ds_output_dtdelt_p;
  ds->mMethods[NE_DS_METHOD_DTDELT] = ds_dtdelt;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT] = ds_output_dtdelt;
  ds->mMethods[NE_DS_METHOD_OBS_EXP] = VE_Surveillance_48324b08_1_ds_obs_exp;
  ds->mMakeOutput[NE_DS_METHOD_OBS_EXP] = ds_output_obs_exp;
  ds->mMethods[NE_DS_METHOD_OBS_ACT] = VE_Surveillance_48324b08_1_ds_obs_act;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ACT] = ds_output_obs_act;
  ds->mMethods[NE_DS_METHOD_OBS_ALL] = VE_Surveillance_48324b08_1_ds_obs_all;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ALL] = ds_output_obs_all;
  ds->mMethods[NE_DS_METHOD_OBS_IL] = VE_Surveillance_48324b08_1_ds_obs_il;
  ds->mMakeOutput[NE_DS_METHOD_OBS_IL] = ds_output_obs_il;
  ds->mMethods[NE_DS_METHOD_DP_L] = ds_dp_l;
  ds->mMakeOutput[NE_DS_METHOD_DP_L] = ds_output_dp_l;
  ds->mMethods[NE_DS_METHOD_DP_I] = ds_dp_i;
  ds->mMakeOutput[NE_DS_METHOD_DP_I] = ds_output_dp_i;
  ds->mMethods[NE_DS_METHOD_DP_J] = ds_dp_j;
  ds->mMakeOutput[NE_DS_METHOD_DP_J] = ds_output_dp_j;
  ds->mMethods[NE_DS_METHOD_DP_R] = ds_dp_r;
  ds->mMakeOutput[NE_DS_METHOD_DP_R] = ds_output_dp_r;
  ds->mMethods[NE_DS_METHOD_QX] = ds_qx;
  ds->mMakeOutput[NE_DS_METHOD_QX] = ds_output_qx;
  ds->mMethods[NE_DS_METHOD_QU] = ds_qu;
  ds->mMakeOutput[NE_DS_METHOD_QU] = ds_output_qu;
  ds->mMethods[NE_DS_METHOD_QT] = ds_qt;
  ds->mMakeOutput[NE_DS_METHOD_QT] = ds_output_qt;
  ds->mMethods[NE_DS_METHOD_Q1] = ds_q1;
  ds->mMakeOutput[NE_DS_METHOD_Q1] = ds_output_q1;
  ds->mMethods[NE_DS_METHOD_QX_P] = ds_qx_p;
  ds->mMakeOutput[NE_DS_METHOD_QX_P] = ds_output_qx_p;
  ds->mMethods[NE_DS_METHOD_QU_P] = ds_qu_p;
  ds->mMakeOutput[NE_DS_METHOD_QU_P] = ds_output_qu_p;
  ds->mMethods[NE_DS_METHOD_QT_P] = ds_qt_p;
  ds->mMakeOutput[NE_DS_METHOD_QT_P] = ds_output_qt_p;
  ds->mMethods[NE_DS_METHOD_Q1_P] = ds_q1_p;
  ds->mMakeOutput[NE_DS_METHOD_Q1_P] = ds_output_q1_p;
  ds->mMethods[NE_DS_METHOD_VAR_TOL] = ds_var_tol;
  ds->mMakeOutput[NE_DS_METHOD_VAR_TOL] = ds_output_var_tol;
  ds->mMethods[NE_DS_METHOD_EQ_TOL] = ds_eq_tol;
  ds->mMakeOutput[NE_DS_METHOD_EQ_TOL] = ds_output_eq_tol;
  ds->mMethods[NE_DS_METHOD_LV] = ds_lv;
  ds->mMakeOutput[NE_DS_METHOD_LV] = ds_output_lv;
  ds->mMethods[NE_DS_METHOD_SLV] = ds_slv;
  ds->mMakeOutput[NE_DS_METHOD_SLV] = ds_output_slv;
  ds->mMethods[NE_DS_METHOD_NLDV] = ds_nldv;
  ds->mMakeOutput[NE_DS_METHOD_NLDV] = ds_output_nldv;
  ds->mMethods[NE_DS_METHOD_SCLV] = ds_sclv;
  ds->mMakeOutput[NE_DS_METHOD_SCLV] = ds_output_sclv;
  ds->mMethods[NE_DS_METHOD_IMIN] = VE_Surveillance_48324b08_1_ds_imin;
  ds->mMakeOutput[NE_DS_METHOD_IMIN] = ds_output_imin;
  ds->mMethods[NE_DS_METHOD_IMAX] = VE_Surveillance_48324b08_1_ds_imax;
  ds->mMakeOutput[NE_DS_METHOD_IMAX] = ds_output_imax;
  ds->mMethods[NE_DS_METHOD_DIMIN] = ds_dimin;
  ds->mMakeOutput[NE_DS_METHOD_DIMIN] = ds_output_dimin;
  ds->mMethods[NE_DS_METHOD_DIMAX] = ds_dimax;
  ds->mMakeOutput[NE_DS_METHOD_DIMAX] = ds_output_dimax;

  /* equation data */
  ds->mEquationData = s_equation_data;

  /* cer data */
  ds->mCERData = s_cer_data;

  /* icr data */
  ds->mICRData = s_icr_data;

  /* continuous variable data */
  ds->mVariableData = s_variable_data;

  /* discrete variable data */
  ds->mDiscreteData = s_discrete_data;

  /* observable data */
  ds->mObservableData = s_observable_data;

  /* major mode data */
  ds->mMajorModeData = s_major_mode_data;

  /* zc data */
  ds->mZCData = s_zc_data;

  /* ranges */
  ds->mRanges = s_range;

  /* assert data */
  ds->mAssertData = s_assert_data;

  /* assert ranges */
  ds->mAssertRanges = s_assert_range;

  /* param assert data */
  ds->mParamAssertData = s_param_assert_data;

  /* param assert ranges */
  ds->mParamAssertRanges = s_param_assert_range;

  /* initial assert data */
  ds->mInitialAssertData = s_initial_assert_data;

  /* initial assert ranges */
  ds->mInitialAssertRanges = s_initial_assert_range;

  /* equation ranges */
  ds->mEquationRanges = s_equation_range;

  /* cer ranges */
  ds->mCERRanges = s_cer_range;

  /* icr ranges */
  ds->mICRRanges = s_icr_range;

  /* parameters */
  ds->mLogicalParameters = s_logical_parameter_data;
  ds->mIntegerParameters = s_integer_parameter_data;
  ds->mIndexParameters = s_index_parameter_data;
  ds->mRealParameters = s_real_parameter_data;

  /* constant tables */
  _ds->mTable0 = s_constant_table0;
  _ds->mTable1 = s_constant_table1;
  _ds->mTable2 = s_constant_table2;
  return (NeDynamicSystem *)_ds;
}

static int32_T ds_passert (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_iassert (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_cer (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dxcer (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dxcer_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDXCER_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  out.mJc[26] = 0;
  out.mJc[27] = 0;
  out.mJc[28] = 0;
  out.mJc[29] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_del_v (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_del_v0 (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_del_tmax (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_del_t (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dxdelt (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dxdelt_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDXDELT_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  out.mJc[26] = 0;
  out.mJc[27] = 0;
  out.mJc[28] = 0;
  out.mJc[29] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dudelt (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dudelt_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDUDELT_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dtdelt (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dtdelt_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDTDELT_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_cache_r (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_init_r (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_update_r (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_lock_r (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_cache_i (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_init_i (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_update_i (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_lock_i (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_update2_r (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_lock2_r (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_update2_i (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_lock2_i (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_sfp (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_sfo (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_duf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_duf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDUF_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dtf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dtf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDTF_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ddf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ddf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDDF_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_a (const NeDynamicSystem *LC, const NeDynamicSystemInput *t18,
                     NeDsMethodOutput *t19)
{
  PmRealVector out;
  (void)t18;
  (void)LC;
  out = t19->mA;
  out.mX[0] = 1.0;
  out.mX[1] = -1.0;
  out.mX[2] = -0.0;
  out.mX[3] = 0.039;
  out.mX[4] = 0.0195;
  out.mX[5] = 0.022516660498395406;
  out.mX[6] = 1.0;
  out.mX[7] = 1.0;
  out.mX[8] = -0.0;
  out.mX[9] = -1.0;
  out.mX[10] = 0.025;
  out.mX[11] = 1.0;
  out.mX[12] = 1.0;
  out.mX[13] = 1.0;
  out.mX[14] = 1.0E-12;
  out.mX[15] = -1.0;
  out.mX[16] = -1.0;
  out.mX[17] = -1.0;
  out.mX[18] = 1.0;
  out.mX[19] = -1.0;
  out.mX[20] = 1.0;
  out.mX[21] = -1.0;
  out.mX[22] = 1.0;
  out.mX[23] = 1.0;
  (void)LC;
  (void)t19;
  return 0;
}

static int32_T ds_b (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_b_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mB_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_c (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_c_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mC_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_tduf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mTDUF_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dwf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dwf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDWF_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dpdxf (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dpdxf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDPDXF_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 66ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_vmf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mVMF;
  out.mX[0] = false;
  out.mX[1] = true;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = true;
  out.mX[5] = true;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = true;
  out.mX[9] = true;
  out.mX[10] = true;
  out.mX[11] = true;
  out.mX[12] = true;
  out.mX[13] = true;
  out.mX[14] = true;
  out.mX[15] = true;
  out.mX[16] = true;
  out.mX[17] = true;
  out.mX[18] = true;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = true;
  out.mX[26] = true;
  out.mX[27] = true;
  out.mX[28] = true;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_slf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mSLF;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = false;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dnf (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t15, NeDsMethodOutput *t16)
{
  PmRealVector out;
  real_T X_idx_5;
  real_T X_idx_6;
  real_T X_idx_7;
  (void)LC;
  X_idx_5 = t15->mX.mX[5];
  X_idx_6 = t15->mX.mX[6];
  X_idx_7 = t15->mX.mX[7];
  out = t16->mDNF;
  out.mX[0] = -((X_idx_6 + X_idx_7 * 0.0) + X_idx_5 * 0.0);
  out.mX[1] = -((X_idx_6 * 0.0 + X_idx_7) + X_idx_5 * 0.0);
  out.mX[2] = -((X_idx_6 * 0.0 + X_idx_7 * 0.0) + X_idx_5);
  out.mX[3] = -((X_idx_6 + X_idx_7 * 0.0) + X_idx_5 * 0.0);
  out.mX[4] = -((X_idx_6 * 0.0 + X_idx_7) + X_idx_5 * 0.0);
  out.mX[5] = -((X_idx_6 * 0.0 + X_idx_7 * 0.0) + X_idx_5);
  out.mX[6] = -((X_idx_6 + X_idx_7 * 0.0) + X_idx_5 * 0.0);
  out.mX[7] = -((X_idx_6 * 0.0 + X_idx_7) + X_idx_5 * 0.0);
  out.mX[8] = -((X_idx_6 * 0.0 + X_idx_7 * 0.0) + X_idx_5);
  (void)LC;
  (void)t16;
  return 0;
}

static int32_T ds_dnf_v_x (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mDNF_V_X;
  out.mX[0] = true;
  out.mX[1] = true;
  out.mX[2] = true;
  out.mX[3] = true;
  out.mX[4] = true;
  out.mX[5] = true;
  out.mX[6] = true;
  out.mX[7] = true;
  out.mX[8] = true;
  out.mX[9] = true;
  out.mX[10] = true;
  out.mX[11] = true;
  out.mX[12] = true;
  out.mX[13] = true;
  out.mX[14] = true;
  out.mX[15] = true;
  out.mX[16] = true;
  out.mX[17] = true;
  out.mX[18] = true;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = true;
  out.mX[26] = true;
  out.mX[27] = true;
  out.mX[28] = true;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_slf0 (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mSLF0;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = false;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_vpf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mVPF;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = false;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_vsf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mVSF;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = false;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ic (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  (void)LC;
  out = t2->mIC;
  out.mX[0] = 0.0;
  out.mX[1] = 0.0;
  out.mX[2] = 0.0;
  out.mX[3] = 0.0;
  out.mX[4] = 0.0;
  out.mX[5] = 0.0;
  out.mX[6] = 0.0;
  out.mX[7] = 0.0;
  out.mX[8] = 0.0;
  out.mX[9] = 0.0;
  out.mX[10] = 1.0;
  out.mX[11] = 1.0;
  out.mX[12] = 1.0;
  out.mX[13] = 3600.0;
  out.mX[14] = 0.0;
  out.mX[15] = 0.0;
  out.mX[16] = 0.0;
  out.mX[17] = 0.0;
  out.mX[18] = 0.0;
  out.mX[19] = 0.0;
  out.mX[20] = 0.0;
  out.mX[21] = 0.0;
  out.mX[22] = 0.0;
  out.mX[23] = 0.0;
  out.mX[24] = 0.0;
  out.mX[25] = 0.0;
  out.mX[26] = 0.0;
  out.mX[27] = 0.0;
  out.mX[28] = 0.0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_icr (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T X_idx_2;
  real_T X_idx_4;
  (void)LC;
  X_idx_2 = t1->mX.mX[2];
  X_idx_4 = t1->mX.mX[4];
  out = t2->mICR;
  out.mX[0] = 0.0;
  out.mX[1] = 0.0;
  out.mX[2] = 0.0;
  out.mX[3] = 0.0;
  out.mX[4] = 0.0;
  out.mX[5] = X_idx_4;
  out.mX[6] = X_idx_2;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_icr_im (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmIntVector out;
  (void)t1;
  (void)LC;
  out = t2->mICR_IM;
  out.mX[0] = 3;
  out.mX[1] = 3;
  out.mX[2] = 3;
  out.mX[3] = 3;
  out.mX[4] = 3;
  out.mX[5] = 3;
  out.mX[6] = 3;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_icr_id (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mICR_ID;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_icr_il (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mICR_IL;
  out.mX[0] = true;
  out.mX[1] = true;
  out.mX[2] = true;
  out.mX[3] = true;
  out.mX[4] = true;
  out.mX[5] = true;
  out.mX[6] = true;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dxicr (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  (void)LC;
  out = t2->mDXICR;
  out.mX[0] = 1.0;
  out.mX[1] = 1.0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dxicr_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDXICR_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 7ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 1;
  out.mJc[4] = 1;
  out.mJc[5] = 2;
  out.mJc[6] = 2;
  out.mJc[7] = 2;
  out.mJc[8] = 2;
  out.mJc[9] = 2;
  out.mJc[10] = 2;
  out.mJc[11] = 2;
  out.mJc[12] = 2;
  out.mJc[13] = 2;
  out.mJc[14] = 2;
  out.mJc[15] = 2;
  out.mJc[16] = 2;
  out.mJc[17] = 2;
  out.mJc[18] = 2;
  out.mJc[19] = 2;
  out.mJc[20] = 2;
  out.mJc[21] = 2;
  out.mJc[22] = 2;
  out.mJc[23] = 2;
  out.mJc[24] = 2;
  out.mJc[25] = 2;
  out.mJc[26] = 2;
  out.mJc[27] = 2;
  out.mJc[28] = 2;
  out.mJc[29] = 2;
  out.mIr[0] = 6;
  out.mIr[1] = 5;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ddicr (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ddicr_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDDICR_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 7ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_tduicr_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mTDUICR_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 7ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_icrm (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_icrm_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mICRM_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 7ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  out.mJc[26] = 0;
  out.mJc[27] = 0;
  out.mJc[28] = 0;
  out.mJc[29] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dxicrm (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dxicrm_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDXICRM_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  out.mJc[26] = 0;
  out.mJc[27] = 0;
  out.mJc[28] = 0;
  out.mJc[29] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ddicrm (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ddicrm_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDDICRM_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dimin (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dimax (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_m (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  (void)LC;
  out = t2->mM;
  out.mX[0] = 1.0;
  out.mX[1] = 1.0;
  out.mX[2] = 0.01;
  out.mX[3] = 1.0;
  out.mX[4] = -1.0;
  out.mX[5] = -0.00048000000000000007;
  out.mX[6] = -0.000285;
  out.mX[7] = -0.00043301270189221935;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dxm (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dxm_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDXM_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 8ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  out.mJc[26] = 0;
  out.mJc[27] = 0;
  out.mJc[28] = 0;
  out.mJc[29] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ddm (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ddm_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDDM_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 8ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dum (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dum_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDUM_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 8ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dtm (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dtm_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDTM_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 8ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dpm (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dpm_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDPM_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 8ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_vmm (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mVMM;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dp_l (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dp_i (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dp_j (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dp_r (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_qx (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_qu (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_qt (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_q1 (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_qx_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mQX_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  out.mJc[26] = 0;
  out.mJc[27] = 0;
  out.mJc[28] = 0;
  out.mJc[29] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_qu_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mQU_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_qt_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mQT_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_q1_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mQ1_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 29ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_var_tol (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  (void)LC;
  out = t2->mVAR_TOL;
  out.mX[0] = 1.0E-5;
  out.mX[1] = 1.0E-5;
  out.mX[2] = 1.0E-5;
  out.mX[3] = 1.0E-5;
  out.mX[4] = 1.0E-5;
  out.mX[5] = 1.0E-5;
  out.mX[6] = 1.0E-5;
  out.mX[7] = 1.0E-5;
  out.mX[8] = 1.0E-5;
  out.mX[9] = 1.0E-5;
  out.mX[10] = 1.0E-5;
  out.mX[11] = 1.0E-5;
  out.mX[12] = 1.0E-5;
  out.mX[13] = 1.0E-5;
  out.mX[14] = 1.0E-5;
  out.mX[15] = 1.0E-5;
  out.mX[16] = 1.0E-5;
  out.mX[17] = 1.0E-5;
  out.mX[18] = 1.0E-5;
  out.mX[19] = 1.0E-5;
  out.mX[20] = 1.0E-5;
  out.mX[21] = 1.0E-5;
  out.mX[22] = 1.0E-5;
  out.mX[23] = 1.0E-5;
  out.mX[24] = 1.0E-5;
  out.mX[25] = 1.0E-5;
  out.mX[26] = 1.0E-5;
  out.mX[27] = 1.0E-5;
  out.mX[28] = 1.0E-5;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_eq_tol (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  (void)LC;
  out = t2->mEQ_TOL;
  out.mX[0] = 1.0E-5;
  out.mX[1] = 1.0E-5;
  out.mX[2] = 1.0E-5;
  out.mX[3] = 1.0E-5;
  out.mX[4] = 1.0E-5;
  out.mX[5] = 1.0E-5;
  out.mX[6] = 1.0E-5;
  out.mX[7] = 1.0E-5;
  out.mX[8] = 1.0E-5;
  out.mX[9] = 1.0E-5;
  out.mX[10] = 1.0E-5;
  out.mX[11] = 1.0E-5;
  out.mX[12] = 1.0E-5;
  out.mX[13] = 1.0E-5;
  out.mX[14] = 1.0E-5;
  out.mX[15] = 1.0E-5;
  out.mX[16] = 1.0E-5;
  out.mX[17] = 1.0E-5;
  out.mX[18] = 1.0E-5;
  out.mX[19] = 1.0E-5;
  out.mX[20] = 1.0E-5;
  out.mX[21] = 1.0E-5;
  out.mX[22] = 1.0E-5;
  out.mX[23] = 1.0E-5;
  out.mX[24] = 1.0E-5;
  out.mX[25] = 1.0E-5;
  out.mX[26] = 1.0E-5;
  out.mX[27] = 1.0E-5;
  out.mX[28] = 1.0E-5;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_lv (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mLV;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = false;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_slv (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mSLV;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = false;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_nldv (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mNLDV;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = true;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = false;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_sclv (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mSCLV;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = false;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_y (const NeDynamicSystem *LC, const NeDynamicSystemInput *t2,
                     NeDsMethodOutput *t3)
{
  PmRealVector out;
  real_T X_idx_2;
  real_T X_idx_8;
  real_T X_idx_9;
  (void)LC;
  X_idx_2 = t2->mX.mX[2];
  X_idx_8 = t2->mX.mX[8];
  X_idx_9 = t2->mX.mX[9];
  out = t3->mY;
  out.mX[0] = -X_idx_8;
  out.mX[1] = X_idx_2;
  out.mX[2] = -X_idx_9 / -1.0;
  (void)LC;
  (void)t3;
  return 0;
}

static int32_T ds_dxy (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  (void)LC;
  out = t2->mDXY;
  out.mX[0] = 1.0;
  out.mX[1] = -1.0;
  out.mX[2] = 1.0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dxy_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDXY_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 3ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 1;
  out.mJc[4] = 1;
  out.mJc[5] = 1;
  out.mJc[6] = 1;
  out.mJc[7] = 1;
  out.mJc[8] = 1;
  out.mJc[9] = 2;
  out.mJc[10] = 3;
  out.mJc[11] = 3;
  out.mJc[12] = 3;
  out.mJc[13] = 3;
  out.mJc[14] = 3;
  out.mJc[15] = 3;
  out.mJc[16] = 3;
  out.mJc[17] = 3;
  out.mJc[18] = 3;
  out.mJc[19] = 3;
  out.mJc[20] = 3;
  out.mJc[21] = 3;
  out.mJc[22] = 3;
  out.mJc[23] = 3;
  out.mJc[24] = 3;
  out.mJc[25] = 3;
  out.mJc[26] = 3;
  out.mJc[27] = 3;
  out.mJc[28] = 3;
  out.mJc[29] = 3;
  out.mIr[0] = 1;
  out.mIr[1] = 0;
  out.mIr[2] = 2;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_duy (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_duy_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDUY_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 3ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_mduy_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mMDUY_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 3ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_mdxy_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mMDXY_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 3ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  out.mJc[26] = 0;
  out.mJc[27] = 0;
  out.mJc[28] = 0;
  out.mJc[29] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_tduy_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mTDUY_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 3ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_tdxy_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mTDXY_P;
  out.mNumCol = 29ULL;
  out.mNumRow = 3ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 1;
  out.mJc[4] = 1;
  out.mJc[5] = 1;
  out.mJc[6] = 1;
  out.mJc[7] = 1;
  out.mJc[8] = 1;
  out.mJc[9] = 2;
  out.mJc[10] = 3;
  out.mJc[11] = 3;
  out.mJc[12] = 3;
  out.mJc[13] = 3;
  out.mJc[14] = 3;
  out.mJc[15] = 3;
  out.mJc[16] = 3;
  out.mJc[17] = 3;
  out.mJc[18] = 3;
  out.mJc[19] = 3;
  out.mJc[20] = 3;
  out.mJc[21] = 3;
  out.mJc[22] = 3;
  out.mJc[23] = 3;
  out.mJc[24] = 3;
  out.mJc[25] = 3;
  out.mJc[26] = 3;
  out.mJc[27] = 3;
  out.mJc[28] = 3;
  out.mJc[29] = 3;
  out.mIr[0] = 1;
  out.mIr[1] = 0;
  out.mIr[2] = 2;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dty (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dty_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDTY_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 3ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)LC;
  (void)t2;
  return 0;
}
