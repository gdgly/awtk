﻿/**
 * File:   vgcanvas.c
 * Author: Li XianJing <xianjimli@hotmail.com>
 * Brief:  vector graphics canvas interface.
 *
 * Copyright (c) 2018 - 2018  Li XianJing <xianjimli@hotmail.com>
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * License file for more details.
 *
 */

/**
 * History:
 * ================================================================
 * 2018-03-24 Li XianJing <xianjimli@hotmail.com> created
 *
 */

#include "base/vgcanvas.h"

ret_t vgcanvas_reset(vgcanvas_t* vg) {
  return_value_if_fail(vg != NULL && vg->vt->reset != NULL, RET_BAD_PARAMS);

  return vg->vt->reset(vg);
}

ret_t vgcanvas_flush(vgcanvas_t* vg) {
  return_value_if_fail(vg != NULL && vg->vt->flush != NULL, RET_BAD_PARAMS);

  return vg->vt->flush(vg);
}

ret_t vgcanvas_clear_rect(vgcanvas_t* vg, float_t x, float_t y, float_t w, float_t h, color_t c) {
  return_value_if_fail(vg != NULL && vg->vt->clear_rect != NULL, RET_BAD_PARAMS);

  return vg->vt->clear_rect(vg, x, y, w, h, c);
}

ret_t vgcanvas_move_to(vgcanvas_t* vg, float_t x, float_t y) {
  return_value_if_fail(vg != NULL && vg->vt->move_to != NULL, RET_BAD_PARAMS);

  return vg->vt->move_to(vg, x, y);
}

ret_t vgcanvas_line_to(vgcanvas_t* vg, float_t x, float_t y) {
  return_value_if_fail(vg != NULL && vg->vt->line_to != NULL, RET_BAD_PARAMS);

  return vg->vt->line_to(vg, x, y);
}

ret_t vgcanvas_rotate(vgcanvas_t* vg, float_t rad) {
  return_value_if_fail(vg != NULL && vg->vt->rotate != NULL, RET_BAD_PARAMS);

  return vg->vt->rotate(vg, rad);
}

ret_t vgcanvas_scale(vgcanvas_t* vg, float_t x, float_t y) {
  return_value_if_fail(vg != NULL && vg->vt->scale != NULL, RET_BAD_PARAMS);

  return vg->vt->scale(vg, x, y);
}

ret_t vgcanvas_translate(vgcanvas_t* vg, float_t x, float_t y) {
  return_value_if_fail(vg != NULL && vg->vt->translate != NULL, RET_BAD_PARAMS);

  return vg->vt->translate(vg, x, y);
}

ret_t vgcanvas_clip(vgcanvas_t* vg) {
  return_value_if_fail(vg != NULL && vg->vt->clip != NULL, RET_BAD_PARAMS);

  return vg->vt->clip(vg);
}

ret_t vgcanvas_fill(vgcanvas_t* vg) {
  return_value_if_fail(vg != NULL && vg->vt->fill != NULL, RET_BAD_PARAMS);

  return vg->vt->fill(vg);
}

ret_t vgcanvas_stroke(vgcanvas_t* vg) {
  return_value_if_fail(vg != NULL && vg->vt->stroke != NULL, RET_BAD_PARAMS);

  return vg->vt->stroke(vg);
}

ret_t vgcanvas_destroy(vgcanvas_t* vg) {
  return_value_if_fail(vg != NULL && vg->vt->destroy != NULL, RET_BAD_PARAMS);

  return vg->vt->destroy(vg);
}

ret_t vgcanvas_begin_path(vgcanvas_t* vg) {
  return_value_if_fail(vg != NULL && vg->vt->begin_path != NULL, RET_BAD_PARAMS);

  return vg->vt->begin_path(vg);
}

ret_t vgcanvas_round_rect(vgcanvas_t* vg, float_t x, float_t y, float_t w, float_t h, float_t r) {
  return_value_if_fail(vg != NULL && vg->vt->round_rect != NULL, RET_BAD_PARAMS);

  return vg->vt->round_rect(vg, x, y, w, h, r);
}

