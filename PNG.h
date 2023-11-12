#pragma once
#include "ImageProcessor.h"
class PNG :
    public ImageProcessor
{
public:
    void load() override;

    void save() override;
};
