// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonFunctions.h"

void UCommonFunctions::StartBackgroundProcess(const FString ExePath, const FString Args)
{
	//void* PipeRead = nullptr;
	//void* PipeWrite = nullptr;
	bool ValidPath = FPaths::ValidatePath(ExePath);
	//verify(FPlatformProcess::CreatePipe(PipeRead, PipeWrite));
	FProcHandle ProcessHandle;
	uint32 ProcessId = 0;

	if (ValidPath)
	{

		if (Args.IsEmpty())
		{
			ProcessHandle = FPlatformProcess::CreateProc(*ExePath, NULL, false, false, true, &ProcessId, 0, NULL, NULL, NULL);
		}
		else
		{
			ProcessHandle = FPlatformProcess::CreateProc(*ExePath, *Args, false, false, false, &ProcessId, 0, NULL, NULL, NULL);
		}

		if (!ProcessHandle.IsValid())
		{
			//Could not run process
		}
	}

}