ret_t vgcanvas_rect(vgcanvas_t* vg, float_t x, float_t y, float_t w, float_t h) {
  return_value_if_fail(vg != NULL, RET_BAD_PARAMS);

  return vgcanvas_round_rect(vg, x, y, w, h, 0);
}

ret_t vgcanvas_ellipse(vgcanvas_t* vg, float_t x, float_t y, float_t rx, float_t ry) {
  return_value_if_fail(vg != NULL && vg->vt->ellipse != NULL, RET_BAD_PARAMS);

  return vg->vt->ellipse(vg, x, y, rx, ry);
}

ret_t vgcanvas_close_path(vgcanvas_t* vg) {
  return_value_if_fail(vg != NULL && vg->vt->close_path != NULL, RET_BAD_PARAMS);

  return vg->vt->close_path(vg);
}

ret_t vgcanvas_transform(vgcanvas_t* vg, float_t a, float_t b, float_t c, float_t d, float_t e,
                         float_t f) {
  return_value_if_fail(vg != NULL && vg->vt->transform != NULL, RET_BAD_PARAMS);

  return vg->vt->transform(vg, a, b, c, d, e, f);
}

ret_t vgcanvas_set_transform(vgcanvas_t* vg, float_t a, float_t b, float_t c, float_t d, float_t e,
                             float_t f) {
  return_value_if_fail(vg != NULL && vg->vt->set_transform != NULL, RET_BAD_PARAMS);

  return vg->vt->set_transform(vg, a, b, c, d, e, f);
}

ret_t vgcanvas_quadratic_curve_to(vgcanvas_t* vg, float_t cpx, float_t cpy, float_t x, float_t y) {
  return_value_if_fail(vg != NULL && vg->vt->quadratic_curve_to != NULL, RET_BAD_PARAMS);

  return vg->vt->quadratic_curve_to(vg, cpx, cpy, x, y);
}

ret_t vgcanvas_bezier_curve_to(vgcanvas_t* vg, float_t cp1x, float_t cp1y, float_t cp2x,
                               float_t cp2y, float_t x, float_t y) {
  return_value_if_fail(vg != NULL && vg->vt->bezier_curve_to != NULL, RET_BAD_PARAMS);

  return vg->vt->bezier_curve_to(vg, cp1x, cp1y, cp2x, cp2y, x, y);
}

ret_t vgcanvas_arc_to(vgcanvas_t* vg, float_t x1, float_t y1, float_t x2, float_t y2, float_t r) {
  return_value_if_fail(vg != NULL && vg->vt->arc_to != NULL, RET_BAD_PARAMS);

  return vg->vt->arc_to(vg, x1, y1, x2, y2, r);
}

ret_t vgcanvas_arc(vgcanvas_t* vg, float_t x, float_t y, float_t r, float_t start, float_t end,
                   bool_t ccw) {
  return_value_if_fail(vg != NULL && vg->vt->arc != NULL, RET_BAD_PARAMS);

  return vg->vt->arc(vg, x, y, r, start, end, ccw);
}

bool_t vgcanvas_is_point_in_path(vgcanvas_t* vg, float_t x, float_t y) {
  return_value_if_fail(vg != NULL && vg->vt->is_point_in_path != NULL, FALSE);

  return vg->vt->is_point_in_path(vg, x, y);
}

ret_t vgcanvas_set_font(vgcanvas_t* vg, const char* font) {
  return_value_if_fail(vg != NULL && vg->vt->set_font != NULL && font != NULL, RET_BAD_PARAMS);

  vg->font = font;

  return vg->vt->set_font(vg, font);
}

ret_t vgcanvas_set_text_align(vgcanvas_t* vg, const char* text_align) {
  return_value_if_fail(vg != NULL && vg->vt->set_text_align != NULL && text_align != NULL,
                       RET_BAD_PARAMS);

  vg->text_align = text_align;

  return vg->vt->set_text_align(vg, text_align);
}

