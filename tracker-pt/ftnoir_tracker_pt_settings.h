/* Copyright (c) 2012 Patrick Ruoff
 * Copyright (c) 2014-2015 Stanislaw Halik <sthalik@misaki.pl>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 */

#ifndef FTNOIR_TRACKER_PT_SETTINGS_H
#define FTNOIR_TRACKER_PT_SETTINGS_H

#include "opentrack/options.hpp"
using namespace options;

struct settings_pt : opts
{
    value<int> threshold;
    value<double> min_point_size, max_point_size;

    value<int> t_MH_x, t_MH_y, t_MH_z;
    value<int> fov, camera_mode;
    value<int> model_used;

    value<bool> dynamic_pose;
    value<int> init_phase_timeout;
    value<bool> auto_threshold;

    settings_pt() :
        opts("tracker-pt"),
        threshold(b, "threshold-primary", 128),
        min_point_size(b, "min-point-size", 0),
        max_point_size(b, "max-point-size", 50),
        t_MH_x(b, "model-centroid-x", 0),
        t_MH_y(b, "model-centroid-y", 0),
        t_MH_z(b, "model-centroid-z", 0),
        fov(b, "camera-fov", 0),
        camera_mode(b, "camera-mode", 0),
        model_used(b, "model-used", 0),
        dynamic_pose(b, "dynamic-pose-resolution", true),
        init_phase_timeout(b, "init-phase-timeout", 500),
        auto_threshold(b, "automatic-threshold", false)
    {}
};

#endif //FTNOIR_TRACKER_PT_SETTINGS_H