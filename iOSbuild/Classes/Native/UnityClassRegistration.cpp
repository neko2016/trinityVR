struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 80 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//6. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//7. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//8. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//9. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//10. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//11. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//12. GUITexture
	void RegisterClass_GUITexture();
	RegisterClass_GUITexture();

	//13. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//14. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//15. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//16. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//17. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//18. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//19. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//20. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//21. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//22. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//23. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//24. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//25. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//26. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//27. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//28. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//29. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//30. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//31. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//32. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//33. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//34. AudioMixer
	void RegisterClass_AudioMixer();
	RegisterClass_AudioMixer();

	//35. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//36. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//37. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//38. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//39. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//40. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//41. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//42. AudioMixerGroup
	void RegisterClass_AudioMixerGroup();
	RegisterClass_AudioMixerGroup();

	//43. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//44. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//45. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//46. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//47. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//48. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//49. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//50. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//51. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//52. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//53. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//54. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//55. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//56. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//57. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//58. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//59. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//60. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//61. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//62. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//63. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//64. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//65. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//66. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//67. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//68. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//69. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//70. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//71. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//72. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//73. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//74. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//75. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//76. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//77. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//78. AudioMixerSnapshot
	void RegisterClass_AudioMixerSnapshot();
	RegisterClass_AudioMixerSnapshot();

	//79. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
