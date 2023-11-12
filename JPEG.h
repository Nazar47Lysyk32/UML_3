#pragma once
#include "ImageProcessor.h"
class JPEG :
    public ImageProcessor
{
public:
    void load() override;

    void save() override;
};
