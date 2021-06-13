﻿#pragma once
#include "PipelineDesc.h"

namespace hypatia
{
	typedef struct PIPELINE_DRAW_DESC
	{
		HWND hwnd;
		HINSTANCE hInstance;
		std::vector<const char*> extensions;
	}PIPELINE_DRAW_DESC;
	
	typedef struct PIPELINE_COMPUTE_DESC
	{
	
	}PIPELINE_COMPUTE_DESC;
	
	typedef struct PIPELINE_UI_DESC
	{
	
	}PIPELINE_UI_DESC;
	
	typedef struct PIPELINE_POSTPROCESS_DESC
	{
	
	}PIPELINE_POSTPROCESS_DESC;

	typedef struct PIPELINE_DESC
	{
		std::shared_ptr<PIPELINE_DRAW_DESC> drawDesc;
		std::shared_ptr<PIPELINE_COMPUTE_DESC> computeDesc;
		std::shared_ptr<PIPELINE_UI_DESC> uiDesc;
		std::shared_ptr<PIPELINE_POSTPROCESS_DESC> postProcessDesc;
	}PIPELINE_DESC;
}