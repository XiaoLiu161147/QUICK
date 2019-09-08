/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ../maple/mgga_x_gx.mpl
  Type of functional: work_mgga_x
*/

#ifdef CUDA
__device__ static void 
xc_mgga_x_gx_enhance(const void *pt, xc_mgga_work_x_t *r)
#else
static void 
xc_mgga_x_gx_enhance(const xc_func_type *pt, xc_mgga_work_x_t *r)
#endif
{
  double t1, t2, t3, t5, t7, t8, t10, t11;
  double t13, t14, t15, t16, t17, t19, t21, t22;
  double t24, t25, t28, t29, t30, t31, t33, t34;
  double t37, t38, t39, t41, t42, t45, t46, t48;
  double t49, t54, t55, t56, t61, t63, t64, t70;
  double t71, t72, t75, t77, t78, t81, t82, t85;
  double t86, t88, t89, t91, t96, t100, t101, t103;
  double t105, t107, t113, t114, t117, t120, t125, t128;
  double t131, t141, t142, t148, t153, t162, t163, t168;
  double t183, t193, t195, t198;


  t1 = M_CBRT2;
  t2 = M_CBRT3;
  t3 = t2 * t2;
  t5 = M_CBRT4;
  t7 = 0.8e1 / 0.27e2 * t1 * t3 * t5;
  t8 = r->x * r->x;
  t10 = r->t - t8 / 0.8e1;
  t11 = M_CBRT6;
  t13 = 0.31415926535897932385e1 * 0.31415926535897932385e1;
  t14 = POW_1_3(t13);
  t15 = t14 * t14;
  t16 = 0.1e1 / t15;
  t17 = t10 * t11 * t16;
  t19 = 0.827411e0 - 0.35753333333333333333e0 * t17;
  t21 = 0.10e1 - 0.45341611111111111111e0 * t17;
  t22 = 0.1e1 / t21;
  t24 = 0.1e1 - t7;
  t25 = t19 * t22 * t24;
  t28 = t7 + 0.5e1 / 0.9e1 * t17 * t25;
  t29 = 0.5e1 / 0.9e1 * t17;
  t30 = 0.1e1 - t29;
  t31 = Heaviside(t30);
  t33 = 0.1e1 + t29;
  t34 = 0.1e1 / t33;
  t37 = 0.1e1 + 0.148e0 * t30 * t34;
  t38 = -t30;
  t39 = Heaviside(t38);
  r->f = t28 * t31 + t37 * t39;

  if(r->order < 1) return;

  r->dfdrs = 0.0e0;
  t41 = r->x * t11;
  t42 = t41 * t16;
  t45 = t11 * t11;
  t46 = t10 * t45;
  t48 = 0.1e1 / t14 / t13;
  t49 = t46 * t48;
  t54 = t21 * t21;
  t55 = 0.1e1 / t54;
  t56 = t19 * t55;
  t61 = -0.5e1 / 0.36e2 * t42 * t25 + 0.49657407407407407407e-1 * t49 * r->x * t22 * t24 - 0.62974459876543209878e-1 * t49 * t56 * t24 * r->x;
  t63 = 0.0;
  t64 = t28 * t63;
  t70 = t33 * t33;
  t71 = 0.1e1 / t70;
  t72 = t30 * t71;
  t75 = 0.20555555555555555556e-1 * t41 * t16 * t34 + 0.20555555555555555556e-1 * t72 * t42;
  t77 = 0.0;
  t78 = t37 * t77;
  r->dfdx = t61 * t31 + 0.5e1 / 0.36e2 * t64 * t42 + t75 * t39 - 0.5e1 / 0.36e2 * t78 * t42;
  t81 = t11 * t16;
  t82 = t81 * t25;
  t85 = t48 * t22 * t24;
  t86 = t46 * t85;
  t88 = t56 * t24;
  t89 = t49 * t88;
  t91 = 0.5e1 / 0.9e1 * t82 - 0.19862962962962962963e0 * t86 + 0.25189783950617283951e0 * t89;
  t96 = 0.1e1 + 0.5e1 / 0.72e2 * t8 * t11 * t16;
  t100 = r->t - 0.3e1 / 0.10e2 * t96 * t45 * t15;
  t101 = 0.0;
  t103 = t81 * t34;
  t105 = t72 * t81;
  t107 = -0.82222222222222222222e-1 * t103 - 0.82222222222222222222e-1 * t105;
  t113 = r->t - 0.3e1 / 0.10e2 * t96 * t45 * t15;
  t114 = 0.0;
  r->dfdt = -t28 * t101 + t107 * t39 + t37 * t114 + t91 * t31;
  r->dfdu = 0.0e0;

  if(r->order < 2) return;

  r->d2fdrs2 = 0.0e0;
  t117 = t8 * t45;
  t120 = t117 * t48;
  t125 = t55 * t24;
  t128 = t10 * t19;
  t131 = 0.1e1 / t54 / t21 * t24;
  t141 = 0.0;
  t142 = t28 * t141;
  t148 = t48 * t71;
  t153 = t30 / t70 / t33;
  t162 = 0.0;
  t163 = t37 * t162;
  r->d2fdx2 = (-0.5e1 / 0.36e2 * t82 - 0.24828703703703703704e-1 * t117 * t85 + 0.31487229938271604939e-1 * t120 * t88 + 0.49657407407407407407e-1 * t86 - 0.69343020191002429119e-3 * t10 * t8 * t125 + 0.87939332130440738277e-3 * t128 * t131 * t8 - 0.62974459876543209878e-1 * t89) * t31 + 0.5e1 / 0.18e2 * t61 * t63 * t42 + 0.25e2 / 0.1296e4 * t142 * t120 + 0.5e1 / 0.36e2 * t64 * t81 + (0.20555555555555555556e-1 * t103 + 0.57098765432098765434e-2 * t117 * t148 + 0.57098765432098765433e-2 * t153 * t120 + 0.20555555555555555556e-1 * t105) * t39 - 0.5e1 / 0.18e2 * t75 * t77 * t42 + 0.25e2 / 0.1296e4 * t163 * t120 - 0.5e1 / 0.36e2 * t78 * t81;
  t168 = t45 * t48;
  t183 = 0.0;
  t193 = 0.0;
  r->d2fdt2 = (-0.39725925925925925926e0 * t168 * t22 * t24 + 0.50379567901234567902e0 * t168 * t88 - 0.11094883230560388659e-1 * t10 * t55 * t24 + 0.14070293140870518124e-1 * t128 * t131) * t31 - 0.2e1 * t91 * t101 - t28 * t183 + (0.91358024691358024692e-1 * t168 * t71 + 0.91358024691358024691e-1 * t153 * t168) * t39 + 0.2e1 * t107 * t114 + t37 * t193;
  r->d2fdu2 = 0.0e0;
  r->d2fdrsx = 0.0e0;
  r->d2fdrst = 0.0e0;
  r->d2fdrsu = 0.0e0;
  t195 = r->x * t45;
  t198 = t195 * t48;
  r->d2fdxt = (0.99314814814814814814e-1 * t195 * t85 - 0.12594891975308641975e0 * t198 * t88 + 0.27737208076400971648e-2 * t10 * r->x * t125 - 0.35175732852176295310e-2 * t128 * t131 * r->x) * t31 - t61 * t101 + 0.5e1 / 0.36e2 * t91 * t63 * t42 - 0.25e2 / 0.324e3 * t142 * t198 + (-0.22839506172839506174e-1 * t195 * t148 - 0.22839506172839506173e-1 * t153 * t198) * t39 + t75 * t114 - 0.5e1 / 0.36e2 * t107 * t77 * t42 - 0.25e2 / 0.324e3 * t163 * t198;
  r->d2fdxu = 0.0e0;
  r->d2fdtu = 0.0e0;

  if(r->order < 3) return;


}

#ifndef CUDA
#define maple2c_order 3
#define maple2c_func  xc_mgga_x_gx_enhance
#endif