using UnrealBuildTool;
using System.IO;

public class GOpenCV : ModuleRules
{
	//opencv��汾��
	string OPENCV_VERSION = "460";

	private string ThirdPartyPath
	{
		get { return Path.GetFullPath(Path.Combine(ModuleDirectory, "../ThirdParty")); }
	}
	public bool LoadOpenCVLib(ReadOnlyTargetRules Target)
	{
		// �ж�Win64ƽ̨�ı�ʶ
		bool IsLibrarySupported = false;
		string OpenCVPath = Path.Combine(ThirdPartyPath, "OpenCV");
		string LibPath = "";
		//�ж��Ƿ���debugģʽ
		bool IsDebug = Target.Configuration == UnrealTargetConfiguration.Debug;
		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			LibPath = Path.Combine(OpenCVPath, "Libraries", "Win64");
			IsLibrarySupported = true;
		}
		else
		{
			string Err = string.Format("{0} dedicated server is made to depend on {1}. We want to avoid this, please correct module dependencies.", Target.Platform.ToString(), this.ToString());
			System.Console.WriteLine(Err);
		}
		if (IsLibrarySupported)
		{
			//���ͷ�ļ�·��
			PublicIncludePaths.AddRange(new string[] { Path.Combine(OpenCVPath, "Includes") });
			PublicAdditionalLibraries.Add(Path.Combine(LibPath, "opencv_world" + OPENCV_VERSION + ".lib"));
			PublicDelayLoadDLLs.Add("opencv_world" + OPENCV_VERSION + ".dll");
			PublicDelayLoadDLLs.Add("opencv_videoio_ffmpeg" + OPENCV_VERSION + "_64.dll");
		}
		PublicDefinitions.Add(string.Format("WITH_OPENCV_BINDING={0}", IsLibrarySupported ? 1 : 0));
		return IsLibrarySupported;
	}
	public GOpenCV(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;	
		PublicDependencyModuleNames.AddRange(new string[]{"Core",});		
		PrivateDependencyModuleNames.AddRange(new string[]{"CoreUObject","Engine","Slate","SlateCore",});
		LoadOpenCVLib(Target);
	}
}