ret_t vgcanvas_set_text_baseline(vgcanvas_t* vg, const char* text_baseline) {
  return_value_if_fail(vg != NULL && vg->vt->set_text_baseline != NULL && text_baseline != NULL,
                       RET_BAD_PARAMS);

  vg->text_baseline = text_baseline;

  return vg->vt->set_text_align(vg, text_baseline);
}

ret_t vgcanvas_fill_text(vgcanvas_t* vg, const char* text, float_t x, float_t y,
                         float_t max_width) {
  return_value_if_fail(vg != NULL && vg->vt->fill_text != NULL && text != NULL, RET_BAD_PARAMS);

  return vg->vt->fill_text(vg, text, x, y, max_width);
}

uint32_t vgcanvas_measure_text(vgcanvas_t* vg, const char* text) {
  return_value_if_fail(vg != NULL && vg->vt->measure_text != NULL && text != NULL, RET_BAD_PARAMS);

  return vg->vt->measure_text(vg, text);
}

ret_t vgcanvas_draw_image(vgcanvas_t* vg, bitmap_t* img, float_t sx, float_t sy, float_t sw,
                          float_t sh, float_t dx, float_t dy, float_t dw, float_t dh) {
  return_value_if_fail(vg != NULL && vg->vt->draw_image != NULL && img != NULL, RET_BAD_PARAMS);

  return vg->vt->draw_image(vg, img, sx, sy, sw, sh, dx, dy, dw, dh);
}

ret_t vgcanvas_set_antialias(vgcanvas_t* vg, bool_t value) {
  return_value_if_fail(vg != NULL && vg->vt->set_antialias != NULL, RET_BAD_PARAMS);

  vg->anti_alias = value;

  return vg->vt->set_antialias(vg, value);
}

ret_t vgcanvas_set_line_width(vgcanvas_t* vg, float_t value) {
  return_value_if_fail(vg != NULL && vg->vt->set_line_width != NULL, RET_BAD_PARAMS);
  vg->line_width = value;

  return vg->vt->set_line_width(vg, value);
}

ret_t vgcanvas_set_global_alpha(vgcanvas_t* vg, float_t value) {
  return_value_if_fail(vg != NULL && vg->vt->set_global_alpha != NULL, RET_BAD_PARAMS);

  vg->global_alpha = value;

  return vg->vt->set_global_alpha(vg, value);
}

ret_t vgcanvas_set_fill_color(vgcanvas_t* vg, color_t value) {
  return_value_if_fail(vg != NULL && vg->vt->set_fill_color != NULL, RET_BAD_PARAMS);

  vg->fill_color = value;

  return vg->vt->set_fill_color(vg, value);
}

ret_t vgcanvas_set_stroke_color(vgcanvas_t* vg, color_t value) {
  return_value_if_fail(vg != NULL && vg->vt->set_stroke_color != NULL, RET_BAD_PARAMS);

  vg->stroke_color = value;

  return vg->vt->set_stroke_color(vg, value);
}

ret_t vgcanvas_set_line_cap(vgcanvas_t* vg, const char* value) {
  return_value_if_fail(vg != NULL && vg->vt->set_line_cap != NULL && value != NULL, RET_BAD_PARAMS);

  vg->line_cap = value;

  return vg->vt->set_line_cap(vg, value);
}

ret_t vgcanvas_set_line_join(vgcanvas_t* vg, const char* value) {
  return_value_if_fail(vg != NULL && vg->vt->set_line_join != NULL && value != NULL,
                       RET_BAD_PARAMS);

  vg->line_join = value;

  return vg->vt->set_line_join(vg, value);
}

ret_t vgcanvas_set_miter_limit(vgcanvas_t* vg, float_t value) {
  return_value_if_fail(vg != NULL && vg->vt->set_miter_limit != NULL, RET_BAD_PARAMS);

  vg->miter_limit = value;

  return vg->vt->set_miter_limit(vg, value);
}