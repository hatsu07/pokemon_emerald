	@ pret/pokeemerald-jp direct xref for 0x084DDE4C: event_object_movement.s: CreateReflectionEffectSprites; faraway_island.s: sub_081D4110; field_effect.s: FldEff_LavaridgeGymWarp, FldEff_NPCFlyOut, FldEff_PopOutOfAsh, sub_080B86F0, sub_080B8C1C; field_effect_helpers.s: CreateWarpArrowSpr...
	.globl gUnknown_84DDE4C
gUnknown_84DDE4C: @ 0x084DDE4C
	@ analyzed canonical ROM range 0x084DDE4C-0x084E18FF
sAnalyzedData_084DDE4C: @ 0x084DDE4C
	.globl gFieldEffectObjectTemplatePointers
gFieldEffectObjectTemplatePointers:
	@ 37-entry table; order verified against field_effect_object_template_pointers.h.
	.4byte gFieldEffectObjectTemplate_ShadowSmall
	.4byte gFieldEffectObjectTemplate_ShadowMedium
	.4byte gFieldEffectObjectTemplate_ShadowLarge
	.4byte gFieldEffectObjectTemplate_ShadowExtraLarge
	.4byte gFieldEffectObjectTemplate_TallGrass
	.4byte gFieldEffectObjectTemplate_Ripple
	.4byte gFieldEffectObjectTemplate_Ash
	.4byte gFieldEffectObjectTemplate_SurfBlob
	.4byte gFieldEffectObjectTemplate_Arrow
	.4byte gFieldEffectObjectTemplate_GroundImpactDust
	.4byte gFieldEffectObjectTemplate_JumpTallGrass
	.4byte gFieldEffectObjectTemplate_SandFootprints
	.4byte gFieldEffectObjectTemplate_JumpBigSplash
	.4byte gFieldEffectObjectTemplate_Splash
	.4byte gFieldEffectObjectTemplate_JumpSmallSplash
	.4byte gFieldEffectObjectTemplate_LongGrass
	.4byte gFieldEffectObjectTemplate_JumpLongGrass
	.4byte gFieldEffectObjectTemplate_UnusedGrass
	.4byte gFieldEffectObjectTemplate_UnusedGrass2
	.4byte gFieldEffectObjectTemplate_UnusedSand
	.4byte gFieldEffectObjectTemplate_WaterSurfacing
	.4byte gFieldEffectObjectTemplate_ReflectionDistortion
	.4byte gFieldEffectObjectTemplate_Sparkle
	.4byte gFieldEffectObjectTemplate_DeepSandFootprints
	.4byte gFieldEffectObjectTemplate_TreeDisguise
	.4byte gFieldEffectObjectTemplate_MountainDisguise
	.4byte gFieldEffectObjectTemplate_Bird
	.4byte gFieldEffectObjectTemplate_BikeTireTracks
	.4byte gFieldEffectObjectTemplate_SandDisguisePlaceholder
	.4byte gFieldEffectObjectTemplate_SandPile
	.4byte gFieldEffectObjectTemplate_ShortGrass
	.4byte gFieldEffectObjectTemplate_HotSpringsWater
	.4byte gFieldEffectObjectTemplate_AshPuff
	.4byte gFieldEffectObjectTemplate_AshLaunch
	.4byte gFieldEffectObjectTemplate_Bubbles
	.4byte gFieldEffectObjectTemplate_SmallSparkle
	.4byte gFieldEffectObjectTemplate_Rayquaza
	@ Contiguous struct SpriteFrameImage storage used by object-event and field-effect templates.
	.globl gSpriteFrameImages_JP_084DDEE0
gSpriteFrameImages_JP_084DDEE0: @ 0x084DDEE0
	sprite_frame_image 0x0846FA4C, 0x100
	sprite_frame_image 0x0846FB4C, 0x100
	sprite_frame_image 0x0846FC4C, 0x100
	sprite_frame_image 0x0846FD4C, 0x100
	sprite_frame_image 0x0846FE4C, 0x100
	sprite_frame_image 0x0846FF4C, 0x100
	sprite_frame_image 0x0847004C, 0x100
	sprite_frame_image 0x0847014C, 0x100
	sprite_frame_image 0x0847024C, 0x100
	sprite_frame_image 0x0847034C, 0x100
	sprite_frame_image 0x0847044C, 0x100
	sprite_frame_image 0x0847054C, 0x100
	sprite_frame_image 0x0847064C, 0x100
	sprite_frame_image 0x0847074C, 0x100
	sprite_frame_image 0x0847084C, 0x100
	sprite_frame_image 0x0847094C, 0x100
	sprite_frame_image 0x08470A4C, 0x100
	sprite_frame_image 0x08470B4C, 0x100
	.globl gSpriteFrameImages_JP_084DDF70
gSpriteFrameImages_JP_084DDF70: @ 0x084DDF70
	sprite_frame_image 0x084736AC, 0x200
	sprite_frame_image 0x084738AC, 0x200
	sprite_frame_image 0x08473AAC, 0x200
	sprite_frame_image 0x08473CAC, 0x200
	sprite_frame_image 0x08473EAC, 0x200
	sprite_frame_image 0x084740AC, 0x200
	sprite_frame_image 0x084742AC, 0x200
	sprite_frame_image 0x084744AC, 0x200
	sprite_frame_image 0x084746AC, 0x200
	.globl gSpriteFrameImages_JP_084DDFB8
gSpriteFrameImages_JP_084DDFB8: @ 0x084DDFB8
	sprite_frame_image 0x084748AC, 0x200
	sprite_frame_image 0x08474AAC, 0x200
	sprite_frame_image 0x08474CAC, 0x200
	sprite_frame_image 0x08474EAC, 0x200
	sprite_frame_image 0x084750AC, 0x200
	sprite_frame_image 0x084752AC, 0x200
	sprite_frame_image 0x084754AC, 0x200
	sprite_frame_image 0x084756AC, 0x200
	sprite_frame_image 0x084758AC, 0x200
	sprite_frame_image 0x08475AAC, 0x200
	sprite_frame_image 0x08475CAC, 0x200
	sprite_frame_image 0x08475EAC, 0x200
	sprite_frame_image 0x084760AC, 0x200
	sprite_frame_image 0x084762AC, 0x200
	sprite_frame_image 0x084764AC, 0x200
	sprite_frame_image 0x084766AC, 0x200
	sprite_frame_image 0x084768AC, 0x200
	sprite_frame_image 0x08476AAC, 0x200
	sprite_frame_image 0x08476CAC, 0x200
	sprite_frame_image 0x08476EAC, 0x200
	sprite_frame_image 0x084770AC, 0x200
	sprite_frame_image 0x084772AC, 0x200
	sprite_frame_image 0x084774AC, 0x200
	sprite_frame_image 0x084776AC, 0x200
	sprite_frame_image 0x084778AC, 0x200
	sprite_frame_image 0x08477AAC, 0x200
	sprite_frame_image 0x08477CAC, 0x200
	.globl gSpriteFrameImages_JP_084DE090
gSpriteFrameImages_JP_084DE090: @ 0x084DE090
	sprite_frame_image 0x08472AAC, 0x200
	sprite_frame_image 0x08472EAC, 0x200
	sprite_frame_image 0x084732AC, 0x200
	sprite_frame_image 0x08472AAC, 0x200
	sprite_frame_image 0x08472AAC, 0x200
	sprite_frame_image 0x08472EAC, 0x200
	sprite_frame_image 0x08472EAC, 0x200
	sprite_frame_image 0x084732AC, 0x200
	sprite_frame_image 0x084732AC, 0x200
	sprite_frame_image 0x08472CAC, 0x200
	sprite_frame_image 0x084730AC, 0x200
	sprite_frame_image 0x084734AC, 0x200
	.globl gSpriteFrameImages_JP_084DE0F0
gSpriteFrameImages_JP_084DE0F0: @ 0x084DE0F0
	sprite_frame_image 0x0847A4AC, 0x200
	sprite_frame_image 0x0847A6AC, 0x200
	sprite_frame_image 0x0847A8AC, 0x200
	sprite_frame_image 0x0847A4AC, 0x200
	sprite_frame_image 0x0847A4AC, 0x200
	sprite_frame_image 0x0847A6AC, 0x200
	sprite_frame_image 0x0847A6AC, 0x200
	sprite_frame_image 0x0847A8AC, 0x200
	sprite_frame_image 0x0847A8AC, 0x200
	.globl gSpriteFrameImages_JP_084DE138
gSpriteFrameImages_JP_084DE138: @ 0x084DE138
	sprite_frame_image 0x084720AC, 0x200
	sprite_frame_image 0x084722AC, 0x200
	sprite_frame_image 0x084724AC, 0x200
	sprite_frame_image 0x084726AC, 0x200
	sprite_frame_image 0x084728AC, 0x200
	.globl gSpriteFrameImages_JP_084DE160
gSpriteFrameImages_JP_084DE160: @ 0x084DE160
	sprite_frame_image gObjectEventFrameGfx_JP_084CDE6C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084CE06C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084CE26C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084CE46C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084CE66C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084CE86C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084CEA6C, 0x200
	.globl gSpriteFrameImages_JP_084DE198
gSpriteFrameImages_JP_084DE198: @ 0x084DE198
	sprite_frame_image 0x08485E0C, 0x80
	sprite_frame_image 0x08485E8C, 0x80
	sprite_frame_image 0x08485F0C, 0x80
	sprite_frame_image 0x08485F8C, 0x80
	sprite_frame_image 0x0848600C, 0x80
	sprite_frame_image 0x0848608C, 0x80
	sprite_frame_image 0x0848610C, 0x80
	sprite_frame_image 0x0848618C, 0x80
	sprite_frame_image 0x0848620C, 0x80
	.globl gSpriteFrameImages_JP_084DE1E0
gSpriteFrameImages_JP_084DE1E0: @ 0x084DE1E0
	sprite_frame_image 0x0848628C, 0x100
	sprite_frame_image 0x0848638C, 0x100
	sprite_frame_image 0x0848648C, 0x100
	sprite_frame_image 0x0848658C, 0x100
	sprite_frame_image 0x0848668C, 0x100
	sprite_frame_image 0x0848678C, 0x100
	sprite_frame_image 0x0848688C, 0x100
	sprite_frame_image 0x0848698C, 0x100
	sprite_frame_image 0x08486A8C, 0x100
	.globl gSpriteFrameImages_JP_084DE228
gSpriteFrameImages_JP_084DE228: @ 0x084DE228
	sprite_frame_image 0x08486B8C, 0x100
	sprite_frame_image 0x08486C8C, 0x100
	sprite_frame_image 0x08486D8C, 0x100
	sprite_frame_image 0x08486E8C, 0x100
	sprite_frame_image 0x08486F8C, 0x100
	sprite_frame_image 0x0848708C, 0x100
	sprite_frame_image 0x0848718C, 0x100
	sprite_frame_image 0x0848728C, 0x100
	sprite_frame_image 0x0848738C, 0x100
	.globl gSpriteFrameImages_JP_084DE270
gSpriteFrameImages_JP_084DE270: @ 0x084DE270
	sprite_frame_image 0x0848748C, 0x100
	sprite_frame_image 0x0848758C, 0x100
	sprite_frame_image 0x0848768C, 0x100
	sprite_frame_image 0x0848778C, 0x100
	sprite_frame_image 0x0848788C, 0x100
	sprite_frame_image 0x0848798C, 0x100
	sprite_frame_image 0x08487A8C, 0x100
	sprite_frame_image 0x08487B8C, 0x100
	sprite_frame_image 0x08487C8C, 0x100
	.globl gSpriteFrameImages_JP_084DE2B8
gSpriteFrameImages_JP_084DE2B8: @ 0x084DE2B8
	sprite_frame_image 0x08487D8C, 0x100
	sprite_frame_image 0x08487E8C, 0x100
	sprite_frame_image 0x08487F8C, 0x100
	sprite_frame_image 0x0848808C, 0x100
	sprite_frame_image 0x0848818C, 0x100
	sprite_frame_image 0x0848828C, 0x100
	sprite_frame_image 0x0848838C, 0x100
	sprite_frame_image 0x0848848C, 0x100
	sprite_frame_image 0x0848858C, 0x100
	.globl gSpriteFrameImages_JP_084DE300
gSpriteFrameImages_JP_084DE300: @ 0x084DE300
	sprite_frame_image 0x0848868C, 0x100
	sprite_frame_image 0x0848878C, 0x100
	sprite_frame_image 0x0848888C, 0x100
	sprite_frame_image 0x0848898C, 0x100
	sprite_frame_image 0x08488A8C, 0x100
	sprite_frame_image 0x08488B8C, 0x100
	sprite_frame_image 0x08488C8C, 0x100
	sprite_frame_image 0x08488D8C, 0x100
	sprite_frame_image 0x08488E8C, 0x100
	.globl gSpriteFrameImages_JP_084DE348
gSpriteFrameImages_JP_084DE348: @ 0x084DE348
	sprite_frame_image 0x08488F8C, 0x80
	sprite_frame_image 0x0848900C, 0x80
	sprite_frame_image 0x0848908C, 0x80
	sprite_frame_image 0x0848910C, 0x80
	sprite_frame_image 0x0848918C, 0x80
	sprite_frame_image 0x0848920C, 0x80
	sprite_frame_image 0x0848928C, 0x80
	sprite_frame_image 0x0848930C, 0x80
	sprite_frame_image 0x0848938C, 0x80
	.globl gSpriteFrameImages_JP_084DE390
gSpriteFrameImages_JP_084DE390: @ 0x084DE390
	sprite_frame_image 0x0848940C, 0x80
	sprite_frame_image 0x0848948C, 0x80
	sprite_frame_image 0x0848950C, 0x80
	sprite_frame_image 0x0848958C, 0x80
	sprite_frame_image 0x0848960C, 0x80
	sprite_frame_image 0x0848968C, 0x80
	sprite_frame_image 0x0848970C, 0x80
	sprite_frame_image 0x0848978C, 0x80
	sprite_frame_image 0x0848980C, 0x80
	.globl gSpriteFrameImages_JP_084DE3D8
gSpriteFrameImages_JP_084DE3D8: @ 0x084DE3D8
	sprite_frame_image 0x0848988C, 0x100
	sprite_frame_image 0x0848998C, 0x100
	sprite_frame_image 0x08489A8C, 0x100
	sprite_frame_image 0x08489B8C, 0x100
	sprite_frame_image 0x08489C8C, 0x100
	sprite_frame_image 0x08489D8C, 0x100
	sprite_frame_image 0x08489E8C, 0x100
	sprite_frame_image 0x08489F8C, 0x100
	sprite_frame_image 0x0848A08C, 0x100
	.globl gSpriteFrameImages_JP_084DE420
gSpriteFrameImages_JP_084DE420: @ 0x084DE420
	sprite_frame_image 0x0848A18C, 0x100
	sprite_frame_image 0x0848A28C, 0x100
	sprite_frame_image 0x0848A38C, 0x100
	sprite_frame_image 0x0848A48C, 0x100
	sprite_frame_image 0x0848A58C, 0x100
	sprite_frame_image 0x0848A68C, 0x100
	sprite_frame_image 0x0848A78C, 0x100
	sprite_frame_image 0x0848A88C, 0x100
	sprite_frame_image 0x0848A98C, 0x100
	.globl gSpriteFrameImages_JP_084DE468
gSpriteFrameImages_JP_084DE468: @ 0x084DE468
	sprite_frame_image 0x0848AA8C, 0x100
	sprite_frame_image 0x0848AB8C, 0x100
	sprite_frame_image 0x0848AC8C, 0x100
	sprite_frame_image 0x0848AD8C, 0x100
	sprite_frame_image 0x0848AE8C, 0x100
	sprite_frame_image 0x0848AF8C, 0x100
	sprite_frame_image 0x0848B08C, 0x100
	sprite_frame_image 0x0848B18C, 0x100
	sprite_frame_image 0x0848B28C, 0x100
	.globl gSpriteFrameImages_JP_084DE4B0
gSpriteFrameImages_JP_084DE4B0: @ 0x084DE4B0
	sprite_frame_image 0x0848B38C, 0x100
	sprite_frame_image 0x0848B48C, 0x100
	sprite_frame_image 0x0848B58C, 0x100
	sprite_frame_image 0x0848B68C, 0x100
	sprite_frame_image 0x0848B78C, 0x100
	sprite_frame_image 0x0848B88C, 0x100
	sprite_frame_image 0x0848B98C, 0x100
	sprite_frame_image 0x0848BA8C, 0x100
	sprite_frame_image 0x0848BB8C, 0x100
	.globl gSpriteFrameImages_JP_084DE4F8
gSpriteFrameImages_JP_084DE4F8: @ 0x084DE4F8
	sprite_frame_image 0x0848BC8C, 0x100
	sprite_frame_image 0x0848BD8C, 0x100
	sprite_frame_image 0x0848BE8C, 0x100
	sprite_frame_image 0x0848BF8C, 0x100
	sprite_frame_image 0x0848C08C, 0x100
	sprite_frame_image 0x0848C18C, 0x100
	sprite_frame_image 0x0848C28C, 0x100
	sprite_frame_image 0x0848C38C, 0x100
	sprite_frame_image 0x0848C48C, 0x100
	.globl gSpriteFrameImages_JP_084DE540
gSpriteFrameImages_JP_084DE540: @ 0x084DE540
	sprite_frame_image 0x0848C58C, 0x100
	sprite_frame_image 0x0848C68C, 0x100
	sprite_frame_image 0x0848C78C, 0x100
	sprite_frame_image 0x0848C88C, 0x100
	sprite_frame_image 0x0848C98C, 0x100
	sprite_frame_image 0x0848CA8C, 0x100
	sprite_frame_image 0x0848CB8C, 0x100
	sprite_frame_image 0x0848CC8C, 0x100
	sprite_frame_image 0x0848CD8C, 0x100
	.globl gSpriteFrameImages_JP_084DE588
gSpriteFrameImages_JP_084DE588: @ 0x084DE588
	sprite_frame_image 0x0848CE8C, 0x100
	sprite_frame_image 0x0848CF8C, 0x100
	sprite_frame_image 0x0848D08C, 0x100
	sprite_frame_image 0x0848D18C, 0x100
	sprite_frame_image 0x0848D28C, 0x100
	sprite_frame_image 0x0848D38C, 0x100
	sprite_frame_image 0x0848D48C, 0x100
	sprite_frame_image 0x0848D58C, 0x100
	sprite_frame_image 0x0848D68C, 0x100
	.globl gSpriteFrameImages_JP_084DE5D0
gSpriteFrameImages_JP_084DE5D0: @ 0x084DE5D0
	sprite_frame_image 0x0848D78C, 0x100
	sprite_frame_image 0x0848D88C, 0x100
	sprite_frame_image 0x0848D98C, 0x100
	sprite_frame_image 0x0848DA8C, 0x100
	sprite_frame_image 0x0848DB8C, 0x100
	sprite_frame_image 0x0848DC8C, 0x100
	sprite_frame_image 0x0848DD8C, 0x100
	sprite_frame_image 0x0848DE8C, 0x100
	sprite_frame_image 0x0848DF8C, 0x100
	.globl gSpriteFrameImages_JP_084DE618
gSpriteFrameImages_JP_084DE618: @ 0x084DE618
	sprite_frame_image 0x0848E08C, 0x100
	sprite_frame_image 0x0848E18C, 0x100
	sprite_frame_image 0x0848E28C, 0x100
	sprite_frame_image 0x0848E38C, 0x100
	sprite_frame_image 0x0848E48C, 0x100
	sprite_frame_image 0x0848E58C, 0x100
	sprite_frame_image 0x0848E68C, 0x100
	sprite_frame_image 0x0848E78C, 0x100
	sprite_frame_image 0x0848E88C, 0x100
	.globl gSpriteFrameImages_JP_084DE660
gSpriteFrameImages_JP_084DE660: @ 0x084DE660
	sprite_frame_image 0x0848E98C, 0x100
	sprite_frame_image 0x0848EA8C, 0x100
	sprite_frame_image 0x0848EB8C, 0x100
	sprite_frame_image 0x0848EC8C, 0x100
	sprite_frame_image 0x0848ED8C, 0x100
	sprite_frame_image 0x0848EE8C, 0x100
	sprite_frame_image 0x0848EF8C, 0x100
	sprite_frame_image 0x0848F08C, 0x100
	sprite_frame_image 0x0848F18C, 0x100
	.globl gSpriteFrameImages_JP_084DE6A8
gSpriteFrameImages_JP_084DE6A8: @ 0x084DE6A8
	sprite_frame_image 0x0848F28C, 0x100
	sprite_frame_image 0x0848F38C, 0x100
	sprite_frame_image 0x0848F48C, 0x100
	sprite_frame_image 0x0848F58C, 0x100
	sprite_frame_image 0x0848F68C, 0x100
	sprite_frame_image 0x0848F78C, 0x100
	sprite_frame_image 0x0848F88C, 0x100
	sprite_frame_image 0x0848F98C, 0x100
	sprite_frame_image 0x0848FA8C, 0x100
	.globl gSpriteFrameImages_JP_084DE6F0
gSpriteFrameImages_JP_084DE6F0: @ 0x084DE6F0
	sprite_frame_image 0x0848FB8C, 0x100
	sprite_frame_image 0x0848FC8C, 0x100
	sprite_frame_image 0x0848FD8C, 0x100
	sprite_frame_image 0x0848FE8C, 0x100
	sprite_frame_image 0x0848FF8C, 0x100
	sprite_frame_image 0x0849008C, 0x100
	sprite_frame_image 0x0849018C, 0x100
	sprite_frame_image 0x0849028C, 0x100
	sprite_frame_image 0x0849038C, 0x100
	.globl gSpriteFrameImages_JP_084DE738
gSpriteFrameImages_JP_084DE738: @ 0x084DE738
	sprite_frame_image 0x0849048C, 0x100
	sprite_frame_image 0x0849058C, 0x100
	sprite_frame_image 0x0849068C, 0x100
	sprite_frame_image 0x0849078C, 0x100
	sprite_frame_image 0x0849088C, 0x100
	sprite_frame_image 0x0849098C, 0x100
	sprite_frame_image 0x08490A8C, 0x100
	sprite_frame_image 0x08490B8C, 0x100
	sprite_frame_image 0x08490C8C, 0x100
	.globl gSpriteFrameImages_JP_084DE780
gSpriteFrameImages_JP_084DE780: @ 0x084DE780
	sprite_frame_image 0x08490D8C, 0x100
	sprite_frame_image 0x08490E8C, 0x100
	sprite_frame_image 0x08490F8C, 0x100
	sprite_frame_image 0x0849108C, 0x100
	sprite_frame_image 0x0849118C, 0x100
	sprite_frame_image 0x0849128C, 0x100
	sprite_frame_image 0x0849138C, 0x100
	sprite_frame_image 0x0849148C, 0x100
	sprite_frame_image 0x0849158C, 0x100
	.globl gSpriteFrameImages_JP_084DE7C8
gSpriteFrameImages_JP_084DE7C8: @ 0x084DE7C8
	sprite_frame_image 0x0849168C, 0x100
	sprite_frame_image 0x0849178C, 0x100
	sprite_frame_image 0x0849188C, 0x100
	sprite_frame_image 0x0849168C, 0x100
	sprite_frame_image 0x0849168C, 0x100
	sprite_frame_image 0x0849178C, 0x100
	sprite_frame_image 0x0849178C, 0x100
	sprite_frame_image 0x0849188C, 0x100
	sprite_frame_image 0x0849188C, 0x100
	.globl gSpriteFrameImages_JP_084DE810
gSpriteFrameImages_JP_084DE810: @ 0x084DE810
	sprite_frame_image 0x0849198C, 0x100
	sprite_frame_image 0x08491A8C, 0x100
	sprite_frame_image 0x08491B8C, 0x100
	sprite_frame_image 0x08491C8C, 0x100
	sprite_frame_image 0x08491D8C, 0x100
	sprite_frame_image 0x08491E8C, 0x100
	sprite_frame_image 0x08491F8C, 0x100
	sprite_frame_image 0x0849208C, 0x100
	sprite_frame_image 0x0849218C, 0x100
	.globl gSpriteFrameImages_JP_084DE858
gSpriteFrameImages_JP_084DE858: @ 0x084DE858
	sprite_frame_image 0x0849228C, 0x100
	sprite_frame_image 0x0849238C, 0x100
	sprite_frame_image 0x0849248C, 0x100
	sprite_frame_image 0x0849228C, 0x100
	sprite_frame_image 0x0849228C, 0x100
	sprite_frame_image 0x0849238C, 0x100
	sprite_frame_image 0x0849238C, 0x100
	sprite_frame_image 0x0849248C, 0x100
	sprite_frame_image 0x0849248C, 0x100
	.globl gSpriteFrameImages_JP_084DE8A0
gSpriteFrameImages_JP_084DE8A0: @ 0x084DE8A0
	sprite_frame_image 0x0849258C, 0x100
	sprite_frame_image 0x0849268C, 0x100
	sprite_frame_image 0x0849278C, 0x100
	sprite_frame_image 0x0849288C, 0x100
	sprite_frame_image 0x0849298C, 0x100
	sprite_frame_image 0x08492A8C, 0x100
	sprite_frame_image 0x08492B8C, 0x100
	sprite_frame_image 0x08492C8C, 0x100
	sprite_frame_image 0x08492D8C, 0x100
	.globl gSpriteFrameImages_JP_084DE8E8
gSpriteFrameImages_JP_084DE8E8: @ 0x084DE8E8
	sprite_frame_image 0x08492E8C, 0x100
	sprite_frame_image 0x08492F8C, 0x100
	sprite_frame_image 0x0849308C, 0x100
	sprite_frame_image 0x0849318C, 0x100
	sprite_frame_image 0x0849328C, 0x100
	sprite_frame_image 0x0849338C, 0x100
	sprite_frame_image 0x0849348C, 0x100
	sprite_frame_image 0x0849358C, 0x100
	sprite_frame_image 0x0849368C, 0x100
	.globl gSpriteFrameImages_JP_084DE930
gSpriteFrameImages_JP_084DE930: @ 0x084DE930
	sprite_frame_image 0x0849378C, 0x100
	sprite_frame_image 0x0849388C, 0x100
	sprite_frame_image 0x0849398C, 0x100
	sprite_frame_image 0x08493A8C, 0x100
	sprite_frame_image 0x08493B8C, 0x100
	sprite_frame_image 0x08493C8C, 0x100
	sprite_frame_image 0x08493D8C, 0x100
	sprite_frame_image 0x08493E8C, 0x100
	sprite_frame_image 0x08493F8C, 0x100
	.globl gSpriteFrameImages_JP_084DE978
gSpriteFrameImages_JP_084DE978: @ 0x084DE978
	sprite_frame_image 0x0849408C, 0x100
	sprite_frame_image 0x0849418C, 0x100
	sprite_frame_image 0x0849428C, 0x100
	sprite_frame_image 0x0849438C, 0x100
	sprite_frame_image 0x0849448C, 0x100
	sprite_frame_image 0x0849458C, 0x100
	sprite_frame_image 0x0849468C, 0x100
	sprite_frame_image 0x0849478C, 0x100
	sprite_frame_image 0x0849488C, 0x100
	.globl gSpriteFrameImages_JP_084DE9C0
gSpriteFrameImages_JP_084DE9C0: @ 0x084DE9C0
	sprite_frame_image 0x0849498C, 0x100
	sprite_frame_image 0x08494A8C, 0x100
	sprite_frame_image 0x08494B8C, 0x100
	sprite_frame_image 0x08494C8C, 0x100
	sprite_frame_image 0x08494D8C, 0x100
	sprite_frame_image 0x08494E8C, 0x100
	sprite_frame_image 0x08494F8C, 0x100
	sprite_frame_image 0x0849508C, 0x100
	sprite_frame_image 0x0849518C, 0x100
	.globl gSpriteFrameImages_JP_084DEA08
gSpriteFrameImages_JP_084DEA08: @ 0x084DEA08
	sprite_frame_image 0x0849528C, 0x100
	sprite_frame_image 0x0849538C, 0x100
	sprite_frame_image 0x0849548C, 0x100
	sprite_frame_image 0x0849558C, 0x100
	sprite_frame_image 0x0849568C, 0x100
	sprite_frame_image 0x0849578C, 0x100
	sprite_frame_image 0x0849588C, 0x100
	sprite_frame_image 0x0849598C, 0x100
	sprite_frame_image 0x08495A8C, 0x100
	.globl gSpriteFrameImages_JP_084DEA50
gSpriteFrameImages_JP_084DEA50: @ 0x084DEA50
	sprite_frame_image 0x08495B8C, 0x100
	sprite_frame_image 0x08495C8C, 0x100
	sprite_frame_image 0x08495D8C, 0x100
	sprite_frame_image 0x08495E8C, 0x100
	sprite_frame_image 0x08495F8C, 0x100
	sprite_frame_image 0x0849608C, 0x100
	sprite_frame_image 0x0849618C, 0x100
	sprite_frame_image 0x0849628C, 0x100
	sprite_frame_image 0x0849638C, 0x100
	.globl gSpriteFrameImages_JP_084DEA98
gSpriteFrameImages_JP_084DEA98: @ 0x084DEA98
	sprite_frame_image 0x0849648C, 0x100
	sprite_frame_image 0x0849658C, 0x100
	sprite_frame_image 0x0849668C, 0x100
	sprite_frame_image 0x0849678C, 0x100
	sprite_frame_image 0x0849688C, 0x100
	sprite_frame_image 0x0849698C, 0x100
	sprite_frame_image 0x08496A8C, 0x100
	sprite_frame_image 0x08496B8C, 0x100
	sprite_frame_image 0x08496C8C, 0x100
	.globl gSpriteFrameImages_JP_084DEAE0
gSpriteFrameImages_JP_084DEAE0: @ 0x084DEAE0
	sprite_frame_image 0x08496D8C, 0x100
	sprite_frame_image 0x08496E8C, 0x100
	sprite_frame_image 0x08496F8C, 0x100
	sprite_frame_image 0x0849708C, 0x100
	sprite_frame_image 0x0849718C, 0x100
	sprite_frame_image 0x0849728C, 0x100
	sprite_frame_image 0x0849738C, 0x100
	sprite_frame_image 0x0849748C, 0x100
	sprite_frame_image 0x0849758C, 0x100
	.globl gSpriteFrameImages_JP_084DEB28
gSpriteFrameImages_JP_084DEB28: @ 0x084DEB28
	sprite_frame_image 0x0849768C, 0x100
	sprite_frame_image 0x0849778C, 0x100
	sprite_frame_image 0x0849788C, 0x100
	sprite_frame_image 0x0849798C, 0x100
	sprite_frame_image 0x08497A8C, 0x100
	sprite_frame_image 0x08497B8C, 0x100
	sprite_frame_image 0x08497C8C, 0x100
	sprite_frame_image 0x08497D8C, 0x100
	sprite_frame_image 0x08497E8C, 0x100
	.globl gSpriteFrameImages_JP_084DEB70
gSpriteFrameImages_JP_084DEB70: @ 0x084DEB70
	sprite_frame_image 0x08497F8C, 0x100
	sprite_frame_image 0x0849808C, 0x100
	sprite_frame_image 0x0849818C, 0x100
	sprite_frame_image 0x0849828C, 0x100
	sprite_frame_image 0x0849838C, 0x100
	sprite_frame_image 0x0849848C, 0x100
	sprite_frame_image 0x0849858C, 0x100
	sprite_frame_image 0x0849868C, 0x100
	sprite_frame_image 0x0849878C, 0x100
	.globl gSpriteFrameImages_JP_084DEBB8
gSpriteFrameImages_JP_084DEBB8: @ 0x084DEBB8
	sprite_frame_image 0x0849918C, 0x100
	sprite_frame_image 0x0849928C, 0x100
	sprite_frame_image 0x0849938C, 0x100
	sprite_frame_image 0x0849948C, 0x100
	sprite_frame_image 0x0849958C, 0x100
	sprite_frame_image 0x0849968C, 0x100
	sprite_frame_image 0x0849978C, 0x100
	sprite_frame_image 0x0849988C, 0x100
	sprite_frame_image 0x0849998C, 0x100
	.globl gSpriteFrameImages_JP_084DEC00
gSpriteFrameImages_JP_084DEC00: @ 0x084DEC00
	sprite_frame_image 0x08499A8C, 0x100
	sprite_frame_image 0x08499B8C, 0x100
	sprite_frame_image 0x08499C8C, 0x100
	sprite_frame_image 0x08499D8C, 0x100
	sprite_frame_image 0x08499E8C, 0x100
	sprite_frame_image 0x08499F8C, 0x100
	sprite_frame_image 0x0849A08C, 0x100
	sprite_frame_image 0x0849A18C, 0x100
	sprite_frame_image 0x0849A28C, 0x100
	.globl gSpriteFrameImages_JP_084DEC48
gSpriteFrameImages_JP_084DEC48: @ 0x084DEC48
	sprite_frame_image 0x0849A38C, 0x100
	sprite_frame_image 0x0849A48C, 0x100
	sprite_frame_image 0x0849A58C, 0x100
	sprite_frame_image 0x0849A68C, 0x100
	sprite_frame_image 0x0849A78C, 0x100
	sprite_frame_image 0x0849A88C, 0x100
	sprite_frame_image 0x0849A98C, 0x100
	sprite_frame_image 0x0849AA8C, 0x100
	sprite_frame_image 0x0849AB8C, 0x100
	.globl gSpriteFrameImages_JP_084DEC90
gSpriteFrameImages_JP_084DEC90: @ 0x084DEC90
	sprite_frame_image 0x0849AC8C, 0x100
	sprite_frame_image 0x0849AD8C, 0x100
	sprite_frame_image 0x0849AE8C, 0x100
	sprite_frame_image 0x0849AF8C, 0x100
	sprite_frame_image 0x0849B08C, 0x100
	sprite_frame_image 0x0849B18C, 0x100
	sprite_frame_image 0x0849B28C, 0x100
	sprite_frame_image 0x0849B38C, 0x100
	sprite_frame_image 0x0849B48C, 0x100
	.globl gSpriteFrameImages_JP_084DECD8
gSpriteFrameImages_JP_084DECD8: @ 0x084DECD8
	sprite_frame_image 0x0849B58C, 0x100
	sprite_frame_image 0x0849B68C, 0x100
	sprite_frame_image 0x0849B78C, 0x100
	sprite_frame_image 0x0849B88C, 0x100
	sprite_frame_image 0x0849B98C, 0x100
	sprite_frame_image 0x0849BA8C, 0x100
	sprite_frame_image 0x0849BB8C, 0x100
	sprite_frame_image 0x0849BC8C, 0x100
	sprite_frame_image 0x0849BD8C, 0x100
	.globl gSpriteFrameImages_JP_084DED20
gSpriteFrameImages_JP_084DED20: @ 0x084DED20
	sprite_frame_image 0x0849BE8C, 0x100
	sprite_frame_image 0x0849BF8C, 0x100
	sprite_frame_image 0x0849C08C, 0x100
	sprite_frame_image 0x0849C18C, 0x100
	sprite_frame_image 0x0849C28C, 0x100
	sprite_frame_image 0x0849C38C, 0x100
	sprite_frame_image 0x0849C48C, 0x100
	sprite_frame_image 0x0849C58C, 0x100
	sprite_frame_image 0x0849C68C, 0x100
	.globl gSpriteFrameImages_JP_084DED68
gSpriteFrameImages_JP_084DED68: @ 0x084DED68
	sprite_frame_image 0x0849C78C, 0x100
	sprite_frame_image 0x0849C88C, 0x100
	sprite_frame_image 0x0849C98C, 0x100
	sprite_frame_image 0x0849CA8C, 0x100
	sprite_frame_image 0x0849CB8C, 0x100
	sprite_frame_image 0x0849CC8C, 0x100
	sprite_frame_image 0x0849CD8C, 0x100
	sprite_frame_image 0x0849CE8C, 0x100
	sprite_frame_image 0x0849CF8C, 0x100
	.globl gSpriteFrameImages_JP_084DEDB0
gSpriteFrameImages_JP_084DEDB0: @ 0x084DEDB0
	sprite_frame_image 0x0849D08C, 0x100
	sprite_frame_image 0x0849D18C, 0x100
	sprite_frame_image 0x0849D28C, 0x100
	sprite_frame_image 0x0849D38C, 0x100
	sprite_frame_image 0x0849D48C, 0x100
	sprite_frame_image 0x0849D58C, 0x100
	sprite_frame_image 0x0849D68C, 0x100
	sprite_frame_image 0x0849D78C, 0x100
	sprite_frame_image 0x0849D88C, 0x100
	.globl gSpriteFrameImages_JP_084DEDF8
gSpriteFrameImages_JP_084DEDF8: @ 0x084DEDF8
	sprite_frame_image 0x0849D98C, 0x100
	sprite_frame_image 0x0849DA8C, 0x100
	sprite_frame_image 0x0849DB8C, 0x100
	sprite_frame_image 0x0849DC8C, 0x100
	sprite_frame_image 0x0849DD8C, 0x100
	sprite_frame_image 0x0849DE8C, 0x100
	sprite_frame_image 0x0849DF8C, 0x100
	sprite_frame_image 0x0849E08C, 0x100
	sprite_frame_image 0x0849E18C, 0x100
	.globl gSpriteFrameImages_JP_084DEE40
gSpriteFrameImages_JP_084DEE40: @ 0x084DEE40
	sprite_frame_image 0x0849E28C, 0x100
	sprite_frame_image 0x0849E38C, 0x100
	sprite_frame_image 0x0849E48C, 0x100
	sprite_frame_image 0x0849E58C, 0x100
	sprite_frame_image 0x0849E68C, 0x100
	sprite_frame_image 0x0849E78C, 0x100
	sprite_frame_image 0x0849E88C, 0x100
	sprite_frame_image 0x0849E98C, 0x100
	sprite_frame_image 0x0849EA8C, 0x100
	.globl gSpriteFrameImages_JP_084DEE88
gSpriteFrameImages_JP_084DEE88: @ 0x084DEE88
	sprite_frame_image 0x0849EB8C, 0x100
	sprite_frame_image 0x0849EC8C, 0x100
	sprite_frame_image 0x0849ED8C, 0x100
	sprite_frame_image 0x0849EE8C, 0x100
	sprite_frame_image 0x0849EF8C, 0x100
	sprite_frame_image 0x0849F08C, 0x100
	sprite_frame_image 0x0849F18C, 0x100
	sprite_frame_image 0x0849F28C, 0x100
	sprite_frame_image 0x0849F38C, 0x100
	.globl gSpriteFrameImages_JP_084DEED0
gSpriteFrameImages_JP_084DEED0: @ 0x084DEED0
	sprite_frame_image 0x0849F48C, 0x80
	sprite_frame_image 0x0849F50C, 0x80
	sprite_frame_image 0x0849F58C, 0x80
	sprite_frame_image 0x0849F60C, 0x80
	sprite_frame_image 0x0849F68C, 0x80
	sprite_frame_image 0x0849F70C, 0x80
	sprite_frame_image 0x0849F78C, 0x80
	sprite_frame_image 0x0849F80C, 0x80
	sprite_frame_image 0x0849F88C, 0x80
	.globl gSpriteFrameImages_JP_084DEF18
gSpriteFrameImages_JP_084DEF18: @ 0x084DEF18
	sprite_frame_image 0x0849F90C, 0x80
	sprite_frame_image 0x0849F98C, 0x80
	sprite_frame_image 0x0849FA0C, 0x80
	sprite_frame_image 0x0849FA8C, 0x80
	sprite_frame_image 0x0849FB0C, 0x80
	sprite_frame_image 0x0849FB8C, 0x80
	sprite_frame_image 0x0849FC0C, 0x80
	sprite_frame_image 0x0849FC8C, 0x80
	sprite_frame_image 0x0849FD0C, 0x80
	.globl gSpriteFrameImages_JP_084DEF60
gSpriteFrameImages_JP_084DEF60: @ 0x084DEF60
	sprite_frame_image 0x0849FD8C, 0x100
	sprite_frame_image 0x0849FE8C, 0x100
	sprite_frame_image 0x0849FF8C, 0x100
	sprite_frame_image 0x084A008C, 0x100
	sprite_frame_image 0x084A018C, 0x100
	sprite_frame_image 0x084A028C, 0x100
	sprite_frame_image 0x084A038C, 0x100
	sprite_frame_image 0x084A048C, 0x100
	sprite_frame_image 0x084A058C, 0x100
	.globl gSpriteFrameImages_JP_084DEFA8
gSpriteFrameImages_JP_084DEFA8: @ 0x084DEFA8
	sprite_frame_image 0x084A068C, 0x200
	sprite_frame_image 0x084A088C, 0x200
	sprite_frame_image 0x084A0A8C, 0x200
	sprite_frame_image 0x084A0C8C, 0x200
	sprite_frame_image 0x084A0E8C, 0x200
	sprite_frame_image 0x084A108C, 0x200
	sprite_frame_image 0x084A128C, 0x200
	sprite_frame_image 0x084A148C, 0x200
	sprite_frame_image 0x084A168C, 0x200
	.globl gSpriteFrameImages_JP_084DEFF0
gSpriteFrameImages_JP_084DEFF0: @ 0x084DEFF0
	sprite_frame_image 0x084A188C, 0x200
	sprite_frame_image 0x084A1A8C, 0x200
	sprite_frame_image 0x084A1C8C, 0x200
	sprite_frame_image 0x084A1E8C, 0x200
	sprite_frame_image 0x084A208C, 0x200
	sprite_frame_image 0x084A228C, 0x200
	sprite_frame_image 0x084A248C, 0x200
	sprite_frame_image 0x084A268C, 0x200
	sprite_frame_image 0x084A288C, 0x200
	.globl gSpriteFrameImages_JP_084DF038
gSpriteFrameImages_JP_084DF038: @ 0x084DF038
	sprite_frame_image 0x084A3C8C, 0x100
	sprite_frame_image 0x084A3D8C, 0x100
	sprite_frame_image 0x084A3E8C, 0x100
	sprite_frame_image 0x084A3C8C, 0x100
	sprite_frame_image 0x084A3C8C, 0x100
	sprite_frame_image 0x084A3D8C, 0x100
	sprite_frame_image 0x084A3D8C, 0x100
	sprite_frame_image 0x084A3E8C, 0x100
	sprite_frame_image 0x084A3E8C, 0x100
	sprite_frame_image 0x084A3F8C, 0x100
	.globl gSpriteFrameImages_JP_084DF088
gSpriteFrameImages_JP_084DF088: @ 0x084DF088
	sprite_frame_image 0x084A408C, 0x80
	.globl gSpriteFrameImages_JP_084DF090
gSpriteFrameImages_JP_084DF090: @ 0x084DF090
	sprite_frame_image 0x084A410C, 0x100
	sprite_frame_image 0x084A420C, 0x100
	sprite_frame_image 0x084A430C, 0x100
	sprite_frame_image 0x084A440C, 0x100
	sprite_frame_image 0x084A450C, 0x100
	sprite_frame_image 0x084A460C, 0x100
	sprite_frame_image 0x084A470C, 0x100
	sprite_frame_image 0x084A480C, 0x100
	sprite_frame_image 0x084A490C, 0x100
	.globl gSpriteFrameImages_JP_084DF0D8
gSpriteFrameImages_JP_084DF0D8: @ 0x084DF0D8
	sprite_frame_image 0x084A2A8C, 0x100
	sprite_frame_image 0x084A2B8C, 0x100
	sprite_frame_image 0x084A2C8C, 0x100
	sprite_frame_image 0x084A2D8C, 0x100
	sprite_frame_image 0x084A2E8C, 0x100
	sprite_frame_image 0x084A2F8C, 0x100
	sprite_frame_image 0x084A308C, 0x100
	sprite_frame_image 0x084A318C, 0x100
	sprite_frame_image 0x084A328C, 0x100
	.globl gSpriteFrameImages_JP_084DF120
gSpriteFrameImages_JP_084DF120: @ 0x084DF120
	sprite_frame_image 0x084A338C, 0x100
	sprite_frame_image 0x084A348C, 0x100
	sprite_frame_image 0x084A358C, 0x100
	sprite_frame_image 0x084A368C, 0x100
	sprite_frame_image 0x084A378C, 0x100
	sprite_frame_image 0x084A388C, 0x100
	sprite_frame_image 0x084A398C, 0x100
	sprite_frame_image 0x084A3A8C, 0x100
	sprite_frame_image 0x084A3B8C, 0x100
	.globl gSpriteFrameImages_JP_084DF168
gSpriteFrameImages_JP_084DF168: @ 0x084DF168
	sprite_frame_image 0x084A4A0C, 0x100
	sprite_frame_image 0x084A4B0C, 0x100
	sprite_frame_image 0x084A4C0C, 0x100
	sprite_frame_image 0x084A4D0C, 0x100
	sprite_frame_image 0x084A4E0C, 0x100
	sprite_frame_image 0x084A4F0C, 0x100
	sprite_frame_image 0x084A500C, 0x100
	sprite_frame_image 0x084A510C, 0x100
	sprite_frame_image 0x084A520C, 0x100
	.globl gSpriteFrameImages_JP_084DF1B0
gSpriteFrameImages_JP_084DF1B0: @ 0x084DF1B0
	sprite_frame_image 0x084A530C, 0x100
	sprite_frame_image 0x084A540C, 0x100
	sprite_frame_image 0x084A550C, 0x100
	sprite_frame_image 0x084A560C, 0x100
	sprite_frame_image 0x084A570C, 0x100
	sprite_frame_image 0x084A580C, 0x100
	sprite_frame_image 0x084A590C, 0x100
	sprite_frame_image 0x084A5A0C, 0x100
	sprite_frame_image 0x084A5B0C, 0x100
	.globl gSpriteFrameImages_JP_084DF1F8
gSpriteFrameImages_JP_084DF1F8: @ 0x084DF1F8
	sprite_frame_image 0x084A5C0C, 0x100
	sprite_frame_image 0x084A5D0C, 0x100
	sprite_frame_image 0x084A5E0C, 0x100
	sprite_frame_image 0x084A5F0C, 0x100
	sprite_frame_image 0x084A600C, 0x100
	sprite_frame_image 0x084A610C, 0x100
	sprite_frame_image 0x084A620C, 0x100
	sprite_frame_image 0x084A630C, 0x100
	sprite_frame_image 0x084A640C, 0x100
	.globl gSpriteFrameImages_JP_084DF240
gSpriteFrameImages_JP_084DF240: @ 0x084DF240
	sprite_frame_image 0x084A650C, 0x100
	sprite_frame_image 0x084A660C, 0x100
	sprite_frame_image 0x084A670C, 0x100
	sprite_frame_image 0x084A680C, 0x100
	sprite_frame_image 0x084A690C, 0x100
	sprite_frame_image 0x084A6A0C, 0x100
	sprite_frame_image 0x084A6B0C, 0x100
	sprite_frame_image 0x084A6C0C, 0x100
	sprite_frame_image 0x084A6D0C, 0x100
	.globl gSpriteFrameImages_JP_084DF288
gSpriteFrameImages_JP_084DF288: @ 0x084DF288
	sprite_frame_image 0x084BA38C, 0x80
	.globl gSpriteFrameImages_JP_084DF290
gSpriteFrameImages_JP_084DF290: @ 0x084DF290
	sprite_frame_image 0x084BA40C, 0x80
	.globl gSpriteFrameImages_JP_084DF298
gSpriteFrameImages_JP_084DF298: @ 0x084DF298
	sprite_frame_image 0x084BA48C, 0x80
	.globl gSpriteFrameImages_JP_084DF2A0
gSpriteFrameImages_JP_084DF2A0: @ 0x084DF2A0
	sprite_frame_image 0x084BA50C, 0x80
	.globl gSpriteFrameImages_JP_084DF2A8
gSpriteFrameImages_JP_084DF2A8: @ 0x084DF2A8
	sprite_frame_image 0x084BA58C, 0x80
	.globl gSpriteFrameImages_JP_084DF2B0
gSpriteFrameImages_JP_084DF2B0: @ 0x084DF2B0
	sprite_frame_image 0x084BA60C, 0x80
	.globl gSpriteFrameImages_JP_084DF2B8
gSpriteFrameImages_JP_084DF2B8: @ 0x084DF2B8
	sprite_frame_image 0x084BCC0C, 0x80
	sprite_frame_image 0x084BCC8C, 0x80
	sprite_frame_image 0x084BCD0C, 0x80
	sprite_frame_image 0x084BCD8C, 0x80
	.globl gSpriteFrameImages_JP_084DF2D8
gSpriteFrameImages_JP_084DF2D8: @ 0x084DF2D8
	sprite_frame_image 0x084A6E0C, 0x100
	sprite_frame_image 0x084A6F0C, 0x100
	sprite_frame_image 0x084A700C, 0x100
	sprite_frame_image 0x084A710C, 0x100
	sprite_frame_image 0x084A720C, 0x100
	sprite_frame_image 0x084A730C, 0x100
	sprite_frame_image 0x084A740C, 0x100
	sprite_frame_image 0x084A750C, 0x100
	sprite_frame_image 0x084A760C, 0x100
	.globl gSpriteFrameImages_JP_084DF320
gSpriteFrameImages_JP_084DF320: @ 0x084DF320
	sprite_frame_image 0x084A770C, 0x100
	sprite_frame_image 0x084A780C, 0x100
	sprite_frame_image 0x084A790C, 0x100
	sprite_frame_image 0x084A7A0C, 0x100
	sprite_frame_image 0x084A7B0C, 0x100
	sprite_frame_image 0x084A7C0C, 0x100
	sprite_frame_image 0x084A7D0C, 0x100
	sprite_frame_image 0x084A7E0C, 0x100
	sprite_frame_image 0x084A7F0C, 0x100
	.globl gSpriteFrameImages_JP_084DF368
gSpriteFrameImages_JP_084DF368: @ 0x084DF368
	sprite_frame_image 0x084A800C, 0x100
	sprite_frame_image 0x084A810C, 0x100
	sprite_frame_image 0x084A820C, 0x100
	sprite_frame_image 0x084A830C, 0x100
	sprite_frame_image 0x084A840C, 0x100
	sprite_frame_image 0x084A850C, 0x100
	sprite_frame_image 0x084A860C, 0x100
	sprite_frame_image 0x084A870C, 0x100
	sprite_frame_image 0x084A880C, 0x100
	.globl gSpriteFrameImages_JP_084DF3B0
gSpriteFrameImages_JP_084DF3B0: @ 0x084DF3B0
	sprite_frame_image 0x084BCE0C, 0x80
	sprite_frame_image 0x084BCE8C, 0x80
	sprite_frame_image 0x084BCF0C, 0x80
	sprite_frame_image 0x084BCF8C, 0x80
	.globl gSpriteFrameImages_JP_084DF3D0
gSpriteFrameImages_JP_084DF3D0: @ 0x084DF3D0
	sprite_frame_image 0x084BD00C, 0x80
	.globl gSpriteFrameImages_JP_084DF3D8
gSpriteFrameImages_JP_084DF3D8: @ 0x084DF3D8
	sprite_frame_image 0x084BD08C, 0x200
	sprite_frame_image 0x084BD28C, 0x200
	sprite_frame_image 0x084BD48C, 0x200
	sprite_frame_image 0x084BD08C, 0x200
	sprite_frame_image 0x084BD08C, 0x200
	sprite_frame_image 0x084BD28C, 0x200
	sprite_frame_image 0x084BD28C, 0x200
	sprite_frame_image 0x084BD48C, 0x200
	sprite_frame_image 0x084BD48C, 0x200
	.globl gSpriteFrameImages_JP_084DF420
gSpriteFrameImages_JP_084DF420: @ 0x084DF420
	sprite_frame_image 0x084BDCAC, 0x480
	.globl gSpriteFrameImages_JP_084DF428
gSpriteFrameImages_JP_084DF428: @ 0x084DF428
	sprite_frame_image gObjectEventFrameGfx_JP_084BE14C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084BE14C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084BE14C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084BE34C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084BE54C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084BE34C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084BE54C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084BE34C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084BE54C, 0x200
	.globl gSpriteFrameImages_JP_084DF470
gSpriteFrameImages_JP_084DF470: @ 0x084DF470
	sprite_frame_image gObjectEventFrameGfx_JP_084BE74C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084BE74C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084BE74C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084BE94C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084BE94C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084BE94C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084BE94C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084BE94C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084BE94C, 0x200
	.globl gSpriteFrameImages_JP_084DF4B8
gSpriteFrameImages_JP_084DF4B8: @ 0x084DF4B8
	sprite_frame_image gObjectEventFrameGfx_JP_084BEB6C, 0x80
	.globl gSpriteFrameImages_JP_084DF4C0
gSpriteFrameImages_JP_084DF4C0: @ 0x084DF4C0
	sprite_frame_image gObjectEventFrameGfx_JP_084BEBEC, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084BEDEC, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084BEFEC, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084BF1EC, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084BF3EC, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084BF5EC, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084BF7EC, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084BF9EC, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084BFBEC, 0x200
	.globl gSpriteFrameImages_JP_084DF508
gSpriteFrameImages_JP_084DF508: @ 0x084DF508
	sprite_frame_image gObjectEventFrameGfx_JP_084BFE0C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084C000C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084C020C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084C040C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084C060C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084C080C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084C0A0C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084C0C0C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084C0E0C, 0x200
	.globl gSpriteFrameImages_JP_084DF550
gSpriteFrameImages_JP_084DF550: @ 0x084DF550
	sprite_frame_image 0x084A890C, 0x100
	sprite_frame_image 0x084A8A0C, 0x100
	sprite_frame_image 0x084A8B0C, 0x100
	sprite_frame_image 0x084A8C0C, 0x100
	sprite_frame_image 0x084A8D0C, 0x100
	sprite_frame_image 0x084A8E0C, 0x100
	sprite_frame_image 0x084A8F0C, 0x100
	sprite_frame_image 0x084A900C, 0x100
	sprite_frame_image 0x084A910C, 0x100
	.globl gSpriteFrameImages_JP_084DF598
gSpriteFrameImages_JP_084DF598: @ 0x084DF598
	sprite_frame_image 0x0847B4CC, 0x100
	sprite_frame_image 0x0847B5CC, 0x100
	sprite_frame_image 0x0847B6CC, 0x100
	sprite_frame_image 0x0847B7CC, 0x100
	sprite_frame_image 0x0847B8CC, 0x100
	sprite_frame_image 0x0847B9CC, 0x100
	sprite_frame_image 0x0847BACC, 0x100
	sprite_frame_image 0x0847BBCC, 0x100
	sprite_frame_image 0x0847BCCC, 0x100
	sprite_frame_image 0x0847BDCC, 0x100
	sprite_frame_image 0x0847BECC, 0x100
	sprite_frame_image 0x0847BFCC, 0x100
	sprite_frame_image 0x0847C0CC, 0x100
	sprite_frame_image 0x0847C1CC, 0x100
	sprite_frame_image 0x0847C2CC, 0x100
	sprite_frame_image 0x0847C3CC, 0x100
	sprite_frame_image 0x0847C4CC, 0x100
	sprite_frame_image 0x0847C5CC, 0x100
	.globl gSpriteFrameImages_JP_084DF628
gSpriteFrameImages_JP_084DF628: @ 0x084DF628
	sprite_frame_image 0x0847DB0C, 0x200
	sprite_frame_image 0x0847DD0C, 0x200
	sprite_frame_image 0x0847DF0C, 0x200
	sprite_frame_image 0x0847E10C, 0x200
	sprite_frame_image 0x0847E30C, 0x200
	sprite_frame_image 0x0847E50C, 0x200
	sprite_frame_image 0x0847E70C, 0x200
	sprite_frame_image 0x0847E90C, 0x200
	sprite_frame_image 0x0847EB0C, 0x200
	.globl gSpriteFrameImages_JP_084DF670
gSpriteFrameImages_JP_084DF670: @ 0x084DF670
	sprite_frame_image 0x0847ED0C, 0x200
	sprite_frame_image 0x0847EF0C, 0x200
	sprite_frame_image 0x0847F10C, 0x200
	sprite_frame_image 0x0847F30C, 0x200
	sprite_frame_image 0x0847F50C, 0x200
	sprite_frame_image 0x0847F70C, 0x200
	sprite_frame_image 0x0847F90C, 0x200
	sprite_frame_image 0x0847FB0C, 0x200
	sprite_frame_image 0x0847FD0C, 0x200
	sprite_frame_image 0x0847FF0C, 0x200
	sprite_frame_image 0x0848010C, 0x200
	sprite_frame_image 0x0848030C, 0x200
	sprite_frame_image 0x0848050C, 0x200
	sprite_frame_image 0x0848070C, 0x200
	sprite_frame_image 0x0848090C, 0x200
	sprite_frame_image 0x08480B0C, 0x200
	sprite_frame_image 0x08480D0C, 0x200
	sprite_frame_image 0x08480F0C, 0x200
	sprite_frame_image 0x0848110C, 0x200
	sprite_frame_image 0x0848130C, 0x200
	sprite_frame_image 0x0848150C, 0x200
	sprite_frame_image 0x0848170C, 0x200
	sprite_frame_image 0x0848190C, 0x200
	sprite_frame_image 0x08481B0C, 0x200
	sprite_frame_image 0x08481D0C, 0x200
	sprite_frame_image 0x08481F0C, 0x200
	sprite_frame_image 0x0848210C, 0x200
	.globl gSpriteFrameImages_JP_084DF748
gSpriteFrameImages_JP_084DF748: @ 0x084DF748
	sprite_frame_image 0x0848230C, 0x200
	sprite_frame_image 0x0848270C, 0x200
	sprite_frame_image 0x08482B0C, 0x200
	sprite_frame_image 0x0848230C, 0x200
	sprite_frame_image 0x0848230C, 0x200
	sprite_frame_image 0x0848270C, 0x200
	sprite_frame_image 0x0848270C, 0x200
	sprite_frame_image 0x08482B0C, 0x200
	sprite_frame_image 0x08482B0C, 0x200
	sprite_frame_image 0x0848250C, 0x200
	sprite_frame_image 0x0848290C, 0x200
	sprite_frame_image 0x08482D0C, 0x200
	.globl gSpriteFrameImages_JP_084DF7A8
gSpriteFrameImages_JP_084DF7A8: @ 0x084DF7A8
	sprite_frame_image 0x0847ACAC, 0x200
	sprite_frame_image 0x0847AEAC, 0x200
	sprite_frame_image 0x0847B0AC, 0x200
	sprite_frame_image 0x0847ACAC, 0x200
	sprite_frame_image 0x0847ACAC, 0x200
	sprite_frame_image 0x0847AEAC, 0x200
	sprite_frame_image 0x0847AEAC, 0x200
	sprite_frame_image 0x0847B0AC, 0x200
	sprite_frame_image 0x0847B0AC, 0x200
	.globl gSpriteFrameImages_JP_084DF7F0
gSpriteFrameImages_JP_084DF7F0: @ 0x084DF7F0
	sprite_frame_image 0x08482F0C, 0x200
	sprite_frame_image 0x0848310C, 0x200
	sprite_frame_image 0x0848330C, 0x200
	sprite_frame_image 0x0848350C, 0x200
	sprite_frame_image 0x0848370C, 0x200
	.globl gSpriteFrameImages_JP_084DF818
gSpriteFrameImages_JP_084DF818: @ 0x084DF818
	sprite_frame_image 0x084A920C, 0x100
	sprite_frame_image 0x084A930C, 0x100
	sprite_frame_image 0x084A940C, 0x100
	sprite_frame_image 0x084A950C, 0x100
	sprite_frame_image 0x084A960C, 0x100
	sprite_frame_image 0x084A970C, 0x100
	sprite_frame_image 0x084A980C, 0x100
	sprite_frame_image 0x084A990C, 0x100
	sprite_frame_image 0x084A9A0C, 0x100
	.globl gSpriteFrameImages_JP_084DF860
gSpriteFrameImages_JP_084DF860: @ 0x084DF860
	sprite_frame_image gObjectEventFrameGfx_JP_084D6C4C, 0x80
	.globl gSpriteFrameImages_JP_084DF868
gSpriteFrameImages_JP_084DF868: @ 0x084DF868
	sprite_frame_image gObjectEventFrameGfx_JP_084C102C, 0x800
	.globl gSpriteFrameImages_JP_084DF870
gSpriteFrameImages_JP_084DF870: @ 0x084DF870
	sprite_frame_image 0x084A9B0C, 0x100
	sprite_frame_image 0x084A9C0C, 0x100
	sprite_frame_image 0x084A9D0C, 0x100
	sprite_frame_image 0x084A9E0C, 0x100
	sprite_frame_image 0x084A9F0C, 0x100
	sprite_frame_image 0x084AA00C, 0x100
	sprite_frame_image 0x084AA10C, 0x100
	sprite_frame_image 0x084AA20C, 0x100
	sprite_frame_image 0x084AA30C, 0x100
	.globl gSpriteFrameImages_JP_084DF8B8
gSpriteFrameImages_JP_084DF8B8: @ 0x084DF8B8
	sprite_frame_image 0x084AA40C, 0x100
	sprite_frame_image 0x084AA50C, 0x100
	sprite_frame_image 0x084AA60C, 0x100
	sprite_frame_image 0x084AA70C, 0x100
	sprite_frame_image 0x084AA80C, 0x100
	sprite_frame_image 0x084AA90C, 0x100
	sprite_frame_image 0x084AAA0C, 0x100
	sprite_frame_image 0x084AAB0C, 0x100
	sprite_frame_image 0x084AAC0C, 0x100
	.globl gSpriteFrameImages_JP_084DF900
gSpriteFrameImages_JP_084DF900: @ 0x084DF900
	sprite_frame_image 0x084AAD0C, 0x100
	sprite_frame_image 0x084AAE0C, 0x100
	sprite_frame_image 0x084AAF0C, 0x100
	sprite_frame_image 0x084AB00C, 0x100
	sprite_frame_image 0x084AB10C, 0x100
	sprite_frame_image 0x084AB20C, 0x100
	sprite_frame_image 0x084AB30C, 0x100
	sprite_frame_image 0x084AB40C, 0x100
	sprite_frame_image 0x084AB50C, 0x100
	.globl gSpriteFrameImages_JP_084DF948
gSpriteFrameImages_JP_084DF948: @ 0x084DF948
	sprite_frame_image 0x084AB60C, 0x100
	sprite_frame_image 0x084AB70C, 0x100
	sprite_frame_image 0x084AB80C, 0x100
	sprite_frame_image 0x084AB90C, 0x100
	sprite_frame_image 0x084ABA0C, 0x100
	sprite_frame_image 0x084ABB0C, 0x100
	sprite_frame_image 0x084ABC0C, 0x100
	sprite_frame_image 0x084ABD0C, 0x100
	sprite_frame_image 0x084ABE0C, 0x100
	.globl gSpriteFrameImages_JP_084DF990
gSpriteFrameImages_JP_084DF990: @ 0x084DF990
	sprite_frame_image 0x084ABF0C, 0x100
	sprite_frame_image 0x084AC00C, 0x100
	sprite_frame_image 0x084AC10C, 0x100
	sprite_frame_image 0x084AC20C, 0x100
	sprite_frame_image 0x084AC30C, 0x100
	sprite_frame_image 0x084AC40C, 0x100
	sprite_frame_image 0x084AC50C, 0x100
	sprite_frame_image 0x084AC60C, 0x100
	sprite_frame_image 0x084AC70C, 0x100
	.globl gSpriteFrameImages_JP_084DF9D8
gSpriteFrameImages_JP_084DF9D8: @ 0x084DF9D8
	sprite_frame_image 0x084AC80C, 0x100
	sprite_frame_image 0x084AC90C, 0x100
	sprite_frame_image 0x084ACA0C, 0x100
	sprite_frame_image 0x084ACB0C, 0x100
	sprite_frame_image 0x084ACC0C, 0x100
	sprite_frame_image 0x084ACD0C, 0x100
	sprite_frame_image 0x084ACE0C, 0x100
	sprite_frame_image 0x084ACF0C, 0x100
	sprite_frame_image 0x084AD00C, 0x100
	.globl gSpriteFrameImages_JP_084DFA20
gSpriteFrameImages_JP_084DFA20: @ 0x084DFA20
	sprite_frame_image 0x084AD10C, 0x100
	sprite_frame_image 0x084AD20C, 0x100
	sprite_frame_image 0x084AD30C, 0x100
	sprite_frame_image 0x084AD10C, 0x100
	sprite_frame_image 0x084AD10C, 0x100
	sprite_frame_image 0x084AD20C, 0x100
	sprite_frame_image 0x084AD20C, 0x100
	sprite_frame_image 0x084AD30C, 0x100
	sprite_frame_image 0x084AD30C, 0x100
	.globl gSpriteFrameImages_JP_084DFA68
gSpriteFrameImages_JP_084DFA68: @ 0x084DFA68
	sprite_frame_image 0x084AD40C, 0x100
	sprite_frame_image 0x084AD50C, 0x100
	sprite_frame_image 0x084AD60C, 0x100
	sprite_frame_image 0x084AD40C, 0x100
	sprite_frame_image 0x084AD40C, 0x100
	sprite_frame_image 0x084AD50C, 0x100
	sprite_frame_image 0x084AD50C, 0x100
	sprite_frame_image 0x084AD60C, 0x100
	sprite_frame_image 0x084AD60C, 0x100
	.globl gSpriteFrameImages_JP_084DFAB0
gSpriteFrameImages_JP_084DFAB0: @ 0x084DFAB0
	sprite_frame_image 0x084AD70C, 0x100
	sprite_frame_image 0x084AD80C, 0x100
	sprite_frame_image 0x084AD90C, 0x100
	sprite_frame_image 0x084AD70C, 0x100
	sprite_frame_image 0x084AD70C, 0x100
	sprite_frame_image 0x084AD80C, 0x100
	sprite_frame_image 0x084AD80C, 0x100
	sprite_frame_image 0x084AD90C, 0x100
	sprite_frame_image 0x084AD90C, 0x100
	.globl gSpriteFrameImages_JP_084DFAF8
gSpriteFrameImages_JP_084DFAF8: @ 0x084DFAF8
	sprite_frame_image 0x084ADA0C, 0x100
	sprite_frame_image 0x084ADB0C, 0x100
	sprite_frame_image 0x084ADC0C, 0x100
	sprite_frame_image 0x084ADA0C, 0x100
	sprite_frame_image 0x084ADA0C, 0x100
	sprite_frame_image 0x084ADB0C, 0x100
	sprite_frame_image 0x084ADB0C, 0x100
	sprite_frame_image 0x084ADC0C, 0x100
	sprite_frame_image 0x084ADC0C, 0x100
	.globl gSpriteFrameImages_JP_084DFB40
gSpriteFrameImages_JP_084DFB40: @ 0x084DFB40
	sprite_frame_image 0x084ADD0C, 0x100
	sprite_frame_image 0x084ADE0C, 0x100
	sprite_frame_image 0x084ADF0C, 0x100
	sprite_frame_image 0x084ADD0C, 0x100
	sprite_frame_image 0x084ADD0C, 0x100
	sprite_frame_image 0x084ADE0C, 0x100
	sprite_frame_image 0x084ADE0C, 0x100
	sprite_frame_image 0x084ADF0C, 0x100
	sprite_frame_image 0x084ADF0C, 0x100
	.globl gSpriteFrameImages_JP_084DFB88
gSpriteFrameImages_JP_084DFB88: @ 0x084DFB88
	sprite_frame_image 0x084AE00C, 0x100
	sprite_frame_image 0x084AE10C, 0x100
	sprite_frame_image 0x084AE20C, 0x100
	sprite_frame_image 0x084AE00C, 0x100
	sprite_frame_image 0x084AE00C, 0x100
	sprite_frame_image 0x084AE10C, 0x100
	sprite_frame_image 0x084AE10C, 0x100
	sprite_frame_image 0x084AE20C, 0x100
	sprite_frame_image 0x084AE20C, 0x100
	.globl gSpriteFrameImages_JP_084DFBD0
gSpriteFrameImages_JP_084DFBD0: @ 0x084DFBD0
	sprite_frame_image 0x084AE30C, 0x100
	sprite_frame_image 0x084AE40C, 0x100
	sprite_frame_image 0x084AE50C, 0x100
	sprite_frame_image 0x084AE30C, 0x100
	sprite_frame_image 0x084AE30C, 0x100
	sprite_frame_image 0x084AE40C, 0x100
	sprite_frame_image 0x084AE40C, 0x100
	sprite_frame_image 0x084AE50C, 0x100
	sprite_frame_image 0x084AE50C, 0x100
	.globl gSpriteFrameImages_JP_084DFC18
gSpriteFrameImages_JP_084DFC18: @ 0x084DFC18
	sprite_frame_image 0x084AE60C, 0x100
	sprite_frame_image 0x084AE70C, 0x100
	sprite_frame_image 0x084AE80C, 0x100
	sprite_frame_image 0x084AE60C, 0x100
	sprite_frame_image 0x084AE60C, 0x100
	sprite_frame_image 0x084AE70C, 0x100
	sprite_frame_image 0x084AE70C, 0x100
	sprite_frame_image 0x084AE80C, 0x100
	sprite_frame_image 0x084AE80C, 0x100
	.globl gSpriteFrameImages_JP_084DFC60
gSpriteFrameImages_JP_084DFC60: @ 0x084DFC60
	sprite_frame_image 0x084AE90C, 0x100
	sprite_frame_image 0x084AEA0C, 0x100
	sprite_frame_image 0x084AEB0C, 0x100
	sprite_frame_image 0x084AEC0C, 0x100
	sprite_frame_image 0x084AED0C, 0x100
	sprite_frame_image 0x084AEE0C, 0x100
	sprite_frame_image 0x084AEF0C, 0x100
	sprite_frame_image 0x084AF00C, 0x100
	sprite_frame_image 0x084AF10C, 0x100
	.globl gSpriteFrameImages_JP_084DFCA8
gSpriteFrameImages_JP_084DFCA8: @ 0x084DFCA8
	sprite_frame_image 0x084AF20C, 0x100
	sprite_frame_image 0x084AF30C, 0x100
	sprite_frame_image 0x084AF40C, 0x100
	sprite_frame_image 0x084AF20C, 0x100
	sprite_frame_image 0x084AF20C, 0x100
	sprite_frame_image 0x084AF30C, 0x100
	sprite_frame_image 0x084AF30C, 0x100
	sprite_frame_image 0x084AF40C, 0x100
	sprite_frame_image 0x084AF40C, 0x100
	.globl gSpriteFrameImages_JP_084DFCF0
gSpriteFrameImages_JP_084DFCF0: @ 0x084DFCF0
	sprite_frame_image 0x084AF50C, 0x100
	sprite_frame_image 0x084AF60C, 0x100
	sprite_frame_image 0x084AF70C, 0x100
	sprite_frame_image 0x084AF50C, 0x100
	sprite_frame_image 0x084AF50C, 0x100
	sprite_frame_image 0x084AF60C, 0x100
	sprite_frame_image 0x084AF60C, 0x100
	sprite_frame_image 0x084AF70C, 0x100
	sprite_frame_image 0x084AF70C, 0x100
	.globl gSpriteFrameImages_JP_084DFD38
gSpriteFrameImages_JP_084DFD38: @ 0x084DFD38
	sprite_frame_image 0x084AF80C, 0x100
	sprite_frame_image 0x084AF90C, 0x100
	sprite_frame_image 0x084AFA0C, 0x100
	sprite_frame_image 0x084AF80C, 0x100
	sprite_frame_image 0x084AF80C, 0x100
	sprite_frame_image 0x084AF90C, 0x100
	sprite_frame_image 0x084AF90C, 0x100
	sprite_frame_image 0x084AFA0C, 0x100
	sprite_frame_image 0x084AFA0C, 0x100
	.globl gSpriteFrameImages_JP_084DFD80
gSpriteFrameImages_JP_084DFD80: @ 0x084DFD80
	sprite_frame_image 0x084AFB0C, 0x100
	sprite_frame_image 0x084AFC0C, 0x100
	sprite_frame_image 0x084AFD0C, 0x100
	sprite_frame_image 0x084AFE0C, 0x100
	sprite_frame_image 0x084AFF0C, 0x100
	sprite_frame_image 0x084B000C, 0x100
	sprite_frame_image 0x084B010C, 0x100
	sprite_frame_image 0x084B020C, 0x100
	sprite_frame_image 0x084B030C, 0x100
	.globl gSpriteFrameImages_JP_084DFDC8
gSpriteFrameImages_JP_084DFDC8: @ 0x084DFDC8
	sprite_frame_image 0x084B040C, 0x100
	sprite_frame_image 0x084B050C, 0x100
	sprite_frame_image 0x084B060C, 0x100
	sprite_frame_image 0x084B070C, 0x100
	sprite_frame_image 0x084B080C, 0x100
	sprite_frame_image 0x084B090C, 0x100
	sprite_frame_image 0x084B0A0C, 0x100
	sprite_frame_image 0x084B0B0C, 0x100
	sprite_frame_image 0x084B0C0C, 0x100
	.globl gSpriteFrameImages_JP_084DFE10
gSpriteFrameImages_JP_084DFE10: @ 0x084DFE10
	sprite_frame_image 0x084B0D0C, 0x100
	sprite_frame_image 0x084B0E0C, 0x100
	sprite_frame_image 0x084B0F0C, 0x100
	sprite_frame_image 0x084B100C, 0x100
	sprite_frame_image 0x084B110C, 0x100
	sprite_frame_image 0x084B120C, 0x100
	sprite_frame_image 0x084B130C, 0x100
	sprite_frame_image 0x084B140C, 0x100
	sprite_frame_image 0x084B150C, 0x100
	.globl gSpriteFrameImages_JP_084DFE58
gSpriteFrameImages_JP_084DFE58: @ 0x084DFE58
	sprite_frame_image 0x084B160C, 0x80
	sprite_frame_image 0x084B168C, 0x80
	sprite_frame_image 0x084B170C, 0x80
	sprite_frame_image 0x084B178C, 0x80
	sprite_frame_image 0x084B180C, 0x80
	sprite_frame_image 0x084B188C, 0x80
	sprite_frame_image 0x084B190C, 0x80
	sprite_frame_image 0x084B198C, 0x80
	sprite_frame_image 0x084B1A0C, 0x80
	.globl gSpriteFrameImages_JP_084DFEA0
gSpriteFrameImages_JP_084DFEA0: @ 0x084DFEA0
	sprite_frame_image 0x08477EAC, 0x200
	sprite_frame_image 0x084780AC, 0x200
	sprite_frame_image 0x084782AC, 0x200
	sprite_frame_image 0x084784AC, 0x200
	sprite_frame_image 0x084786AC, 0x200
	sprite_frame_image 0x084788AC, 0x200
	sprite_frame_image 0x08478AAC, 0x200
	sprite_frame_image 0x08478CAC, 0x200
	sprite_frame_image 0x08478EAC, 0x200
	sprite_frame_image 0x084790AC, 0x200
	sprite_frame_image 0x084792AC, 0x200
	sprite_frame_image 0x084794AC, 0x200
	.globl gSpriteFrameImages_JP_084DFF00
gSpriteFrameImages_JP_084DFF00: @ 0x084DFF00
	sprite_frame_image 0x0848390C, 0x200
	sprite_frame_image 0x08483B0C, 0x200
	sprite_frame_image 0x08483D0C, 0x200
	sprite_frame_image 0x08483F0C, 0x200
	sprite_frame_image 0x0848410C, 0x200
	sprite_frame_image 0x0848430C, 0x200
	sprite_frame_image 0x0848450C, 0x200
	sprite_frame_image 0x0848470C, 0x200
	sprite_frame_image 0x0848490C, 0x200
	sprite_frame_image 0x08484B0C, 0x200
	sprite_frame_image 0x08484D0C, 0x200
	sprite_frame_image 0x08484F0C, 0x200
	.globl gSpriteFrameImages_JP_084DFF60
gSpriteFrameImages_JP_084DFF60: @ 0x084DFF60
	sprite_frame_image 0x084B1A8C, 0x100
	sprite_frame_image 0x084B1B8C, 0x100
	sprite_frame_image 0x084B1C8C, 0x100
	sprite_frame_image 0x084B1D8C, 0x100
	sprite_frame_image 0x084B1E8C, 0x100
	sprite_frame_image 0x084B1F8C, 0x100
	sprite_frame_image 0x084B208C, 0x100
	sprite_frame_image 0x084B218C, 0x100
	sprite_frame_image 0x084B228C, 0x100
	.globl gSpriteFrameImages_JP_084DFFA8
gSpriteFrameImages_JP_084DFFA8: @ 0x084DFFA8
	sprite_frame_image gObjectEventFrameGfx_JP_084C184C, 0x780
	sprite_frame_image gObjectEventFrameGfx_JP_084C184C, 0x780
	sprite_frame_image gObjectEventFrameGfx_JP_084C184C, 0x780
	sprite_frame_image gObjectEventFrameGfx_JP_084C184C, 0x780
	sprite_frame_image gObjectEventFrameGfx_JP_084C184C, 0x780
	sprite_frame_image gObjectEventFrameGfx_JP_084C184C, 0x780
	sprite_frame_image gObjectEventFrameGfx_JP_084C184C, 0x780
	sprite_frame_image gObjectEventFrameGfx_JP_084C184C, 0x780
	sprite_frame_image gObjectEventFrameGfx_JP_084C184C, 0x780
	.globl gSpriteFrameImages_JP_084DFFF0
gSpriteFrameImages_JP_084DFFF0: @ 0x084DFFF0
	sprite_frame_image 0x084BD70C, 0x580
	sprite_frame_image 0x084BD70C, 0x580
	sprite_frame_image 0x084BD70C, 0x580
	sprite_frame_image 0x084BD70C, 0x580
	sprite_frame_image 0x084BD70C, 0x580
	sprite_frame_image 0x084BD70C, 0x580
	sprite_frame_image 0x084BD70C, 0x580
	sprite_frame_image 0x084BD70C, 0x580
	sprite_frame_image 0x084BD70C, 0x580
	.globl gSpriteFrameImages_JP_084E0038
gSpriteFrameImages_JP_084E0038: @ 0x084E0038
	sprite_frame_image 0x084BA68C, 0x80
	.globl gSpriteFrameImages_JP_084E0040
gSpriteFrameImages_JP_084E0040: @ 0x084E0040
	sprite_frame_image 0x084BA70C, 0x80
	.globl gSpriteFrameImages_JP_084E0048
gSpriteFrameImages_JP_084E0048: @ 0x084E0048
	sprite_frame_image 0x084BA78C, 0x80
	.globl gSpriteFrameImages_JP_084E0050
gSpriteFrameImages_JP_084E0050: @ 0x084E0050
	sprite_frame_image 0x084BA80C, 0x80
	.globl gSpriteFrameImages_JP_084E0058
gSpriteFrameImages_JP_084E0058: @ 0x084E0058
	sprite_frame_image 0x084BA88C, 0x80
	.globl gSpriteFrameImages_JP_084E0060
gSpriteFrameImages_JP_084E0060: @ 0x084E0060
	sprite_frame_image 0x084BA90C, 0x80
	.globl gSpriteFrameImages_JP_084E0068
gSpriteFrameImages_JP_084E0068: @ 0x084E0068
	sprite_frame_image 0x084BA98C, 0x80
	.globl gSpriteFrameImages_JP_084E0070
gSpriteFrameImages_JP_084E0070: @ 0x084E0070
	sprite_frame_image 0x084BAA0C, 0x80
	.globl gSpriteFrameImages_JP_084E0078
gSpriteFrameImages_JP_084E0078: @ 0x084E0078
	sprite_frame_image 0x084BAA8C, 0x80
	.globl gSpriteFrameImages_JP_084E0080
gSpriteFrameImages_JP_084E0080: @ 0x084E0080
	sprite_frame_image 0x084BAB0C, 0x80
	.globl gSpriteFrameImages_JP_084E0088
gSpriteFrameImages_JP_084E0088: @ 0x084E0088
	sprite_frame_image 0x084BAB8C, 0x80
	.globl gSpriteFrameImages_JP_084E0090
gSpriteFrameImages_JP_084E0090: @ 0x084E0090
	sprite_frame_image 0x084BAC0C, 0x80
	.globl gSpriteFrameImages_JP_084E0098
gSpriteFrameImages_JP_084E0098: @ 0x084E0098
	sprite_frame_image 0x084BAC8C, 0x80
	.globl gSpriteFrameImages_JP_084E00A0
gSpriteFrameImages_JP_084E00A0: @ 0x084E00A0
	sprite_frame_image 0x084BAD0C, 0x80
	.globl gSpriteFrameImages_JP_084E00A8
gSpriteFrameImages_JP_084E00A8: @ 0x084E00A8
	sprite_frame_image 0x084BAD8C, 0x80
	.globl gSpriteFrameImages_JP_084E00B0
gSpriteFrameImages_JP_084E00B0: @ 0x084E00B0
	sprite_frame_image 0x084BAE0C, 0x80
	.globl gSpriteFrameImages_JP_084E00B8
gSpriteFrameImages_JP_084E00B8: @ 0x084E00B8
	sprite_frame_image 0x084BAE8C, 0x80
	.globl gSpriteFrameImages_JP_084E00C0
gSpriteFrameImages_JP_084E00C0: @ 0x084E00C0
	sprite_frame_image 0x084BAF0C, 0x80
	.globl gSpriteFrameImages_JP_084E00C8
gSpriteFrameImages_JP_084E00C8: @ 0x084E00C8
	sprite_frame_image 0x084BAF8C, 0x80
	.globl gSpriteFrameImages_JP_084E00D0
gSpriteFrameImages_JP_084E00D0: @ 0x084E00D0
	sprite_frame_image 0x084BB00C, 0x80
	.globl gSpriteFrameImages_JP_084E00D8
gSpriteFrameImages_JP_084E00D8: @ 0x084E00D8
	sprite_frame_image 0x084BB08C, 0x80
	.globl gSpriteFrameImages_JP_084E00E0
gSpriteFrameImages_JP_084E00E0: @ 0x084E00E0
	sprite_frame_image 0x084BB10C, 0x80
	.globl gSpriteFrameImages_JP_084E00E8
gSpriteFrameImages_JP_084E00E8: @ 0x084E00E8
	sprite_frame_image 0x084BB18C, 0x80
	.globl gSpriteFrameImages_JP_084E00F0
gSpriteFrameImages_JP_084E00F0: @ 0x084E00F0
	sprite_frame_image 0x084BB20C, 0x80
	.globl gSpriteFrameImages_JP_084E00F8
gSpriteFrameImages_JP_084E00F8: @ 0x084E00F8
	sprite_frame_image 0x084BB28C, 0x80
	.globl gSpriteFrameImages_JP_084E0100
gSpriteFrameImages_JP_084E0100: @ 0x084E0100
	sprite_frame_image 0x084BB30C, 0x80
	.globl gSpriteFrameImages_JP_084E0108
gSpriteFrameImages_JP_084E0108: @ 0x084E0108
	sprite_frame_image 0x084BB38C, 0x80
	.globl gSpriteFrameImages_JP_084E0110
gSpriteFrameImages_JP_084E0110: @ 0x084E0110
	sprite_frame_image 0x084BB40C, 0x80
	.globl gSpriteFrameImages_JP_084E0118
gSpriteFrameImages_JP_084E0118: @ 0x084E0118
	sprite_frame_image 0x084BB48C, 0x80
	.globl gSpriteFrameImages_JP_084E0120
gSpriteFrameImages_JP_084E0120: @ 0x084E0120
	sprite_frame_image 0x084BB50C, 0x80
	.globl gSpriteFrameImages_JP_084E0128
gSpriteFrameImages_JP_084E0128: @ 0x084E0128
	sprite_frame_image 0x084BB58C, 0x80
	.globl gSpriteFrameImages_JP_084E0130
gSpriteFrameImages_JP_084E0130: @ 0x084E0130
	sprite_frame_image 0x084BB60C, 0x80
	.globl gSpriteFrameImages_JP_084E0138
gSpriteFrameImages_JP_084E0138: @ 0x084E0138
	sprite_frame_image 0x084BB68C, 0x80
	.globl gSpriteFrameImages_JP_084E0140
gSpriteFrameImages_JP_084E0140: @ 0x084E0140
	sprite_frame_image 0x084BB70C, 0x80
	.globl gSpriteFrameImages_JP_084E0148
gSpriteFrameImages_JP_084E0148: @ 0x084E0148
	sprite_frame_image 0x084BB78C, 0x80
	.globl gSpriteFrameImages_JP_084E0150
gSpriteFrameImages_JP_084E0150: @ 0x084E0150
	sprite_frame_image 0x084BB80C, 0x200
	.globl gSpriteFrameImages_JP_084E0158
gSpriteFrameImages_JP_084E0158: @ 0x084E0158
	sprite_frame_image 0x084BBA0C, 0x200
	.globl gSpriteFrameImages_JP_084E0160
gSpriteFrameImages_JP_084E0160: @ 0x084E0160
	sprite_frame_image 0x084BBC0C, 0x200
	.globl gSpriteFrameImages_JP_084E0168
gSpriteFrameImages_JP_084E0168: @ 0x084E0168
	sprite_frame_image 0x084BBE0C, 0x200
	.globl gSpriteFrameImages_JP_084E0170
gSpriteFrameImages_JP_084E0170: @ 0x084E0170
	sprite_frame_image 0x084BC00C, 0x200
	.globl gSpriteFrameImages_JP_084E0178
gSpriteFrameImages_JP_084E0178: @ 0x084E0178
	sprite_frame_image 0x084BC20C, 0x200
	.globl gSpriteFrameImages_JP_084E0180
gSpriteFrameImages_JP_084E0180: @ 0x084E0180
	sprite_frame_image 0x084BC40C, 0x200
	.globl gSpriteFrameImages_JP_084E0188
gSpriteFrameImages_JP_084E0188: @ 0x084E0188
	sprite_frame_image 0x084BC60C, 0x200
	.globl gSpriteFrameImages_JP_084E0190
gSpriteFrameImages_JP_084E0190: @ 0x084E0190
	sprite_frame_image 0x084BC80C, 0x200
	.globl gSpriteFrameImages_JP_084E0198
gSpriteFrameImages_JP_084E0198: @ 0x084E0198
	sprite_frame_image 0x084BCA0C, 0x200
	.globl gSpriteFrameImages_JP_084E01A0
gSpriteFrameImages_JP_084E01A0: @ 0x084E01A0
	sprite_frame_image 0x084B238C, 0x200
	sprite_frame_image 0x084B238C, 0x200
	sprite_frame_image 0x084B238C, 0x200
	sprite_frame_image 0x084B258C, 0x200
	sprite_frame_image 0x084B278C, 0x200
	sprite_frame_image 0x084B258C, 0x200
	sprite_frame_image 0x084B278C, 0x200
	sprite_frame_image 0x084B258C, 0x200
	sprite_frame_image 0x084B278C, 0x200
	.globl gSpriteFrameImages_JP_084E01E8
gSpriteFrameImages_JP_084E01E8: @ 0x084E01E8
	sprite_frame_image 0x084B298C, 0x100
	sprite_frame_image 0x084B2A8C, 0x100
	sprite_frame_image 0x084B2B8C, 0x100
	sprite_frame_image 0x084B298C, 0x100
	sprite_frame_image 0x084B298C, 0x100
	sprite_frame_image 0x084B2A8C, 0x100
	sprite_frame_image 0x084B2A8C, 0x100
	sprite_frame_image 0x084B2B8C, 0x100
	sprite_frame_image 0x084B2B8C, 0x100
	.globl gSpriteFrameImages_JP_084E0230
gSpriteFrameImages_JP_084E0230: @ 0x084E0230
	sprite_frame_image 0x084B2C8C, 0x100
	sprite_frame_image 0x084B2D8C, 0x100
	sprite_frame_image 0x084B2E8C, 0x100
	sprite_frame_image 0x084B2F8C, 0x100
	sprite_frame_image 0x084B308C, 0x100
	sprite_frame_image 0x084B318C, 0x100
	sprite_frame_image 0x084B328C, 0x100
	sprite_frame_image 0x084B338C, 0x100
	sprite_frame_image 0x084B348C, 0x100
	.globl gSpriteFrameImages_JP_084E0278
gSpriteFrameImages_JP_084E0278: @ 0x084E0278
	sprite_frame_image 0x084796AC, 0x200
	sprite_frame_image 0x08479AAC, 0x200
	sprite_frame_image 0x08479EAC, 0x200
	sprite_frame_image 0x084798AC, 0x200
	sprite_frame_image 0x084798AC, 0x200
	sprite_frame_image 0x08479CAC, 0x200
	sprite_frame_image 0x08479CAC, 0x200
	sprite_frame_image 0x0847A0AC, 0x200
	sprite_frame_image 0x0847A0AC, 0x200
	.globl gSpriteFrameImages_JP_084E02C0
gSpriteFrameImages_JP_084E02C0: @ 0x084E02C0
	sprite_frame_image 0x0848510C, 0x200
	sprite_frame_image 0x0848550C, 0x200
	sprite_frame_image 0x0848590C, 0x200
	sprite_frame_image 0x0848530C, 0x200
	sprite_frame_image 0x0848530C, 0x200
	sprite_frame_image 0x0848570C, 0x200
	sprite_frame_image 0x0848570C, 0x200
	sprite_frame_image 0x08485B0C, 0x200
	sprite_frame_image 0x08485B0C, 0x200
	.globl gSpriteFrameImages_JP_084E0308
gSpriteFrameImages_JP_084E0308: @ 0x084E0308
	sprite_frame_image 0x0847A2AC, 0x100
	.globl gSpriteFrameImages_JP_084E0310
gSpriteFrameImages_JP_084E0310: @ 0x084E0310
	sprite_frame_image 0x0847A3AC, 0x100
	.globl gSpriteFrameImages_JP_084E0318
gSpriteFrameImages_JP_084E0318: @ 0x084E0318
	sprite_frame_image 0x084B358C, 0x100
	sprite_frame_image 0x084B368C, 0x100
	sprite_frame_image 0x084B378C, 0x100
	sprite_frame_image 0x084B388C, 0x100
	sprite_frame_image 0x084B398C, 0x100
	sprite_frame_image 0x084B3A8C, 0x100
	sprite_frame_image 0x084B3B8C, 0x100
	sprite_frame_image 0x084B3C8C, 0x100
	sprite_frame_image 0x084B3D8C, 0x100
	.globl gSpriteFrameImages_JP_084E0360
gSpriteFrameImages_JP_084E0360: @ 0x084E0360
	sprite_frame_image 0x084B3E8C, 0x100
	sprite_frame_image 0x084B3F8C, 0x100
	sprite_frame_image 0x084B408C, 0x100
	sprite_frame_image 0x084B418C, 0x100
	sprite_frame_image 0x084B428C, 0x100
	sprite_frame_image 0x084B438C, 0x100
	sprite_frame_image 0x084B448C, 0x100
	sprite_frame_image 0x084B458C, 0x100
	sprite_frame_image 0x084B468C, 0x100
	.globl gSpriteFrameImages_JP_084E03A8
gSpriteFrameImages_JP_084E03A8: @ 0x084E03A8
	sprite_frame_image 0x084B478C, 0x200
	sprite_frame_image 0x084B478C, 0x200
	sprite_frame_image 0x084B478C, 0x200
	sprite_frame_image 0x084B498C, 0x200
	sprite_frame_image 0x084B498C, 0x200
	sprite_frame_image 0x084B498C, 0x200
	sprite_frame_image 0x084B498C, 0x200
	sprite_frame_image 0x084B498C, 0x200
	sprite_frame_image 0x084B498C, 0x200
	.globl gSpriteFrameImages_JP_084E03F0
gSpriteFrameImages_JP_084E03F0: @ 0x084E03F0
	sprite_frame_image 0x084B4F8C, 0x200
	sprite_frame_image 0x084B4F8C, 0x200
	sprite_frame_image 0x084B4F8C, 0x200
	sprite_frame_image 0x084B518C, 0x200
	sprite_frame_image 0x084B518C, 0x200
	sprite_frame_image 0x084B518C, 0x200
	sprite_frame_image 0x084B518C, 0x200
	sprite_frame_image 0x084B518C, 0x200
	sprite_frame_image 0x084B518C, 0x200
	.globl gSpriteFrameImages_JP_084E0438
gSpriteFrameImages_JP_084E0438: @ 0x084E0438
	sprite_frame_image 0x084B4B8C, 0x200
	sprite_frame_image 0x084B4B8C, 0x200
	sprite_frame_image 0x084B4B8C, 0x200
	sprite_frame_image 0x084B4D8C, 0x200
	sprite_frame_image 0x084B4D8C, 0x200
	sprite_frame_image 0x084B4D8C, 0x200
	sprite_frame_image 0x084B4D8C, 0x200
	sprite_frame_image 0x084B4D8C, 0x200
	sprite_frame_image 0x084B4D8C, 0x200
	.globl gSpriteFrameImages_JP_084E0480
gSpriteFrameImages_JP_084E0480: @ 0x084E0480
	sprite_frame_image 0x084B538C, 0x200
	sprite_frame_image 0x084B538C, 0x200
	sprite_frame_image 0x084B538C, 0x200
	sprite_frame_image 0x084B558C, 0x200
	sprite_frame_image 0x084B558C, 0x200
	sprite_frame_image 0x084B558C, 0x200
	sprite_frame_image 0x084B558C, 0x200
	sprite_frame_image 0x084B558C, 0x200
	sprite_frame_image 0x084B558C, 0x200
	.globl gSpriteFrameImages_JP_084E04C8
gSpriteFrameImages_JP_084E04C8: @ 0x084E04C8
	sprite_frame_image 0x084BD68C, 0x80
	.globl gSpriteFrameImages_JP_084E04D0
gSpriteFrameImages_JP_084E04D0: @ 0x084E04D0
	sprite_frame_image 0x084B578C, 0x200
	sprite_frame_image 0x084B578C, 0x200
	sprite_frame_image 0x084B578C, 0x200
	sprite_frame_image 0x084B578C, 0x200
	sprite_frame_image 0x084B578C, 0x200
	sprite_frame_image 0x084B578C, 0x200
	sprite_frame_image 0x084B578C, 0x200
	sprite_frame_image 0x084B578C, 0x200
	sprite_frame_image 0x084B578C, 0x200
	.globl gSpriteFrameImages_JP_084E0518
gSpriteFrameImages_JP_084E0518: @ 0x084E0518
	sprite_frame_image 0x084B598C, 0x80
	sprite_frame_image 0x084B5A0C, 0x80
	sprite_frame_image 0x084B5A8C, 0x80
	sprite_frame_image 0x084B598C, 0x80
	sprite_frame_image 0x084B598C, 0x80
	sprite_frame_image 0x084B5A0C, 0x80
	sprite_frame_image 0x084B5A0C, 0x80
	sprite_frame_image 0x084B5A8C, 0x80
	sprite_frame_image 0x084B5A8C, 0x80
	.globl gSpriteFrameImages_JP_084E0560
gSpriteFrameImages_JP_084E0560: @ 0x084E0560
	sprite_frame_image 0x084B5B0C, 0x80
	sprite_frame_image 0x084B5B8C, 0x80
	sprite_frame_image 0x084B5C0C, 0x80
	sprite_frame_image 0x084B5B0C, 0x80
	sprite_frame_image 0x084B5B0C, 0x80
	sprite_frame_image 0x084B5B8C, 0x80
	sprite_frame_image 0x084B5B8C, 0x80
	sprite_frame_image 0x084B5C0C, 0x80
	sprite_frame_image 0x084B5C0C, 0x80
	.globl gSpriteFrameImages_JP_084E05A8
gSpriteFrameImages_JP_084E05A8: @ 0x084E05A8
	sprite_frame_image 0x084B5C8C, 0x800
	sprite_frame_image 0x084B648C, 0x800
	sprite_frame_image 0x084B6C8C, 0x800
	sprite_frame_image 0x084B748C, 0x800
	sprite_frame_image 0x084B7C8C, 0x800
	.globl gSpriteFrameImages_JP_084E05D0
gSpriteFrameImages_JP_084E05D0: @ 0x084E05D0
	sprite_frame_image 0x084B848C, 0x800
	sprite_frame_image 0x084B848C, 0x800
	sprite_frame_image 0x084B848C, 0x800
	sprite_frame_image 0x084B848C, 0x800
	sprite_frame_image 0x084B848C, 0x800
	sprite_frame_image 0x084B848C, 0x800
	sprite_frame_image 0x084B848C, 0x800
	sprite_frame_image 0x084B848C, 0x800
	sprite_frame_image 0x084B848C, 0x800
	.globl gSpriteFrameImages_JP_084E0618
gSpriteFrameImages_JP_084E0618: @ 0x084E0618
	sprite_frame_image 0x084B8C8C, 0x80
	sprite_frame_image 0x084B8D0C, 0x80
	sprite_frame_image 0x084B8D8C, 0x80
	sprite_frame_image 0x084B8C8C, 0x80
	sprite_frame_image 0x084B8C8C, 0x80
	sprite_frame_image 0x084B8D0C, 0x80
	sprite_frame_image 0x084B8D0C, 0x80
	sprite_frame_image 0x084B8D8C, 0x80
	sprite_frame_image 0x084B8D8C, 0x80
	.globl gSpriteFrameImages_JP_084E0660
gSpriteFrameImages_JP_084E0660: @ 0x084E0660
	sprite_frame_image 0x084B8E0C, 0x80
	sprite_frame_image 0x084B8E8C, 0x80
	sprite_frame_image 0x084B8F0C, 0x80
	sprite_frame_image 0x084B8E0C, 0x80
	sprite_frame_image 0x084B8E0C, 0x80
	sprite_frame_image 0x084B8E8C, 0x80
	sprite_frame_image 0x084B8E8C, 0x80
	sprite_frame_image 0x084B8F0C, 0x80
	sprite_frame_image 0x084B8F0C, 0x80
	.globl gSpriteFrameImages_JP_084E06A8
gSpriteFrameImages_JP_084E06A8: @ 0x084E06A8
	sprite_frame_image 0x084B8F8C, 0x80
	sprite_frame_image 0x084B900C, 0x80
	sprite_frame_image 0x084B908C, 0x80
	sprite_frame_image 0x084B8F8C, 0x80
	sprite_frame_image 0x084B8F8C, 0x80
	sprite_frame_image 0x084B900C, 0x80
	sprite_frame_image 0x084B900C, 0x80
	sprite_frame_image 0x084B908C, 0x80
	sprite_frame_image 0x084B908C, 0x80
	.globl gSpriteFrameImages_JP_084E06F0
gSpriteFrameImages_JP_084E06F0: @ 0x084E06F0
	sprite_frame_image 0x084B910C, 0x80
	sprite_frame_image 0x084B920C, 0x80
	sprite_frame_image 0x084B930C, 0x80
	sprite_frame_image 0x084B918C, 0x80
	sprite_frame_image 0x084B918C, 0x80
	sprite_frame_image 0x084B928C, 0x80
	sprite_frame_image 0x084B928C, 0x80
	sprite_frame_image 0x084B938C, 0x80
	sprite_frame_image 0x084B938C, 0x80
	.globl gSpriteFrameImages_JP_084E0738
gSpriteFrameImages_JP_084E0738: @ 0x084E0738
	sprite_frame_image 0x084B940C, 0x80
	sprite_frame_image 0x084B948C, 0x80
	sprite_frame_image 0x084B950C, 0x80
	sprite_frame_image 0x084B958C, 0x80
	sprite_frame_image 0x084B960C, 0x80
	sprite_frame_image 0x084B968C, 0x80
	sprite_frame_image 0x084B970C, 0x80
	sprite_frame_image 0x084B978C, 0x80
	sprite_frame_image 0x084B980C, 0x80
	.globl gSpriteFrameImages_JP_084E0780
gSpriteFrameImages_JP_084E0780: @ 0x084E0780
	sprite_frame_image 0x084B988C, 0x80
	sprite_frame_image 0x084B990C, 0x80
	sprite_frame_image 0x084B998C, 0x80
	sprite_frame_image 0x084B988C, 0x80
	sprite_frame_image 0x084B988C, 0x80
	sprite_frame_image 0x084B990C, 0x80
	sprite_frame_image 0x084B990C, 0x80
	sprite_frame_image 0x084B998C, 0x80
	sprite_frame_image 0x084B998C, 0x80
	.globl gSpriteFrameImages_JP_084E07C8
gSpriteFrameImages_JP_084E07C8: @ 0x084E07C8
	sprite_frame_image 0x084B9A0C, 0x100
	sprite_frame_image 0x084B9B0C, 0x100
	sprite_frame_image 0x084B9C0C, 0x100
	sprite_frame_image 0x084B9D0C, 0x100
	sprite_frame_image 0x084B9E0C, 0x100
	sprite_frame_image 0x084B9F0C, 0x100
	sprite_frame_image 0x084BA00C, 0x100
	sprite_frame_image 0x084BA10C, 0x100
	sprite_frame_image 0x084BA20C, 0x100
	.globl gSpriteFrameImages_JP_084E0810
gSpriteFrameImages_JP_084E0810: @ 0x084E0810
	sprite_frame_image gObjectEventFrameGfx_JP_084D4A4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D4B4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D4C4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D4D4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D4E4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D4F4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D504C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D514C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D524C, 0x100
	.globl gSpriteFrameImages_JP_084E0858
gSpriteFrameImages_JP_084E0858: @ 0x084E0858
	sprite_frame_image gObjectEventFrameGfx_JP_084D414C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D424C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D434C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D444C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D454C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D464C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D474C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D484C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D494C, 0x100
	.globl gSpriteFrameImages_JP_084E08A0
gSpriteFrameImages_JP_084E08A0: @ 0x084E08A0
	sprite_frame_image gObjectEventFrameGfx_JP_084D664C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D674C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D684C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D664C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D664C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D674C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D674C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D684C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D684C, 0x100
	.globl gSpriteFrameImages_JP_084E08E8
gSpriteFrameImages_JP_084E08E8: @ 0x084E08E8
	sprite_frame_image gObjectEventFrameGfx_JP_084D534C, 0x100
	.globl gSpriteFrameImages_JP_084E08F0
gSpriteFrameImages_JP_084E08F0: @ 0x084E08F0
	sprite_frame_image gObjectEventFrameGfx_JP_084D5D4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D5E4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D5F4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D604C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D614C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D624C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D634C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D644C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D654C, 0x100
	.globl gSpriteFrameImages_JP_084E0938
gSpriteFrameImages_JP_084E0938: @ 0x084E0938
	sprite_frame_image gObjectEventFrameGfx_JP_084D544C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D554C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D564C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D574C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D584C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D594C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D5A4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D5B4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D5C4C, 0x100
	.globl gSpriteFrameImages_JP_084E0980
gSpriteFrameImages_JP_084E0980: @ 0x084E0980
	sprite_frame_image gObjectEventFrameGfx_JP_084D694C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D6A4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D6B4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D694C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D694C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D6A4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D6A4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D6B4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D6B4C, 0x100
	.globl gSpriteFrameImages_JP_084E09C8
gSpriteFrameImages_JP_084E09C8: @ 0x084E09C8
	sprite_frame_image gObjectEventFrameGfx_JP_084D6CEC, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D6CEC, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D6DEC, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D6CEC, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D6CEC, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D6CEC, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D6CEC, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D6DEC, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D6EEC, 0x100
	.globl gSpriteFrameImages_JP_084E0A10
gSpriteFrameImages_JP_084E0A10: @ 0x084E0A10
	sprite_frame_image gObjectEventFrameGfx_JP_084D6FEC, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D70EC, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D71EC, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D72EC, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D73EC, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D74EC, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D75EC, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D76EC, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D77EC, 0x100
	.globl gSpriteFrameImages_JP_084E0A58
gSpriteFrameImages_JP_084E0A58: @ 0x084E0A58
	sprite_frame_image gObjectEventFrameGfx_JP_084D790C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D7A0C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D7B0C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D7C0C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D7D0C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D7E0C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D7F0C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D800C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D810C, 0x100
	.globl gSpriteFrameImages_JP_084E0AA0
gSpriteFrameImages_JP_084E0AA0: @ 0x084E0AA0
	sprite_frame_image gObjectEventFrameGfx_JP_084D820C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D830C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D840C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D850C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D860C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D870C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D880C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D890C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D8A0C, 0x100
	.globl gSpriteFrameImages_JP_084E0AE8
gSpriteFrameImages_JP_084E0AE8: @ 0x084E0AE8
	sprite_frame_image gObjectEventFrameGfx_JP_084D8D4C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084D8D4C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084D8D4C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084D8D4C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084D8F4C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084D8D4C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084D8F4C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084D8D4C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084D8D4C, 0x200
	.globl gSpriteFrameImages_JP_084E0B30
gSpriteFrameImages_JP_084E0B30: @ 0x084E0B30
	sprite_frame_image gObjectEventFrameGfx_JP_084D8B2C, 0x200
	.globl gSpriteFrameImages_JP_084E0B38
gSpriteFrameImages_JP_084E0B38: @ 0x084E0B38
	sprite_frame_image gObjectEventFrameGfx_JP_084D914C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D924C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D934C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D944C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D954C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D964C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D974C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D984C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D994C, 0x100
	.globl gSpriteFrameImages_JP_084E0B80
gSpriteFrameImages_JP_084E0B80: @ 0x084E0B80
	sprite_frame_image gObjectEventFrameGfx_JP_084D9A4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D9B4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D9C4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D9D4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D9E4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084D9F4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DA04C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DA14C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DA24C, 0x100
	.globl gSpriteFrameImages_JP_084E0BC8
gSpriteFrameImages_JP_084E0BC8: @ 0x084E0BC8
	sprite_frame_image gObjectEventFrameGfx_JP_084DA34C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DA44C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DA54C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DA64C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DA74C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DA84C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DA94C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DAA4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DAB4C, 0x100
	.globl gSpriteFrameImages_JP_084E0C10
gSpriteFrameImages_JP_084E0C10: @ 0x084E0C10
	sprite_frame_image gObjectEventFrameGfx_JP_084DAC4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DAD4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DAE4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DAF4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DB04C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DB14C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DB24C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DB34C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DB44C, 0x100
	.globl gSpriteFrameImages_JP_084E0C58
gSpriteFrameImages_JP_084E0C58: @ 0x084E0C58
	sprite_frame_image gObjectEventFrameGfx_JP_084DB54C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DB64C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DB74C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DB84C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DB94C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DBA4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DBB4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DBC4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DBD4C, 0x100
	.globl gSpriteFrameImages_JP_084E0CA0
gSpriteFrameImages_JP_084E0CA0: @ 0x084E0CA0
	sprite_frame_image gObjectEventFrameGfx_JP_084DBE4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DBF4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DC04C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DC14C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DC24C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DC34C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DC44C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DC54C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DC64C, 0x100
	.globl gSpriteFrameImages_JP_084E0CE8
gSpriteFrameImages_JP_084E0CE8: @ 0x084E0CE8
	sprite_frame_image gObjectEventFrameGfx_JP_084DC74C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DC84C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DC94C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DCA4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DCB4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DCC4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DCD4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DCE4C, 0x100
	sprite_frame_image gObjectEventFrameGfx_JP_084DCF4C, 0x100
	.globl gSpriteFrameImages_JP_084E0D30
gSpriteFrameImages_JP_084E0D30: @ 0x084E0D30
	sprite_frame_image gObjectEventFrameGfx_JP_084DD04C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084DD04C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084DD04C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084DD04C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084DD24C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084DD04C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084DD24C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084DD04C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084DD24C, 0x200
	.globl gSpriteFrameImages_JP_084E0D78
gSpriteFrameImages_JP_084E0D78: @ 0x084E0D78
	sprite_frame_image gObjectEventFrameGfx_JP_084DD46C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084DD46C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084DD46C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084DD46C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084DD66C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084DD46C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084DD66C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084DD46C, 0x200
	sprite_frame_image gObjectEventFrameGfx_JP_084DD66C, 0x200
	.globl gSpriteFrameImages_JP_084E0DC0
gSpriteFrameImages_JP_084E0DC0: @ 0x084E0DC0
	sprite_frame_image 0x08470C6C, 0x100
	sprite_frame_image 0x08470D6C, 0x100
	sprite_frame_image 0x08470E6C, 0x100
	sprite_frame_image 0x08470F6C, 0x100
	sprite_frame_image 0x0847106C, 0x100
	sprite_frame_image 0x0847116C, 0x100
	sprite_frame_image 0x0847126C, 0x100
	sprite_frame_image 0x0847136C, 0x100
	sprite_frame_image 0x0847146C, 0x100
	.globl gSpriteFrameImages_JP_084E0E08
gSpriteFrameImages_JP_084E0E08: @ 0x084E0E08
	sprite_frame_image 0x0847C70C, 0x100
	sprite_frame_image 0x0847C80C, 0x100
	sprite_frame_image 0x0847C90C, 0x100
	sprite_frame_image 0x0847CA0C, 0x100
	sprite_frame_image 0x0847CB0C, 0x100
	sprite_frame_image 0x0847CC0C, 0x100
	sprite_frame_image 0x0847CD0C, 0x100
	sprite_frame_image 0x0847CE0C, 0x100
	sprite_frame_image 0x0847CF0C, 0x100
	@ preserved non-SpriteFrameImage data: 0x084E0E50-0x084E18FF
	@ Named ObjectEventGraphicsInfo resource pointer targets.
	@ ObjectEvent sprite animation commands.
sObjectEventAnimCmd_084E0E50: @ 0x084E0E50
	rodata_anim_frame 0, 8
	rodata_anim_frame 0, 8
	rodata_anim_frame 0, 8
	rodata_anim_frame 0, 8
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0E64: @ 0x084E0E64
	rodata_anim_frame 0, 16
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0E6C: @ 0x084E0E6C
	rodata_anim_frame 1, 16
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0E74: @ 0x084E0E74
	rodata_anim_frame 2, 16
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0E7C: @ 0x084E0E7C
	rodata_anim_frame 2, 16, 1, 0
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0E84: @ 0x084E0E84
	rodata_anim_frame 3, 8
	rodata_anim_frame 0, 8
	rodata_anim_frame 3, 8, 1, 0
	rodata_anim_frame 0, 8
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0E98: @ 0x084E0E98
	rodata_anim_frame 4, 8
	rodata_anim_frame 1, 8
	rodata_anim_frame 4, 8, 1, 0
	rodata_anim_frame 1, 8
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0EAC: @ 0x084E0EAC
	rodata_anim_frame 5, 8
	rodata_anim_frame 2, 8
	rodata_anim_frame 6, 8
	rodata_anim_frame 2, 8
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0EC0: @ 0x084E0EC0
	rodata_anim_frame 5, 8, 1, 0
	rodata_anim_frame 2, 8, 1, 0
	rodata_anim_frame 6, 8, 1, 0
	rodata_anim_frame 2, 8, 1, 0
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0ED4: @ 0x084E0ED4
	rodata_anim_frame 3, 4
	rodata_anim_frame 0, 4
	rodata_anim_frame 3, 4, 1, 0
	rodata_anim_frame 0, 4
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0EE8: @ 0x084E0EE8
	rodata_anim_frame 4, 4
	rodata_anim_frame 1, 4
	rodata_anim_frame 4, 4, 1, 0
	rodata_anim_frame 1, 4
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0EFC: @ 0x084E0EFC
	rodata_anim_frame 5, 4
	rodata_anim_frame 2, 4
	rodata_anim_frame 6, 4
	rodata_anim_frame 2, 4
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0F10: @ 0x084E0F10
	rodata_anim_frame 5, 4, 1, 0
	rodata_anim_frame 2, 4, 1, 0
	rodata_anim_frame 6, 4, 1, 0
	rodata_anim_frame 2, 4, 1, 0
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0F24: @ 0x084E0F24
	rodata_anim_frame 3, 2
	rodata_anim_frame 0, 2
	rodata_anim_frame 3, 2, 1, 0
	rodata_anim_frame 0, 2
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0F38: @ 0x084E0F38
	rodata_anim_frame 4, 2
	rodata_anim_frame 1, 2
	rodata_anim_frame 4, 2, 1, 0
	rodata_anim_frame 1, 2
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0F4C: @ 0x084E0F4C
	rodata_anim_frame 5, 2
	rodata_anim_frame 2, 2
	rodata_anim_frame 6, 2
	rodata_anim_frame 2, 2
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0F60: @ 0x084E0F60
	rodata_anim_frame 5, 2, 1, 0
	rodata_anim_frame 2, 2, 1, 0
	rodata_anim_frame 6, 2, 1, 0
	rodata_anim_frame 2, 2, 1, 0
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0F74: @ 0x084E0F74
	rodata_anim_frame 3, 1
	rodata_anim_frame 0, 1
	rodata_anim_frame 3, 1, 1, 0
	rodata_anim_frame 0, 1
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0F88: @ 0x084E0F88
	rodata_anim_frame 4, 1
	rodata_anim_frame 1, 1
	rodata_anim_frame 4, 1, 1, 0
	rodata_anim_frame 1, 1
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0F9C: @ 0x084E0F9C
	rodata_anim_frame 5, 1
	rodata_anim_frame 2, 1
	rodata_anim_frame 6, 1
	rodata_anim_frame 2, 1
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0FB0: @ 0x084E0FB0
	rodata_anim_frame 5, 1, 1, 0
	rodata_anim_frame 2, 1, 1, 0
	rodata_anim_frame 6, 1, 1, 0
	rodata_anim_frame 2, 1, 1, 0
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0FC4: @ 0x084E0FC4
	rodata_anim_frame 0, 16
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0FCC: @ 0x084E0FCC
	rodata_anim_frame 1, 16
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0FD4: @ 0x084E0FD4
	rodata_anim_frame 2, 16
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0FDC: @ 0x084E0FDC
	rodata_anim_frame 2, 16, 1, 0
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0FE4: @ 0x084E0FE4
	rodata_anim_frame 3, 8
	rodata_anim_frame 0, 8
	rodata_anim_frame 4, 8
	rodata_anim_frame 0, 8
	rodata_anim_jump 0
sObjectEventAnimCmd_084E0FF8: @ 0x084E0FF8
	rodata_anim_frame 5, 8
	rodata_anim_frame 1, 8
	rodata_anim_frame 6, 8
	rodata_anim_frame 1, 8
	rodata_anim_jump 0
sObjectEventAnimCmd_084E100C: @ 0x084E100C
	rodata_anim_frame 7, 8
	rodata_anim_frame 2, 8
	rodata_anim_frame 8, 8
	rodata_anim_frame 2, 8
	rodata_anim_jump 0
sObjectEventAnimCmd_084E1020: @ 0x084E1020
	rodata_anim_frame 7, 8, 1, 0
	rodata_anim_frame 2, 8, 1, 0
	rodata_anim_frame 8, 8, 1, 0
	rodata_anim_frame 2, 8, 1, 0
	rodata_anim_jump 0
sObjectEventAnimCmd_084E1034: @ 0x084E1034
	rodata_anim_frame 3, 4
	rodata_anim_frame 0, 4
	rodata_anim_frame 4, 4
	rodata_anim_frame 0, 4
	rodata_anim_jump 0
sObjectEventAnimCmd_084E1048: @ 0x084E1048
	rodata_anim_frame 5, 4
	rodata_anim_frame 1, 4
	rodata_anim_frame 6, 4
	rodata_anim_frame 1, 4
	rodata_anim_jump 0
sObjectEventAnimCmd_084E105C: @ 0x084E105C
	rodata_anim_frame 7, 4
	rodata_anim_frame 2, 4
	rodata_anim_frame 8, 4
	rodata_anim_frame 2, 4
	rodata_anim_jump 0
sObjectEventAnimCmd_084E1070: @ 0x084E1070
	rodata_anim_frame 7, 4, 1, 0
	rodata_anim_frame 2, 4, 1, 0
	rodata_anim_frame 8, 4, 1, 0
	rodata_anim_frame 2, 4, 1, 0
	rodata_anim_jump 0
sObjectEventAnimCmd_084E1084: @ 0x084E1084
	rodata_anim_frame 3, 2
	rodata_anim_frame 0, 2
	rodata_anim_frame 4, 2
	rodata_anim_frame 0, 2
	rodata_anim_jump 0
sObjectEventAnimCmd_084E1098: @ 0x084E1098
	rodata_anim_frame 5, 2
	rodata_anim_frame 1, 2
	rodata_anim_frame 6, 2
	rodata_anim_frame 1, 2
	rodata_anim_jump 0
sObjectEventAnimCmd_084E10AC: @ 0x084E10AC
	rodata_anim_frame 7, 2
	rodata_anim_frame 2, 2
	rodata_anim_frame 8, 2
	rodata_anim_frame 2, 2
	rodata_anim_jump 0
sObjectEventAnimCmd_084E10C0: @ 0x084E10C0
	rodata_anim_frame 7, 2, 1, 0
	rodata_anim_frame 2, 2, 1, 0
	rodata_anim_frame 8, 2, 1, 0
	rodata_anim_frame 2, 2, 1, 0
	rodata_anim_jump 0
sObjectEventAnimCmd_084E10D4: @ 0x084E10D4
	rodata_anim_frame 3, 1
	rodata_anim_frame 0, 1
	rodata_anim_frame 4, 1
	rodata_anim_frame 0, 1
	rodata_anim_jump 0
sObjectEventAnimCmd_084E10E8: @ 0x084E10E8
	rodata_anim_frame 5, 1
	rodata_anim_frame 1, 1
	rodata_anim_frame 6, 1
	rodata_anim_frame 1, 1
	rodata_anim_jump 0
sObjectEventAnimCmd_084E10FC: @ 0x084E10FC
	rodata_anim_frame 7, 1
	rodata_anim_frame 2, 1
	rodata_anim_frame 8, 1
	rodata_anim_frame 2, 1
	rodata_anim_jump 0
sObjectEventAnimCmd_084E1110: @ 0x084E1110
	rodata_anim_frame 7, 1, 1, 0
	rodata_anim_frame 2, 1, 1, 0
	rodata_anim_frame 8, 1, 1, 0
	rodata_anim_frame 2, 1, 1, 0
	rodata_anim_jump 0
sObjectEventAnimCmd_084E1124: @ 0x084E1124
	rodata_anim_frame 12, 5
	rodata_anim_frame 9, 3
	rodata_anim_frame 13, 5
	rodata_anim_frame 9, 3
	rodata_anim_jump 0
sObjectEventAnimCmd_084E1138: @ 0x084E1138
	rodata_anim_frame 14, 5
	rodata_anim_frame 10, 3
	rodata_anim_frame 15, 5
	rodata_anim_frame 10, 3
	rodata_anim_jump 0
sObjectEventAnimCmd_084E114C: @ 0x084E114C
	rodata_anim_frame 16, 5
	rodata_anim_frame 11, 3
	rodata_anim_frame 17, 5
	rodata_anim_frame 11, 3
	rodata_anim_jump 0
sObjectEventAnimCmd_084E1160: @ 0x084E1160
	rodata_anim_frame 16, 5, 1, 0
	rodata_anim_frame 11, 3, 1, 0
	rodata_anim_frame 17, 5, 1, 0
	rodata_anim_frame 11, 3, 1, 0
	rodata_anim_jump 0
sObjectEventAnimCmd_084E1174: @ 0x084E1174
	rodata_anim_frame 0, 4
	rodata_anim_frame 1, 4
	rodata_anim_frame 2, 4
	rodata_anim_frame 3, 4
	rodata_anim_frame 4, 8
	rodata_anim_end
sObjectEventAnimCmd_084E118C: @ 0x084E118C
	rodata_anim_frame 9, 32
	rodata_anim_jump 0
sObjectEventAnimCmd_084E1194: @ 0x084E1194
	rodata_anim_frame 10, 32
	rodata_anim_jump 0
sObjectEventAnimCmd_084E119C: @ 0x084E119C
	rodata_anim_frame 11, 32
	rodata_anim_jump 0
sObjectEventAnimCmd_084E11A4: @ 0x084E11A4
	rodata_anim_frame 11, 32, 1, 0
	rodata_anim_jump 0
sObjectEventAnimCmd_084E11AC: @ 0x084E11AC
	rodata_anim_frame 9, 4
	rodata_anim_frame 10, 4
	rodata_anim_end
sObjectEventAnimCmd_084E11B8: @ 0x084E11B8
	rodata_anim_frame 13, 4
	rodata_anim_frame 14, 4
	rodata_anim_end
sObjectEventAnimCmd_084E11C4: @ 0x084E11C4
	rodata_anim_frame 17, 4
	rodata_anim_frame 18, 4
	rodata_anim_end
sObjectEventAnimCmd_084E11D0: @ 0x084E11D0
	rodata_anim_frame 17, 4, 1, 0
	rodata_anim_frame 18, 4, 1, 0
	rodata_anim_end
sObjectEventAnimCmd_084E11DC: @ 0x084E11DC
	rodata_anim_frame 11, 4
	rodata_anim_frame 12, 4
	rodata_anim_end
sObjectEventAnimCmd_084E11E8: @ 0x084E11E8
	rodata_anim_frame 15, 4
	rodata_anim_frame 16, 4
	rodata_anim_end
sObjectEventAnimCmd_084E11F4: @ 0x084E11F4
	rodata_anim_frame 19, 4
	rodata_anim_frame 20, 4
	rodata_anim_end
sObjectEventAnimCmd_084E1200: @ 0x084E1200
	rodata_anim_frame 19, 4, 1, 0
	rodata_anim_frame 20, 4, 1, 0
	rodata_anim_end
sObjectEventAnimCmd_084E120C: @ 0x084E120C
	rodata_anim_frame 9, 4
	rodata_anim_frame 0, 4
	rodata_anim_end
sObjectEventAnimCmd_084E1218: @ 0x084E1218
	rodata_anim_frame 13, 4
	rodata_anim_frame 1, 4
	rodata_anim_end
sObjectEventAnimCmd_084E1224: @ 0x084E1224
	rodata_anim_frame 17, 4
	rodata_anim_frame 2, 4
	rodata_anim_end
sObjectEventAnimCmd_084E1230: @ 0x084E1230
	rodata_anim_frame 17, 4, 1, 0
	rodata_anim_frame 2, 4, 1, 0
	rodata_anim_end
sObjectEventAnimCmd_084E123C: @ 0x084E123C
	rodata_anim_frame 11, 4
	rodata_anim_frame 0, 4
	rodata_anim_end
sObjectEventAnimCmd_084E1248: @ 0x084E1248
	rodata_anim_frame 15, 4
	rodata_anim_frame 1, 4
	rodata_anim_end
sObjectEventAnimCmd_084E1254: @ 0x084E1254
	rodata_anim_frame 19, 4
	rodata_anim_frame 2, 4
	rodata_anim_end
sObjectEventAnimCmd_084E1260: @ 0x084E1260
	rodata_anim_frame 19, 4, 1, 0
	rodata_anim_frame 2, 4, 1, 0
	rodata_anim_end
sObjectEventAnimCmd_084E126C: @ 0x084E126C
	rodata_anim_frame 21, 4
	rodata_anim_frame 10, 4
	rodata_anim_frame 22, 4
	rodata_anim_frame 10, 4
	rodata_anim_jump 0
sObjectEventAnimCmd_084E1280: @ 0x084E1280
	rodata_anim_frame 23, 4
	rodata_anim_frame 14, 4
	rodata_anim_frame 24, 4
	rodata_anim_frame 14, 4
	rodata_anim_jump 0
sObjectEventAnimCmd_084E1294: @ 0x084E1294
	rodata_anim_frame 25, 4
	rodata_anim_frame 18, 4
	rodata_anim_frame 26, 4
	rodata_anim_frame 18, 4
	rodata_anim_jump 0
sObjectEventAnimCmd_084E12A8: @ 0x084E12A8
	rodata_anim_frame 25, 4, 1, 0
	rodata_anim_frame 18, 4, 1, 0
	rodata_anim_frame 26, 4, 1, 0
	rodata_anim_frame 18, 4, 1, 0
	rodata_anim_jump 0
sObjectEventAnimCmd_084E12BC: @ 0x084E12BC
	rodata_anim_frame 0, 32
	rodata_anim_end
sObjectEventAnimCmd_084E12C4: @ 0x084E12C4
	rodata_anim_frame 1, 32
	rodata_anim_frame 2, 32
	rodata_anim_end
sObjectEventAnimCmd_084E12D0: @ 0x084E12D0
	rodata_anim_frame 3, 48
	rodata_anim_frame 4, 48
	rodata_anim_end
sObjectEventAnimCmd_084E12DC: @ 0x084E12DC
	rodata_anim_frame 5, 32
	rodata_anim_frame 5, 32
	rodata_anim_frame 6, 32
	rodata_anim_frame 6, 32
	rodata_anim_end
sObjectEventAnimCmd_084E12F0: @ 0x084E12F0
	rodata_anim_frame 7, 48
	rodata_anim_frame 7, 48
	rodata_anim_frame 8, 48
	rodata_anim_frame 8, 48
	rodata_anim_end
sObjectEventAnimCmd_084E1304: @ 0x084E1304
	rodata_anim_frame 0, 8
	rodata_anim_frame 9, 32
	rodata_anim_frame 0, 8
	rodata_anim_end
sObjectEventAnimCmd_084E1314: @ 0x084E1314
	rodata_anim_frame 0, 8
	rodata_anim_frame 1, 8
	rodata_anim_frame 2, 8
	rodata_anim_frame 3, 8
	rodata_anim_end
sObjectEventAnimCmd_084E1328: @ 0x084E1328
	rodata_anim_frame 0, 6
	rodata_anim_frame 1, 6
	rodata_anim_frame 2, 6
	rodata_anim_frame 3, 6
	rodata_anim_end
sObjectEventAnimCmd_084E133C: @ 0x084E133C
	rodata_anim_frame 8, 4
	rodata_anim_frame 9, 4
	rodata_anim_frame 10, 4
	rodata_anim_frame 11, 4
	rodata_anim_end
sObjectEventAnimCmd_084E1350: @ 0x084E1350
	rodata_anim_frame 4, 4
	rodata_anim_frame 5, 4
	rodata_anim_frame 6, 4
	rodata_anim_frame 7, 4
	rodata_anim_end
sObjectEventAnimCmd_084E1364: @ 0x084E1364
	rodata_anim_frame 0, 4
	rodata_anim_frame 1, 4
	rodata_anim_frame 2, 4
	rodata_anim_frame 3, 4
	rodata_anim_end
sObjectEventAnimCmd_084E1378: @ 0x084E1378
	rodata_anim_frame 0, 4, 1, 0
	rodata_anim_frame 1, 4, 1, 0
	rodata_anim_frame 2, 4, 1, 0
	rodata_anim_frame 3, 4, 1, 0
	rodata_anim_end
sObjectEventAnimCmd_084E138C: @ 0x084E138C
	rodata_anim_frame 11, 4
	rodata_anim_frame 10, 6
	rodata_anim_frame 9, 6
	rodata_anim_frame 8, 6
	rodata_anim_end
sObjectEventAnimCmd_084E13A0: @ 0x084E13A0
	rodata_anim_frame 7, 4
	rodata_anim_frame 6, 6
	rodata_anim_frame 5, 6
	rodata_anim_frame 4, 6
	rodata_anim_end
sObjectEventAnimCmd_084E13B4: @ 0x084E13B4
	rodata_anim_frame 3, 4
	rodata_anim_frame 2, 4
	rodata_anim_frame 1, 4
	rodata_anim_frame 0, 4
	rodata_anim_end
sObjectEventAnimCmd_084E13C8: @ 0x084E13C8
	rodata_anim_frame 3, 4, 1, 0
	rodata_anim_frame 2, 4, 1, 0
	rodata_anim_frame 1, 4, 1, 0
	rodata_anim_frame 0, 4, 1, 0
	rodata_anim_end
sObjectEventAnimCmd_084E13DC: @ 0x084E13DC
	rodata_anim_frame 10, 6
	rodata_anim_frame 11, 6
	rodata_anim_frame 65533, 1
	rodata_anim_frame 11, 30
	rodata_anim_jump 0
sObjectEventAnimCmd_084E13F0: @ 0x084E13F0
	rodata_anim_frame 6, 6
	rodata_anim_frame 7, 6
	rodata_anim_frame 65533, 1
	rodata_anim_frame 7, 30
	rodata_anim_jump 0
sObjectEventAnimCmd_084E1404: @ 0x084E1404
	rodata_anim_frame 2, 6
	rodata_anim_frame 3, 6
	rodata_anim_frame 65533, 1
	rodata_anim_frame 3, 30
	rodata_anim_jump 0
sObjectEventAnimCmd_084E1418: @ 0x084E1418
	rodata_anim_frame 2, 6, 1, 0
	rodata_anim_frame 3, 6, 1, 0
	rodata_anim_frame 65533, 1
	rodata_anim_frame 3, 30, 1, 0
	rodata_anim_jump 0
sObjectEventAffineAnimCmd_084E142C: @ 0x084E142C
	rodata_affine_anim_frame 0, 0, 257, 0
	rodata_affine_anim_frame 0, 0, 256, 0
	rodata_affine_anim_frame 0, 0, 256, 0
	rodata_affine_anim_frame 0, 0, 256, 0
	rodata_affine_anim_jump 7
	rodata_affine_anim_frame 32766, 0, 0, 0
sObjectEventAffineAnimCmd_084E145C: @ 0x084E145C
	rodata_affine_anim_frame 0, 0, 511, 0
	rodata_affine_anim_frame 0, 0, 256, 0
	rodata_affine_anim_jump 15
	rodata_affine_anim_frame 0, 0, 257, 0
	rodata_affine_anim_frame 0, 0, 256, 0
	rodata_affine_anim_jump 15
	rodata_affine_anim_frame 32766, 0, 0, 0
sObjectEventAffineAnimCmd_084E1494: @ 0x084E1494
	rodata_affine_anim_frame 256, 256, 10, 0
	rodata_affine_anim_end
sObjectEventAffineAnimCmd_084E14A4: @ 0x084E14A4
	rodata_affine_anim_frame 256, 256, 10, 0
	rodata_affine_anim_end
sObjectEventAffineAnimCmd_084E14B4: @ 0x084E14B4
	rodata_affine_anim_frame 0, 0, 511, 0
	rodata_affine_anim_jump 8
	rodata_affine_anim_end
sObjectEventAffineAnimCmd_084E14CC: @ 0x084E14CC
	rodata_affine_anim_frame 0, 0, 257, 0
	rodata_affine_anim_jump 8
	rodata_affine_anim_end
sObjectEventAnimCmd_084E14E4: @ 0x084E14E4
	rodata_anim_frame 3, 8
	rodata_anim_frame 4, 8
	rodata_anim_frame 3, 8
	rodata_anim_frame 4, 8
	rodata_anim_jump 0
sObjectEventAnimCmd_084E14F8: @ 0x084E14F8
	rodata_anim_frame 3, 16
	rodata_anim_jump 0
	@ ObjectEvent animation pointer tables.
sObjectEventAnimTable_084E1500: @ 0x084E1500
	.4byte sObjectEventAnimCmd_084E0E50
sObjectEventAnimTable_084E1504: @ 0x084E1504
	.4byte sObjectEventAnimCmd_084E0E64
	.4byte sObjectEventAnimCmd_084E0E6C
	.4byte sObjectEventAnimCmd_084E0E74
	.4byte sObjectEventAnimCmd_084E0E7C
	.4byte sObjectEventAnimCmd_084E0E84
	.4byte sObjectEventAnimCmd_084E0E98
	.4byte sObjectEventAnimCmd_084E0EAC
	.4byte sObjectEventAnimCmd_084E0EC0
	.4byte sObjectEventAnimCmd_084E0ED4
	.4byte sObjectEventAnimCmd_084E0EE8
	.4byte sObjectEventAnimCmd_084E0EFC
	.4byte sObjectEventAnimCmd_084E0F10
	.4byte sObjectEventAnimCmd_084E0F24
	.4byte sObjectEventAnimCmd_084E0F38
	.4byte sObjectEventAnimCmd_084E0F4C
	.4byte sObjectEventAnimCmd_084E0F60
	.4byte sObjectEventAnimCmd_084E0F74
	.4byte sObjectEventAnimCmd_084E0F88
	.4byte sObjectEventAnimCmd_084E0F9C
	.4byte sObjectEventAnimCmd_084E0FB0
sObjectEventAnimTable_084E1554: @ 0x084E1554
	.4byte sObjectEventAnimCmd_084E0FC4
	.4byte sObjectEventAnimCmd_084E0FCC
	.4byte sObjectEventAnimCmd_084E0FD4
	.4byte sObjectEventAnimCmd_084E0FDC
	.4byte sObjectEventAnimCmd_084E0FE4
	.4byte sObjectEventAnimCmd_084E0FF8
	.4byte sObjectEventAnimCmd_084E100C
	.4byte sObjectEventAnimCmd_084E1020
	.4byte sObjectEventAnimCmd_084E1034
	.4byte sObjectEventAnimCmd_084E1048
	.4byte sObjectEventAnimCmd_084E105C
	.4byte sObjectEventAnimCmd_084E1070
	.4byte sObjectEventAnimCmd_084E1084
	.4byte sObjectEventAnimCmd_084E1098
	.4byte sObjectEventAnimCmd_084E10AC
	.4byte sObjectEventAnimCmd_084E10C0
	.4byte sObjectEventAnimCmd_084E10D4
	.4byte sObjectEventAnimCmd_084E10E8
	.4byte sObjectEventAnimCmd_084E10FC
	.4byte sObjectEventAnimCmd_084E1110
sObjectEventAnimTable_084E15A4: @ 0x084E15A4
	.4byte sObjectEventAnimCmd_084E0FC4
	.4byte sObjectEventAnimCmd_084E0FCC
	.4byte sObjectEventAnimCmd_084E0FD4
	.4byte sObjectEventAnimCmd_084E0FDC
	.4byte sObjectEventAnimCmd_084E14E4
	.4byte sObjectEventAnimCmd_084E14F8
	.4byte sObjectEventAnimCmd_084E100C
	.4byte sObjectEventAnimCmd_084E1020
	.4byte sObjectEventAnimCmd_084E1034
	.4byte sObjectEventAnimCmd_084E1048
	.4byte sObjectEventAnimCmd_084E105C
	.4byte sObjectEventAnimCmd_084E1070
	.4byte sObjectEventAnimCmd_084E1084
	.4byte sObjectEventAnimCmd_084E1098
	.4byte sObjectEventAnimCmd_084E10AC
	.4byte sObjectEventAnimCmd_084E10C0
	.4byte sObjectEventAnimCmd_084E10D4
	.4byte sObjectEventAnimCmd_084E10E8
	.4byte sObjectEventAnimCmd_084E10FC
	.4byte sObjectEventAnimCmd_084E1110
sObjectEventAnimTable_084E15F4: @ 0x084E15F4
	.4byte sObjectEventAnimCmd_084E0FC4
	.4byte sObjectEventAnimCmd_084E0FCC
	.4byte sObjectEventAnimCmd_084E0FD4
	.4byte sObjectEventAnimCmd_084E0FDC
	.4byte sObjectEventAnimCmd_084E0FE4
	.4byte sObjectEventAnimCmd_084E1020
	.4byte sObjectEventAnimCmd_084E100C
	.4byte sObjectEventAnimCmd_084E1020
	.4byte sObjectEventAnimCmd_084E1034
	.4byte sObjectEventAnimCmd_084E1070
	.4byte sObjectEventAnimCmd_084E105C
	.4byte sObjectEventAnimCmd_084E1070
	.4byte sObjectEventAnimCmd_084E1084
	.4byte sObjectEventAnimCmd_084E10C0
	.4byte sObjectEventAnimCmd_084E10AC
	.4byte sObjectEventAnimCmd_084E10C0
	.4byte sObjectEventAnimCmd_084E10D4
	.4byte sObjectEventAnimCmd_084E1110
	.4byte sObjectEventAnimCmd_084E10FC
	.4byte sObjectEventAnimCmd_084E1110
sObjectEventAnimCmd_084E1644: @ 0x084E1644
	rodata_anim_frame 1, 1
	rodata_anim_jump 0
sObjectEventAnimCmd_084E164C: @ 0x084E164C
	rodata_anim_frame 4, 1
	rodata_anim_jump 0
sObjectEventAnimCmd_084E1654: @ 0x084E1654
	rodata_anim_frame 0, 1
	rodata_anim_jump 0
sObjectEventAnimCmd_084E165C: @ 0x084E165C
	rodata_anim_frame 2, 1
	rodata_anim_jump 0
sObjectEventAnimCmd_084E1664: @ 0x084E1664
	rodata_anim_frame 3, 1
	rodata_anim_jump 0
sObjectEventAnimCmd_084E166C: @ 0x084E166C
	rodata_anim_frame 0, 1
	rodata_anim_jump 0
sObjectEventAnimCmd_084E1674: @ 0x084E1674
	rodata_anim_frame 0, 1
	rodata_anim_jump 0
sObjectEventAnimCmd_084E167C: @ 0x084E167C
	rodata_anim_frame 0, 1
	rodata_anim_jump 0
sObjectEventAnimCmd_084E1684: @ 0x084E1684
	rodata_anim_frame 3, 1
	rodata_anim_jump 0
sObjectEventAnimTable_084E168C: @ 0x084E168C
	.4byte sObjectEventAnimCmd_084E166C
	.4byte sObjectEventAnimCmd_084E1674
	.4byte sObjectEventAnimCmd_084E167C
	.4byte sObjectEventAnimCmd_084E1684
	.4byte sObjectEventAnimCmd_084E1654
	.4byte sObjectEventAnimCmd_084E164C
	.4byte sObjectEventAnimCmd_084E165C
	.4byte sObjectEventAnimCmd_084E1664
	.4byte sObjectEventAnimCmd_084E1654
	.4byte sObjectEventAnimCmd_084E164C
	.4byte sObjectEventAnimCmd_084E1644
	.4byte sObjectEventAnimCmd_084E1664
	.4byte sObjectEventAnimCmd_084E1654
	.4byte sObjectEventAnimCmd_084E164C
	.4byte sObjectEventAnimCmd_084E165C
	.4byte sObjectEventAnimCmd_084E1664
	.4byte sObjectEventAnimCmd_084E1654
	.4byte sObjectEventAnimCmd_084E164C
	.4byte sObjectEventAnimCmd_084E165C
	.4byte sObjectEventAnimCmd_084E1664
sObjectEventAnimTable_084E16DC: @ 0x084E16DC
	.4byte sObjectEventAnimCmd_084E0FC4
	.4byte sObjectEventAnimCmd_084E0FCC
	.4byte sObjectEventAnimCmd_084E0FD4
	.4byte sObjectEventAnimCmd_084E0FDC
	.4byte sObjectEventAnimCmd_084E0FE4
	.4byte sObjectEventAnimCmd_084E0FF8
	.4byte sObjectEventAnimCmd_084E100C
	.4byte sObjectEventAnimCmd_084E1020
	.4byte sObjectEventAnimCmd_084E1034
	.4byte sObjectEventAnimCmd_084E1048
	.4byte sObjectEventAnimCmd_084E105C
	.4byte sObjectEventAnimCmd_084E1070
	.4byte sObjectEventAnimCmd_084E1084
	.4byte sObjectEventAnimCmd_084E1098
	.4byte sObjectEventAnimCmd_084E10AC
	.4byte sObjectEventAnimCmd_084E10C0
	.4byte sObjectEventAnimCmd_084E10D4
	.4byte sObjectEventAnimCmd_084E10E8
	.4byte sObjectEventAnimCmd_084E10FC
	.4byte sObjectEventAnimCmd_084E1110
	.4byte sObjectEventAnimCmd_084E1124
	.4byte sObjectEventAnimCmd_084E1138
	.4byte sObjectEventAnimCmd_084E114C
	.4byte sObjectEventAnimCmd_084E1160
sObjectEventAnimTable_084E173C: @ 0x084E173C
	.4byte sObjectEventAnimCmd_084E0FC4
	.4byte sObjectEventAnimCmd_084E0FCC
	.4byte sObjectEventAnimCmd_084E0FD4
	.4byte sObjectEventAnimCmd_084E0FDC
	.4byte sObjectEventAnimCmd_084E0FE4
	.4byte sObjectEventAnimCmd_084E0FF8
	.4byte sObjectEventAnimCmd_084E100C
	.4byte sObjectEventAnimCmd_084E1020
	.4byte sObjectEventAnimCmd_084E1034
	.4byte sObjectEventAnimCmd_084E1048
	.4byte sObjectEventAnimCmd_084E105C
	.4byte sObjectEventAnimCmd_084E1070
	.4byte sObjectEventAnimCmd_084E1084
	.4byte sObjectEventAnimCmd_084E1098
	.4byte sObjectEventAnimCmd_084E10AC
	.4byte sObjectEventAnimCmd_084E10C0
	.4byte sObjectEventAnimCmd_084E10D4
	.4byte sObjectEventAnimCmd_084E10E8
	.4byte sObjectEventAnimCmd_084E10FC
	.4byte sObjectEventAnimCmd_084E1110
	.4byte sObjectEventAnimCmd_084E11AC
	.4byte sObjectEventAnimCmd_084E11B8
	.4byte sObjectEventAnimCmd_084E11C4
	.4byte sObjectEventAnimCmd_084E11D0
	.4byte sObjectEventAnimCmd_084E11DC
	.4byte sObjectEventAnimCmd_084E11E8
	.4byte sObjectEventAnimCmd_084E11F4
	.4byte sObjectEventAnimCmd_084E1200
	.4byte sObjectEventAnimCmd_084E120C
	.4byte sObjectEventAnimCmd_084E1218
	.4byte sObjectEventAnimCmd_084E1224
	.4byte sObjectEventAnimCmd_084E1230
	.4byte sObjectEventAnimCmd_084E123C
	.4byte sObjectEventAnimCmd_084E1248
	.4byte sObjectEventAnimCmd_084E1254
	.4byte sObjectEventAnimCmd_084E1260
	.4byte sObjectEventAnimCmd_084E126C
	.4byte sObjectEventAnimCmd_084E1280
	.4byte sObjectEventAnimCmd_084E1294
	.4byte sObjectEventAnimCmd_084E12A8
sObjectEventAnimTable_084E17DC: @ 0x084E17DC
	.4byte sObjectEventAnimCmd_084E0FC4
	.4byte sObjectEventAnimCmd_084E0FCC
	.4byte sObjectEventAnimCmd_084E0FD4
	.4byte sObjectEventAnimCmd_084E0FDC
	.4byte sObjectEventAnimCmd_084E0FE4
	.4byte sObjectEventAnimCmd_084E0FF8
	.4byte sObjectEventAnimCmd_084E100C
	.4byte sObjectEventAnimCmd_084E1020
	.4byte sObjectEventAnimCmd_084E1034
	.4byte sObjectEventAnimCmd_084E1048
	.4byte sObjectEventAnimCmd_084E105C
	.4byte sObjectEventAnimCmd_084E1070
	.4byte sObjectEventAnimCmd_084E1084
	.4byte sObjectEventAnimCmd_084E1098
	.4byte sObjectEventAnimCmd_084E10AC
	.4byte sObjectEventAnimCmd_084E10C0
	.4byte sObjectEventAnimCmd_084E10D4
	.4byte sObjectEventAnimCmd_084E10E8
	.4byte sObjectEventAnimCmd_084E10FC
	.4byte sObjectEventAnimCmd_084E1110
	.4byte sObjectEventAnimCmd_084E118C
	.4byte sObjectEventAnimCmd_084E1194
	.4byte sObjectEventAnimCmd_084E119C
	.4byte sObjectEventAnimCmd_084E11A4
sObjectEventAnimTable_084E183C: @ 0x084E183C
	.4byte sObjectEventAnimCmd_084E0FC4
	.4byte sObjectEventAnimCmd_084E0FCC
	.4byte sObjectEventAnimCmd_084E0FD4
	.4byte sObjectEventAnimCmd_084E0FDC
	.4byte sObjectEventAnimCmd_084E0FE4
	.4byte sObjectEventAnimCmd_084E0FF8
	.4byte sObjectEventAnimCmd_084E100C
	.4byte sObjectEventAnimCmd_084E1020
	.4byte sObjectEventAnimCmd_084E1034
	.4byte sObjectEventAnimCmd_084E1048
	.4byte sObjectEventAnimCmd_084E105C
	.4byte sObjectEventAnimCmd_084E1070
	.4byte sObjectEventAnimCmd_084E1084
	.4byte sObjectEventAnimCmd_084E1098
	.4byte sObjectEventAnimCmd_084E10AC
	.4byte sObjectEventAnimCmd_084E10C0
	.4byte sObjectEventAnimCmd_084E10D4
	.4byte sObjectEventAnimCmd_084E10E8
	.4byte sObjectEventAnimCmd_084E10FC
	.4byte sObjectEventAnimCmd_084E1110
	.4byte sObjectEventAnimCmd_084E1304
sObjectEventAnimTable_084E1890: @ 0x084E1890
	.4byte sObjectEventAnimCmd_084E1174
sObjectEventAnimTable_084E1894: @ 0x084E1894
	.4byte sObjectEventAnimCmd_084E12BC
	.4byte sObjectEventAnimCmd_084E12C4
	.4byte sObjectEventAnimCmd_084E12D0
	.4byte sObjectEventAnimCmd_084E12DC
	.4byte sObjectEventAnimCmd_084E12F0
sObjectEventAnimTable_084E18A8: @ 0x084E18A8
	.4byte sObjectEventAnimCmd_084E0E50
	.4byte sObjectEventAnimCmd_084E1314
sObjectEventAnimTable_084E18B0: @ 0x084E18B0
	.4byte sObjectEventAnimCmd_084E0E50
	.4byte sObjectEventAnimCmd_084E1328
sObjectEventAnimTable_084E18B8: @ 0x084E18B8
	.4byte sObjectEventAnimCmd_084E133C
	.4byte sObjectEventAnimCmd_084E1350
	.4byte sObjectEventAnimCmd_084E1364
	.4byte sObjectEventAnimCmd_084E1378
	.4byte sObjectEventAnimCmd_084E138C
	.4byte sObjectEventAnimCmd_084E13A0
	.4byte sObjectEventAnimCmd_084E13B4
	.4byte sObjectEventAnimCmd_084E13C8
	.4byte sObjectEventAnimCmd_084E13DC
	.4byte sObjectEventAnimCmd_084E13F0
	.4byte sObjectEventAnimCmd_084E1404
	.4byte sObjectEventAnimCmd_084E1418
sObjectEventAffineAnimTable_084E18E8: @ 0x084E18E8
	.4byte sObjectEventAffineAnimCmd_084E142C
	.4byte sObjectEventAffineAnimCmd_084E145C
	.4byte sObjectEventAffineAnimCmd_084E14A4
	.4byte sObjectEventAffineAnimCmd_084E1494
	.4byte sObjectEventAffineAnimCmd_084E14CC
	.4byte sObjectEventAffineAnimCmd_084E14B4
	.globl gEventObjectMovementData_084E1900
gEventObjectMovementData_084E1900:
	.globl gUnknown_84E1900
gUnknown_84E1900: @ 0x084E1900
	@ analyzed canonical ROM range 0x084E1900-0x084E401B
sAnalyzedData_084E1900: @ 0x084E1900
	@ ObjectEvent graphics resource tables plus 245 proven struct ObjectEventGraphicsInfo objects.
	@ preserved non-ObjectEventGraphicsInfo data: 0x084E1900-0x084E1DA7
	@ Unresolved 0x084E1900-0x084E193F data preserved verbatim.
	.byte 0x04, 0x15, 0x4E, 0x08, 0x01, 0x03, 0x00, 0x02, 0x54, 0x15, 0x4E, 0x08, 0x01, 0x03, 0x00, 0x02 @ 0x084E1900
	.byte 0xDC, 0x16, 0x4E, 0x08, 0x01, 0x03, 0x00, 0x02, 0x3C, 0x17, 0x4E, 0x08, 0x01, 0x03, 0x00, 0x02 @ 0x084E1910
	.byte 0xDC, 0x17, 0x4E, 0x08, 0x01, 0x03, 0x00, 0x02, 0x3C, 0x18, 0x4E, 0x08, 0x01, 0x03, 0x00, 0x02 @ 0x084E1920
	.byte 0xB8, 0x18, 0x4E, 0x08, 0x01, 0x03, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ 0x084E1930
	@ struct OamData entries used by ObjectEventGraphicsInfo.
sObjectEventOam_8x8: @ 0x084E1940
	rodata_sprite_oam_data 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0x0000
	rodata_sprite_oam_data 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0x0000
sObjectEventOam_16x16: @ 0x084E1950
	rodata_sprite_oam_data 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 2, 0, 0x0000
	rodata_sprite_oam_data 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 2, 0, 0x0000
	rodata_sprite_oam_data 0, 0, 0, 0, 0, 1, 0, 0, 3, 0, 2, 0, 0x0000
sObjectEventOam_16x32: @ 0x084E1968
	rodata_sprite_oam_data 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 2, 0, 0x0000
sObjectEventOam_32x32: @ 0x084E1970
	rodata_sprite_oam_data 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 2, 0, 0x0000
sObjectEventOam_64x64: @ 0x084E1978
	rodata_sprite_oam_data 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 2, 0, 0x0000
	@ struct SubspriteTable arrays and their Subsprite payloads.
sObjectEventSubsprites_084E1980: @ 0x084E1980
	rodata_subsprite -8, -8, 0, 1, 0, 2
sObjectEventSubsprites_084E1984: @ 0x084E1984
	rodata_subsprite -8, -8, 0, 1, 0, 1
sObjectEventSubsprites_084E1988: @ 0x084E1988
	rodata_subsprite -8, -8, 1, 0, 0, 2
	rodata_subsprite -8, 0, 1, 0, 2, 3
sObjectEventSubsprites_084E1990: @ 0x084E1990
	rodata_subsprite -8, -8, 0, 1, 0, 2
	rodata_subsprite -8, -8, 0, 1, 0, 3
sObjectEventSubsprites_084E1998: @ 0x084E1998
	rodata_subsprite -8, -8, 0, 1, 0, 1
	rodata_subsprite -8, -8, 0, 1, 0, 3
sObjectEventSubspriteTables_16x16: @ 0x084E19A0
	rodata_subsprite_table 0, NULL
	rodata_subsprite_table 1, sObjectEventSubsprites_084E1980
	rodata_subsprite_table 1, sObjectEventSubsprites_084E1984
	rodata_subsprite_table 2, sObjectEventSubsprites_084E1988
	rodata_subsprite_table 2, sObjectEventSubsprites_084E1990
	rodata_subsprite_table 2, sObjectEventSubsprites_084E1998
sObjectEventSubsprites_084E19D0: @ 0x084E19D0
	rodata_subsprite -8, -16, 2, 2, 0, 2
sObjectEventSubsprites_084E19D4: @ 0x084E19D4
	rodata_subsprite -8, -16, 2, 2, 0, 1
sObjectEventSubsprites_084E19D8: @ 0x084E19D8
	rodata_subsprite -8, -16, 0, 1, 0, 2
	rodata_subsprite -8, 0, 1, 0, 4, 2
	rodata_subsprite -8, 8, 1, 0, 6, 3
sObjectEventSubsprites_084E19E4: @ 0x084E19E4
	rodata_subsprite -8, -16, 0, 1, 0, 2
	rodata_subsprite -8, 0, 0, 1, 4, 3
sObjectEventSubsprites_084E19EC: @ 0x084E19EC
	rodata_subsprite -8, -16, 0, 1, 0, 1
	rodata_subsprite -8, 0, 0, 1, 4, 3
sObjectEventSubspriteTables_16x32: @ 0x084E19F4
	rodata_subsprite_table 0, NULL
	rodata_subsprite_table 1, sObjectEventSubsprites_084E19D0
	rodata_subsprite_table 1, sObjectEventSubsprites_084E19D4
	rodata_subsprite_table 3, sObjectEventSubsprites_084E19D8
	rodata_subsprite_table 2, sObjectEventSubsprites_084E19E4
	rodata_subsprite_table 2, sObjectEventSubsprites_084E19EC
sObjectEventSubsprites_084E1A24: @ 0x084E1A24
	rodata_subsprite -16, -16, 0, 2, 0, 2
sObjectEventSubsprites_084E1A28: @ 0x084E1A28
	rodata_subsprite -16, -16, 0, 2, 0, 1
sObjectEventSubsprites_084E1A2C: @ 0x084E1A2C
	rodata_subsprite -16, -16, 1, 2, 0, 2
	rodata_subsprite -16, 0, 1, 1, 8, 2
	rodata_subsprite -16, 8, 1, 1, 12, 3
sObjectEventSubsprites_084E1A38: @ 0x084E1A38
	rodata_subsprite -16, -16, 1, 2, 0, 2
	rodata_subsprite -16, 0, 1, 2, 8, 3
sObjectEventSubsprites_084E1A40: @ 0x084E1A40
	rodata_subsprite -16, -16, 1, 2, 0, 1
	rodata_subsprite -16, 0, 1, 2, 8, 3
sObjectEventSubspriteTables_32x32: @ 0x084E1A48
	rodata_subsprite_table 0, NULL
	rodata_subsprite_table 1, sObjectEventSubsprites_084E1A24
	rodata_subsprite_table 1, sObjectEventSubsprites_084E1A28
	rodata_subsprite_table 3, sObjectEventSubsprites_084E1A2C
	rodata_subsprite_table 2, sObjectEventSubsprites_084E1A38
	rodata_subsprite_table 2, sObjectEventSubsprites_084E1A40
sObjectEventSubsprites_084E1A78: @ 0x084E1A78
	rodata_subsprite -24, -24, 1, 1, 0, 2
	rodata_subsprite 8, -24, 1, 0, 4, 2
	rodata_subsprite -24, -16, 1, 1, 6, 2
	rodata_subsprite 8, -16, 1, 0, 10, 2
	rodata_subsprite -24, -8, 1, 1, 12, 2
	rodata_subsprite 8, -8, 1, 0, 16, 2
	rodata_subsprite -24, 0, 1, 1, 18, 2
	rodata_subsprite 8, 0, 1, 0, 22, 2
	rodata_subsprite -24, 8, 1, 1, 24, 2
	rodata_subsprite 8, 8, 1, 0, 28, 2
	rodata_subsprite -24, 16, 1, 1, 30, 2
	rodata_subsprite 8, 16, 1, 0, 34, 2
sObjectEventSubspriteTables_48x48: @ 0x084E1AA8
	rodata_subsprite_table 12, sObjectEventSubsprites_084E1A78
	rodata_subsprite_table 12, sObjectEventSubsprites_084E1A78
	rodata_subsprite_table 12, sObjectEventSubsprites_084E1A78
	rodata_subsprite_table 12, sObjectEventSubsprites_084E1A78
	rodata_subsprite_table 12, sObjectEventSubsprites_084E1A78
	rodata_subsprite_table 12, sObjectEventSubsprites_084E1A78
sObjectEventSubsprites_Unreferenced_084E1AD8: @ 0x084E1AD8
	rodata_subsprite -32, -16, 1, 3, 0, 2
	rodata_subsprite -32, -16, 1, 3, 0, 1
	rodata_subsprite -32, -16, 1, 3, 0, 2
	rodata_subsprite -32, -16, 1, 3, 0, 2
	rodata_subsprite 0, 0, 0, 0, 0, 0
	rodata_subsprite 0, 0, 0, 0, 0, 0
	rodata_subsprite 1, 0, 0, 0, 0, 0
	rodata_subsprite -40, 26, 2, 3, 132, 0
	rodata_subsprite 1, 0, 0, 0, 0, 0
	rodata_subsprite -36, 26, 2, 3, 132, 0
	rodata_subsprite 1, 0, 0, 0, 0, 0
	rodata_subsprite -32, 26, 2, 3, 132, 0
	rodata_subsprite 1, 0, 0, 0, 0, 0
	rodata_subsprite -28, 26, 2, 3, 132, 0
	rodata_subsprite 1, 0, 0, 0, 0, 0
	rodata_subsprite -28, 26, 2, 3, 132, 0
sObjectEventSubsprites_084E1B18: @ 0x084E1B18
	rodata_subsprite -32, -32, 0, 3, 0, 2
sObjectEventSubsprites_084E1B1C: @ 0x084E1B1C
	rodata_subsprite -32, -32, 0, 3, 0, 1
sObjectEventSubsprites_084E1B20: @ 0x084E1B20
	rodata_subsprite -32, -32, 0, 3, 0, 2
sObjectEventSubsprites_084E1B24: @ 0x084E1B24
	rodata_subsprite -32, -32, 0, 3, 0, 2
sObjectEventSubspriteTables_64x64: @ 0x084E1B28
	rodata_subsprite_table 0, NULL
	rodata_subsprite_table 1, sObjectEventSubsprites_084E1B18
	rodata_subsprite_table 1, sObjectEventSubsprites_084E1B1C
	rodata_subsprite_table 1, sObjectEventSubsprites_084E1B20
	rodata_subsprite_table 1, sObjectEventSubsprites_084E1B24
	rodata_subsprite_table 1, sObjectEventSubsprites_084E1B24
sObjectEventSubsprites_084E1B58: @ 0x084E1B58
	rodata_subsprite -48, -20, 1, 1, 0, 2
	rodata_subsprite -16, -20, 1, 1, 4, 2
	rodata_subsprite 16, -20, 1, 1, 8, 2
	rodata_subsprite -48, -12, 1, 1, 12, 2
	rodata_subsprite -16, -12, 1, 1, 16, 2
	rodata_subsprite 16, -12, 1, 1, 20, 2
	rodata_subsprite -48, -4, 1, 1, 24, 2
	rodata_subsprite -16, -4, 1, 1, 28, 2
	rodata_subsprite 16, -4, 1, 1, 32, 2
	rodata_subsprite -48, 4, 1, 1, 36, 2
	rodata_subsprite -16, 4, 1, 1, 40, 2
	rodata_subsprite 16, 4, 1, 1, 44, 2
	rodata_subsprite -48, 12, 1, 1, 48, 2
	rodata_subsprite -16, 12, 1, 1, 52, 2
	rodata_subsprite 16, 12, 1, 1, 56, 2
sObjectEventSubsprites_084E1B94: @ 0x084E1B94
	rodata_subsprite -48, -20, 1, 1, 0, 1
	rodata_subsprite -16, -20, 1, 1, 4, 1
	rodata_subsprite 16, -20, 1, 1, 8, 1
	rodata_subsprite -48, -12, 1, 1, 12, 1
	rodata_subsprite -16, -12, 1, 1, 16, 1
	rodata_subsprite 16, -12, 1, 1, 20, 1
	rodata_subsprite -48, -4, 1, 1, 24, 1
	rodata_subsprite -16, -4, 1, 1, 28, 1
	rodata_subsprite 16, -4, 1, 1, 32, 1
	rodata_subsprite -48, 4, 1, 1, 36, 1
	rodata_subsprite -16, 4, 1, 1, 40, 1
	rodata_subsprite 16, 4, 1, 1, 44, 1
	rodata_subsprite -48, 12, 1, 1, 48, 1
	rodata_subsprite -16, 12, 1, 1, 52, 1
	rodata_subsprite 16, 12, 1, 1, 56, 1
sObjectEventSubsprites_084E1BD0: @ 0x084E1BD0
	rodata_subsprite -48, -20, 1, 1, 0, 2
	rodata_subsprite -16, -20, 1, 1, 4, 2
	rodata_subsprite 16, -20, 1, 1, 8, 2
	rodata_subsprite -48, -12, 1, 1, 12, 2
	rodata_subsprite -16, -12, 1, 1, 16, 2
	rodata_subsprite 16, -12, 1, 1, 20, 2
	rodata_subsprite -48, -4, 1, 1, 24, 2
	rodata_subsprite -16, -4, 1, 1, 28, 2
	rodata_subsprite 16, -4, 1, 1, 32, 2
	rodata_subsprite -48, 4, 1, 1, 36, 2
	rodata_subsprite -16, 4, 1, 1, 40, 2
	rodata_subsprite 16, 4, 1, 1, 44, 2
	rodata_subsprite -48, 12, 1, 1, 48, 2
	rodata_subsprite -16, 12, 1, 1, 52, 2
	rodata_subsprite 16, 12, 1, 1, 56, 2
sObjectEventSubsprites_084E1C0C: @ 0x084E1C0C
	rodata_subsprite -48, -20, 1, 1, 0, 1
	rodata_subsprite -16, -20, 1, 1, 4, 1
	rodata_subsprite 16, -20, 1, 1, 8, 1
	rodata_subsprite -48, -12, 1, 1, 12, 1
	rodata_subsprite -16, -12, 1, 1, 16, 1
	rodata_subsprite 16, -12, 1, 1, 20, 1
	rodata_subsprite -48, -4, 1, 1, 24, 2
	rodata_subsprite -16, -4, 1, 1, 28, 2
	rodata_subsprite 16, -4, 1, 1, 32, 2
	rodata_subsprite -48, 4, 1, 1, 36, 2
	rodata_subsprite -16, 4, 1, 1, 40, 2
	rodata_subsprite 16, 4, 1, 1, 44, 2
	rodata_subsprite -48, 12, 1, 1, 48, 2
	rodata_subsprite -16, 12, 1, 1, 52, 2
	rodata_subsprite 16, 12, 1, 1, 56, 2
sObjectEventSubspriteTables_96x40: @ 0x084E1C48
	rodata_subsprite_table 15, sObjectEventSubsprites_084E1B58
	rodata_subsprite_table 15, sObjectEventSubsprites_084E1B58
	rodata_subsprite_table 15, sObjectEventSubsprites_084E1B94
	rodata_subsprite_table 15, sObjectEventSubsprites_084E1BD0
	rodata_subsprite_table 15, sObjectEventSubsprites_084E1C0C
	rodata_subsprite_table 15, sObjectEventSubsprites_084E1C0C
sObjectEventSubsprites_084E1C78: @ 0x084E1C78
	rodata_subsprite -48, -20, 1, 1, 0, 2
	rodata_subsprite -16, -20, 1, 1, 4, 2
	rodata_subsprite 16, -20, 1, 0, 8, 2
	rodata_subsprite 32, -20, 0, 0, 10, 2
	rodata_subsprite -48, -12, 1, 1, 11, 2
	rodata_subsprite -16, -12, 1, 1, 15, 2
	rodata_subsprite 16, -12, 1, 0, 19, 2
	rodata_subsprite 32, -12, 0, 0, 21, 2
	rodata_subsprite -48, -4, 1, 1, 22, 2
	rodata_subsprite -16, -4, 1, 1, 26, 2
	rodata_subsprite 16, -4, 1, 0, 30, 2
	rodata_subsprite 32, -4, 0, 0, 32, 2
	rodata_subsprite -48, 4, 1, 1, 33, 2
	rodata_subsprite -16, 4, 1, 1, 37, 2
	rodata_subsprite 16, 4, 1, 0, 41, 2
	rodata_subsprite 32, 4, 0, 0, 43, 2
sObjectEventSubsprites_084E1CB8: @ 0x084E1CB8
	rodata_subsprite -48, -20, 1, 1, 0, 1
	rodata_subsprite -16, -20, 1, 1, 4, 1
	rodata_subsprite 16, -20, 1, 0, 8, 1
	rodata_subsprite 32, -20, 0, 0, 10, 1
	rodata_subsprite -48, -12, 1, 1, 11, 1
	rodata_subsprite -16, -12, 1, 1, 15, 1
	rodata_subsprite 16, -12, 1, 0, 19, 1
	rodata_subsprite 32, -12, 0, 0, 21, 1
	rodata_subsprite -48, -4, 1, 1, 22, 1
	rodata_subsprite -16, -4, 1, 1, 26, 1
	rodata_subsprite 16, -4, 1, 0, 30, 1
	rodata_subsprite 32, -4, 0, 0, 32, 1
	rodata_subsprite -48, 4, 1, 1, 33, 1
	rodata_subsprite -16, 4, 1, 1, 37, 1
	rodata_subsprite 16, 4, 1, 0, 41, 1
	rodata_subsprite 32, 4, 0, 0, 43, 1
sObjectEventSubsprites_084E1CF8: @ 0x084E1CF8
	rodata_subsprite -48, -20, 1, 1, 0, 2
	rodata_subsprite -16, -20, 1, 1, 4, 2
	rodata_subsprite 16, -20, 1, 0, 8, 2
	rodata_subsprite 32, -20, 0, 0, 10, 2
	rodata_subsprite -48, -12, 1, 1, 11, 2
	rodata_subsprite -16, -12, 1, 1, 15, 2
	rodata_subsprite 16, -12, 1, 0, 19, 2
	rodata_subsprite 32, -12, 0, 0, 21, 2
	rodata_subsprite -48, -4, 1, 1, 22, 2
	rodata_subsprite -16, -4, 1, 1, 26, 2
	rodata_subsprite 16, -4, 1, 0, 30, 2
	rodata_subsprite 32, -4, 0, 0, 32, 2
	rodata_subsprite -48, 4, 1, 1, 33, 2
	rodata_subsprite -16, 4, 1, 1, 37, 2
	rodata_subsprite 16, 4, 1, 0, 41, 2
	rodata_subsprite 32, 4, 0, 0, 43, 2
sObjectEventSubsprites_084E1D38: @ 0x084E1D38
	rodata_subsprite -48, -20, 1, 1, 0, 1
	rodata_subsprite -16, -20, 1, 1, 4, 1
	rodata_subsprite 16, -20, 1, 0, 8, 1
	rodata_subsprite 32, -20, 0, 0, 10, 1
	rodata_subsprite -48, -12, 1, 1, 11, 1
	rodata_subsprite -16, -12, 1, 1, 15, 1
	rodata_subsprite 16, -12, 1, 0, 19, 1
	rodata_subsprite 32, -12, 0, 0, 21, 1
	rodata_subsprite -48, -4, 1, 1, 22, 2
	rodata_subsprite -16, -4, 1, 1, 26, 2
	rodata_subsprite 16, -4, 1, 0, 30, 2
	rodata_subsprite 32, -4, 0, 0, 32, 2
	rodata_subsprite -48, 4, 1, 1, 33, 2
	rodata_subsprite -16, 4, 1, 1, 37, 2
	rodata_subsprite 16, 4, 1, 0, 41, 2
	rodata_subsprite 32, 4, 0, 0, 43, 2
sObjectEventSubspriteTables_88x32: @ 0x084E1D78
	rodata_subsprite_table 16, sObjectEventSubsprites_084E1C78
	rodata_subsprite_table 16, sObjectEventSubsprites_084E1C78
	rodata_subsprite_table 16, sObjectEventSubsprites_084E1CB8
	rodata_subsprite_table 16, sObjectEventSubsprites_084E1CF8
	rodata_subsprite_table 16, sObjectEventSubsprites_084E1D38
	rodata_subsprite_table 16, sObjectEventSubsprites_084E1D38
	.globl gObjectEventGraphicsInfo_JP_000
gObjectEventGraphicsInfo_JP_000: @ 0x084E1DA8
	object_event_graphics_info 0xFFFF, 0x1100, 0x1102, 0x0200, 16, 32, 0x10, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E16DC, gSpriteFrameImages_JP_084DDEE0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_001
gObjectEventGraphicsInfo_JP_001: @ 0x084E1DCC
	object_event_graphics_info 0xFFFF, 0x1100, 0x1102, 0x0200, 32, 32, 0x10, 2, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DDF70, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_063
gObjectEventGraphicsInfo_JP_063: @ 0x084E1DF0
	object_event_graphics_info 0xFFFF, 0x1100, 0x1102, 0x0200, 32, 32, 0x10, 2, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E173C, gSpriteFrameImages_JP_084DDFB8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_002
gObjectEventGraphicsInfo_JP_002: @ 0x084E1E14
	object_event_graphics_info 0xFFFF, 0x1100, 0x11FF, 0x0200, 32, 32, 0x90, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E17DC, gSpriteFrameImages_JP_084DE090, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_003
gObjectEventGraphicsInfo_JP_003: @ 0x084E1E38
	object_event_graphics_info 0xFFFF, 0x1100, 0x1102, 0x0200, 32, 32, 0x10, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1890, gSpriteFrameImages_JP_084DE138, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_004
gObjectEventGraphicsInfo_JP_004: @ 0x084E1E5C
	object_event_graphics_info 0xFFFF, 0x110B, 0x11FF, 0x0200, 32, 32, 0x2A, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1504, gSpriteFrameImages_JP_084DE160, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_005
gObjectEventGraphicsInfo_JP_005: @ 0x084E1E80
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x12, 1, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE198, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_006
gObjectEventGraphicsInfo_JP_006: @ 0x084E1EA4
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0100, 16, 32, 0x13, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE1E0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_007
gObjectEventGraphicsInfo_JP_007: @ 0x084E1EC8
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE228, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_008
gObjectEventGraphicsInfo_JP_008: @ 0x084E1EEC
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0100, 16, 32, 0x13, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE270, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_009
gObjectEventGraphicsInfo_JP_009: @ 0x084E1F10
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE2B8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_010
gObjectEventGraphicsInfo_JP_010: @ 0x084E1F34
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE300, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_011
gObjectEventGraphicsInfo_JP_011: @ 0x084E1F58
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0080, 16, 16, 0x15, 1, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE348, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_012
gObjectEventGraphicsInfo_JP_012: @ 0x084E1F7C
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0080, 16, 16, 0x13, 1, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE390, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_013
gObjectEventGraphicsInfo_JP_013: @ 0x084E1FA0
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE3D8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_014
gObjectEventGraphicsInfo_JP_014: @ 0x084E1FC4
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0100, 16, 32, 0x13, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE420, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_015
gObjectEventGraphicsInfo_JP_015: @ 0x084E1FE8
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE468, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_016
gObjectEventGraphicsInfo_JP_016: @ 0x084E200C
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE4B0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_017
gObjectEventGraphicsInfo_JP_017: @ 0x084E2030
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE4F8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_018
gObjectEventGraphicsInfo_JP_018: @ 0x084E2054
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0100, 16, 32, 0x13, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE540, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_019
gObjectEventGraphicsInfo_JP_019: @ 0x084E2078
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE588, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_020
gObjectEventGraphicsInfo_JP_020: @ 0x084E209C
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE5D0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_021
gObjectEventGraphicsInfo_JP_021: @ 0x084E20C0
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE618, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_022
gObjectEventGraphicsInfo_JP_022: @ 0x084E20E4
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE660, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_023
gObjectEventGraphicsInfo_JP_023: @ 0x084E2108
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE6A8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_024
gObjectEventGraphicsInfo_JP_024: @ 0x084E212C
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0100, 16, 32, 0x13, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE6F0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_025
gObjectEventGraphicsInfo_JP_025: @ 0x084E2150
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0100, 16, 32, 0x13, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE738, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_026
gObjectEventGraphicsInfo_JP_026: @ 0x084E2174
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE780, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_027
gObjectEventGraphicsInfo_JP_027: @ 0x084E2198
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE7C8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_028
gObjectEventGraphicsInfo_JP_028: @ 0x084E21BC
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE810, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_029
gObjectEventGraphicsInfo_JP_029: @ 0x084E21E0
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE858, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_030
gObjectEventGraphicsInfo_JP_030: @ 0x084E2204
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE8A0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_031
gObjectEventGraphicsInfo_JP_031: @ 0x084E2228
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE8E8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_032
gObjectEventGraphicsInfo_JP_032: @ 0x084E224C
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE930, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_033
gObjectEventGraphicsInfo_JP_033: @ 0x084E2270
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0100, 16, 32, 0x13, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE978, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_034
gObjectEventGraphicsInfo_JP_034: @ 0x084E2294
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0100, 16, 32, 0x13, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE9C0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_035
gObjectEventGraphicsInfo_JP_035: @ 0x084E22B8
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DEA08, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_036
gObjectEventGraphicsInfo_JP_036: @ 0x084E22DC
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DEA50, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_037
gObjectEventGraphicsInfo_JP_037: @ 0x084E2300
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DEA98, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_038
gObjectEventGraphicsInfo_JP_038: @ 0x084E2324
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DEAE0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_039
gObjectEventGraphicsInfo_JP_039: @ 0x084E2348
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DEB28, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_040
gObjectEventGraphicsInfo_JP_040: @ 0x084E236C
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DEB70, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_041
gObjectEventGraphicsInfo_JP_041: @ 0x084E2390
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0800, 64, 64, 0x94, 1, sObjectEventOam_64x64, sObjectEventSubspriteTables_64x64, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E05D0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_042
gObjectEventGraphicsInfo_JP_042: @ 0x084E23B4
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DEBB8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_043
gObjectEventGraphicsInfo_JP_043: @ 0x084E23D8
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0100, 16, 32, 0x13, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DEC00, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_044
gObjectEventGraphicsInfo_JP_044: @ 0x084E23FC
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DEC48, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_045
gObjectEventGraphicsInfo_JP_045: @ 0x084E2420
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DEC90, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_046
gObjectEventGraphicsInfo_JP_046: @ 0x084E2444
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DECD8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_047
gObjectEventGraphicsInfo_JP_047: @ 0x084E2468
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DED20, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_048
gObjectEventGraphicsInfo_JP_048: @ 0x084E248C
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DED68, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_049
gObjectEventGraphicsInfo_JP_049: @ 0x084E24B0
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DEDB0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_050
gObjectEventGraphicsInfo_JP_050: @ 0x084E24D4
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0100, 16, 32, 0x13, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DEDF8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_051
gObjectEventGraphicsInfo_JP_051: @ 0x084E24F8
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DEE40, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_052
gObjectEventGraphicsInfo_JP_052: @ 0x084E251C
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0100, 16, 32, 0x13, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DEE88, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_053
gObjectEventGraphicsInfo_JP_053: @ 0x084E2540
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x12, 1, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DEED0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_054
gObjectEventGraphicsInfo_JP_054: @ 0x084E2564
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0080, 16, 16, 0x13, 1, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DEF18, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_055
gObjectEventGraphicsInfo_JP_055: @ 0x084E2588
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DEF60, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_056
gObjectEventGraphicsInfo_JP_056: @ 0x084E25AC
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0200, 32, 32, 0x14, 2, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E173C, gSpriteFrameImages_JP_084DEFA8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_057
gObjectEventGraphicsInfo_JP_057: @ 0x084E25D0
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0200, 32, 32, 0x12, 2, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E173C, gSpriteFrameImages_JP_084DEFF0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_058
gObjectEventGraphicsInfo_JP_058: @ 0x084E25F4
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E183C, gSpriteFrameImages_JP_084DF038, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_059
gObjectEventGraphicsInfo_JP_059: @ 0x084E2618
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0080, 16, 16, 0x44, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084DF088, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_060
gObjectEventGraphicsInfo_JP_060: @ 0x084E263C
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 16, 0x42, 0, sObjectEventOam_16x16, 0, sObjectEventAnimTable_084E1894, 0x084E429C, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_061
gObjectEventGraphicsInfo_JP_061: @ 0x084E2660
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 16, 0x42, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1894, 0x084E429C, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_062
gObjectEventGraphicsInfo_JP_062: @ 0x084E2684
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x42, 0, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1894, 0x084E429C, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_064
gObjectEventGraphicsInfo_JP_064: @ 0x084E26A8
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF090, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_065
gObjectEventGraphicsInfo_JP_065: @ 0x084E26CC
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF0D8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_066
gObjectEventGraphicsInfo_JP_066: @ 0x084E26F0
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0100, 16, 32, 0x13, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF120, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_067
gObjectEventGraphicsInfo_JP_067: @ 0x084E2714
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF168, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_068
gObjectEventGraphicsInfo_JP_068: @ 0x084E2738
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF1B0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_069
gObjectEventGraphicsInfo_JP_069: @ 0x084E275C
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF1F8, gDummySpriteAffineAnimTable
	.globl gMauvilleOldManGraphicsInfo_JP_01
gMauvilleOldManGraphicsInfo_JP_01: @ 0x084E2780
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0100, 16, 32, 0x13, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF1F8, gDummySpriteAffineAnimTable
	.globl gMauvilleOldManGraphicsInfo_JP_02
gMauvilleOldManGraphicsInfo_JP_02: @ 0x084E27A4
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF1F8, gDummySpriteAffineAnimTable
	.globl gMauvilleOldManGraphicsInfo_JP_03
gMauvilleOldManGraphicsInfo_JP_03: @ 0x084E27C8
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF240, gDummySpriteAffineAnimTable
	.globl gMauvilleOldManGraphicsInfo_JP_04
gMauvilleOldManGraphicsInfo_JP_04: @ 0x084E27EC
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0100, 16, 32, 0x13, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF240, gDummySpriteAffineAnimTable
	.globl gMauvilleOldManGraphicsInfo_JP_05
gMauvilleOldManGraphicsInfo_JP_05: @ 0x084E2810
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF240, gDummySpriteAffineAnimTable
	.globl gMauvilleOldManGraphicsInfo_JP_06
gMauvilleOldManGraphicsInfo_JP_06: @ 0x084E2834
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF240, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_076
gObjectEventGraphicsInfo_JP_076: @ 0x084E2858
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0080, 16, 16, 0x44, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084DF288, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_077
gObjectEventGraphicsInfo_JP_077: @ 0x084E287C
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0080, 16, 16, 0x44, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084DF290, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_078
gObjectEventGraphicsInfo_JP_078: @ 0x084E28A0
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x42, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084DF298, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_079
gObjectEventGraphicsInfo_JP_079: @ 0x084E28C4
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0080, 16, 16, 0x44, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084DF2A0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_080
gObjectEventGraphicsInfo_JP_080: @ 0x084E28E8
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0080, 16, 16, 0x43, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084DF2A8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_081
gObjectEventGraphicsInfo_JP_081: @ 0x084E290C
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x42, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084DF2B0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_082
gObjectEventGraphicsInfo_JP_082: @ 0x084E2930
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0080, 16, 16, 0x44, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E18B0, gSpriteFrameImages_JP_084DF2B8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_083
gObjectEventGraphicsInfo_JP_083: @ 0x084E2954
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF2D8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_084
gObjectEventGraphicsInfo_JP_084: @ 0x084E2978
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF320, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_085
gObjectEventGraphicsInfo_JP_085: @ 0x084E299C
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF368, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_086
gObjectEventGraphicsInfo_JP_086: @ 0x084E29C0
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x42, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E18A8, gSpriteFrameImages_JP_084DF3B0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_087
gObjectEventGraphicsInfo_JP_087: @ 0x084E29E4
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x42, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084DF3D0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_088
gObjectEventGraphicsInfo_JP_088: @ 0x084E2A08
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0200, 32, 32, 0x14, 0, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF3D8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_089
gObjectEventGraphicsInfo_JP_089: @ 0x084E2A2C
	object_event_graphics_info 0xFFFF, 0x1110, 0x1102, 0x0200, 16, 32, 0x10, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E16DC, gSpriteFrameImages_JP_084DF598, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_090
gObjectEventGraphicsInfo_JP_090: @ 0x084E2A50
	object_event_graphics_info 0xFFFF, 0x1110, 0x1102, 0x0200, 32, 32, 0x10, 2, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF628, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_091
gObjectEventGraphicsInfo_JP_091: @ 0x084E2A74
	object_event_graphics_info 0xFFFF, 0x1110, 0x1102, 0x0200, 32, 32, 0x10, 2, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E173C, gSpriteFrameImages_JP_084DF670, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_092
gObjectEventGraphicsInfo_JP_092: @ 0x084E2A98
	object_event_graphics_info 0xFFFF, 0x1110, 0x11FF, 0x0200, 32, 32, 0x90, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E17DC, gSpriteFrameImages_JP_084DF748, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_093
gObjectEventGraphicsInfo_JP_093: @ 0x084E2ABC
	object_event_graphics_info 0xFFFF, 0x1110, 0x1102, 0x0200, 32, 32, 0x10, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1890, gSpriteFrameImages_JP_084DF7F0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_094
gObjectEventGraphicsInfo_JP_094: @ 0x084E2AE0
	object_event_graphics_info 0xFFFF, 0x110D, 0x11FF, 0x0480, 48, 48, 0x5A, 0, sObjectEventOam_32x32, sObjectEventSubspriteTables_48x48, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084DF420, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_095
gObjectEventGraphicsInfo_JP_095: @ 0x084E2B04
	object_event_graphics_info 0xFFFF, 0x110E, 0x11FF, 0x0200, 32, 32, 0x1A, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF428, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_096
gObjectEventGraphicsInfo_JP_096: @ 0x084E2B28
	object_event_graphics_info 0xFFFF, 0x110E, 0x11FF, 0x0200, 32, 32, 0x1A, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF470, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_097
gObjectEventGraphicsInfo_JP_097: @ 0x084E2B4C
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0080, 16, 16, 0x43, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084DF4B8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_098
gObjectEventGraphicsInfo_JP_098: @ 0x084E2B70
	object_event_graphics_info 0xFFFF, 0x110F, 0x11FF, 0x0200, 32, 32, 0x1A, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF4C0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_220
gObjectEventGraphicsInfo_JP_220: @ 0x084E2B94
	object_event_graphics_info 0xFFFF, 0x111C, 0x11FF, 0x0200, 32, 32, 0x1A, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF508, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_099
gObjectEventGraphicsInfo_JP_099: @ 0x084E2BB8
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF550, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_100
gObjectEventGraphicsInfo_JP_100: @ 0x084E2BDC
	object_event_graphics_info 0xFFFF, 0x1100, 0x1102, 0x0100, 16, 32, 0x1A, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E16DC, gSpriteFrameImages_JP_084DDEE0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_101
gObjectEventGraphicsInfo_JP_101: @ 0x084E2C00
	object_event_graphics_info 0xFFFF, 0x1100, 0x1102, 0x0200, 32, 32, 0x1A, 2, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DDF70, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_102
gObjectEventGraphicsInfo_JP_102: @ 0x084E2C24
	object_event_graphics_info 0xFFFF, 0x1100, 0x1102, 0x0200, 32, 32, 0x1A, 2, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E173C, gSpriteFrameImages_JP_084DDFB8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_103
gObjectEventGraphicsInfo_JP_103: @ 0x084E2C48
	object_event_graphics_info 0xFFFF, 0x1100, 0x11FF, 0x0200, 32, 32, 0x9A, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E17DC, gSpriteFrameImages_JP_084DE090, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_104
gObjectEventGraphicsInfo_JP_104: @ 0x084E2C6C
	object_event_graphics_info 0xFFFF, 0x1100, 0x1102, 0x0200, 32, 32, 0x1A, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1890, gSpriteFrameImages_JP_084DE138, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_105
gObjectEventGraphicsInfo_JP_105: @ 0x084E2C90
	object_event_graphics_info 0xFFFF, 0x1110, 0x1102, 0x0100, 16, 32, 0x1A, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E16DC, gSpriteFrameImages_JP_084DF598, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_106
gObjectEventGraphicsInfo_JP_106: @ 0x084E2CB4
	object_event_graphics_info 0xFFFF, 0x1110, 0x1102, 0x0200, 32, 32, 0x1A, 2, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF628, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_107
gObjectEventGraphicsInfo_JP_107: @ 0x084E2CD8
	object_event_graphics_info 0xFFFF, 0x1110, 0x1102, 0x0200, 32, 32, 0x1A, 2, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E173C, gSpriteFrameImages_JP_084DF670, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_108
gObjectEventGraphicsInfo_JP_108: @ 0x084E2CFC
	object_event_graphics_info 0xFFFF, 0x1110, 0x11FF, 0x0200, 32, 32, 0x9A, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E17DC, gSpriteFrameImages_JP_084DF748, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_109
gObjectEventGraphicsInfo_JP_109: @ 0x084E2D20
	object_event_graphics_info 0xFFFF, 0x1110, 0x1102, 0x0200, 32, 32, 0x1A, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1890, gSpriteFrameImages_JP_084DF7F0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_110
gObjectEventGraphicsInfo_JP_110: @ 0x084E2D44
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF818, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_111
gObjectEventGraphicsInfo_JP_111: @ 0x084E2D68
	object_event_graphics_info 0xFFFF, 0x1115, 0x11FF, 0x0200, 32, 32, 0x90, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DE0F0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_112
gObjectEventGraphicsInfo_JP_112: @ 0x084E2D8C
	object_event_graphics_info 0xFFFF, 0x1115, 0x11FF, 0x0200, 32, 32, 0x9A, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF7A8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_113
gObjectEventGraphicsInfo_JP_113: @ 0x084E2DB0
	object_event_graphics_info 0xFFFF, 0x1112, 0x11FF, 0x0080, 16, 16, 0x4A, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084DF860, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_114
gObjectEventGraphicsInfo_JP_114: @ 0x084E2DD4
	object_event_graphics_info 0xFFFF, 0x1113, 0x11FF, 0x0800, 64, 64, 0x5A, 0, sObjectEventOam_64x64, sObjectEventSubspriteTables_64x64, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084DF868, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_115
gObjectEventGraphicsInfo_JP_115: @ 0x084E2DF8
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF870, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_116
gObjectEventGraphicsInfo_JP_116: @ 0x084E2E1C
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0100, 16, 32, 0x13, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF8B8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_117
gObjectEventGraphicsInfo_JP_117: @ 0x084E2E40
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF900, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_118
gObjectEventGraphicsInfo_JP_118: @ 0x084E2E64
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF948, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_119
gObjectEventGraphicsInfo_JP_119: @ 0x084E2E88
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0100, 16, 32, 0x13, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF990, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_120
gObjectEventGraphicsInfo_JP_120: @ 0x084E2EAC
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0100, 16, 32, 0x13, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DF9D8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_121
gObjectEventGraphicsInfo_JP_121: @ 0x084E2ED0
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0100, 16, 32, 0x13, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DFA20, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_122
gObjectEventGraphicsInfo_JP_122: @ 0x084E2EF4
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DFA68, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_123
gObjectEventGraphicsInfo_JP_123: @ 0x084E2F18
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0100, 16, 32, 0x13, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DFAB0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_124
gObjectEventGraphicsInfo_JP_124: @ 0x084E2F3C
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DFAF8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_125
gObjectEventGraphicsInfo_JP_125: @ 0x084E2F60
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DFB40, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_126
gObjectEventGraphicsInfo_JP_126: @ 0x084E2F84
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DFB88, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_127
gObjectEventGraphicsInfo_JP_127: @ 0x084E2FA8
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0100, 16, 32, 0x13, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DFBD0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_128
gObjectEventGraphicsInfo_JP_128: @ 0x084E2FCC
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DFC18, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_129
gObjectEventGraphicsInfo_JP_129: @ 0x084E2FF0
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DFC60, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_130
gObjectEventGraphicsInfo_JP_130: @ 0x084E3014
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DFCA8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_131
gObjectEventGraphicsInfo_JP_131: @ 0x084E3038
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DFCF0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_132
gObjectEventGraphicsInfo_JP_132: @ 0x084E305C
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DFD38, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_133
gObjectEventGraphicsInfo_JP_133: @ 0x084E3080
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DFD80, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_134
gObjectEventGraphicsInfo_JP_134: @ 0x084E30A4
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DFDC8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_135
gObjectEventGraphicsInfo_JP_135: @ 0x084E30C8
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DFE10, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_136
gObjectEventGraphicsInfo_JP_136: @ 0x084E30EC
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x12, 1, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DFE58, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_137
gObjectEventGraphicsInfo_JP_137: @ 0x084E3110
	object_event_graphics_info 0xFFFF, 0x1100, 0x1102, 0x0200, 32, 32, 0x10, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E18B8, gSpriteFrameImages_JP_084DFEA0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_138
gObjectEventGraphicsInfo_JP_138: @ 0x084E3134
	object_event_graphics_info 0xFFFF, 0x1110, 0x1102, 0x0200, 32, 32, 0x10, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E18B8, gSpriteFrameImages_JP_084DFF00, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_139
gObjectEventGraphicsInfo_JP_139: @ 0x084E3158
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DFF60, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_140
gObjectEventGraphicsInfo_JP_140: @ 0x084E317C
	object_event_graphics_info 0xFFFF, 0x1114, 0x11FF, 0x0780, 96, 40, 0x1A, 0, sObjectEventOam_8x8, sObjectEventSubspriteTables_96x40, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DFFA8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_141
gObjectEventGraphicsInfo_JP_141: @ 0x084E31A0
	object_event_graphics_info 0xFFFF, 0x111B, 0x11FF, 0x0580, 88, 32, 0x1A, 0, sObjectEventOam_8x8, sObjectEventSubspriteTables_88x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084DFFF0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_142
gObjectEventGraphicsInfo_JP_142: @ 0x084E31C4
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0080, 16, 16, 0x43, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0038, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_143
gObjectEventGraphicsInfo_JP_143: @ 0x084E31E8
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0080, 16, 16, 0x43, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0040, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_144
gObjectEventGraphicsInfo_JP_144: @ 0x084E320C
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x42, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0048, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_145
gObjectEventGraphicsInfo_JP_145: @ 0x084E3230
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0080, 16, 16, 0x44, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0050, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_146
gObjectEventGraphicsInfo_JP_146: @ 0x084E3254
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0080, 16, 16, 0x45, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0058, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_147
gObjectEventGraphicsInfo_JP_147: @ 0x084E3278
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0080, 16, 16, 0x44, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0060, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_148
gObjectEventGraphicsInfo_JP_148: @ 0x084E329C
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x42, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0068, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_149
gObjectEventGraphicsInfo_JP_149: @ 0x084E32C0
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x42, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0070, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_150
gObjectEventGraphicsInfo_JP_150: @ 0x084E32E4
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0080, 16, 16, 0x43, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0078, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_151
gObjectEventGraphicsInfo_JP_151: @ 0x084E3308
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x42, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0080, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_152
gObjectEventGraphicsInfo_JP_152: @ 0x084E332C
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0080, 16, 16, 0x45, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0088, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_153
gObjectEventGraphicsInfo_JP_153: @ 0x084E3350
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0080, 16, 16, 0x45, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0090, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_154
gObjectEventGraphicsInfo_JP_154: @ 0x084E3374
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0080, 16, 16, 0x44, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0098, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_155
gObjectEventGraphicsInfo_JP_155: @ 0x084E3398
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0080, 16, 16, 0x43, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E00A0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_156
gObjectEventGraphicsInfo_JP_156: @ 0x084E33BC
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x42, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E00A8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_157
gObjectEventGraphicsInfo_JP_157: @ 0x084E33E0
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0080, 16, 16, 0x45, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E00B0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_158
gObjectEventGraphicsInfo_JP_158: @ 0x084E3404
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x42, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E00B8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_159
gObjectEventGraphicsInfo_JP_159: @ 0x084E3428
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x42, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E00C0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_160
gObjectEventGraphicsInfo_JP_160: @ 0x084E344C
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0080, 16, 16, 0x44, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E00C8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_161
gObjectEventGraphicsInfo_JP_161: @ 0x084E3470
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x42, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E00D0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_162
gObjectEventGraphicsInfo_JP_162: @ 0x084E3494
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x42, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E00D8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_163
gObjectEventGraphicsInfo_JP_163: @ 0x084E34B8
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x42, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E00E0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_164
gObjectEventGraphicsInfo_JP_164: @ 0x084E34DC
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0080, 16, 16, 0x44, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E00E8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_165
gObjectEventGraphicsInfo_JP_165: @ 0x084E3500
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0080, 16, 16, 0x44, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E00F0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_166
gObjectEventGraphicsInfo_JP_166: @ 0x084E3524
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0080, 16, 16, 0x44, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E00F8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_167
gObjectEventGraphicsInfo_JP_167: @ 0x084E3548
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0080, 16, 16, 0x43, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0100, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_168
gObjectEventGraphicsInfo_JP_168: @ 0x084E356C
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x42, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0108, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_169
gObjectEventGraphicsInfo_JP_169: @ 0x084E3590
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0080, 16, 16, 0x45, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0110, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_170
gObjectEventGraphicsInfo_JP_170: @ 0x084E35B4
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x42, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0118, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_171
gObjectEventGraphicsInfo_JP_171: @ 0x084E35D8
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x42, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0120, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_172
gObjectEventGraphicsInfo_JP_172: @ 0x084E35FC
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0080, 16, 16, 0x45, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0128, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_173
gObjectEventGraphicsInfo_JP_173: @ 0x084E3620
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0080, 16, 16, 0x44, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0130, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_174
gObjectEventGraphicsInfo_JP_174: @ 0x084E3644
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0080, 16, 16, 0x44, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0138, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_175
gObjectEventGraphicsInfo_JP_175: @ 0x084E3668
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0080, 16, 16, 0x43, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0140, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_176
gObjectEventGraphicsInfo_JP_176: @ 0x084E368C
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x42, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0148, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_177
gObjectEventGraphicsInfo_JP_177: @ 0x084E36B0
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0200, 32, 32, 0x55, 0, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0150, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_178
gObjectEventGraphicsInfo_JP_178: @ 0x084E36D4
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0200, 32, 32, 0x55, 0, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0158, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_179
gObjectEventGraphicsInfo_JP_179: @ 0x084E36F8
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0200, 32, 32, 0x52, 0, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0160, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_180
gObjectEventGraphicsInfo_JP_180: @ 0x084E371C
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0200, 32, 32, 0x54, 0, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0168, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_181
gObjectEventGraphicsInfo_JP_181: @ 0x084E3740
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0200, 32, 32, 0x53, 0, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0170, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_182
gObjectEventGraphicsInfo_JP_182: @ 0x084E3764
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0200, 32, 32, 0x52, 0, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0178, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_183
gObjectEventGraphicsInfo_JP_183: @ 0x084E3788
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0200, 32, 32, 0x55, 0, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0180, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_184
gObjectEventGraphicsInfo_JP_184: @ 0x084E37AC
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0200, 32, 32, 0x52, 0, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0188, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_185
gObjectEventGraphicsInfo_JP_185: @ 0x084E37D0
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0200, 32, 32, 0x54, 0, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0190, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_186
gObjectEventGraphicsInfo_JP_186: @ 0x084E37F4
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0200, 32, 32, 0x55, 0, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0198, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_187
gObjectEventGraphicsInfo_JP_187: @ 0x084E3818
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0200, 32, 32, 0x13, 0, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E01A0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_188
gObjectEventGraphicsInfo_JP_188: @ 0x084E383C
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0200, 32, 32, 0x12, 0, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E01A0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_189
gObjectEventGraphicsInfo_JP_189: @ 0x084E3860
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E01E8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_190
gObjectEventGraphicsInfo_JP_190: @ 0x084E3884
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0230, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_191
gObjectEventGraphicsInfo_JP_191: @ 0x084E38A8
	object_event_graphics_info 0xFFFF, 0x1100, 0x1102, 0x0200, 32, 32, 0x10, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0278, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_192
gObjectEventGraphicsInfo_JP_192: @ 0x084E38CC
	object_event_graphics_info 0xFFFF, 0x1110, 0x1102, 0x0200, 32, 32, 0x10, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E02C0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_193
gObjectEventGraphicsInfo_JP_193: @ 0x084E38F0
	object_event_graphics_info 0xFFFF, 0x1100, 0x1102, 0x0100, 16, 32, 0x5A, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0308, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_194
gObjectEventGraphicsInfo_JP_194: @ 0x084E3914
	object_event_graphics_info 0xFFFF, 0x1110, 0x1102, 0x0100, 16, 32, 0x5A, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0310, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_195
gObjectEventGraphicsInfo_JP_195: @ 0x084E3938
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0318, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_196
gObjectEventGraphicsInfo_JP_196: @ 0x084E395C
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0100, 16, 32, 0x13, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0360, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_197
gObjectEventGraphicsInfo_JP_197: @ 0x084E3980
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0200, 32, 32, 0x15, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E03A8, sObjectEventAffineAnimTable_084E18E8
	.globl gObjectEventGraphicsInfo_JP_198
gObjectEventGraphicsInfo_JP_198: @ 0x084E39A4
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0200, 32, 32, 0x14, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E03F0, sObjectEventAffineAnimTable_084E18E8
	.globl gObjectEventGraphicsInfo_JP_221
gObjectEventGraphicsInfo_JP_221: @ 0x084E39C8
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0200, 32, 32, 0x15, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0438, sObjectEventAffineAnimTable_084E18E8
	.globl gObjectEventGraphicsInfo_JP_222
gObjectEventGraphicsInfo_JP_222: @ 0x084E39EC
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0200, 32, 32, 0x14, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E15F4, gSpriteFrameImages_JP_084E0480, sObjectEventAffineAnimTable_084E18E8
	.globl gObjectEventGraphicsInfo_JP_199
gObjectEventGraphicsInfo_JP_199: @ 0x084E3A10
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x42, 0, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E04C8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_200
gObjectEventGraphicsInfo_JP_200: @ 0x084E3A34
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0200, 32, 32, 0x53, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E04D0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_201
gObjectEventGraphicsInfo_JP_201: @ 0x084E3A58
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0200, 32, 32, 0x54, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E04D0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_202
gObjectEventGraphicsInfo_JP_202: @ 0x084E3A7C
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0200, 32, 32, 0x55, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E04D0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_203
gObjectEventGraphicsInfo_JP_203: @ 0x084E3AA0
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x12, 1, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0518, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_204
gObjectEventGraphicsInfo_JP_204: @ 0x084E3AC4
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0080, 16, 16, 0x14, 1, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0560, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_205
gObjectEventGraphicsInfo_JP_205: @ 0x084E3AE8
	object_event_graphics_info 0xFFFF, 0x1116, 0x11FF, 0x0200, 32, 32, 0x1A, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E03A8, sObjectEventAffineAnimTable_084E18E8
	.globl gObjectEventGraphicsInfo_JP_206
gObjectEventGraphicsInfo_JP_206: @ 0x084E3B0C
	object_event_graphics_info 0xFFFF, 0x1118, 0x11FF, 0x0200, 32, 32, 0x1A, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E03F0, sObjectEventAffineAnimTable_084E18E8
	.globl gObjectEventGraphicsInfo_JP_207
gObjectEventGraphicsInfo_JP_207: @ 0x084E3B30
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0800, 64, 64, 0x94, 1, sObjectEventOam_64x64, sObjectEventSubspriteTables_64x64, sObjectEventAnimTable_084E168C, gSpriteFrameImages_JP_084E05A8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_208
gObjectEventGraphicsInfo_JP_208: @ 0x084E3B54
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x12, 1, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0618, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_209
gObjectEventGraphicsInfo_JP_209: @ 0x084E3B78
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0080, 16, 16, 0x13, 1, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0660, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_210
gObjectEventGraphicsInfo_JP_210: @ 0x084E3B9C
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x12, 1, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E06A8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_211
gObjectEventGraphicsInfo_JP_211: @ 0x084E3BC0
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x12, 1, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E06F0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_212
gObjectEventGraphicsInfo_JP_212: @ 0x084E3BE4
	object_event_graphics_info 0xFFFF, 0x1105, 0x1102, 0x0080, 16, 16, 0x1A, 1, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0560, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_213
gObjectEventGraphicsInfo_JP_213: @ 0x084E3C08
	object_event_graphics_info 0xFFFF, 0x1104, 0x11FF, 0x0080, 16, 16, 0x13, 1, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0738, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_214
gObjectEventGraphicsInfo_JP_214: @ 0x084E3C2C
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0080, 16, 16, 0x12, 1, sObjectEventOam_16x16, sObjectEventSubspriteTables_16x16, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0780, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_215
gObjectEventGraphicsInfo_JP_215: @ 0x084E3C50
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E07C8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_216
gObjectEventGraphicsInfo_JP_216: @ 0x084E3C74
	object_event_graphics_info 0xFFFF, 0x1110, 0x1102, 0x0100, 16, 32, 0x1A, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E16DC, gSpriteFrameImages_JP_084DDEE0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_217
gObjectEventGraphicsInfo_JP_217: @ 0x084E3C98
	object_event_graphics_info 0xFFFF, 0x1110, 0x1102, 0x0100, 16, 32, 0x1A, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E16DC, gSpriteFrameImages_JP_084DF598, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_218
gObjectEventGraphicsInfo_JP_218: @ 0x084E3CBC
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0858, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_219
gObjectEventGraphicsInfo_JP_219: @ 0x084E3CE0
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0810, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_223
gObjectEventGraphicsInfo_JP_223: @ 0x084E3D04
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E08A0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_224
gObjectEventGraphicsInfo_JP_224: @ 0x084E3D28
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x55, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E08E8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_225
gObjectEventGraphicsInfo_JP_225: @ 0x084E3D4C
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x04, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0938, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_226
gObjectEventGraphicsInfo_JP_226: @ 0x084E3D70
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E08F0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_227
gObjectEventGraphicsInfo_JP_227: @ 0x084E3D94
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0980, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_230
gObjectEventGraphicsInfo_JP_230: @ 0x084E3DB8
	object_event_graphics_info 0xFFFF, 0x111D, 0x11FF, 0x0100, 16, 32, 0x1A, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0A58, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_231
gObjectEventGraphicsInfo_JP_231: @ 0x084E3DDC
	object_event_graphics_info 0xFFFF, 0x111D, 0x11FF, 0x0100, 16, 32, 0x1A, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0AA0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_228
gObjectEventGraphicsInfo_JP_228: @ 0x084E3E00
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E09C8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_229
gObjectEventGraphicsInfo_JP_229: @ 0x084E3E24
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0A10, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_232
gObjectEventGraphicsInfo_JP_232: @ 0x084E3E48
	object_event_graphics_info 0xFFFF, 0x111E, 0x11FF, 0x0200, 32, 32, 0x1A, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0AE8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_233
gObjectEventGraphicsInfo_JP_233: @ 0x084E3E6C
	object_event_graphics_info 0xFFFF, 0x111F, 0x11FF, 0x0200, 32, 32, 0x5A, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1500, gSpriteFrameImages_JP_084E0B30, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_070
gObjectEventGraphicsInfo_JP_070: @ 0x084E3E90
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0B38, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_071
gObjectEventGraphicsInfo_JP_071: @ 0x084E3EB4
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0B80, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_072
gObjectEventGraphicsInfo_JP_072: @ 0x084E3ED8
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0C10, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_073
gObjectEventGraphicsInfo_JP_073: @ 0x084E3EFC
	object_event_graphics_info 0xFFFF, 0x1103, 0x11FF, 0x0100, 16, 32, 0x12, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0BC8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_074
gObjectEventGraphicsInfo_JP_074: @ 0x084E3F20
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0C58, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_075
gObjectEventGraphicsInfo_JP_075: @ 0x084E3F44
	object_event_graphics_info 0xFFFF, 0x1106, 0x11FF, 0x0100, 16, 32, 0x15, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0CA0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_234
gObjectEventGraphicsInfo_JP_234: @ 0x084E3F68
	object_event_graphics_info 0xFFFF, 0x1105, 0x11FF, 0x0100, 16, 32, 0x14, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0CE8, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_235
gObjectEventGraphicsInfo_JP_235: @ 0x084E3F8C
	object_event_graphics_info 0xFFFF, 0x1122, 0x11FF, 0x0100, 16, 32, 0x1A, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0DC0, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_236
gObjectEventGraphicsInfo_JP_236: @ 0x084E3FB0
	object_event_graphics_info 0xFFFF, 0x1123, 0x11FF, 0x0100, 16, 32, 0x1A, 1, sObjectEventOam_16x32, sObjectEventSubspriteTables_16x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0E08, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_237
gObjectEventGraphicsInfo_JP_237: @ 0x084E3FD4
	object_event_graphics_info 0xFFFF, 0x1121, 0x11FF, 0x0200, 32, 32, 0x1A, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E1554, gSpriteFrameImages_JP_084E0D30, gDummySpriteAffineAnimTable
	.globl gObjectEventGraphicsInfo_JP_238
gObjectEventGraphicsInfo_JP_238: @ 0x084E3FF8
	object_event_graphics_info 0xFFFF, 0x1120, 0x11FF, 0x0200, 32, 32, 0x1A, 1, sObjectEventOam_32x32, sObjectEventSubspriteTables_32x32, sObjectEventAnimTable_084E15A4, gSpriteFrameImages_JP_084E0D78, gDummySpriteAffineAnimTable
	.globl gEventObjectMovementData_084E401C
gEventObjectMovementData_084E401C:
	.globl gUnknown_84E401C
gUnknown_84E401C: @ 0x084E401C
	@ analyzed canonical ROM range 0x084E401C-0x084E4153
sAnalyzedData_084E401C: @ 0x084E401C
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x5D0C, 0x0848, 0x1103, 0x0000, 0x5D2C, 0x0848, 0x1104, 0x0000
	.2byte 0x5D4C, 0x0848, 0x1105, 0x0000, 0x5D6C, 0x0848, 0x1106, 0x0000
	.2byte 0x5D8C, 0x0848, 0x1107, 0x0000, 0x5DAC, 0x0848, 0x1108, 0x0000
	.2byte 0x5DCC, 0x0848, 0x1109, 0x0000, 0x5DEC, 0x0848, 0x110A, 0x0000
	.2byte 0x0C4C, 0x0847, 0x1100, 0x0000, 0x206C, 0x0847, 0x1101, 0x0000
	.2byte 0x208C, 0x0847, 0x1102, 0x0000, 0xB4AC, 0x0847, 0x1115, 0x0000
	.2byte 0xEC6C, 0x084C, 0x110B, 0x0000, 0xEC8C, 0x084C, 0x110C, 0x0000
	.2byte 0xE12C, 0x084B, 0x110D, 0x0000, 0xEB4C, 0x084B, 0x110E, 0x0000
	.2byte 0xFDEC, 0x084B, 0x110F, 0x0000, 0xC6CC, 0x0847, 0x1110, 0x0000
	.2byte 0xC6EC, 0x0847, 0x1111, 0x0000, 0x6CCC, 0x084D, 0x1112, 0x0000
	.2byte 0x182C, 0x084C, 0x1113, 0x0000, 0x1FCC, 0x084C, 0x1114, 0x0000
	.2byte 0xA30C, 0x084B, 0x1116, 0x0000, 0xA32C, 0x084B, 0x1117, 0x0000
	.2byte 0xA34C, 0x084B, 0x1118, 0x0000, 0xA36C, 0x084B, 0x1119, 0x0000
	.2byte 0xDC8C, 0x084B, 0x111B, 0x0000, 0x100C, 0x084C, 0x111C, 0x0000
	.2byte 0x78EC, 0x084D, 0x111D, 0x0000, 0x8D2C, 0x084D, 0x111E, 0x0000
	.2byte 0x8B0C, 0x084D, 0x111F, 0x0000, 0xD86C, 0x084D, 0x1120, 0x0000
	.2byte 0xD44C, 0x084D, 0x1121, 0x0000, 0x1E6C, 0x0847, 0x1122, 0x0000
	.2byte 0xD90C, 0x0847, 0x1123, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x1101, 0x1101, 0x1101, 0x1101, 0x1111, 0x1111, 0x1111, 0x1111
	.2byte 0x1115, 0x1115, 0x1115, 0x1115
	@ pret/pokeemerald-jp direct xref for 0x084E4154: event_object_movement.s: LoadPlayerObjectReflectionPalette
	.globl gEventObjectMovementData_084E4154
gEventObjectMovementData_084E4154:
	.globl gUnknown_84E4154
gUnknown_84E4154: @ 0x084E4154
	@ analyzed canonical ROM range 0x084E4154-0x084E41CB
sAnalyzedData_084E4154: @ 0x084E4154
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x1100, 0x0000, 0x413C, 0x084E, 0x1110, 0x0000, 0x4144, 0x084E
	.2byte 0x1115, 0x0000, 0x414C, 0x084E, 0x11FF, 0x0000, 0x0000, 0x0000
	.2byte 0x110C, 0x110C, 0x110C, 0x110C, 0x110D, 0x110D, 0x110D, 0x110D
	.2byte 0x110E, 0x110E, 0x110E, 0x110E, 0x1112, 0x1112, 0x1112, 0x1112
	.2byte 0x1113, 0x1113, 0x1113, 0x1113, 0x1114, 0x1114, 0x1114, 0x1114
	.2byte 0x111B, 0x111B, 0x111B, 0x111B, 0x1117, 0x1117, 0x1117, 0x1117
	.2byte 0x1119, 0x1119, 0x1119, 0x1119, 0x1109, 0x1109, 0x1109, 0x1109
	.2byte 0x111D, 0x111D, 0x111D, 0x111D
	@ pret/pokeemerald-jp direct xref for 0x084E41CC: event_object_movement.s: GetObjectPaletteTag, LoadSpecialObjectReflectionPalette
	.globl gEventObjectMovementData_084E41CC
gEventObjectMovementData_084E41CC:
	.globl gUnknown_84E41CC
gUnknown_84E41CC: @ 0x084E41CC
	@ analyzed canonical ROM range 0x084E41CC-0x084E428B
sAnalyzedData_084E41CC: @ 0x084E41CC
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x1100, 0x0000, 0x413C, 0x084E, 0x1110, 0x0000, 0x4144, 0x084E
	.2byte 0x110B, 0x0000, 0x4174, 0x084E, 0x110D, 0x0000, 0x417C, 0x084E
	.2byte 0x110E, 0x0000, 0x4184, 0x084E, 0x1112, 0x0000, 0x418C, 0x084E
	.2byte 0x1113, 0x0000, 0x4194, 0x084E, 0x1114, 0x0000, 0x419C, 0x084E
	.2byte 0x1116, 0x0000, 0x41AC, 0x084E, 0x1118, 0x0000, 0x41B4, 0x084E
	.2byte 0x1105, 0x0000, 0x41BC, 0x084E, 0x111B, 0x0000, 0x41A4, 0x084E
	.2byte 0x111D, 0x0000, 0x41C4, 0x084E, 0x11FF, 0x0000, 0x0000, 0x0000
	.2byte 0x1100, 0x1101, 0x1103, 0x1104, 0x1105, 0x1106, 0x1107, 0x1108
	.2byte 0x1109, 0x110A, 0x1100, 0x1101, 0x1103, 0x1104, 0x1105, 0x1106
	.2byte 0x1107, 0x1108, 0x1109, 0x110A, 0x1100, 0x1101, 0x1103, 0x1104
	.2byte 0x1105, 0x1106, 0x1107, 0x1108, 0x1109, 0x110A, 0x1100, 0x1101
	.2byte 0x1103, 0x1104, 0x1105, 0x1106, 0x1107, 0x1108, 0x1109, 0x110A
	@ pret/pokeemerald-jp direct xref for 0x084E428C: event_object_movement.s: GetObjectPaletteTag, InitEventObjectPalettes
	.globl gEventObjectMovementData_084E428C
gEventObjectMovementData_084E428C:
	.globl gUnknown_84E428C
gUnknown_84E428C: @ 0x084E428C
	@ confirmed contiguous ROM pointer table: 5 entries from this address
sPointerTable_084E428C:
	@ analyzed canonical ROM range 0x084E428C-0x084E4C03
sAnalyzedData_084E428C: @ 0x084E428C
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x423C, 0x084E, 0x4250, 0x084E, 0x4264, 0x084E, 0x4278, 0x084E
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0x246C, 0x084C, 0x0100, 0x0000
	.2byte 0x256C, 0x084C, 0x0100, 0x0000, 0x266C, 0x084C, 0x0100, 0x0000
	.2byte 0x276C, 0x084C, 0x0100, 0x0000, 0x286C, 0x084C, 0x0100, 0x0000
	.2byte 0x296C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0404, 0x0004, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0x2A6C, 0x084C, 0x0100, 0x0000
	.2byte 0x2B6C, 0x084C, 0x0100, 0x0000, 0x2C6C, 0x084C, 0x0100, 0x0000
	.2byte 0x2D6C, 0x084C, 0x0100, 0x0000, 0x2E6C, 0x084C, 0x0100, 0x0000
	.2byte 0x2F6C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0202, 0x0002, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0x306C, 0x084C, 0x0100, 0x0000
	.2byte 0x316C, 0x084C, 0x0100, 0x0000, 0x326C, 0x084C, 0x0100, 0x0000
	.2byte 0x336C, 0x084C, 0x0100, 0x0000, 0x346C, 0x084C, 0x0100, 0x0000
	.2byte 0x356C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0202, 0x0002, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0x366C, 0x084C, 0x0100, 0x0000
	.2byte 0x376C, 0x084C, 0x0100, 0x0000, 0x386C, 0x084C, 0x0100, 0x0000
	.2byte 0x396C, 0x084C, 0x0100, 0x0000, 0x3A6C, 0x084C, 0x0100, 0x0000
	.2byte 0x3B6C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0303, 0x0003, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0x3C6C, 0x084C, 0x0100, 0x0000
	.2byte 0x3D6C, 0x084C, 0x0100, 0x0000, 0x3E6C, 0x084C, 0x0100, 0x0000
	.2byte 0x3F6C, 0x084C, 0x0100, 0x0000, 0x406C, 0x084C, 0x0100, 0x0000
	.2byte 0x416C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0404, 0x0004, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0x426C, 0x084C, 0x0100, 0x0000
	.2byte 0x436C, 0x084C, 0x0100, 0x0000, 0x446C, 0x084C, 0x0100, 0x0000
	.2byte 0x456C, 0x084C, 0x0100, 0x0000, 0x466C, 0x084C, 0x0100, 0x0000
	.2byte 0x476C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0303, 0x0003, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0x486C, 0x084C, 0x0100, 0x0000
	.2byte 0x496C, 0x084C, 0x0100, 0x0000, 0x4A6C, 0x084C, 0x0100, 0x0000
	.2byte 0x4B6C, 0x084C, 0x0100, 0x0000, 0x4C6C, 0x084C, 0x0100, 0x0000
	.2byte 0x4D6C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0303, 0x0003, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0x4E6C, 0x084C, 0x0100, 0x0000
	.2byte 0x4F6C, 0x084C, 0x0100, 0x0000, 0x506C, 0x084C, 0x0100, 0x0000
	.2byte 0x516C, 0x084C, 0x0100, 0x0000, 0x526C, 0x084C, 0x0100, 0x0000
	.2byte 0x536C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0404, 0x0004, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0x546C, 0x084C, 0x0100, 0x0000
	.2byte 0x556C, 0x084C, 0x0100, 0x0000, 0x566C, 0x084C, 0x0100, 0x0000
	.2byte 0x576C, 0x084C, 0x0100, 0x0000, 0x586C, 0x084C, 0x0100, 0x0000
	.2byte 0x596C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0404, 0x0004, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0x5A6C, 0x084C, 0x0100, 0x0000
	.2byte 0x5B6C, 0x084C, 0x0100, 0x0000, 0x5C6C, 0x084C, 0x0100, 0x0000
	.2byte 0x5D6C, 0x084C, 0x0100, 0x0000, 0x5E6C, 0x084C, 0x0100, 0x0000
	.2byte 0x5F6C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0303, 0x0003, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0x606C, 0x084C, 0x0100, 0x0000
	.2byte 0x616C, 0x084C, 0x0100, 0x0000, 0x626C, 0x084C, 0x0100, 0x0000
	.2byte 0x636C, 0x084C, 0x0100, 0x0000, 0x646C, 0x084C, 0x0100, 0x0000
	.2byte 0x656C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0404, 0x0004, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0x666C, 0x084C, 0x0100, 0x0000
	.2byte 0x676C, 0x084C, 0x0100, 0x0000, 0x686C, 0x084C, 0x0100, 0x0000
	.2byte 0x696C, 0x084C, 0x0100, 0x0000, 0x6A6C, 0x084C, 0x0100, 0x0000
	.2byte 0x6B6C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0303, 0x0003, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0x6C6C, 0x084C, 0x0100, 0x0000
	.2byte 0x6D6C, 0x084C, 0x0100, 0x0000, 0x6E6C, 0x084C, 0x0100, 0x0000
	.2byte 0x6F6C, 0x084C, 0x0100, 0x0000, 0x706C, 0x084C, 0x0100, 0x0000
	.2byte 0x716C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0303, 0x0003, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0x726C, 0x084C, 0x0100, 0x0000
	.2byte 0x736C, 0x084C, 0x0100, 0x0000, 0x746C, 0x084C, 0x0100, 0x0000
	.2byte 0x756C, 0x084C, 0x0100, 0x0000, 0x766C, 0x084C, 0x0100, 0x0000
	.2byte 0x776C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0404, 0x0004, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0x786C, 0x084C, 0x0100, 0x0000
	.2byte 0x796C, 0x084C, 0x0100, 0x0000, 0x7A6C, 0x084C, 0x0100, 0x0000
	.2byte 0x7B6C, 0x084C, 0x0100, 0x0000, 0x7C6C, 0x084C, 0x0100, 0x0000
	.2byte 0x7D6C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0505, 0x0005, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0x7E6C, 0x084C, 0x0100, 0x0000
	.2byte 0x7F6C, 0x084C, 0x0100, 0x0000, 0x806C, 0x084C, 0x0100, 0x0000
	.2byte 0x816C, 0x084C, 0x0100, 0x0000, 0x826C, 0x084C, 0x0100, 0x0000
	.2byte 0x836C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0404, 0x0004, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0x846C, 0x084C, 0x0100, 0x0000
	.2byte 0x856C, 0x084C, 0x0100, 0x0000, 0x866C, 0x084C, 0x0100, 0x0000
	.2byte 0x876C, 0x084C, 0x0100, 0x0000, 0x886C, 0x084C, 0x0100, 0x0000
	.2byte 0x896C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0303, 0x0003, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0x8A6C, 0x084C, 0x0100, 0x0000
	.2byte 0x8B6C, 0x084C, 0x0100, 0x0000, 0x8C6C, 0x084C, 0x0100, 0x0000
	.2byte 0x8D6C, 0x084C, 0x0100, 0x0000, 0x8E6C, 0x084C, 0x0100, 0x0000
	.2byte 0x8F6C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0303, 0x0003, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0x906C, 0x084C, 0x0100, 0x0000
	.2byte 0x916C, 0x084C, 0x0100, 0x0000, 0x926C, 0x084C, 0x0100, 0x0000
	.2byte 0x936C, 0x084C, 0x0100, 0x0000, 0x946C, 0x084C, 0x0100, 0x0000
	.2byte 0x956C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0404, 0x0004, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0x966C, 0x084C, 0x0100, 0x0000
	.2byte 0x976C, 0x084C, 0x0100, 0x0000, 0x986C, 0x084C, 0x0100, 0x0000
	.2byte 0x996C, 0x084C, 0x0100, 0x0000, 0x9A6C, 0x084C, 0x0100, 0x0000
	.2byte 0x9B6C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0303, 0x0003, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0x9C6C, 0x084C, 0x0100, 0x0000
	.2byte 0x9D6C, 0x084C, 0x0100, 0x0000, 0x9E6C, 0x084C, 0x0100, 0x0000
	.2byte 0x9F6C, 0x084C, 0x0100, 0x0000, 0xA06C, 0x084C, 0x0100, 0x0000
	.2byte 0xA16C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0202, 0x0002, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0xA26C, 0x084C, 0x0100, 0x0000
	.2byte 0xA36C, 0x084C, 0x0100, 0x0000, 0xA46C, 0x084C, 0x0100, 0x0000
	.2byte 0xA56C, 0x084C, 0x0100, 0x0000, 0xA66C, 0x084C, 0x0100, 0x0000
	.2byte 0xA76C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0202, 0x0002, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0xA86C, 0x084C, 0x0100, 0x0000
	.2byte 0xA96C, 0x084C, 0x0100, 0x0000, 0xAA6C, 0x084C, 0x0100, 0x0000
	.2byte 0xAB6C, 0x084C, 0x0100, 0x0000, 0xAC6C, 0x084C, 0x0100, 0x0000
	.2byte 0xAD6C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0202, 0x0002, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0xAE6C, 0x084C, 0x0100, 0x0000
	.2byte 0xAF6C, 0x084C, 0x0100, 0x0000, 0xB06C, 0x084C, 0x0100, 0x0000
	.2byte 0xB16C, 0x084C, 0x0100, 0x0000, 0xB26C, 0x084C, 0x0100, 0x0000
	.2byte 0xB36C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0404, 0x0004, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0xB46C, 0x084C, 0x0100, 0x0000
	.2byte 0xB56C, 0x084C, 0x0100, 0x0000, 0xB66C, 0x084C, 0x0100, 0x0000
	.2byte 0xB76C, 0x084C, 0x0100, 0x0000, 0xB86C, 0x084C, 0x0100, 0x0000
	.2byte 0xB96C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0303, 0x0003, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0xBA6C, 0x084C, 0x0100, 0x0000
	.2byte 0xBB6C, 0x084C, 0x0100, 0x0000, 0xBC6C, 0x084C, 0x0100, 0x0000
	.2byte 0xBD6C, 0x084C, 0x0100, 0x0000, 0xBE6C, 0x084C, 0x0100, 0x0000
	.2byte 0xBF6C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0202, 0x0002, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0xC06C, 0x084C, 0x0100, 0x0000
	.2byte 0xC16C, 0x084C, 0x0100, 0x0000, 0xC26C, 0x084C, 0x0100, 0x0000
	.2byte 0xC36C, 0x084C, 0x0100, 0x0000, 0xC46C, 0x084C, 0x0100, 0x0000
	.2byte 0xC56C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0202, 0x0002, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0xC66C, 0x084C, 0x0100, 0x0000
	.2byte 0xC76C, 0x084C, 0x0100, 0x0000, 0xC86C, 0x084C, 0x0100, 0x0000
	.2byte 0xC96C, 0x084C, 0x0100, 0x0000, 0xCA6C, 0x084C, 0x0100, 0x0000
	.2byte 0xCB6C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0202, 0x0002, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0xCC6C, 0x084C, 0x0100, 0x0000
	.2byte 0xCD6C, 0x084C, 0x0100, 0x0000, 0xCE6C, 0x084C, 0x0100, 0x0000
	.2byte 0xCF6C, 0x084C, 0x0100, 0x0000, 0xD06C, 0x084C, 0x0100, 0x0000
	.2byte 0xD16C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0404, 0x0004, 0x0000
	.2byte 0x22EC, 0x084C, 0x0080, 0x0000, 0x236C, 0x084C, 0x0080, 0x0000
	.2byte 0x23EC, 0x084C, 0x0080, 0x0000, 0xD26C, 0x084C, 0x0100, 0x0000
	.2byte 0xD36C, 0x084C, 0x0100, 0x0000, 0xD46C, 0x084C, 0x0100, 0x0000
	.2byte 0xD56C, 0x084C, 0x0100, 0x0000, 0xD66C, 0x084C, 0x0100, 0x0000
	.2byte 0xD76C, 0x084C, 0x0100, 0x0000, 0x0403, 0x0202, 0x3D02, 0x3D3D
	.2byte 0x3D3D, 0x3D3D, 0x3E3E, 0x003E
	.globl gUnknown_84E4C04
gUnknown_84E4C04: @ 0x084E4C04
	@ confirmed contiguous ROM pointer table: 133 entries from this address
sPointerTable_084E4C04:
	.globl gBerryTreePicTablePointers
gBerryTreePicTablePointers:
	@ analyzed canonical ROM range 0x084E4C04-0x084E4CAF
sAnalyzedData_084E4C04: @ 0x084E4C04
	@ pointer/nullable table
	.4byte 0x084E43DC @ +0x0
	.4byte 0x084E48DC @ +0x4
	.4byte 0x084E429C @ +0x8
	.4byte 0x084E483C @ +0xC
	.4byte 0x084E4A1C @ +0x10
	.4byte 0x084E465C @ +0x14
	.4byte 0x084E492C @ +0x18
	.4byte 0x084E497C @ +0x1C
	.4byte 0x084E44CC @ +0x20
	.4byte 0x084E49CC @ +0x24
	.4byte 0x084E442C @ +0x28
	.4byte 0x084E479C @ +0x2C
	.4byte 0x084E447C @ +0x30
	.4byte 0x084E474C @ +0x34
	.4byte 0x084E438C @ +0x38
	.4byte 0x084E451C @ +0x3C
	.4byte 0x084E451C @ +0x40
	.4byte 0x084E447C @ +0x44
	.4byte 0x084E433C @ +0x48
	.4byte 0x084E438C @ +0x4C
	.4byte 0x084E47EC @ +0x50
	.4byte 0x084E42EC @ +0x54
	.4byte 0x084E433C @ +0x58
	.4byte 0x084E46FC @ +0x5C
	.4byte 0x084E456C @ +0x60
	.4byte 0x084E4BAC @ +0x64
	.4byte 0x084E4ABC @ +0x68
	.4byte 0x084E47EC @ +0x6C
	.4byte 0x084E45BC @ +0x70
	.4byte 0x084E460C @ +0x74
	.4byte 0x084E488C @ +0x78
	.4byte 0x084E4A6C @ +0x7C
	.4byte 0x084E45BC @ +0x80
	.4byte 0x084E4B5C @ +0x84
	.4byte 0x084E46FC @ +0x88
	.4byte 0x084E46AC @ +0x8C
	.4byte 0x084E46FC @ +0x90
	.4byte 0x084E474C @ +0x94
	.4byte 0x084E47EC @ +0x98
	.4byte 0x084E456C @ +0x9C
	.4byte 0x084E4B0C @ +0xA0
	.4byte 0x084E4ABC @ +0xA4
	.4byte 0x084E4B5C @ +0xA8
	.globl gUnknown_84E4CB0
gUnknown_84E4CB0: @ 0x084E4CB0
	.globl gBerryTreePaletteSlotTablePointers
gBerryTreePaletteSlotTablePointers:
	@ analyzed canonical ROM range 0x084E4CB0-0x084E4D5B
sAnalyzedData_084E4CB0: @ 0x084E4CB0
	@ pointer/nullable table
	.4byte 0x084E4424 @ +0x0
	.4byte 0x084E4924 @ +0x4
	.4byte 0x084E42E4 @ +0x8
	.4byte 0x084E4884 @ +0xC
	.4byte 0x084E4A64 @ +0x10
	.4byte 0x084E46A4 @ +0x14
	.4byte 0x084E4974 @ +0x18
	.4byte 0x084E49C4 @ +0x1C
	.4byte 0x084E4514 @ +0x20
	.4byte 0x084E4A14 @ +0x24
	.4byte 0x084E4474 @ +0x28
	.4byte 0x084E47E4 @ +0x2C
	.4byte 0x084E44C4 @ +0x30
	.4byte 0x084E4794 @ +0x34
	.4byte 0x084E43D4 @ +0x38
	.4byte 0x084E4564 @ +0x3C
	.4byte 0x084E4564 @ +0x40
	.4byte 0x084E44C4 @ +0x44
	.4byte 0x084E4384 @ +0x48
	.4byte 0x084E43D4 @ +0x4C
	.4byte 0x084E4834 @ +0x50
	.4byte 0x084E4334 @ +0x54
	.4byte 0x084E4384 @ +0x58
	.4byte 0x084E4744 @ +0x5C
	.4byte 0x084E45B4 @ +0x60
	.4byte 0x084E4BF4 @ +0x64
	.4byte 0x084E4B04 @ +0x68
	.4byte 0x084E4834 @ +0x6C
	.4byte 0x084E4604 @ +0x70
	.4byte 0x084E4654 @ +0x74
	.4byte 0x084E48D4 @ +0x78
	.4byte 0x084E4AB4 @ +0x7C
	.4byte 0x084E4604 @ +0x80
	.4byte 0x084E4BA4 @ +0x84
	.4byte 0x084E4744 @ +0x88
	.4byte 0x084E46F4 @ +0x8C
	.4byte 0x084E4744 @ +0x90
	.4byte 0x084E4794 @ +0x94
	.4byte 0x084E4834 @ +0x98
	.4byte 0x084E45B4 @ +0x9C
	.4byte 0x084E4B54 @ +0xA0
	.4byte 0x084E4B04 @ +0xA4
	.4byte 0x084E4BA4 @ +0xA8
	.globl gUnknown_84E4D5C
gUnknown_84E4D5C: @ 0x084E4D5C
	.globl gBerryTreeObjectEventGraphicsIdTablePointers
gBerryTreeObjectEventGraphicsIdTablePointers:
	@ analyzed canonical ROM range 0x084E4D5C-0x084E4E1B
sAnalyzedData_084E4D5C: @ 0x084E4D5C
	@ pointer/nullable table
	.4byte 0x084E4BFE @ +0x0
	.4byte 0x084E4BFE @ +0x4
	.4byte 0x084E4BFE @ +0x8
	.4byte 0x084E4BFE @ +0xC
	.4byte 0x084E4BFE @ +0x10
	.4byte 0x084E4BFE @ +0x14
	.4byte 0x084E4BFE @ +0x18
	.4byte 0x084E4BFE @ +0x1C
	.4byte 0x084E4BFE @ +0x20
	.4byte 0x084E4BFE @ +0x24
	.4byte 0x084E4BFE @ +0x28
	.4byte 0x084E4BFE @ +0x2C
	.4byte 0x084E4BFE @ +0x30
	.4byte 0x084E4BFE @ +0x34
	.4byte 0x084E4BFE @ +0x38
	.4byte 0x084E4BFE @ +0x3C
	.4byte 0x084E4BFE @ +0x40
	.4byte 0x084E4BFE @ +0x44
	.4byte 0x084E4BFE @ +0x48
	.4byte 0x084E4BFE @ +0x4C
	.4byte 0x084E4BFE @ +0x50
	.4byte 0x084E4BFE @ +0x54
	.4byte 0x084E4BFE @ +0x58
	.4byte 0x084E4BFE @ +0x5C
	.4byte 0x084E4BFE @ +0x60
	.4byte 0x084E4BFE @ +0x64
	.4byte 0x084E4BFE @ +0x68
	.4byte 0x084E4BFE @ +0x6C
	.4byte 0x084E4BFE @ +0x70
	.4byte 0x084E4BFE @ +0x74
	.4byte 0x084E4BFE @ +0x78
	.4byte 0x084E4BFE @ +0x7C
	.4byte 0x084E4BFE @ +0x80
	.4byte 0x084E4BFE @ +0x84
	.4byte 0x084E4BFE @ +0x88
	.4byte 0x084E4BFE @ +0x8C
	.4byte 0x084E4BFE @ +0x90
	.4byte 0x084E4BFE @ +0x94
	.4byte 0x084E4BFE @ +0x98
	.4byte 0x084E4BFE @ +0x9C
	.4byte 0x084E4BFE @ +0xA0
	.4byte 0x084E4BFE @ +0xA4
	.4byte 0x084E4BFE @ +0xA8
	.4byte 0x084E4BFE @ +0xAC
	.4byte 0x084E4BFE @ +0xB0
	.4byte 0x084E4BFE @ +0xB4
	.4byte 0x084CFC0C @ +0xB8
	.4byte 0x00001004 @ +0xBC
	@ pret/pokeemerald-jp direct xref for 0x084E4E1C: faraway_island.s: sub_081D4110
	.globl gFarawayIslandData_084E4E1C
gFarawayIslandData_084E4E1C:
	.globl gUnknown_84E4E1C
gUnknown_84E4E1C: @ 0x084E4E1C
	@ analyzed canonical ROM range 0x084E4E1C-0x084E5B2F
sAnalyzedData_084E4E1C: @ 0x084E4E1C
	@ 37 struct SpriteTemplate objects used by field effects.
	@ preserved field-effect template support data: 0x084E4E1C-0x084E4E4F
	.byte 0x2C, 0xFC, 0x4C, 0x08, 0x05, 0x10, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x24, 0x4E, 0x4E, 0x08, 0xAC, 0xEC, 0x4C, 0x08, 0x20, 0x00, 0x00, 0x00, 0xCC, 0xEC, 0x4C, 0x08
	.byte 0x40, 0x00, 0x00, 0x00, 0x0C, 0xED, 0x4C, 0x08, 0x80, 0x00, 0x00, 0x00, 0x8C, 0xED, 0x4C, 0x08
	.byte 0x00, 0x04, 0x00, 0x00
	.globl gFieldEffectObjectTemplate_ShadowSmall
gFieldEffectObjectTemplate_ShadowSmall: @ 0x084E4E50
	rodata_sprite_template 0xFFFF, 0xFFFF, 0x084E1940, 0x084E4E2C, 0x084E4E30, 0x082BF310, 0x08154321
	.globl gFieldEffectObjectTemplate_ShadowMedium
gFieldEffectObjectTemplate_ShadowMedium: @ 0x084E4E68
	rodata_sprite_template 0xFFFF, 0xFFFF, 0x084E1948, 0x084E4E2C, 0x084E4E38, 0x082BF310, 0x08154321
	.globl gFieldEffectObjectTemplate_ShadowLarge
gFieldEffectObjectTemplate_ShadowLarge: @ 0x084E4E80
	rodata_sprite_template 0xFFFF, 0xFFFF, 0x084E1958, 0x084E4E2C, 0x084E4E40, 0x082BF310, 0x08154321
	.globl gFieldEffectObjectTemplate_ShadowExtraLarge
gFieldEffectObjectTemplate_ShadowExtraLarge: @ 0x084E4E98
	rodata_sprite_template 0xFFFF, 0xFFFF, 0x084E1960, 0x084E4E2C, 0x084E4E48, 0x082BF310, 0x08154321
	@ preserved field-effect template support data: 0x084E4EB0-0x084E4EF3
	.byte 0x8C, 0x0B, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x8C, 0x0C, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x0C, 0x0D, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x8C, 0x0D, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0A, 0x00, 0x02, 0x00, 0x0A, 0x00
	.byte 0x03, 0x00, 0x0A, 0x00, 0x04, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x0A, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0xD8, 0x4E, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_TallGrass
gFieldEffectObjectTemplate_TallGrass: @ 0x084E4EF4
	rodata_sprite_template 0xFFFF, 0x1005, 0x084E1950, 0x084E4EF0, 0x084E4EB0, 0x082BF310, 0x0815448D
	@ preserved field-effect template support data: 0x084E4F0C-0x084E4F5B
	.byte 0x0C, 0xF3, 0x4C, 0x08, 0x80, 0x00, 0x00, 0x00, 0x8C, 0xF3, 0x4C, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x0C, 0xF4, 0x4C, 0x08, 0x80, 0x00, 0x00, 0x00, 0x8C, 0xF4, 0x4C, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x0C, 0xF5, 0x4C, 0x08, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x01, 0x00, 0x09, 0x00
	.byte 0x02, 0x00, 0x09, 0x00, 0x03, 0x00, 0x09, 0x00, 0x00, 0x00, 0x09, 0x00, 0x01, 0x00, 0x09, 0x00
	.byte 0x02, 0x00, 0x0B, 0x00, 0x04, 0x00, 0x0B, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x34, 0x4F, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_Ripple
gFieldEffectObjectTemplate_Ripple: @ 0x084E4F5C
	rodata_sprite_template 0xFFFF, 0x1005, 0x084E1950, 0x084E4F58, 0x084E4F0C, 0x082BF310, 0x0815610D
	@ preserved field-effect template support data: 0x084E4F74-0x084E4FB7
	.byte 0x8C, 0xF5, 0x4C, 0x08, 0x80, 0x00, 0x00, 0x00, 0x0C, 0xF6, 0x4C, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x8C, 0xF6, 0x4C, 0x08, 0x80, 0x00, 0x00, 0x00, 0x0C, 0xF7, 0x4C, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x8C, 0xF7, 0x4C, 0x08, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x01, 0x00, 0x0C, 0x00
	.byte 0x02, 0x00, 0x08, 0x00, 0x03, 0x00, 0x0C, 0x00, 0x04, 0x00, 0x0C, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x9C, 0x4F, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_Ash
gFieldEffectObjectTemplate_Ash: @ 0x084E4FB8
	rodata_sprite_template 0xFFFF, 0x1005, 0x084E1950, 0x084E4FB4, 0x084E4F74, 0x082BF310, 0x0815539D
	@ preserved field-effect template support data: 0x084E4FD0-0x084E5017
	.byte 0x6C, 0xD8, 0x4C, 0x08, 0x00, 0x02, 0x00, 0x00, 0x6C, 0xDA, 0x4C, 0x08, 0x00, 0x02, 0x00, 0x00
	.byte 0x6C, 0xDC, 0x4C, 0x08, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xFE, 0xFF, 0x00, 0x00
	.byte 0x01, 0x00, 0x01, 0x00, 0xFE, 0xFF, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00, 0xFE, 0xFF, 0x00, 0x00
	.byte 0x02, 0x00, 0x41, 0x00, 0xFE, 0xFF, 0x00, 0x00, 0xE8, 0x4F, 0x4E, 0x08, 0xF0, 0x4F, 0x4E, 0x08
	.byte 0xF8, 0x4F, 0x4E, 0x08, 0x00, 0x50, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_SurfBlob
gFieldEffectObjectTemplate_SurfBlob: @ 0x084E5018
	rodata_sprite_template 0xFFFF, 0xFFFF, 0x084E1970, 0x084E5008, 0x084E4FD0, 0x082BF310, 0x08155595
	@ preserved field-effect template support data: 0x084E5030-0x084E50AF
	.byte 0x0C, 0xF8, 0x4C, 0x08, 0x80, 0x00, 0x00, 0x00, 0x8C, 0xF8, 0x4C, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x0C, 0xF9, 0x4C, 0x08, 0x80, 0x00, 0x00, 0x00, 0x8C, 0xF9, 0x4C, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x0C, 0xFA, 0x4C, 0x08, 0x80, 0x00, 0x00, 0x00, 0x8C, 0xFA, 0x4C, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x0C, 0xFB, 0x4C, 0x08, 0x80, 0x00, 0x00, 0x00, 0x8C, 0xFB, 0x4C, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x03, 0x00, 0x20, 0x00, 0x07, 0x00, 0x20, 0x00, 0xFE, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00
	.byte 0x04, 0x00, 0x20, 0x00, 0xFE, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x20, 0x00, 0x05, 0x00, 0x20, 0x00
	.byte 0xFE, 0xFF, 0x00, 0x00, 0x02, 0x00, 0x20, 0x00, 0x06, 0x00, 0x20, 0x00, 0xFE, 0xFF, 0x00, 0x00
	.byte 0x70, 0x50, 0x4E, 0x08, 0x7C, 0x50, 0x4E, 0x08, 0x88, 0x50, 0x4E, 0x08, 0x94, 0x50, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_Arrow
gFieldEffectObjectTemplate_Arrow: @ 0x084E50B0
	rodata_sprite_template 0xFFFF, 0xFFFF, 0x084E1950, 0x084E50A0, 0x084E5030, 0x082BF310, 0x08007141
	@ preserved field-effect template support data: 0x084E50C8-0x084E50F3
	.byte 0x4C, 0xFC, 0x4C, 0x08, 0x40, 0x00, 0x00, 0x00, 0x8C, 0xFC, 0x4C, 0x08, 0x40, 0x00, 0x00, 0x00
	.byte 0xCC, 0xFC, 0x4C, 0x08, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x01, 0x00, 0x08, 0x00
	.byte 0x02, 0x00, 0x08, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xE0, 0x50, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_GroundImpactDust
gFieldEffectObjectTemplate_GroundImpactDust: @ 0x084E50F4
	rodata_sprite_template 0xFFFF, 0x1004, 0x084E1948, 0x084E50F0, 0x084E50C8, 0x082BF310, 0x081560D1
	@ preserved field-effect template support data: 0x084E510C-0x084E5143
	.byte 0x0C, 0xFD, 0x4C, 0x08, 0x40, 0x00, 0x00, 0x00, 0x4C, 0xFD, 0x4C, 0x08, 0x40, 0x00, 0x00, 0x00
	.byte 0x8C, 0xFD, 0x4C, 0x08, 0x40, 0x00, 0x00, 0x00, 0xCC, 0xFD, 0x4C, 0x08, 0x40, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x08, 0x00, 0x01, 0x00, 0x08, 0x00, 0x02, 0x00, 0x08, 0x00, 0x03, 0x00, 0x08, 0x00
	.byte 0xFF, 0xFF, 0x00, 0x00, 0x2C, 0x51, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_JumpTallGrass
gFieldEffectObjectTemplate_JumpTallGrass: @ 0x084E5144
	rodata_sprite_template 0xFFFF, 0x1005, 0x084E1948, 0x084E5140, 0x084E510C, 0x082BF310, 0x081560D1
	@ preserved field-effect template support data: 0x084E515C-0x084E519F
	.byte 0x0C, 0x0F, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x8C, 0x0F, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x81, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x01, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x41, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x6C, 0x51, 0x4E, 0x08, 0x6C, 0x51, 0x4E, 0x08, 0x74, 0x51, 0x4E, 0x08, 0x7C, 0x51, 0x4E, 0x08
	.byte 0x84, 0x51, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_SandFootprints
gFieldEffectObjectTemplate_SandFootprints: @ 0x084E51A0
	rodata_sprite_template 0xFFFF, 0x1004, 0x084E1950, 0x084E518C, 0x084E515C, 0x082BF310, 0x08154B9D
	@ preserved field-effect template support data: 0x084E51B8-0x084E51FB
	.byte 0x0C, 0x10, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x8C, 0x10, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x81, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x01, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x41, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0xC8, 0x51, 0x4E, 0x08, 0xC8, 0x51, 0x4E, 0x08, 0xD0, 0x51, 0x4E, 0x08, 0xD8, 0x51, 0x4E, 0x08
	.byte 0xE0, 0x51, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_DeepSandFootprints
gFieldEffectObjectTemplate_DeepSandFootprints: @ 0x084E51FC
	rodata_sprite_template 0xFFFF, 0x1004, 0x084E1950, 0x084E51E8, 0x084E51B8, 0x082BF310, 0x08154B9D
	@ preserved field-effect template support data: 0x084E5214-0x084E5297
	.byte 0x0C, 0x11, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x8C, 0x11, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x0C, 0x12, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x8C, 0x12, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x02, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x01, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x41, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x03, 0x00, 0x41, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x34, 0x52, 0x4E, 0x08, 0x34, 0x52, 0x4E, 0x08, 0x3C, 0x52, 0x4E, 0x08, 0x44, 0x52, 0x4E, 0x08
	.byte 0x4C, 0x52, 0x4E, 0x08, 0x54, 0x52, 0x4E, 0x08, 0x5C, 0x52, 0x4E, 0x08, 0x64, 0x52, 0x4E, 0x08
	.byte 0x6C, 0x52, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_BikeTireTracks
gFieldEffectObjectTemplate_BikeTireTracks: @ 0x084E5298
	rodata_sprite_template 0xFFFF, 0x1004, 0x084E1950, 0x084E5274, 0x084E5214, 0x082BF310, 0x08154B9D
	@ preserved field-effect template support data: 0x084E52B0-0x084E52E7
	.byte 0xCC, 0x15, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x4C, 0x16, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0xCC, 0x16, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x4C, 0x17, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x08, 0x00, 0x01, 0x00, 0x08, 0x00, 0x02, 0x00, 0x08, 0x00, 0x03, 0x00, 0x08, 0x00
	.byte 0xFF, 0xFF, 0x00, 0x00, 0xD0, 0x52, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_JumpBigSplash
gFieldEffectObjectTemplate_JumpBigSplash: @ 0x084E52E8
	rodata_sprite_template 0xFFFF, 0x1004, 0x084E1950, 0x084E52E4, 0x084E52B0, 0x082BF310, 0x081560D1
	@ preserved field-effect template support data: 0x084E5300-0x084E5347
	.byte 0xCC, 0x17, 0x4D, 0x08, 0x40, 0x00, 0x00, 0x00, 0x0C, 0x18, 0x4D, 0x08, 0x40, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x04, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00
	.byte 0x01, 0x00, 0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x01, 0x00, 0x06, 0x00, 0x00, 0x00, 0x08, 0x00
	.byte 0x01, 0x00, 0x08, 0x00, 0x00, 0x00, 0x06, 0x00, 0x01, 0x00, 0x06, 0x00, 0xFE, 0xFF, 0x00, 0x00
	.byte 0x10, 0x53, 0x4E, 0x08, 0x1C, 0x53, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_Splash
gFieldEffectObjectTemplate_Splash: @ 0x084E5348
	rodata_sprite_template 0xFFFF, 0x1004, 0x084E1948, 0x084E5340, 0x084E5300, 0x082BF310, 0x08154CCD
	@ preserved field-effect template support data: 0x084E5360-0x084E538B
	.byte 0x4C, 0x18, 0x4D, 0x08, 0x40, 0x00, 0x00, 0x00, 0x8C, 0x18, 0x4D, 0x08, 0x40, 0x00, 0x00, 0x00
	.byte 0xCC, 0x18, 0x4D, 0x08, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x04, 0x00
	.byte 0x02, 0x00, 0x04, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x78, 0x53, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_JumpSmallSplash
gFieldEffectObjectTemplate_JumpSmallSplash: @ 0x084E538C
	rodata_sprite_template 0xFFFF, 0x1004, 0x084E1948, 0x084E5388, 0x084E5360, 0x082BF310, 0x081560D1
	@ preserved field-effect template support data: 0x084E53A4-0x084E53E7
	.byte 0x8C, 0x09, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x0C, 0x0A, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x8C, 0x0A, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x0C, 0x0B, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x03, 0x00, 0x02, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x03, 0x00, 0x04, 0x00
	.byte 0x00, 0x00, 0x04, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0xC4, 0x53, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_LongGrass
gFieldEffectObjectTemplate_LongGrass: @ 0x084E53E8
	rodata_sprite_template 0xFFFF, 0x1005, 0x084E1950, 0x084E53E4, 0x084E53A4, 0x082BF310, 0x0815473D
	@ preserved field-effect template support data: 0x084E5400-0x084E544F
	.byte 0x0C, 0x00, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x8C, 0x00, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x0C, 0x01, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x8C, 0x01, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x0C, 0x02, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x0C, 0x03, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x04, 0x00, 0x02, 0x00, 0x08, 0x00, 0x03, 0x00, 0x08, 0x00
	.byte 0x04, 0x00, 0x08, 0x00, 0x05, 0x00, 0x08, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x30, 0x54, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_JumpLongGrass
gFieldEffectObjectTemplate_JumpLongGrass: @ 0x084E5450
	rodata_sprite_template 0xFFFF, 0x1005, 0x084E1950, 0x084E544C, 0x084E5400, 0x082BF310, 0x081560D1
	@ preserved field-effect template support data: 0x084E5468-0x084E54DB
	.byte 0x0C, 0x03, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x8C, 0x03, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x0C, 0x04, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x8C, 0x04, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x0C, 0x05, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x8C, 0x05, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x0C, 0x06, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x8C, 0x06, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x0C, 0x07, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x01, 0x00, 0x04, 0x00
	.byte 0x02, 0x00, 0x04, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x05, 0x00, 0x04, 0x00
	.byte 0x06, 0x00, 0x04, 0x00, 0x07, 0x00, 0x04, 0x00, 0x08, 0x00, 0x04, 0x00, 0xFE, 0xFF, 0x07, 0x00
	.byte 0xB0, 0x54, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_UnusedGrass
gFieldEffectObjectTemplate_UnusedGrass: @ 0x084E54DC
	rodata_sprite_template 0xFFFF, 0x1005, 0x084E1950, 0x084E54D8, 0x084E5468, 0x082BF310, 0x0815610D
	@ preserved field-effect template support data: 0x084E54F4-0x084E5533
	.byte 0x8C, 0x07, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x0C, 0x08, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x8C, 0x08, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x0C, 0x09, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x04, 0x00, 0x02, 0x00, 0x04, 0x00, 0x03, 0x00, 0x04, 0x00
	.byte 0x02, 0x00, 0x04, 0x00, 0x01, 0x00, 0x04, 0x00, 0xFE, 0xFF, 0x00, 0x00, 0x14, 0x55, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_UnusedGrass2
gFieldEffectObjectTemplate_UnusedGrass2: @ 0x084E5534
	rodata_sprite_template 0xFFFF, 0x1005, 0x084E1950, 0x084E5530, 0x084E54F4, 0x082BF310, 0x0815610D
	@ preserved field-effect template support data: 0x084E554C-0x084E5583
	.byte 0x0C, 0x13, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x8C, 0x13, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x0C, 0x14, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x8C, 0x14, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x04, 0x00, 0x02, 0x00, 0x04, 0x00, 0x03, 0x00, 0x04, 0x00
	.byte 0xFE, 0xFF, 0x00, 0x00, 0x6C, 0x55, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_UnusedSand
gFieldEffectObjectTemplate_UnusedSand: @ 0x084E5584
	rodata_sprite_template 0xFFFF, 0x1004, 0x084E1950, 0x084E5580, 0x084E554C, 0x082BF310, 0x0815610D
	@ preserved field-effect template support data: 0x084E559C-0x084E55C7
	.byte 0x0C, 0x15, 0x4D, 0x08, 0x40, 0x00, 0x00, 0x00, 0x4C, 0x15, 0x4D, 0x08, 0x40, 0x00, 0x00, 0x00
	.byte 0x8C, 0x15, 0x4D, 0x08, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x04, 0x00
	.byte 0x02, 0x00, 0x04, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xB4, 0x55, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_SandPile
gFieldEffectObjectTemplate_SandPile: @ 0x084E55C8
	rodata_sprite_template 0xFFFF, 0x1004, 0x084E1948, 0x084E55C4, 0x084E559C, 0x082BF310, 0x081558F9
	@ preserved field-effect template support data: 0x084E55E0-0x084E561F
	.byte 0x0C, 0x19, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x8C, 0x19, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x0C, 0x1A, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x8C, 0x1A, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x04, 0x00, 0x02, 0x00, 0x04, 0x00, 0x03, 0x00, 0x04, 0x00
	.byte 0x02, 0x00, 0x04, 0x00, 0x01, 0x00, 0x04, 0x00, 0xFE, 0xFF, 0x00, 0x00, 0x00, 0x56, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_WaterSurfacing
gFieldEffectObjectTemplate_WaterSurfacing: @ 0x084E5620
	rodata_sprite_template 0xFFFF, 0x1004, 0x084E1950, 0x084E561C, 0x084E55E0, 0x082BF310, 0x0815610D
	@ preserved field-effect template support data: 0x084E5638-0x084E56DF
	.byte 0x00, 0xFF, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0xFE, 0x7F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0xFE, 0x7F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x38, 0x56, 0x4E, 0x08, 0x88, 0x56, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_ReflectionDistortion
gFieldEffectObjectTemplate_ReflectionDistortion: @ 0x084E56E0
	rodata_sprite_template 0x0000, 0xFFFF, 0x082BF2F8, 0x082BF304, 0, 0x084E56D8, 0x08007141
	@ preserved field-effect template support data: 0x084E56F8-0x084E577F
	.byte 0xEC, 0x1F, 0x4C, 0x08, 0x80, 0x00, 0x00, 0x00, 0x6C, 0x20, 0x4C, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0xEC, 0x20, 0x4C, 0x08, 0x80, 0x00, 0x00, 0x00, 0x6C, 0x21, 0x4C, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0xEC, 0x21, 0x4C, 0x08, 0x80, 0x00, 0x00, 0x00, 0x6C, 0x22, 0x4C, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x08, 0x00, 0x01, 0x00, 0x08, 0x00, 0x02, 0x00, 0x08, 0x00, 0x03, 0x00, 0x08, 0x00
	.byte 0x04, 0x00, 0x08, 0x00, 0x05, 0x00, 0x08, 0x00, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00
	.byte 0x01, 0x00, 0x04, 0x00, 0x02, 0x00, 0x04, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00
	.byte 0x05, 0x00, 0x04, 0x00, 0xFD, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x01, 0x00, 0x08, 0x00
	.byte 0x02, 0x00, 0x08, 0x00, 0x03, 0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x05, 0x00, 0x08, 0x00
	.byte 0xFF, 0xFF, 0x00, 0x00, 0x28, 0x57, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_Sparkle
gFieldEffectObjectTemplate_Sparkle: @ 0x084E5780
	rodata_sprite_template 0xFFFF, 0xFFFF, 0x084E1950, 0x084E577C, 0x084E56F8, 0x082BF310, 0x0815610D
	@ preserved field-effect template support data: 0x084E5798-0x084E57FF
	.byte 0x8C, 0x1B, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00, 0x8C, 0x1C, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00
	.byte 0x8C, 0x1D, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00, 0x8C, 0x1E, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00
	.byte 0x8C, 0x1F, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00, 0x8C, 0x20, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00
	.byte 0x8C, 0x21, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x04, 0x00, 0x02, 0x00, 0x04, 0x00, 0x03, 0x00, 0x04, 0x00
	.byte 0x04, 0x00, 0x04, 0x00, 0x05, 0x00, 0x04, 0x00, 0x06, 0x00, 0x04, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0xD0, 0x57, 0x4E, 0x08, 0xD8, 0x57, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_TreeDisguise
gFieldEffectObjectTemplate_TreeDisguise: @ 0x084E5800
	rodata_sprite_template 0xFFFF, 0xFFFF, 0x084E1968, 0x084E57F8, 0x084E5798, 0x082BF310, 0x08155BC5
	@ preserved field-effect template support data: 0x084E5818-0x084E587F
	.byte 0x8C, 0x22, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00, 0x8C, 0x23, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00
	.byte 0x8C, 0x24, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00, 0x8C, 0x25, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00
	.byte 0x8C, 0x26, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00, 0x8C, 0x27, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00
	.byte 0x8C, 0x28, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x04, 0x00, 0x02, 0x00, 0x04, 0x00, 0x03, 0x00, 0x04, 0x00
	.byte 0x04, 0x00, 0x04, 0x00, 0x05, 0x00, 0x04, 0x00, 0x06, 0x00, 0x04, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x50, 0x58, 0x4E, 0x08, 0x58, 0x58, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_MountainDisguise
gFieldEffectObjectTemplate_MountainDisguise: @ 0x084E5880
	rodata_sprite_template 0xFFFF, 0xFFFF, 0x084E1968, 0x084E5878, 0x084E5818, 0x082BF310, 0x08155BC5
	@ preserved field-effect template support data: 0x084E5898-0x084E58CF
	.byte 0x8C, 0x29, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00, 0x8C, 0x2A, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00
	.byte 0x8C, 0x2B, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00, 0x8C, 0x2C, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00
	.byte 0x8C, 0x2D, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00, 0x8C, 0x2E, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00
	.byte 0x8C, 0x2F, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00
	.globl gFieldEffectObjectTemplate_SandDisguisePlaceholder
gFieldEffectObjectTemplate_SandDisguisePlaceholder: @ 0x084E58D0
	rodata_sprite_template 0xFFFF, 0xFFFF, 0x084E1968, 0x084E57F8, 0x084E5898, 0x082BF310, 0x08155BC5
	@ preserved field-effect template support data: 0x084E58E8-0x084E58FB
	.byte 0x4C, 0x3F, 0x4D, 0x08, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0xF0, 0x58, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_Bird
gFieldEffectObjectTemplate_Bird: @ 0x084E58FC
	rodata_sprite_template 0xFFFF, 0xFFFF, 0x084E1970, 0x084E58F8, 0x084E58E8, 0x082BF310, 0x08007141
	@ preserved field-effect template support data: 0x084E5914-0x084E5933
	.byte 0x0C, 0x0E, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x8C, 0x0E, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x04, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x24, 0x59, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_ShortGrass
gFieldEffectObjectTemplate_ShortGrass: @ 0x084E5934
	rodata_sprite_template 0xFFFF, 0x1005, 0x084E1950, 0x084E5930, 0x084E5914, 0x082BF310, 0x0815494D
	@ preserved field-effect template support data: 0x084E594C-0x084E595F
	.byte 0x8C, 0x30, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x54, 0x59, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_HotSpringsWater
gFieldEffectObjectTemplate_HotSpringsWater: @ 0x084E5960
	rodata_sprite_template 0xFFFF, 0x1005, 0x084E1950, 0x084E595C, 0x084E594C, 0x082BF310, 0x08155095
	@ preserved field-effect template support data: 0x084E5978-0x084E59BB
	.byte 0x2C, 0x31, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0xAC, 0x31, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x2C, 0x32, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0xAC, 0x32, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x2C, 0x33, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x01, 0x00, 0x06, 0x00
	.byte 0x02, 0x00, 0x06, 0x00, 0x03, 0x00, 0x06, 0x00, 0x04, 0x00, 0x06, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0xA0, 0x59, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_AshPuff
gFieldEffectObjectTemplate_AshPuff: @ 0x084E59BC
	rodata_sprite_template 0xFFFF, 0x100D, 0x084E1950, 0x084E59B8, 0x084E5978, 0x082BF310, 0x080B7405
	@ preserved field-effect template support data: 0x084E59D4-0x084E5A1F
	.byte 0x0C, 0x31, 0x4D, 0x08, 0x0D, 0x10, 0x00, 0x00, 0xAC, 0x33, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x2C, 0x34, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0xAC, 0x34, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x2C, 0x35, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0xAC, 0x35, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x06, 0x00, 0x01, 0x00, 0x06, 0x00, 0x02, 0x00, 0x06, 0x00, 0x03, 0x00, 0x06, 0x00
	.byte 0x04, 0x00, 0x06, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x04, 0x5A, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_AshLaunch
gFieldEffectObjectTemplate_AshLaunch: @ 0x084E5A20
	rodata_sprite_template 0xFFFF, 0x100D, 0x084E1950, 0x084E5A1C, 0x084E59DC, 0x082BF310, 0x080B71B1
	@ preserved field-effect template support data: 0x084E5A38-0x084E5A9F
	.byte 0x2C, 0x36, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00, 0x2C, 0x37, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00
	.byte 0x2C, 0x38, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00, 0x2C, 0x39, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00
	.byte 0x2C, 0x3A, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00, 0x2C, 0x3B, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00
	.byte 0x2C, 0x3C, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00, 0x2C, 0x3D, 0x4D, 0x08, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x04, 0x00, 0x02, 0x00, 0x04, 0x00, 0x03, 0x00, 0x06, 0x00
	.byte 0x04, 0x00, 0x06, 0x00, 0x05, 0x00, 0x04, 0x00, 0x06, 0x00, 0x04, 0x00, 0x07, 0x00, 0x04, 0x00
	.byte 0xFF, 0xFF, 0x00, 0x00, 0x78, 0x5A, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_Bubbles
gFieldEffectObjectTemplate_Bubbles: @ 0x084E5AA0
	rodata_sprite_template 0xFFFF, 0x1004, 0x084E1968, 0x084E5A9C, 0x084E5A38, 0x082BF310, 0x08155A29
	@ preserved field-effect template support data: 0x084E5AB8-0x084E5ADB
	.byte 0x2C, 0x3E, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00, 0xAC, 0x3E, 0x4D, 0x08, 0x80, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x03, 0x00, 0x01, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0xC8, 0x5A, 0x4E, 0x08
	.globl gFieldEffectObjectTemplate_SmallSparkle
gFieldEffectObjectTemplate_SmallSparkle: @ 0x084E5ADC
	rodata_sprite_template 0xFFFF, 0x100F, 0x084E1950, 0x084E5AD8, 0x084E5AB8, 0x082BF310, 0x08155D8D
	@ preserved field-effect template support data: 0x084E5AF4-0x084E5B0F
	.byte 0x2C, 0x3F, 0x4D, 0x08, 0x0F, 0x10, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0xFC, 0x5A, 0x4E, 0x08, 0x8C, 0x5C, 0x4B, 0x08, 0x00, 0x02, 0x00, 0x00
	.globl gFieldEffectObjectTemplate_Rayquaza
gFieldEffectObjectTemplate_Rayquaza: @ 0x084E5B10
	rodata_sprite_template 0xFFFF, 0xFFFF, 0x084E1970, 0x084E5B04, 0x084E5B08, 0x082BF310, 0x08155EBD
	@ preserved field-effect template support data: 0x084E5B28-0x084E5B2F
	.byte 0x4C, 0x5D, 0x48, 0x08, 0x11, 0x10, 0x00, 0x00
	.globl gEventObjectMovementData_084E5B30
gEventObjectMovementData_084E5B30:
	.globl gUnknown_84E5B30
gUnknown_84E5B30: @ 0x084E5B30
	@ analyzed canonical ROM range 0x084E5B30-0x084E5B3F
sAnalyzedData_084E5B30: @ 0x084E5B30
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0020, 0x0040, 0x0060, 0x0080, 0x0020, 0x0040, 0x0080, 0x00C0
	@ pret/pokeemerald-jp direct xref for 0x084E5B40: event_object_movement.s: MovementType_FaceDownAndLeft_Step2, MovementType_FaceDownAndRight_Step2, MovementType_FaceDownLeftAndRight_Step2, MovementType_FaceDownUpAndLeft_Step2, MovementType_FaceDownUpAndRight_Step2 (+3 more)
	.globl gEventObjectMovementData_084E5B40
gEventObjectMovementData_084E5B40:
	.globl gUnknown_84E5B40
gUnknown_84E5B40: @ 0x084E5B40
	@ analyzed canonical ROM range 0x084E5B40-0x084E5B47
sAnalyzedData_084E5B40: @ 0x084E5B40
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0020, 0x0030, 0x0040, 0x0050
	.globl gUnknown_84E5B48
gUnknown_84E5B48: @ 0x084E5B48
	.4byte MovementType_WanderAround_Step0
	.4byte MovementType_WanderAround_Step1
	.4byte MovementType_WanderAround_Step2
	.4byte MovementType_WanderAround_Step3
	.4byte MovementType_WanderAround_Step4
	.4byte MovementType_WanderAround_Step5
	.4byte MovementType_WanderAround_Step6
	@ pret/pokeemerald-jp direct xref for 0x084E5B64: event_object_movement.s: MovementType_LookAround_Step4, MovementType_WalkSequenceDownUpLeftRight_Step1, MovementType_WanderAround_Step4
	.globl gEventObjectMovementData_084E5B64
gEventObjectMovementData_084E5B64:
	.globl gUnknown_84E5B64
gUnknown_84E5B64: @ 0x084E5B64
	@ analyzed canonical ROM range 0x084E5B64-0x084E5B67
sAnalyzedData_084E5B64: @ 0x084E5B64
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x01, 0x02, 0x03, 0x04
	.globl gUnknown_84E5B68
gUnknown_84E5B68: @ 0x084E5B68
	.4byte GetVectorDirection
	.4byte GetLimitedVectorDirection_SouthNorth
	.4byte GetLimitedVectorDirection_WestEast
	.4byte GetLimitedVectorDirection_WestNorth
	.4byte GetLimitedVectorDirection_EastNorth
	.4byte GetLimitedVectorDirection_WestSouth
	.4byte GetLimitedVectorDirection_EastSouth
	.4byte GetLimitedVectorDirection_SouthNorthWest
	.4byte GetLimitedVectorDirection_SouthNorthEast
	.4byte GetLimitedVectorDirection_NorthWestEast
	.4byte GetLimitedVectorDirection_SouthWestEast
	.globl gUnknown_84E5B94
gUnknown_84E5B94: @ 0x084E5B94
	.4byte MovementType_LookAround_Step0
	.4byte MovementType_LookAround_Step1
	.4byte MovementType_LookAround_Step2
	.4byte MovementType_LookAround_Step3
	.4byte MovementType_LookAround_Step4
	.globl gUnknown_84E5BA8
gUnknown_84E5BA8: @ 0x084E5BA8
	.4byte MovementType_WanderUpAndDown_Step0
	.4byte MovementType_WanderUpAndDown_Step1
	.4byte MovementType_WanderUpAndDown_Step2
	.4byte MovementType_WanderUpAndDown_Step3
	.4byte MovementType_WanderUpAndDown_Step4
	.4byte MovementType_WanderUpAndDown_Step5
	.4byte MovementType_WanderUpAndDown_Step6
	@ pret/pokeemerald-jp direct xref for 0x084E5BC4: event_object_movement.s: MovementType_FaceDownAndUp_Step4, MovementType_WanderUpAndDown_Step4
	.globl gEventObjectMovementData_084E5BC4
gEventObjectMovementData_084E5BC4:
	.globl gUnknown_84E5BC4
gUnknown_84E5BC4: @ 0x084E5BC4
	@ analyzed canonical ROM range 0x084E5BC4-0x084E5BC7
sAnalyzedData_084E5BC4: @ 0x084E5BC4
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x01, 0x02, 0x00, 0x00
	.globl gUnknown_84E5BC8
gUnknown_84E5BC8: @ 0x084E5BC8
	.4byte MovementType_WanderLeftAndRight_Step0
	.4byte MovementType_WanderLeftAndRight_Step1
	.4byte MovementType_WanderLeftAndRight_Step2
	.4byte MovementType_WanderLeftAndRight_Step3
	.4byte MovementType_WanderLeftAndRight_Step4
	.4byte MovementType_WanderLeftAndRight_Step5
	.4byte MovementType_WanderLeftAndRight_Step6
	@ pret/pokeemerald-jp direct xref for 0x084E5BE4: event_object_movement.s: MovementType_FaceLeftAndRight_Step4, MovementType_WanderLeftAndRight_Step4
	.globl gEventObjectMovementData_084E5BE4
gEventObjectMovementData_084E5BE4:
	.globl gUnknown_84E5BE4
gUnknown_84E5BE4: @ 0x084E5BE4
	@ analyzed canonical ROM range 0x084E5BE4-0x084E5BE7
sAnalyzedData_084E5BE4: @ 0x084E5BE4
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x03, 0x04, 0x00, 0x00
	.globl gUnknown_84E5BE8
gUnknown_84E5BE8: @ 0x084E5BE8
	.4byte MovementType_FaceDirection_Step0
	.4byte MovementType_FaceDirection_Step1
	.4byte MovementType_Invisible_Step2
	.globl gUnknown_84E5BF4
gUnknown_84E5BF4: @ 0x084E5BF4
	.4byte MovementType_BerryTreeGrowth_Step0
	.4byte MovementType_BerryTreeGrowth_Step1
	.4byte MovementType_BerryTreeGrowth_Step2
	.4byte MovementType_BerryTreeGrowth_Step3
	.4byte MovementType_BerryTreeGrowth_Step4
	.globl gUnknown_84E5C08
gUnknown_84E5C08: @ 0x084E5C08
	.4byte MovementType_FaceDownAndUp_Step0
	.4byte MovementType_FaceDownAndUp_Step1
	.4byte MovementType_FaceDownAndUp_Step2
	.4byte MovementType_FaceDownAndUp_Step3
	.4byte MovementType_FaceDownAndUp_Step4
	.globl gUnknown_84E5C1C
gUnknown_84E5C1C: @ 0x084E5C1C
	.4byte MovementType_FaceLeftAndRight_Step0
	.4byte MovementType_FaceLeftAndRight_Step1
	.4byte MovementType_FaceLeftAndRight_Step2
	.4byte MovementType_FaceLeftAndRight_Step3
	.4byte MovementType_FaceLeftAndRight_Step4
	.globl gUnknown_84E5C30
gUnknown_84E5C30: @ 0x084E5C30
	.4byte MovementType_FaceUpAndLeft_Step0
	.4byte MovementType_FaceUpAndLeft_Step1
	.4byte MovementType_FaceUpAndLeft_Step2
	.4byte MovementType_FaceUpAndLeft_Step3
	.4byte MovementType_FaceUpAndLeft_Step4
	@ pret/pokeemerald-jp direct xref for 0x084E5C44: event_object_movement.s: MovementType_FaceUpAndLeft_Step4
	.globl gEventObjectMovementData_084E5C44
gEventObjectMovementData_084E5C44:
	.globl gUnknown_84E5C44
gUnknown_84E5C44: @ 0x084E5C44
	@ analyzed canonical ROM range 0x084E5C44-0x084E5C47
sAnalyzedData_084E5C44: @ 0x084E5C44
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x02, 0x03, 0x00, 0x00
	.globl gUnknown_84E5C48
gUnknown_84E5C48: @ 0x084E5C48
	.4byte MovementType_FaceUpAndRight_Step0
	.4byte MovementType_FaceUpAndRight_Step1
	.4byte MovementType_FaceUpAndRight_Step2
	.4byte MovementType_FaceUpAndRight_Step3
	.4byte MovementType_FaceUpAndRight_Step4
	@ pret/pokeemerald-jp direct xref for 0x084E5C5C: event_object_movement.s: MovementType_FaceUpAndRight_Step4
	.globl gEventObjectMovementData_084E5C5C
gEventObjectMovementData_084E5C5C:
	.globl gUnknown_84E5C5C
gUnknown_84E5C5C: @ 0x084E5C5C
	@ analyzed canonical ROM range 0x084E5C5C-0x084E5C5F
sAnalyzedData_084E5C5C: @ 0x084E5C5C
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x02, 0x04, 0x00, 0x00
	.globl gUnknown_84E5C60
gUnknown_84E5C60: @ 0x084E5C60
	.4byte MovementType_FaceDownAndLeft_Step0
	.4byte MovementType_FaceDownAndLeft_Step1
	.4byte MovementType_FaceDownAndLeft_Step2
	.4byte MovementType_FaceDownAndLeft_Step3
	.4byte MovementType_FaceDownAndLeft_Step4
	@ pret/pokeemerald-jp direct xref for 0x084E5C74: event_object_movement.s: MovementType_FaceDownAndLeft_Step4
	.globl gEventObjectMovementData_084E5C74
gEventObjectMovementData_084E5C74:
	.globl gUnknown_84E5C74
gUnknown_84E5C74: @ 0x084E5C74
	@ analyzed canonical ROM range 0x084E5C74-0x084E5C77
sAnalyzedData_084E5C74: @ 0x084E5C74
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x01, 0x03, 0x00, 0x00
	.globl gUnknown_84E5C78
gUnknown_84E5C78: @ 0x084E5C78
	.4byte MovementType_FaceDownAndRight_Step0
	.4byte MovementType_FaceDownAndRight_Step1
	.4byte MovementType_FaceDownAndRight_Step2
	.4byte MovementType_FaceDownAndRight_Step3
	.4byte MovementType_FaceDownAndRight_Step4
	@ pret/pokeemerald-jp direct xref for 0x084E5C8C: event_object_movement.s: MovementType_FaceDownAndRight_Step4
	.globl gEventObjectMovementData_084E5C8C
gEventObjectMovementData_084E5C8C:
	.globl gUnknown_84E5C8C
gUnknown_84E5C8C: @ 0x084E5C8C
	@ analyzed canonical ROM range 0x084E5C8C-0x084E5C8F
sAnalyzedData_084E5C8C: @ 0x084E5C8C
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x01, 0x04, 0x00, 0x00
	.globl gUnknown_84E5C90
gUnknown_84E5C90: @ 0x084E5C90
	.4byte MovementType_FaceDownUpAndLeft_Step0
	.4byte MovementType_FaceDownUpAndLeft_Step1
	.4byte MovementType_FaceDownUpAndLeft_Step2
	.4byte MovementType_FaceDownUpAndLeft_Step3
	.4byte MovementType_FaceDownUpAndLeft_Step4
	@ pret/pokeemerald-jp direct xref for 0x084E5CA4: event_object_movement.s: MovementType_FaceDownUpAndLeft_Step4
	.globl gEventObjectMovementData_084E5CA4
gEventObjectMovementData_084E5CA4:
	.globl gUnknown_84E5CA4
gUnknown_84E5CA4: @ 0x084E5CA4
	@ analyzed canonical ROM range 0x084E5CA4-0x084E5CA7
sAnalyzedData_084E5CA4: @ 0x084E5CA4
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x02, 0x01, 0x03, 0x01
	.globl gUnknown_84E5CA8
gUnknown_84E5CA8: @ 0x084E5CA8
	.4byte MovementType_FaceDownUpAndRight_Step0
	.4byte MovementType_FaceDownUpAndRight_Step1
	.4byte MovementType_FaceDownUpAndRight_Step2
	.4byte MovementType_FaceDownUpAndRight_Step3
	.4byte MovementType_FaceDownUpAndRight_Step4
	@ pret/pokeemerald-jp direct xref for 0x084E5CBC: event_object_movement.s: MovementType_FaceDownUpAndRight_Step4
	.globl gEventObjectMovementData_084E5CBC
gEventObjectMovementData_084E5CBC:
	.globl gUnknown_84E5CBC
gUnknown_84E5CBC: @ 0x084E5CBC
	@ analyzed canonical ROM range 0x084E5CBC-0x084E5CBF
sAnalyzedData_084E5CBC: @ 0x084E5CBC
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x01, 0x02, 0x04, 0x01
	.globl gUnknown_84E5CC0
gUnknown_84E5CC0: @ 0x084E5CC0
	.4byte MovementType_FaceUpLeftAndRight_Step0
	.4byte MovementType_FaceUpLeftAndRight_Step1
	.4byte MovementType_FaceUpLeftAndRight_Step2
	.4byte MovementType_FaceUpLeftAndRight_Step3
	.4byte MovementType_FaceUpLeftAndRight_Step4
	@ pret/pokeemerald-jp direct xref for 0x084E5CD4: event_object_movement.s: MovementType_FaceUpLeftAndRight_Step4
	.globl gEventObjectMovementData_084E5CD4
gEventObjectMovementData_084E5CD4:
	.globl gUnknown_84E5CD4
gUnknown_84E5CD4: @ 0x084E5CD4
	@ analyzed canonical ROM range 0x084E5CD4-0x084E5CD7
sAnalyzedData_084E5CD4: @ 0x084E5CD4
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x02, 0x03, 0x04, 0x02
	.globl gUnknown_84E5CD8
gUnknown_84E5CD8: @ 0x084E5CD8
	.4byte MovementType_FaceDownLeftAndRight_Step0
	.4byte MovementType_FaceDownLeftAndRight_Step1
	.4byte MovementType_FaceDownLeftAndRight_Step2
	.4byte MovementType_FaceDownLeftAndRight_Step3
	.4byte MovementType_FaceDownLeftAndRight_Step4
	@ pret/pokeemerald-jp direct xref for 0x084E5CEC: event_object_movement.s: MovementType_FaceDownLeftAndRight_Step4
	.globl gEventObjectMovementData_084E5CEC
gEventObjectMovementData_084E5CEC:
	.globl gUnknown_84E5CEC
gUnknown_84E5CEC: @ 0x084E5CEC
	@ analyzed canonical ROM range 0x084E5CEC-0x084E5CEF
sAnalyzedData_084E5CEC: @ 0x084E5CEC
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x03, 0x04, 0x01, 0x01
	.globl gUnknown_84E5CF0
gUnknown_84E5CF0: @ 0x084E5CF0
	.4byte MovementType_RotateCounterclockwise_Step0
	.4byte MovementType_RotateCounterclockwise_Step1
	.4byte MovementType_RotateCounterclockwise_Step2
	.4byte MovementType_RotateCounterclockwise_Step3
	@ pret/pokeemerald-jp direct xref for 0x084E5D00: event_object_movement.s: MovementType_RotateCounterclockwise_Step3
	.globl gEventObjectMovementData_084E5D00
gEventObjectMovementData_084E5D00:
	.globl gUnknown_84E5D00
gUnknown_84E5D00: @ 0x084E5D00
	@ analyzed canonical ROM range 0x084E5D00-0x084E5D07
sAnalyzedData_084E5D00: @ 0x084E5D00
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0401, 0x0103, 0x0002, 0x0000
	.globl gUnknown_84E5D08
gUnknown_84E5D08: @ 0x084E5D08
	.4byte MovementType_RotateClockwise_Step0
	.4byte MovementType_RotateClockwise_Step1
	.4byte MovementType_RotateClockwise_Step2
	.4byte MovementType_RotateClockwise_Step3
	@ pret/pokeemerald-jp direct xref for 0x084E5D18: event_object_movement.s: MovementType_RotateClockwise_Step3
	.globl gEventObjectMovementData_084E5D18
gEventObjectMovementData_084E5D18:
	.globl gUnknown_84E5D18
gUnknown_84E5D18: @ 0x084E5D18
	@ analyzed canonical ROM range 0x084E5D18-0x084E5D1F
sAnalyzedData_084E5D18: @ 0x084E5D18
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0301, 0x0204, 0x0001, 0x0000
	.globl gUnknown_84E5D20
gUnknown_84E5D20: @ 0x084E5D20
	.4byte MovementType_WalkBackAndForth_Step0
	.4byte MovementType_WalkBackAndForth_Step1
	.4byte MovementType_WalkBackAndForth_Step2
	.4byte MovementType_WalkBackAndForth_Step3
	.globl gUnknown_84E5D30
gUnknown_84E5D30: @ 0x084E5D30
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceUpRightLeftDown_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5D3C: event_object_movement.s: MovementType_WalkSequenceUpRightLeftDown_Step1
	.globl gEventObjectMovementData_084E5D3C
gEventObjectMovementData_084E5D3C:
	.globl gUnknown_84E5D3C
gUnknown_84E5D3C: @ 0x084E5D3C
	@ analyzed canonical ROM range 0x084E5D3C-0x084E5D3F
sAnalyzedData_084E5D3C: @ 0x084E5D3C
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x02, 0x04, 0x03, 0x01
	.globl gUnknown_84E5D40
gUnknown_84E5D40: @ 0x084E5D40
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceRightLeftDownUp_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5D4C: event_object_movement.s: MovementType_WalkSequenceRightLeftDownUp_Step1
	.globl gEventObjectMovementData_084E5D4C
gEventObjectMovementData_084E5D4C:
	.globl gUnknown_84E5D4C
gUnknown_84E5D4C: @ 0x084E5D4C
	@ analyzed canonical ROM range 0x084E5D4C-0x084E5D4F
sAnalyzedData_084E5D4C: @ 0x084E5D4C
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x04, 0x03, 0x01, 0x02
	.globl gUnknown_84E5D50
gUnknown_84E5D50: @ 0x084E5D50
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceDownUpRightLeft_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5D5C: event_object_movement.s: MovementType_WalkSequenceDownUpRightLeft_Step1
	.globl gEventObjectMovementData_084E5D5C
gEventObjectMovementData_084E5D5C:
	.globl gUnknown_84E5D5C
gUnknown_84E5D5C: @ 0x084E5D5C
	@ analyzed canonical ROM range 0x084E5D5C-0x084E5D5F
sAnalyzedData_084E5D5C: @ 0x084E5D5C
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x01, 0x02, 0x04, 0x03
	.globl gUnknown_84E5D60
gUnknown_84E5D60: @ 0x084E5D60
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceLeftDownUpRight_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5D6C: event_object_movement.s: MovementType_WalkSequenceLeftDownUpRight_Step1
	.globl gEventObjectMovementData_084E5D6C
gEventObjectMovementData_084E5D6C:
	.globl gUnknown_84E5D6C
gUnknown_84E5D6C: @ 0x084E5D6C
	@ analyzed canonical ROM range 0x084E5D6C-0x084E5D6F
sAnalyzedData_084E5D6C: @ 0x084E5D6C
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x03, 0x01, 0x02, 0x04
	.globl gUnknown_84E5D70
gUnknown_84E5D70: @ 0x084E5D70
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceUpLeftRightDown_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5D7C: event_object_movement.s: MovementType_WalkSequenceUpLeftRightDown_Step1
	.globl gEventObjectMovementData_084E5D7C
gEventObjectMovementData_084E5D7C:
	.globl gUnknown_84E5D7C
gUnknown_84E5D7C: @ 0x084E5D7C
	@ analyzed canonical ROM range 0x084E5D7C-0x084E5D7F
sAnalyzedData_084E5D7C: @ 0x084E5D7C
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x02, 0x03, 0x04, 0x01
	.globl gUnknown_84E5D80
gUnknown_84E5D80: @ 0x084E5D80
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceLeftRightDownUp_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5D8C: event_object_movement.s: MovementType_WalkSequenceLeftRightDownUp_Step1
	.globl gEventObjectMovementData_084E5D8C
gEventObjectMovementData_084E5D8C:
	.globl gUnknown_84E5D8C
gUnknown_84E5D8C: @ 0x084E5D8C
	@ analyzed canonical ROM range 0x084E5D8C-0x084E5D8F
sAnalyzedData_084E5D8C: @ 0x084E5D8C
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x03, 0x04, 0x01, 0x02
	.globl gUnknown_84E5D90
gUnknown_84E5D90: @ 0x084E5D90
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceDownUpLeftRight_Step1
	.4byte MovementType_WalkSequence_Step2
	.globl gUnknown_84E5D9C
gUnknown_84E5D9C: @ 0x084E5D9C
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceRightDownUpLeft_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5DA8: event_object_movement.s: MovementType_WalkSequenceRightDownUpLeft_Step1
	.globl gEventObjectMovementData_084E5DA8
gEventObjectMovementData_084E5DA8:
	.globl gUnknown_84E5DA8
gUnknown_84E5DA8: @ 0x084E5DA8
	@ analyzed canonical ROM range 0x084E5DA8-0x084E5DAB
sAnalyzedData_084E5DA8: @ 0x084E5DA8
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x04, 0x01, 0x02, 0x03
	.globl gUnknown_84E5DAC
gUnknown_84E5DAC: @ 0x084E5DAC
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceLeftUpDownRight_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5DB8: event_object_movement.s: MovementType_WalkSequenceLeftUpDownRight_Step1
	.globl gEventObjectMovementData_084E5DB8
gEventObjectMovementData_084E5DB8:
	.globl gUnknown_84E5DB8
gUnknown_84E5DB8: @ 0x084E5DB8
	@ analyzed canonical ROM range 0x084E5DB8-0x084E5DBB
sAnalyzedData_084E5DB8: @ 0x084E5DB8
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x03, 0x02, 0x01, 0x04
	.globl gUnknown_84E5DBC
gUnknown_84E5DBC: @ 0x084E5DBC
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceUpDownRightLeft_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5DC8: event_object_movement.s: MovementType_WalkSequenceUpDownRightLeft_Step1
	.globl gEventObjectMovementData_084E5DC8
gEventObjectMovementData_084E5DC8:
	.globl gUnknown_84E5DC8
gUnknown_84E5DC8: @ 0x084E5DC8
	@ analyzed canonical ROM range 0x084E5DC8-0x084E5DCB
sAnalyzedData_084E5DC8: @ 0x084E5DC8
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x02, 0x01, 0x04, 0x03
	.globl gUnknown_84E5DCC
gUnknown_84E5DCC: @ 0x084E5DCC
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceRightLeftUpDown_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5DD8: event_object_movement.s: MovementType_WalkSequenceRightLeftUpDown_Step1
	.globl gEventObjectMovementData_084E5DD8
gEventObjectMovementData_084E5DD8:
	.globl gUnknown_84E5DD8
gUnknown_84E5DD8: @ 0x084E5DD8
	@ analyzed canonical ROM range 0x084E5DD8-0x084E5DDB
sAnalyzedData_084E5DD8: @ 0x084E5DD8
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x04, 0x03, 0x02, 0x01
	.globl gUnknown_84E5DDC
gUnknown_84E5DDC: @ 0x084E5DDC
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceDownRightLeftUp_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5DE8: event_object_movement.s: MovementType_WalkSequenceDownRightLeftUp_Step1
	.globl gEventObjectMovementData_084E5DE8
gEventObjectMovementData_084E5DE8:
	.globl gUnknown_84E5DE8
gUnknown_84E5DE8: @ 0x084E5DE8
	@ analyzed canonical ROM range 0x084E5DE8-0x084E5DEB
sAnalyzedData_084E5DE8: @ 0x084E5DE8
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x01, 0x04, 0x03, 0x02
	.globl gUnknown_84E5DEC
gUnknown_84E5DEC: @ 0x084E5DEC
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceRightUpDownLeft_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5DF8: event_object_movement.s: MovementType_WalkSequenceRightUpDownLeft_Step1
	.globl gEventObjectMovementData_084E5DF8
gEventObjectMovementData_084E5DF8:
	.globl gUnknown_84E5DF8
gUnknown_84E5DF8: @ 0x084E5DF8
	@ analyzed canonical ROM range 0x084E5DF8-0x084E5DFB
sAnalyzedData_084E5DF8: @ 0x084E5DF8
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x04, 0x02, 0x01, 0x03
	.globl gUnknown_84E5DFC
gUnknown_84E5DFC: @ 0x084E5DFC
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceUpDownLeftRight_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5E08: event_object_movement.s: MovementType_WalkSequenceUpDownLeftRight_Step1
	.globl gEventObjectMovementData_084E5E08
gEventObjectMovementData_084E5E08:
	.globl gUnknown_84E5E08
gUnknown_84E5E08: @ 0x084E5E08
	@ analyzed canonical ROM range 0x084E5E08-0x084E5E0B
sAnalyzedData_084E5E08: @ 0x084E5E08
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x02, 0x01, 0x03, 0x04
	.globl gUnknown_84E5E0C
gUnknown_84E5E0C: @ 0x084E5E0C
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceLeftRightUpDown_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5E18: event_object_movement.s: MovementType_WalkSequenceLeftRightUpDown_Step1
	.globl gEventObjectMovementData_084E5E18
gEventObjectMovementData_084E5E18:
	.globl gUnknown_84E5E18
gUnknown_84E5E18: @ 0x084E5E18
	@ analyzed canonical ROM range 0x084E5E18-0x084E5E1B
sAnalyzedData_084E5E18: @ 0x084E5E18
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x03, 0x04, 0x02, 0x01
	.globl gUnknown_84E5E1C
gUnknown_84E5E1C: @ 0x084E5E1C
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceDownLeftRightUp_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5E28: event_object_movement.s: MovementType_WalkSequenceDownLeftRightUp_Step1
	.globl gEventObjectMovementData_084E5E28
gEventObjectMovementData_084E5E28:
	.globl gUnknown_84E5E28
gUnknown_84E5E28: @ 0x084E5E28
	@ analyzed canonical ROM range 0x084E5E28-0x084E5E2B
sAnalyzedData_084E5E28: @ 0x084E5E28
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x01, 0x03, 0x04, 0x02
	.globl gUnknown_84E5E2C
gUnknown_84E5E2C: @ 0x084E5E2C
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceUpLeftDownRight_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5E38: event_object_movement.s: MovementType_WalkSequenceUpLeftDownRight_Step1
	.globl gEventObjectMovementData_084E5E38
gEventObjectMovementData_084E5E38:
	.globl gUnknown_84E5E38
gUnknown_84E5E38: @ 0x084E5E38
	@ analyzed canonical ROM range 0x084E5E38-0x084E5E3B
sAnalyzedData_084E5E38: @ 0x084E5E38
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x02, 0x03, 0x01, 0x04
	.globl gUnknown_84E5E3C
gUnknown_84E5E3C: @ 0x084E5E3C
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceDownRightUpLeft_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5E48: event_object_movement.s: MovementType_WalkSequenceDownRightUpLeft_Step1
	.globl gEventObjectMovementData_084E5E48
gEventObjectMovementData_084E5E48:
	.globl gUnknown_84E5E48
gUnknown_84E5E48: @ 0x084E5E48
	@ analyzed canonical ROM range 0x084E5E48-0x084E5E4B
sAnalyzedData_084E5E48: @ 0x084E5E48
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x01, 0x04, 0x02, 0x03
	.globl gUnknown_84E5E4C
gUnknown_84E5E4C: @ 0x084E5E4C
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceLeftDownRightUp_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5E58: event_object_movement.s: MovementType_WalkSequenceLeftDownRightUp_Step1
	.globl gEventObjectMovementData_084E5E58
gEventObjectMovementData_084E5E58:
	.globl gUnknown_84E5E58
gUnknown_84E5E58: @ 0x084E5E58
	@ analyzed canonical ROM range 0x084E5E58-0x084E5E5B
sAnalyzedData_084E5E58: @ 0x084E5E58
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x03, 0x01, 0x04, 0x02
	.globl gUnknown_84E5E5C
gUnknown_84E5E5C: @ 0x084E5E5C
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceRightUpLeftDown_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5E68: event_object_movement.s: MovementType_WalkSequenceRightUpLeftDown_Step1
	.globl gEventObjectMovementData_084E5E68
gEventObjectMovementData_084E5E68:
	.globl gUnknown_84E5E68
gUnknown_84E5E68: @ 0x084E5E68
	@ analyzed canonical ROM range 0x084E5E68-0x084E5E6B
sAnalyzedData_084E5E68: @ 0x084E5E68
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x04, 0x02, 0x03, 0x01
	.globl gUnknown_84E5E6C
gUnknown_84E5E6C: @ 0x084E5E6C
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceUpRightDownLeft_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5E78: event_object_movement.s: MovementType_WalkSequenceUpRightDownLeft_Step1
	.globl gEventObjectMovementData_084E5E78
gEventObjectMovementData_084E5E78:
	.globl gUnknown_84E5E78
gUnknown_84E5E78: @ 0x084E5E78
	@ analyzed canonical ROM range 0x084E5E78-0x084E5E7B
sAnalyzedData_084E5E78: @ 0x084E5E78
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x02, 0x04, 0x01, 0x03
	.globl gUnknown_84E5E7C
gUnknown_84E5E7C: @ 0x084E5E7C
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceDownLeftUpRight_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5E88: event_object_movement.s: MovementType_WalkSequenceDownLeftUpRight_Step1
	.globl gEventObjectMovementData_084E5E88
gEventObjectMovementData_084E5E88:
	.globl gUnknown_84E5E88
gUnknown_84E5E88: @ 0x084E5E88
	@ analyzed canonical ROM range 0x084E5E88-0x084E5E8B
sAnalyzedData_084E5E88: @ 0x084E5E88
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x01, 0x03, 0x02, 0x04
	.globl gUnknown_84E5E8C
gUnknown_84E5E8C: @ 0x084E5E8C
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceLeftUpRightDown_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5E98: event_object_movement.s: MovementType_WalkSequenceLeftUpRightDown_Step1
	.globl gEventObjectMovementData_084E5E98
gEventObjectMovementData_084E5E98:
	.globl gUnknown_84E5E98
gUnknown_84E5E98: @ 0x084E5E98
	@ analyzed canonical ROM range 0x084E5E98-0x084E5E9B
sAnalyzedData_084E5E98: @ 0x084E5E98
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x03, 0x02, 0x04, 0x01
	.globl gUnknown_84E5E9C
gUnknown_84E5E9C: @ 0x084E5E9C
	.4byte MovementType_WalkSequence_Step0
	.4byte MovementType_WalkSequenceRightDownLeftUp_Step1
	.4byte MovementType_WalkSequence_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5EA8: event_object_movement.s: MovementType_WalkSequenceRightDownLeftUp_Step1
	.globl gEventObjectMovementData_084E5EA8
gEventObjectMovementData_084E5EA8:
	.globl gUnknown_84E5EA8
gUnknown_84E5EA8: @ 0x084E5EA8
	@ analyzed canonical ROM range 0x084E5EA8-0x084E5EAB
sAnalyzedData_084E5EA8: @ 0x084E5EA8
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x04, 0x01, 0x03, 0x02
	.globl gUnknown_84E5EAC
gUnknown_84E5EAC: @ 0x084E5EAC
	.4byte MovementType_CopyPlayer_Step0
	.4byte MovementType_CopyPlayer_Step1
	.4byte MovementType_CopyPlayer_Step2
	.globl gUnknown_84E5EB8
gUnknown_84E5EB8: @ 0x084E5EB8
	.4byte CopyablePlayerMovement_None
	.4byte CopyablePlayerMovement_FaceDirection
	.4byte CopyablePlayerMovement_GoSpeed0
	.4byte CopyablePlayerMovement_GoSpeed1
	.4byte CopyablePlayerMovement_GoSpeed2
	.4byte CopyablePlayerMovement_Slide
	.4byte cph_IM_DIFFERENT
	.4byte CopyablePlayerMovement_GoSpeed4
	.4byte CopyablePlayerMovement_Jump
	.4byte CopyablePlayerMovement_None
	.4byte CopyablePlayerMovement_None
	.globl gUnknown_84E5EE4
gUnknown_84E5EE4: @ 0x084E5EE4
	.4byte MovementType_CopyPlayer_Step0
	.4byte MovementType_CopyPlayerInGrass_Step1
	.4byte MovementType_CopyPlayer_Step2
	.globl gUnknown_84E5EF0
gUnknown_84E5EF0: @ 0x084E5EF0
	.4byte MovementType_Hidden_Step0
	.globl gUnknown_84E5EF4
gUnknown_84E5EF4: @ 0x084E5EF4
	.4byte MovementType_WalkInPlace_Step0
	.4byte MovementType_MoveInPlace_Step1
	.globl gUnknown_84E5EFC
gUnknown_84E5EFC: @ 0x084E5EFC
	.4byte MovementType_WalkSlowlyInPlace_Step0
	.4byte MovementType_MoveInPlace_Step1
	.globl gUnknown_84E5F04
gUnknown_84E5F04: @ 0x084E5F04
	.4byte MovementType_JogInPlace_Step0
	.4byte MovementType_MoveInPlace_Step1
	.globl gUnknown_84E5F0C
gUnknown_84E5F0C: @ 0x084E5F0C
	.4byte MovementType_RunInPlace_Step0
	.4byte MovementType_MoveInPlace_Step1
	.globl gUnknown_84E5F14
gUnknown_84E5F14: @ 0x084E5F14
	.4byte MovementType_Invisible_Step0
	.4byte MovementType_Invisible_Step1
	.4byte MovementType_FaceDirection_Step2
	@ pret/pokeemerald-jp direct xref for 0x084E5F20: event_object_movement.s: GetJumpInPlaceMovementAction
	.globl gEventObjectMovementData_084E5F20
gEventObjectMovementData_084E5F20:
	.globl gUnknown_84E5F20
gUnknown_84E5F20: @ 0x084E5F20
	@ analyzed canonical ROM range 0x084E5F20-0x084E5F28
sAnalyzedData_084E5F20: @ 0x084E5F20
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x00, 0x00, 0x01, 0x02, 0x03, 0x00, 0x00, 0x01, 0x01
	@ pret/pokeemerald-jp direct xref for 0x084E5F29: event_object_movement.s: GetJumpInPlaceTurnAroundMovementAction
	.globl gEventObjectMovementData_084E5F29
gEventObjectMovementData_084E5F29:
	.globl gUnknown_84E5F29
gUnknown_84E5F29: @ 0x084E5F29
	@ analyzed canonical ROM range 0x084E5F29-0x084E5F31
sAnalyzedData_084E5F29: @ 0x084E5F29
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x04, 0x04, 0x05, 0x06, 0x07, 0x04, 0x04, 0x05, 0x05
	@ pret/pokeemerald-jp direct xref for 0x084E5F32: event_object_movement.s: GetJumpMovementAction
	.globl gEventObjectMovementData_084E5F32
gEventObjectMovementData_084E5F32:
	.globl gUnknown_84E5F32
gUnknown_84E5F32: @ 0x084E5F32
	@ analyzed canonical ROM range 0x084E5F32-0x084E5F3A
sAnalyzedData_084E5F32: @ 0x084E5F32
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x08, 0x08, 0x09, 0x0A, 0x0B, 0x08, 0x08, 0x09, 0x09
	@ pret/pokeemerald-jp direct xref for 0x084E5F3B: event_object_movement.s: GetJumpSpecialMovementAction
	.globl gEventObjectMovementData_084E5F3B
gEventObjectMovementData_084E5F3B:
	.globl gUnknown_84E5F3B
gUnknown_84E5F3B: @ 0x084E5F3B
	@ analyzed canonical ROM range 0x084E5F3B-0x084E5F43
sAnalyzedData_084E5F3B: @ 0x084E5F3B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0C, 0x0C, 0x0D, 0x0E, 0x0F, 0x0C, 0x0C, 0x0D, 0x0D
	@ pret/pokeemerald-jp direct xref for 0x084E5F44: event_object_movement.s: GetPlayerRunMovementAction
	.globl gEventObjectMovementData_084E5F44
gEventObjectMovementData_084E5F44:
	.globl gUnknown_84E5F44
gUnknown_84E5F44: @ 0x084E5F44
	@ analyzed canonical ROM range 0x084E5F44-0x084E5F4C
sAnalyzedData_084E5F44: @ 0x084E5F44
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x10, 0x10, 0x11, 0x12, 0x13, 0x10, 0x10, 0x11, 0x11
	@ pret/pokeemerald-jp direct xref for 0x084E5F4D: event_object_movement.s: GetRideWaterCurrentMovementAction
	.globl gEventObjectMovementData_084E5F4D
gEventObjectMovementData_084E5F4D:
	.globl gUnknown_84E5F4D
gUnknown_84E5F4D: @ 0x084E5F4D
	@ analyzed canonical ROM range 0x084E5F4D-0x084E5F55
sAnalyzedData_084E5F4D: @ 0x084E5F4D
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x14, 0x14, 0x15, 0x16, 0x17, 0x14, 0x14, 0x15, 0x15
	@ pret/pokeemerald-jp direct xref for 0x084E5F56: event_object_movement.s: GetSlideMovementAction
	.globl gEventObjectMovementData_084E5F56
gEventObjectMovementData_084E5F56:
	.globl gUnknown_84E5F56
gUnknown_84E5F56: @ 0x084E5F56
	@ analyzed canonical ROM range 0x084E5F56-0x084E5F5E
sAnalyzedData_084E5F56: @ 0x084E5F56
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x14, 0x14, 0x15, 0x16, 0x17, 0x14, 0x14, 0x15, 0x15
	@ pret/pokeemerald-jp direct xref for 0x084E5F5F: event_object_movement.s: GetWalkFastMovementAction
	.globl gEventObjectMovementData_084E5F5F
gEventObjectMovementData_084E5F5F:
	.globl gUnknown_84E5F5F
gUnknown_84E5F5F: @ 0x084E5F5F
	@ analyzed canonical ROM range 0x084E5F5F-0x084E5F67
sAnalyzedData_084E5F5F: @ 0x084E5F5F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x18, 0x18, 0x19, 0x1A, 0x1B, 0x18, 0x18, 0x19, 0x19
	@ pret/pokeemerald-jp direct xref for 0x084E5F68: event_object_movement.s: GetWalkFastestMovementAction
	.globl gEventObjectMovementData_084E5F68
gEventObjectMovementData_084E5F68:
	.globl gUnknown_84E5F68
gUnknown_84E5F68: @ 0x084E5F68
	@ analyzed canonical ROM range 0x084E5F68-0x084E5F70
sAnalyzedData_084E5F68: @ 0x084E5F68
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x1C, 0x1C, 0x1D, 0x1E, 0x1F, 0x1C, 0x1C, 0x1D, 0x1D
	@ pret/pokeemerald-jp direct xref for 0x084E5F71: event_object_movement.s: GetWalkInPlaceFastMovementAction
	.globl gEventObjectMovementData_084E5F71
gEventObjectMovementData_084E5F71:
	.globl gUnknown_84E5F71
gUnknown_84E5F71: @ 0x084E5F71
	@ analyzed canonical ROM range 0x084E5F71-0x084E5F79
sAnalyzedData_084E5F71: @ 0x084E5F71
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x20, 0x20, 0x21, 0x22, 0x23, 0x20, 0x20, 0x21, 0x21
	@ pret/pokeemerald-jp direct xref for 0x084E5F7A: event_object_movement.s: GetWalkInPlaceFastestMovementAction
	.globl gEventObjectMovementData_084E5F7A
gEventObjectMovementData_084E5F7A:
	.globl gUnknown_84E5F7A
gUnknown_84E5F7A: @ 0x084E5F7A
	@ analyzed canonical ROM range 0x084E5F7A-0x084E5F82
sAnalyzedData_084E5F7A: @ 0x084E5F7A
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x24, 0x24, 0x25, 0x26, 0x27, 0x24, 0x24, 0x25, 0x25
	@ pret/pokeemerald-jp direct xref for 0x084E5F83: event_object_movement.s: GetWalkInPlaceNormalMovementAction
	.globl gEventObjectMovementData_084E5F83
gEventObjectMovementData_084E5F83:
	.globl gUnknown_84E5F83
gUnknown_84E5F83: @ 0x084E5F83
	@ analyzed canonical ROM range 0x084E5F83-0x084E5F8B
sAnalyzedData_084E5F83: @ 0x084E5F83
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x00, 0x00, 0x01, 0x02, 0x03, 0x00, 0x00, 0x01, 0x01
	@ pret/pokeemerald-jp direct xref for 0x084E5F8C: event_object_movement.s: GetWalkInPlaceSlowMovementAction
	.globl gEventObjectMovementData_084E5F8C
gEventObjectMovementData_084E5F8C:
	.globl gUnknown_84E5F8C
gUnknown_84E5F8C: @ 0x084E5F8C
	@ analyzed canonical ROM range 0x084E5F8C-0x084E5F94
sAnalyzedData_084E5F8C: @ 0x084E5F8C
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x04, 0x04, 0x05, 0x06, 0x07, 0x04, 0x04, 0x05, 0x05
	@ pret/pokeemerald-jp direct xref for 0x084E5F95: event_object_movement.s: GetWalkNormalMovementAction
	.globl gEventObjectMovementData_084E5F95
gEventObjectMovementData_084E5F95:
	.globl gUnknown_84E5F95
gUnknown_84E5F95: @ 0x084E5F95
	@ analyzed canonical ROM range 0x084E5F95-0x084E5F9D
sAnalyzedData_084E5F95: @ 0x084E5F95
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x08, 0x08, 0x09, 0x0A, 0x0B, 0x08, 0x08, 0x09, 0x09
	@ pret/pokeemerald-jp direct xref for 0x084E5F9E: event_object_movement.s: GetWalkSlowMovementAction
	.globl gEventObjectMovementData_084E5F9E
gEventObjectMovementData_084E5F9E:
	.globl gUnknown_84E5F9E
gUnknown_84E5F9E: @ 0x084E5F9E
	@ analyzed canonical ROM range 0x084E5F9E-0x084E5FA6
sAnalyzedData_084E5F9E: @ 0x084E5F9E
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x14, 0x14, 0x15, 0x16, 0x17, 0x14, 0x14, 0x15, 0x15
	@ pret/pokeemerald-jp direct xref for 0x084E5FA7: event_object_movement.s: GroundEffect_DeepSandTracks
	.globl gEventObjectMovementData_084E5FA7
gEventObjectMovementData_084E5FA7:
	.globl gUnknown_84E5FA7
gUnknown_84E5FA7: @ 0x084E5FA7
	@ analyzed canonical ROM range 0x084E5FA7-0x084E5FAF
sAnalyzedData_084E5FA7: @ 0x084E5FA7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x08, 0x08, 0x07, 0x09, 0x0A, 0x08, 0x08, 0x07, 0x07
	.globl gUnknown_84E5FB0
gUnknown_84E5FB0: @ 0x084E5FB0
	.4byte MetatileBehavior_IsSouthBlocked
	.4byte MetatileBehavior_IsNorthBlocked
	.4byte MetatileBehavior_IsWestBlocked
	.4byte MetatileBehavior_IsEastBlocked
	.globl gUnknown_84E5FC0
gUnknown_84E5FC0: @ 0x084E5FC0
	.4byte MetatileBehavior_IsNorthBlocked
	.4byte MetatileBehavior_IsSouthBlocked
	.4byte MetatileBehavior_IsEastBlocked
	.4byte MetatileBehavior_IsWestBlocked
	@ pret/pokeemerald-jp direct xref for 0x084E5FD0: event_object_movement.s: MoveCoords, MoveCoordsInDirection, Step1, Step2, Step3 (+3 more)
	.globl gEventObjectMovementData_084E5FD0
gEventObjectMovementData_084E5FD0:
	.globl gUnknown_84E5FD0
gUnknown_84E5FD0: @ 0x084E5FD0
	@ analyzed canonical ROM range 0x084E5FD0-0x084E5FF3
sAnalyzedData_084E5FD0: @ 0x084E5FD0
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0000, 0x0000, 0x0000, 0x0001, 0x0000, 0xFFFF, 0xFFFF, 0x0000
	.2byte 0x0001, 0x0000, 0xFFFF, 0x0001, 0x0001, 0x0001, 0xFFFF, 0xFFFF
	.2byte 0x0001, 0xFFFF
	@ pret/pokeemerald-jp direct xref for 0x084E5FF4: event_object_movement.s: sub_08092CA0
	.globl gEventObjectMovementData_084E5FF4
gEventObjectMovementData_084E5FF4:
	.globl gUnknown_84E5FF4
gUnknown_84E5FF4: @ 0x084E5FF4
	@ analyzed canonical ROM range 0x084E5FF4-0x084E5FF8
sAnalyzedData_084E5FF4: @ 0x084E5FF4
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x00, 0x00, 0x01, 0x02, 0x03
	@ pret/pokeemerald-jp direct xref for 0x084E5FF9: event_object_movement.s: sub_08092CCC
	.globl gEventObjectMovementData_084E5FF9
gEventObjectMovementData_084E5FF9:
	.globl gUnknown_84E5FF9
gUnknown_84E5FF9: @ 0x084E5FF9
	@ analyzed canonical ROM range 0x084E5FF9-0x084E5FFD
sAnalyzedData_084E5FF9: @ 0x084E5FF9
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x04, 0x04, 0x05, 0x06, 0x07
	@ pret/pokeemerald-jp direct xref for 0x084E5FFE: event_object_movement.s: sub_08092CF8
	.globl gEventObjectMovementData_084E5FFE
gEventObjectMovementData_084E5FFE:
	.globl gUnknown_84E5FFE
gUnknown_84E5FFE: @ 0x084E5FFE
	@ analyzed canonical ROM range 0x084E5FFE-0x084E6002
sAnalyzedData_084E5FFE: @ 0x084E5FFE
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x08, 0x08, 0x09, 0x0A, 0x0B
	@ pret/pokeemerald-jp direct xref for 0x084E6003: event_object_movement.s: sub_08092D24
	.globl gEventObjectMovementData_084E6003
gEventObjectMovementData_084E6003:
	.globl gUnknown_84E6003
gUnknown_84E6003: @ 0x084E6003
	@ analyzed canonical ROM range 0x084E6003-0x084E6007
sAnalyzedData_084E6003: @ 0x084E6003
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x15, 0x15, 0x16, 0x17, 0x18
	@ pret/pokeemerald-jp direct xref for 0x084E6008: event_object_movement.s: sub_08092D50
	.globl gEventObjectMovementData_084E6008
gEventObjectMovementData_084E6008:
	.globl gUnknown_84E6008
gUnknown_84E6008: @ 0x084E6008
	@ analyzed canonical ROM range 0x084E6008-0x084E600C
sAnalyzedData_084E6008: @ 0x084E6008
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x29, 0x29, 0x2A, 0x2B, 0x2C
	@ pret/pokeemerald-jp direct xref for 0x084E600D: event_object_movement.s: sub_08092D7C
	.globl gEventObjectMovementData_084E600D
gEventObjectMovementData_084E600D:
	.globl gUnknown_84E600D
gUnknown_84E600D: @ 0x084E600D
	@ analyzed canonical ROM range 0x084E600D-0x084E6011
sAnalyzedData_084E600D: @ 0x084E600D
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x2D, 0x2D, 0x2E, 0x2F, 0x30
	@ pret/pokeemerald-jp direct xref for 0x084E6012: event_object_movement.s: sub_08092DA8
	.globl gEventObjectMovementData_084E6012
gEventObjectMovementData_084E6012:
	.globl gUnknown_84E6012
gUnknown_84E6012: @ 0x084E6012
	@ analyzed canonical ROM range 0x084E6012-0x084E6016
sAnalyzedData_084E6012: @ 0x084E6012
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x31, 0x31, 0x32, 0x33, 0x34
	@ pret/pokeemerald-jp direct xref for 0x084E6017: event_object_movement.s: sub_08092DD4
	.globl gEventObjectMovementData_084E6017
gEventObjectMovementData_084E6017:
	.globl gUnknown_84E6017
gUnknown_84E6017: @ 0x084E6017
	@ analyzed canonical ROM range 0x084E6017-0x084E601B
sAnalyzedData_084E6017: @ 0x084E6017
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x35, 0x35, 0x36, 0x37, 0x38
	@ pret/pokeemerald-jp direct xref for 0x084E601C: event_object_movement.s: sub_08092E00
	.globl gEventObjectMovementData_084E601C
gEventObjectMovementData_084E601C:
	.globl gUnknown_84E601C
gUnknown_84E601C: @ 0x084E601C
	@ analyzed canonical ROM range 0x084E601C-0x084E6020
sAnalyzedData_084E601C: @ 0x084E601C
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0C, 0x0C, 0x0D, 0x0E, 0x0F
	@ pret/pokeemerald-jp direct xref for 0x084E6021: event_object_movement.s: sub_08092E2C
	.globl gEventObjectMovementData_084E6021
gEventObjectMovementData_084E6021:
	.globl gUnknown_84E6021
gUnknown_84E6021: @ 0x084E6021
	@ analyzed canonical ROM range 0x084E6021-0x084E6025
sAnalyzedData_084E6021: @ 0x084E6021
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x46, 0x46, 0x47, 0x48, 0x49
	@ pret/pokeemerald-jp direct xref for 0x084E6026: event_object_movement.s: sub_08092E58
	.globl gEventObjectMovementData_084E6026
gEventObjectMovementData_084E6026:
	.globl gUnknown_84E6026
gUnknown_84E6026: @ 0x084E6026
	@ analyzed canonical ROM range 0x084E6026-0x084E602A
sAnalyzedData_084E6026: @ 0x084E6026
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x4B, 0x4B, 0x4A, 0x4D, 0x4C
	@ pret/pokeemerald-jp direct xref for 0x084E602B: event_object_movement.s: sub_08092E84
	.globl gEventObjectMovementData_084E602B
gEventObjectMovementData_084E602B:
	.globl gUnknown_84E602B
gUnknown_84E602B: @ 0x084E602B
	@ analyzed canonical ROM range 0x084E602B-0x084E602F
sAnalyzedData_084E602B: @ 0x084E602B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x42, 0x42, 0x43, 0x44, 0x45
	@ pret/pokeemerald-jp direct xref for 0x084E6030: event_object_movement.s: sub_08092EB0
	.globl gEventObjectMovementData_084E6030
gEventObjectMovementData_084E6030:
	.globl gUnknown_84E6030
gUnknown_84E6030: @ 0x084E6030
	@ analyzed canonical ROM range 0x084E6030-0x084E6034
sAnalyzedData_084E6030: @ 0x084E6030
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x3A, 0x3A, 0x3B, 0x3C, 0x3D
	@ pret/pokeemerald-jp direct xref for 0x084E6035: event_object_movement.s: sub_08092EDC
	.globl gEventObjectMovementData_084E6035
gEventObjectMovementData_084E6035:
	.globl gUnknown_84E6035
gUnknown_84E6035: @ 0x084E6035
	@ analyzed canonical ROM range 0x084E6035-0x084E6039
sAnalyzedData_084E6035: @ 0x084E6035
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x19, 0x19, 0x1A, 0x1B, 0x1C
	@ pret/pokeemerald-jp direct xref for 0x084E603A: event_object_movement.s: sub_08092F08
	.globl gEventObjectMovementData_084E603A
gEventObjectMovementData_084E603A:
	.globl gUnknown_84E603A
gUnknown_84E603A: @ 0x084E603A
	@ analyzed canonical ROM range 0x084E603A-0x084E603E
sAnalyzedData_084E603A: @ 0x084E603A
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x1D, 0x1D, 0x1E, 0x1F, 0x20
	@ pret/pokeemerald-jp direct xref for 0x084E603F: event_object_movement.s: sub_08092F34
	.globl gEventObjectMovementData_084E603F
gEventObjectMovementData_084E603F:
	.globl gUnknown_84E603F
gUnknown_84E603F: @ 0x084E603F
	@ analyzed canonical ROM range 0x084E603F-0x084E6043
sAnalyzedData_084E603F: @ 0x084E603F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x21, 0x21, 0x22, 0x23, 0x24
	@ pret/pokeemerald-jp direct xref for 0x084E6044: event_object_movement.s: sub_08092F60
	.globl gEventObjectMovementData_084E6044
gEventObjectMovementData_084E6044:
	.globl gUnknown_84E6044
gUnknown_84E6044: @ 0x084E6044
	@ analyzed canonical ROM range 0x084E6044-0x084E6048
sAnalyzedData_084E6044: @ 0x084E6044
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x25, 0x25, 0x26, 0x27, 0x28
	@ pret/pokeemerald-jp direct xref for 0x084E6049: event_object_movement.s: sub_08092FB8
	.globl gEventObjectMovementData_084E6049
gEventObjectMovementData_084E6049:
	.globl gUnknown_84E6049
gUnknown_84E6049: @ 0x084E6049
	@ analyzed canonical ROM range 0x084E6049-0x084E604D
sAnalyzedData_084E6049: @ 0x084E6049
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x64, 0x64, 0x65, 0x66, 0x67
	@ pret/pokeemerald-jp direct xref for 0x084E604E: event_object_movement.s: sub_08092FE4
	.globl gEventObjectMovementData_084E604E
gEventObjectMovementData_084E604E:
	.globl gUnknown_84E604E
gUnknown_84E604E: @ 0x084E604E
	@ analyzed canonical ROM range 0x084E604E-0x084E6052
sAnalyzedData_084E604E: @ 0x084E604E
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x68, 0x68, 0x69, 0x6A, 0x6B
	@ pret/pokeemerald-jp direct xref for 0x084E6053: event_object_movement.s: EventObjectExecSingleMovementAction
	.globl gEventObjectMovementData_084E6053
gEventObjectMovementData_084E6053:
	.globl gUnknown_84E6053
gUnknown_84E6053: @ 0x084E6053
	@ analyzed canonical ROM range 0x084E6053-0x084E6057
sAnalyzedData_084E6053: @ 0x084E6053
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x6C, 0x6C, 0x6D, 0x6E, 0x6F
	@ pret/pokeemerald-jp direct xref for 0x084E6058: event_object_movement.s: sub_0809303C
	.globl gEventObjectMovementData_084E6058
gEventObjectMovementData_084E6058:
	.globl gUnknown_84E6058
gUnknown_84E6058: @ 0x084E6058
	@ analyzed canonical ROM range 0x084E6058-0x084E605C
sAnalyzedData_084E6058: @ 0x084E6058
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x70, 0x70, 0x71, 0x72, 0x73
	@ pret/pokeemerald-jp direct xref for 0x084E605D: event_object_movement.s: GetAcroEndWheelieFaceDirectionMovementAction
	.globl gEventObjectMovementData_084E605D
gEventObjectMovementData_084E605D:
	.globl gUnknown_84E605D
gUnknown_84E605D: @ 0x084E605D
	@ analyzed canonical ROM range 0x084E605D-0x084E6061
sAnalyzedData_084E605D: @ 0x084E605D
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x74, 0x74, 0x75, 0x76, 0x77
	@ pret/pokeemerald-jp direct xref for 0x084E6062: event_object_movement.s: sub_08093094
	.globl gEventObjectMovementData_084E6062
gEventObjectMovementData_084E6062:
	.globl gUnknown_84E6062
gUnknown_84E6062: @ 0x084E6062
	@ analyzed canonical ROM range 0x084E6062-0x084E6066
sAnalyzedData_084E6062: @ 0x084E6062
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x78, 0x78, 0x79, 0x7A, 0x7B
	@ pret/pokeemerald-jp direct xref for 0x084E6067: event_object_movement.s: sub_080930C0
	.globl gEventObjectMovementData_084E6067
gEventObjectMovementData_084E6067:
	.globl gUnknown_84E6067
gUnknown_84E6067: @ 0x084E6067
	@ analyzed canonical ROM range 0x084E6067-0x084E606B
sAnalyzedData_084E6067: @ 0x084E6067
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x7C, 0x7C, 0x7D, 0x7E, 0x7F
	@ pret/pokeemerald-jp direct xref for 0x084E606C: event_object_movement.s: sub_080930EC
	.globl gEventObjectMovementData_084E606C
gEventObjectMovementData_084E606C:
	.globl gUnknown_84E606C
gUnknown_84E606C: @ 0x084E606C
	@ analyzed canonical ROM range 0x084E606C-0x084E6070
sAnalyzedData_084E606C: @ 0x084E606C
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x80, 0x80, 0x81, 0x82, 0x83
	@ pret/pokeemerald-jp direct xref for 0x084E6071: event_object_movement.s: sub_08093118
	.globl gEventObjectMovementData_084E6071
gEventObjectMovementData_084E6071:
	.globl gUnknown_84E6071
gUnknown_84E6071: @ 0x084E6071
	@ analyzed canonical ROM range 0x084E6071-0x084E6075
sAnalyzedData_084E6071: @ 0x084E6071
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x84, 0x84, 0x85, 0x86, 0x87
	@ pret/pokeemerald-jp direct xref for 0x084E6076: event_object_movement.s: sub_08093144
	.globl gEventObjectMovementData_084E6076
gEventObjectMovementData_084E6076:
	.globl gUnknown_84E6076
gUnknown_84E6076: @ 0x084E6076
	@ analyzed canonical ROM range 0x084E6076-0x084E607A
sAnalyzedData_084E6076: @ 0x084E6076
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x88, 0x88, 0x89, 0x8A, 0x8B
	@ pret/pokeemerald-jp direct xref for 0x084E607B: event_object_movement.s: GetOppositeDirection
	.globl gEventObjectMovementData_084E607B
gEventObjectMovementData_084E607B:
	.globl gUnknown_84E607B
gUnknown_84E607B: @ 0x084E607B
	@ analyzed canonical ROM range 0x084E607B-0x084E6082
sAnalyzedData_084E607B: @ 0x084E607B
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0102, 0x0304, 0x0708, 0x0506
	@ pret/pokeemerald-jp direct xref for 0x084E6083: event_object_movement.s: zffu_offset_calc
	.globl gEventObjectMovementData_084E6083
gEventObjectMovementData_084E6083:
	.globl gUnknown_84E6083
gUnknown_84E6083: @ 0x084E6083
	@ analyzed canonical ROM range 0x084E6083-0x084E6092
sAnalyzedData_084E6083: @ 0x084E6083
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0102, 0x0304, 0x0201, 0x0403, 0x0403, 0x0102, 0x0304, 0x0201
	@ pret/pokeemerald-jp direct xref for 0x084E6093: event_object_movement.s: state_to_direction
	.globl gEventObjectMovementData_084E6093
gEventObjectMovementData_084E6093:
	.globl gUnknown_84E6093
gUnknown_84E6093: @ 0x084E6093
	@ analyzed canonical ROM range 0x084E6093-0x084E60A3
sAnalyzedData_084E6093: @ 0x084E6093
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x02, 0x01, 0x04, 0x03, 0x01, 0x02, 0x03, 0x04, 0x04, 0x03, 0x01, 0x02, 0x03, 0x04, 0x02, 0x01
	.byte 0x00
	@ pret/pokeemerald-jp direct xref for 0x084E60A4: event_object_movement.s: sub_0809321C, sub_08093258
	.globl gEventObjectMovementData_084E60A4
gEventObjectMovementData_084E60A4:
	.globl gUnknown_84E60A4
gUnknown_84E60A4: @ 0x084E60A4
	@ confirmed contiguous ROM pointer table: 166 entries from this address
sPointerTable_084E60A4:
	@ analyzed canonical ROM range 0x084E60A4-0x084E633B
	@ semantic recovery: rodata; byte-verified against linked ROM
sAnalyzedData_084E60A4: @ 0x084E60A4
	.byte 0x1C, 0x63, 0x4E, 0x08, 0x24, 0x63, 0x4E, 0x08, 0x2C, 0x63, 0x4E, 0x08, 0x34, 0x63, 0x4E, 0x08
	.byte 0x80, 0x63, 0x4E, 0x08, 0x8C, 0x63, 0x4E, 0x08, 0x98, 0x63, 0x4E, 0x08, 0xA4, 0x63, 0x4E, 0x08
	.byte 0xE0, 0x63, 0x4E, 0x08, 0xEC, 0x63, 0x4E, 0x08, 0xF8, 0x63, 0x4E, 0x08, 0x04, 0x64, 0x4E, 0x08
	.byte 0x1C, 0x64, 0x4E, 0x08, 0x28, 0x64, 0x4E, 0x08, 0x34, 0x64, 0x4E, 0x08, 0x40, 0x64, 0x4E, 0x08
	.byte 0x4C, 0x64, 0x4E, 0x08, 0x58, 0x64, 0x4E, 0x08, 0x64, 0x64, 0x4E, 0x08, 0x70, 0x64, 0x4E, 0x08
	.byte 0x7C, 0x64, 0x4E, 0x08, 0x88, 0x64, 0x4E, 0x08, 0x94, 0x64, 0x4E, 0x08, 0xA0, 0x64, 0x4E, 0x08
	.byte 0xAC, 0x64, 0x4E, 0x08, 0xB8, 0x64, 0x4E, 0x08, 0xC4, 0x64, 0x4E, 0x08, 0xD0, 0x64, 0x4E, 0x08
	.byte 0xDC, 0x64, 0x4E, 0x08, 0xE8, 0x64, 0x4E, 0x08, 0xF4, 0x64, 0x4E, 0x08, 0x00, 0x65, 0x4E, 0x08
	.byte 0x0C, 0x65, 0x4E, 0x08, 0x18, 0x65, 0x4E, 0x08, 0x24, 0x65, 0x4E, 0x08, 0x30, 0x65, 0x4E, 0x08
	.byte 0x3C, 0x65, 0x4E, 0x08, 0x48, 0x65, 0x4E, 0x08, 0x54, 0x65, 0x4E, 0x08, 0x60, 0x65, 0x4E, 0x08
	.byte 0x6C, 0x65, 0x4E, 0x08, 0x78, 0x65, 0x4E, 0x08, 0x84, 0x65, 0x4E, 0x08, 0x90, 0x65, 0x4E, 0x08
	.byte 0x9C, 0x65, 0x4E, 0x08, 0xA8, 0x65, 0x4E, 0x08, 0xB4, 0x65, 0x4E, 0x08, 0xC0, 0x65, 0x4E, 0x08
	.byte 0xCC, 0x65, 0x4E, 0x08, 0xD8, 0x65, 0x4E, 0x08, 0xE4, 0x65, 0x4E, 0x08, 0xF0, 0x65, 0x4E, 0x08
	.byte 0xFC, 0x65, 0x4E, 0x08, 0x08, 0x66, 0x4E, 0x08, 0x14, 0x66, 0x4E, 0x08, 0x20, 0x66, 0x4E, 0x08
	.byte 0x2C, 0x66, 0x4E, 0x08, 0x38, 0x66, 0x4E, 0x08, 0x44, 0x66, 0x4E, 0x08, 0x50, 0x66, 0x4E, 0x08
	.byte 0x5C, 0x66, 0x4E, 0x08, 0x68, 0x66, 0x4E, 0x08, 0x74, 0x66, 0x4E, 0x08, 0x7C, 0x66, 0x4E, 0x08
	.byte 0x84, 0x66, 0x4E, 0x08, 0x8C, 0x66, 0x4E, 0x08, 0x94, 0x66, 0x4E, 0x08, 0xA0, 0x66, 0x4E, 0x08
	.byte 0xAC, 0x66, 0x4E, 0x08, 0xB8, 0x66, 0x4E, 0x08, 0xC4, 0x66, 0x4E, 0x08, 0xD0, 0x66, 0x4E, 0x08
	.byte 0xDC, 0x66, 0x4E, 0x08, 0xE8, 0x66, 0x4E, 0x08, 0xF4, 0x66, 0x4E, 0x08, 0x00, 0x67, 0x4E, 0x08
	.byte 0x0C, 0x67, 0x4E, 0x08, 0x18, 0x67, 0x4E, 0x08, 0x24, 0x67, 0x4E, 0x08, 0x2C, 0x67, 0x4E, 0x08
	.byte 0x38, 0x67, 0x4E, 0x08, 0x40, 0x67, 0x4E, 0x08, 0x48, 0x67, 0x4E, 0x08, 0x50, 0x67, 0x4E, 0x08
	.byte 0x58, 0x67, 0x4E, 0x08, 0x60, 0x67, 0x4E, 0x08, 0x68, 0x67, 0x4E, 0x08, 0x70, 0x67, 0x4E, 0x08
	.byte 0x78, 0x67, 0x4E, 0x08, 0x80, 0x67, 0x4E, 0x08, 0x8C, 0x67, 0x4E, 0x08, 0x9C, 0x67, 0x4E, 0x08
	.byte 0xAC, 0x67, 0x4E, 0x08, 0xB4, 0x67, 0x4E, 0x08, 0xBC, 0x67, 0x4E, 0x08, 0xC4, 0x67, 0x4E, 0x08
	.byte 0xCC, 0x67, 0x4E, 0x08, 0xD4, 0x67, 0x4E, 0x08, 0xDC, 0x67, 0x4E, 0x08, 0xE8, 0x67, 0x4E, 0x08
	.byte 0x0C, 0x68, 0x4E, 0x08, 0x14, 0x68, 0x4E, 0x08, 0x1C, 0x68, 0x4E, 0x08, 0x24, 0x68, 0x4E, 0x08
	.byte 0x2C, 0x68, 0x4E, 0x08, 0x38, 0x68, 0x4E, 0x08, 0x44, 0x68, 0x4E, 0x08, 0x50, 0x68, 0x4E, 0x08
	.byte 0x5C, 0x68, 0x4E, 0x08, 0x68, 0x68, 0x4E, 0x08, 0x74, 0x68, 0x4E, 0x08, 0x80, 0x68, 0x4E, 0x08
	.byte 0xC8, 0x68, 0x4E, 0x08, 0xD4, 0x68, 0x4E, 0x08, 0xE0, 0x68, 0x4E, 0x08, 0xEC, 0x68, 0x4E, 0x08
	.byte 0xF8, 0x68, 0x4E, 0x08, 0x04, 0x69, 0x4E, 0x08, 0x10, 0x69, 0x4E, 0x08, 0x1C, 0x69, 0x4E, 0x08
	.byte 0x28, 0x69, 0x4E, 0x08, 0x34, 0x69, 0x4E, 0x08, 0x40, 0x69, 0x4E, 0x08, 0x4C, 0x69, 0x4E, 0x08
	.byte 0x58, 0x69, 0x4E, 0x08, 0x64, 0x69, 0x4E, 0x08, 0x70, 0x69, 0x4E, 0x08, 0x7C, 0x69, 0x4E, 0x08
	.byte 0x88, 0x69, 0x4E, 0x08, 0x94, 0x69, 0x4E, 0x08, 0xA0, 0x69, 0x4E, 0x08, 0xAC, 0x69, 0x4E, 0x08
	.byte 0xB8, 0x69, 0x4E, 0x08, 0xC4, 0x69, 0x4E, 0x08, 0xD0, 0x69, 0x4E, 0x08, 0xDC, 0x69, 0x4E, 0x08
	.byte 0xE8, 0x69, 0x4E, 0x08, 0xF4, 0x69, 0x4E, 0x08, 0x00, 0x6A, 0x4E, 0x08, 0x0C, 0x6A, 0x4E, 0x08
	.byte 0xB0, 0x63, 0x4E, 0x08, 0xBC, 0x63, 0x4E, 0x08, 0xC8, 0x63, 0x4E, 0x08, 0xD4, 0x63, 0x4E, 0x08
	.byte 0x50, 0x63, 0x4E, 0x08, 0x5C, 0x63, 0x4E, 0x08, 0x68, 0x63, 0x4E, 0x08, 0x74, 0x63, 0x4E, 0x08
	.byte 0xB8, 0x6C, 0x4E, 0x08, 0xC0, 0x6C, 0x4E, 0x08, 0xF4, 0x67, 0x4E, 0x08, 0x00, 0x68, 0x4E, 0x08
	.byte 0x18, 0x6A, 0x4E, 0x08, 0x20, 0x6A, 0x4E, 0x08, 0x28, 0x6A, 0x4E, 0x08, 0xBC, 0x68, 0x4E, 0x08
	.byte 0xC8, 0x6C, 0x4E, 0x08, 0xD4, 0x6C, 0x4E, 0x08
FunctionPointerTable_JP_084E631C: @ 0x084E631C
	@ proven function-pointer table
	.4byte MovementAction_FaceDown_Step0
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_FaceUp_Step0
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_FaceLeft_Step0
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_FaceRight_Step0
	.4byte MovementAction_PauseSpriteAnim
	.globl gUnknown_84E633C
gUnknown_84E633C: @ 0x084E633C
	.4byte GetJumpInPlaceTurnAroundMovementAction
	.4byte GetJumpMovementAction
	.4byte GetJumpMovementAction
	.4byte GetJumpSpecialMovementAction
	.4byte GetPlayerRunMovementAction
	.4byte MovementAction_WalkSlowDiagonalUpLeft_Step0
	.4byte sub_08093554
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkSlowDiagonalUpRight_Step0
	.4byte MovementAction_WalkSlowDiagonalUpRight_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkSlowDiagonalDownLeft_Step0
	.4byte MovementAction_WalkSlowDiagonalDownLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkSlowDiagonalDownRight_Step0
	.4byte MovementAction_WalkSlowDiagonalDownRight_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkSlowDown_Step0
	.4byte MovementAction_WalkSlowDown_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkSlowUp_Step0
	.4byte MovementAction_WalkSlowUp_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkSlowLeft_Step0
	.4byte MovementAction_WalkSlowLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkSlowRight_Step0
	.4byte MovementAction_WalkSlowRight_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkNormalDiagonalUpLeft_Step0
	.4byte MovementAction_WalkNormalDiagonalUpLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkNormalDiagonalUpRight_Step0
	.4byte MovementAction_WalkNormalDiagonalUpRight_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkNormalDiagonalDownLeft_Step0
	.4byte MovementAction_WalkNormalDiagonalDownLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkNormalDiagonalDownRight_Step0
	.4byte MovementAction_WalkNormalDiagonalDownRight_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkNormalDown_Step0
	.4byte MovementAction_WalkNormalDown_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkNormalUp_Step0
	.4byte MovementAction_WalkNormalUp_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkNormalLeft_Step0
	.4byte MovementAction_WalkNormalLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkNormalRight_Step0
	.4byte MovementAction_WalkNormalRight_Step1
	.4byte MovementAction_PauseSpriteAnim
	@ pret/pokeemerald-jp direct xref for 0x084E6410: event_object_movement.s: sub_08093934
	.globl gEventObjectMovementData_084E6410
gEventObjectMovementData_084E6410:
	.globl gUnknown_84E6410
gUnknown_84E6410: @ 0x084E6410
	@ analyzed canonical ROM range 0x084E6410-0x084E6415
sAnalyzedData_084E6410: @ 0x084E6410
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x00, 0x00, 0x01, 0x00, 0x01, 0x00
	@ pret/pokeemerald-jp direct xref for 0x084E6416: event_object_movement.s: sub_08093A34
	.globl gEventObjectMovementData_084E6416
gEventObjectMovementData_084E6416:
	.globl gUnknown_84E6416
gUnknown_84E6416: @ 0x084E6416
	@ analyzed canonical ROM range 0x084E6416-0x084E6A2F
	@ semantic recovery: rodata; byte-verified against linked ROM
sAnalyzedData_084E6416: @ 0x084E6416
	.byte 0x00, 0x00, 0x00, 0x00, 0x01, 0x00
FunctionPointerTable_JP_084E641C: @ 0x084E641C
	@ proven function-pointer table
	.4byte MovementAction_Jump2Down_Step0
	.4byte MovementAction_Jump2Down_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_Jump2Up_Step0
	.4byte MovementAction_Jump2Up_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_Jump2Left_Step0
	.4byte MovementAction_Jump2Left_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_Jump2Right_Step0
	.4byte MovementAction_Jump2Right_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_Delay1_Step0
	.4byte MovementAction_Delay_Step1
	.4byte sub_08095E28
	.4byte MovementAction_Delay2_Step0
	.4byte MovementAction_Delay_Step1
	.4byte sub_08095E28
	.4byte MovementAction_Delay4_Step0
	.4byte MovementAction_Delay_Step1
	.4byte sub_08095E28
	.4byte MovementAction_Delay8_Step0
	.4byte MovementAction_Delay_Step1
	.4byte sub_08095E28
	.4byte MovementAction_Delay16_Step0
	.4byte MovementAction_Delay_Step1
	.4byte sub_08095E28
	.4byte MovementAction_WalkFastDown_Step0
	.4byte MovementAction_WalkFastDown_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkFastUp_Step0
	.4byte MovementAction_WalkFastUp_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkFastLeft_Step0
	.4byte MovementAction_WalkFastLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkFastRight_Step0
	.4byte MovementAction_WalkFastRight_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkInPlaceSlowDown_Step0
	.4byte MovementAction_WalkInPlaceSlow_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkInPlaceSlowUp_Step0
	.4byte MovementAction_WalkInPlaceSlow_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkInPlaceSlowLeft_Step0
	.4byte MovementAction_WalkInPlaceSlow_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkInPlaceSlowRight_Step0
	.4byte MovementAction_WalkInPlaceSlow_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkInPlaceNormalDown_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkInPlaceNormalUp_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkInPlaceNormalLeft_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkInPlaceNormalRight_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkInPlaceFastDown_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkInPlaceFastUp_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkInPlaceFastLeft_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkInPlaceFastRight_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkInPlaceFastestDown_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkInPlaceFastestUp_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkInPlaceFastestLeft_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkInPlaceFastestRight_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_RideWaterCurrentDown_Step0
	.4byte MovementAction_RideWaterCurrentDown_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_RideWaterCurrentUp_Step0
	.4byte MovementAction_RideWaterCurrentUp_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_RideWaterCurrentLeft_Step0
	.4byte MovementAction_RideWaterCurrentLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_RideWaterCurrentRight_Step0
	.4byte MovementAction_RideWaterCurrentRight_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkFastestDown_Step0
	.4byte MovementAction_WalkFastestDown_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkFastestUp_Step0
	.4byte MovementAction_WalkFastestUp_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkFastestLeft_Step0
	.4byte MovementAction_WalkFastestLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkFastestRight_Step0
	.4byte MovementAction_WalkFastestRight_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_SlideDown_Step0
	.4byte MovementAction_SlideDown_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_SlideUp_Step0
	.4byte MovementAction_SlideUp_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_SlideLeft_Step0
	.4byte MovementAction_SlideLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_SlideRight_Step0
	.4byte MovementAction_SlideRight_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_PlayerRunDown_Step0
	.4byte MovementAction_PlayerRunDown_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_PlayerRunUp_Step0
	.4byte MovementAction_PlayerRunUp_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_PlayerRunLeft_Step0
	.4byte MovementAction_PlayerRunLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_PlayerRunRight_Step0
	.4byte MovementAction_PlayerRunRight_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_StartAnimInDirection_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_JumpSpecialDown_Step0
	.4byte MovementAction_JumpSpecialDown_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_JumpSpecialUp_Step0
	.4byte MovementAction_JumpSpecialUp_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_JumpSpecialLeft_Step0
	.4byte MovementAction_JumpSpecialLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_JumpSpecialRight_Step0
	.4byte MovementAction_JumpSpecialRight_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_FacePlayer_Step0
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_FaceAwayPlayer_Step0
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_LockFacingDirection_Step0
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_UnlockFacingDirection_Step0
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_JumpDown_Step0
	.4byte MovementAction_JumpDown_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_JumpUp_Step0
	.4byte MovementAction_JumpUp_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_JumpLeft_Step0
	.4byte MovementAction_JumpLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_JumpRight_Step0
	.4byte MovementAction_JumpRight_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_JumpInPlaceDown_Step0
	.4byte MovementAction_JumpInPlaceDown_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_JumpInPlaceUp_Step0
	.4byte MovementAction_JumpInPlaceUp_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_JumpInPlaceLeft_Step0
	.4byte MovementAction_JumpInPlaceLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_JumpInPlaceRight_Step0
	.4byte MovementAction_JumpInPlaceRight_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_JumpInPlaceDownUp_Step0
	.4byte MovementAction_JumpInPlaceDownUp_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_JumpInPlaceUpDown_Step0
	.4byte MovementAction_JumpInPlaceUpDown_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_JumpInPlaceLeftRight_Step0
	.4byte MovementAction_JumpInPlaceLeftRight_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_JumpInPlaceRightLeft_Step0
	.4byte MovementAction_JumpInPlaceRightLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_FaceOriginalDirection_Step0
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_NurseJoyBowDown_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_EnableJumpLandingGroundEffect_Step0
	.4byte sub_08095E28
	.4byte MovementAction_DisableJumpLandingGroundEffect_Step0
	.4byte sub_08095E28
	.4byte MovementAction_DisableAnimation_Step0
	.4byte sub_08095E28
	.4byte MovementAction_RestoreAnimation_Step0
	.4byte sub_08095E28
	.4byte MovementAction_SetInvisible_Step0
	.4byte sub_08095E28
	.4byte MovementAction_SetVisible_Step0
	.4byte sub_08095E28
	.4byte MovementAction_EmoteExclamationMark_Step0
	.4byte sub_08095E28
	.4byte MovementAction_EmoteQuestionMark_Step0
	.4byte sub_08095E28
	.4byte MovementAction_EmoteHeart_Step0
	.4byte sub_08095E28
	.4byte MovementAction_RevealTrainer_Step0
	.4byte MovementAction_RevealTrainer_Step1
	.4byte sub_08095E28
	.4byte MovementAction_RockSmashBreak_Step0
	.4byte MovementAction_RockSmashBreak_Step1
	.4byte MovementAction_RockSmashBreak_Step2
	.4byte sub_08095E28
	.4byte MovementAction_CutTree_Step0
	.4byte MovementAction_CutTree_Step1
	.4byte MovementAction_CutTree_Step2
	.4byte sub_08095E28
	.4byte MovementAction_SetFixedPriority_Step0
	.4byte sub_08095E28
	.4byte MovementAction_ClearFixedPriority_Step0
	.4byte sub_08095E28
	.4byte MovementAction_InitAffineAnim_Step0
	.4byte sub_08095E28
	.4byte MovementAction_ClearAffineAnim_Step0
	.4byte sub_08095E28
	.4byte MovementAction_Unknown1_Step0
	.4byte sub_08095E28
	.4byte MovementAction_Unknown2_Step0
	.4byte sub_08095E28
	.4byte MovementAction_WalkDownStartAffine_Step0
	.4byte MovementAction_WalkDownStartAffine_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkDownAffine_Step0
	.4byte MovementAction_WalkDownAffine_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkLeftAffine_Step0
	.4byte MovementAction_WalkLeftAffine_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_WalkRightAffine_Step0
	.4byte MovementAction_WalkRightAffine_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroWheelieFaceDown_Step0
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroWheelieFaceUp_Step0
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroWheelieFaceLeft_Step0
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroWheelieFaceRight_Step0
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroPopWheelieDown_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroPopWheelieUp_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroPopWheelieLeft_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroPopWheelieRight_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroEndWheelieFaceDown_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroEndWheelieFaceUp_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
	.4byte sub_08095388
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroEndWheelieFaceRight_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_UnusedAcroActionDown_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_UnusedAcroActionUp_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_UnusedAcroActionLeft_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_UnusedAcroActionRight_Step0
	.4byte MovementAction_WaitSpriteAnim
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_Figure8_Step0
	.4byte sub_080954D4
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroWheelieHopFaceDown_Step0
	.4byte MovementAction_AcroWheelieHopFaceDown_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroWheelieHopFaceUp_Step0
	.4byte MovementAction_AcroWheelieHopFaceUp_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroWheelieHopFaceLeft_Step0
	.4byte MovementAction_AcroWheelieHopFaceLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroWheelieHopFaceRight_Step0
	.4byte MovementAction_AcroWheelieHopFaceRight_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroWheelieHopDown_Step0
	.4byte MovementAction_AcroWheelieHopDown_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroWheelieHopUp_Step0
	.4byte MovementAction_AcroWheelieHopUp_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroWheelieHopLeft_Step0
	.4byte MovementAction_AcroWheelieHopLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroWheelieHopRight_Step0
	.4byte MovementAction_AcroWheelieHopRight_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroWheelieJumpDown_Step0
	.4byte MovementAction_AcroWheelieJumpDown_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroWheelieJumpUp_Step0
	.4byte MovementAction_AcroWheelieJumpUp_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroWheelieJumpLeft_Step0
	.4byte MovementAction_AcroWheelieJumpLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroWheelieJumpRight_Step0
	.4byte MovementAction_AcroWheelieJumpRight_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroWheelieInPlaceDown_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroWheelieInPlaceUp_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroWheelieInPlaceLeft_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroWheelieInPlaceRight_Step0
	.4byte MovementAction_WalkInPlace_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte sub_08095A70
	.4byte MovementAction_AcroPopWheelieMoveDown_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte sub_08095AB0
	.4byte MovementAction_AcroPopWheelieMoveUp_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte sub_08095AF0
	.4byte MovementAction_AcroPopWheelieMoveLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte sub_08095B30
	.4byte MovementAction_AcroPopWheelieMoveRight_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroWheelieMoveDown_Step0
	.4byte MovementAction_AcroWheelieMoveDown_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroWheelieMoveUp_Step0
	.4byte MovementAction_AcroWheelieMoveUp_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroWheelieMoveLeft_Step0
	.4byte MovementAction_AcroWheelieMoveLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroWheelieMoveRight_Step0
	.4byte MovementAction_AcroWheelieMoveRight_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroEndWheelieMoveDown_Step0
	.4byte MovementAction_AcroEndWheelieMoveDown_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroEndWheelieMoveUp_Step0
	.4byte MovementAction_AcroEndWheelieMoveUp_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroEndWheelieMoveLeft_Step0
	.4byte MovementAction_AcroEndWheelieMoveLeft_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_AcroEndWheelieMoveRight_Step0
	.4byte MovementAction_AcroEndWheelieMoveRight_Step1
	.4byte MovementAction_PauseSpriteAnim
	.4byte MovementAction_Levitate_Step0
	.4byte sub_08095E28
	.4byte MovementAction_StopLevitate_Step0
	.4byte sub_08095E28
	.4byte MovementAction_DestroyExtraTaskIfAtTop_Step0
	.4byte sub_08095E28
	.globl gUnknown_84E6A30
gUnknown_84E6A30: @ 0x084E6A30
	@ Resolved pointer table; original ROM range 0x4E6A30..0x4E6A37.
	.4byte PSR_T_BIT
	.4byte TYPE_DRAGON
	.globl gUnknown_84E6A38
gUnknown_84E6A38: @ 0x084E6A38
	.4byte MetatileBehavior_IsTallGrass
	.4byte MetatileBehavior_IsLongGrass_Duplicate
	.4byte MetatileBehavior_IsPuddle
	.4byte MetatileBehavior_IsSurfableWaterOrUnderwater
	.4byte MetatileBehavior_IsShallowFlowingWater
	.4byte MetatileBehavior_IsATile
	@ pret/pokeemerald-jp direct xref for 0x084E6A50: event_object_movement.s: GetGroundEffectFlags_JumpLanding
	.globl gEventObjectMovementData_084E6A50
gEventObjectMovementData_084E6A50:
	.globl gUnknown_84E6A50
gUnknown_84E6A50: @ 0x084E6A50
	@ analyzed canonical ROM range 0x084E6A50-0x084E6A67
sAnalyzedData_084E6A50: @ 0x084E6A50
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x00, 0x10, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00
	.byte 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00
	.globl gUnknown_84E6A68
gUnknown_84E6A68: @ 0x084E6A68
	.4byte MetatileBehavior_IsJumpSouth
	.4byte MetatileBehavior_IsJumpNorth
	.4byte MetatileBehavior_IsJumpWest
	.4byte MetatileBehavior_IsJumpEast
	@ pret/pokeemerald-jp direct xref for 0x084E6A78: event_object_movement.s: SetObjectSubpriorityByZCoord
	.globl gEventObjectMovementData_084E6A78
gEventObjectMovementData_084E6A78:
	.globl gUnknown_84E6A78
gUnknown_84E6A78: @ 0x084E6A78
	@ analyzed canonical ROM range 0x084E6A78-0x084E6A87
sAnalyzedData_084E6A78: @ 0x084E6A78
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x73, 0x73, 0x53, 0x73, 0x53, 0x73, 0x53, 0x73, 0x53, 0x73, 0x53, 0x73, 0x53, 0x00, 0x00, 0x73
	@ pret/pokeemerald-jp direct xref for 0x084E6A88: event_object_movement.s: InitObjectPriorityByZCoord, UpdateEventObjectZCoordAndPriority, sub_08096718
	.globl gEventObjectMovementData_084E6A88
gEventObjectMovementData_084E6A88:
	.globl gUnknown_84E6A88
gUnknown_84E6A88: @ 0x084E6A88
	@ analyzed canonical ROM range 0x084E6A88-0x084E6A97
sAnalyzedData_084E6A88: @ 0x084E6A88
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0202, 0x0202, 0x0201, 0x0201, 0x0201, 0x0201, 0x0001, 0x0200
	@ pret/pokeemerald-jp direct xref for 0x084E6A98: event_object_movement.s: InitObjectPriorityByZCoord, UpdateEventObjectZCoordAndPriority
	.globl gEventObjectMovementData_084E6A98
gEventObjectMovementData_084E6A98:
	.globl gUnknown_84E6A98
gUnknown_84E6A98: @ 0x084E6A98
	@ analyzed canonical ROM range 0x084E6A98-0x084E6AA7
sAnalyzedData_084E6A98: @ 0x084E6A98
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0101, 0x0101, 0x0102, 0x0102, 0x0102, 0x0102, 0x0002, 0x0100
	.globl gUnknown_84E6AA8
gUnknown_84E6AA8: @ 0x084E6AA8
	.4byte DoTracksGroundEffect_None
	.4byte DoTracksGroundEffect_Footprints
	.4byte DoTracksGroundEffect_BikeTireTracks
	@ pret/pokeemerald-jp direct xref for 0x084E6AB4: event_object_movement.s: DoTracksGroundEffect_Footprints
	.globl gEventObjectMovementData_084E6AB4
gEventObjectMovementData_084E6AB4:
	.globl gUnknown_84E6AB4
gUnknown_84E6AB4: @ 0x084E6AB4
	@ analyzed canonical ROM range 0x084E6AB4-0x084E6AB7
sAnalyzedData_084E6AB4: @ 0x084E6AB4
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0D, 0x00, 0x18, 0x00
	@ pret/pokeemerald-jp direct xref for 0x084E6AB8: event_object_movement.s: DoTracksGroundEffect_BikeTireTracks
	.globl gEventObjectMovementData_084E6AB8
gEventObjectMovementData_084E6AB8:
	.globl gUnknown_84E6AB8
gUnknown_84E6AB8: @ 0x084E6AB8
	@ analyzed canonical ROM range 0x084E6AB8-0x084E6AC7
sAnalyzedData_084E6AB8: @ 0x084E6AB8
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0201, 0x0807, 0x0201, 0x0506, 0x0805, 0x0403, 0x0706, 0x0403
	.globl gUnknown_84E6AC8
gUnknown_84E6AC8: @ 0x084E6AC8
	.4byte GroundEffect_SpawnOnTallGrass
	.4byte GroundEffect_StepOnTallGrass
	.4byte GroundEffect_SpawnOnLongGrass
	.4byte GroundEffect_StepOnLongGrass
	.4byte GroundEffect_WaterReflection
	.4byte GroundEffect_IceReflection
	.4byte GroundEffect_FlowingWater
	.4byte GroundEffect_SandTracks
	.4byte sub_08096984
	.4byte sub_08096A54
	.4byte GroundEffect_StepOnPuddle
	.4byte GroundEffect_SandHeap
	.4byte GroundEffect_JumpOnTallGrass
	.4byte GroundEffect_JumpOnLongGrass
	.4byte GroundEffect_JumpOnShallowWater
	.4byte GroundEffect_JumpOnWater
	.4byte GroundEffect_JumpLandingDust
	.4byte GroundEffect_ShortGrass
	.4byte GroundEffect_HotSprings
	.4byte GroundEffect_Seaweed
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step1
	.4byte Step2
	.4byte Step2
	.4byte Step2
	.4byte Step2
	.4byte Step2
	.4byte Step2
	.4byte Step2
	.4byte Step2
	.4byte Step2
	.4byte Step3
	.4byte Step3
	.4byte Step2
	.4byte Step3
	.4byte Step3
	.4byte Step4
	.4byte Step4
	.4byte Step4
	.4byte Step4
	.4byte Step8
	.4byte Step8
	@ pret/pokeemerald-jp direct xref for 0x084E6BA8: event_object_movement.s: obj_npc_ministep
	.globl gEventObjectMovementData_084E6BA8
gEventObjectMovementData_084E6BA8:
	.globl gUnknown_84E6BA8
gUnknown_84E6BA8: @ 0x084E6BA8
	@ confirmed contiguous ROM pointer table: 5 entries from this address
sPointerTable_084E6BA8:
	@ analyzed canonical ROM range 0x084E6BA8-0x084E6BBB
sAnalyzedData_084E6BA8: @ 0x084E6BA8
	@ pointer/nullable table
	.4byte 0x084E6B18 @ +0x0
	.4byte 0x084E6B58 @ +0x4
	.4byte 0x084E6B78 @ +0x8
	.4byte 0x084E6B90 @ +0xC
	.4byte 0x084E6BA0 @ +0x10
	@ pret/pokeemerald-jp direct xref for 0x084E6BBC: event_object_movement.s: obj_npc_ministep
	.globl gEventObjectMovementData_084E6BBC
gEventObjectMovementData_084E6BBC:
	.globl gUnknown_84E6BBC
gUnknown_84E6BBC: @ 0x084E6BBC
	@ analyzed canonical ROM range 0x084E6BBC-0x084E6BC5
sAnalyzedData_084E6BBC: @ 0x084E6BBC
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0010, 0x0008, 0x0006, 0x0004, 0x0002
	@ pret/pokeemerald-jp direct xref for 0x084E6BC6: event_object_movement.s: sub_080970AC
	.globl gEventObjectMovementData_084E6BC6
gEventObjectMovementData_084E6BC6:
	.globl gUnknown_84E6BC6
gUnknown_84E6BC6: @ 0x084E6BC6
	@ analyzed canonical ROM range 0x084E6BC6-0x084E6C0D
sAnalyzedData_084E6BC6: @ 0x084E6BC6
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0201, 0x0202, 0x0202, 0x0202, 0x0202, 0x0102, 0x0202, 0x0201
	.2byte 0x0102, 0x0202, 0x0201, 0x0101, 0x0102, 0x0201, 0x0101, 0x0102
	.2byte 0x0201, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101
	.2byte 0x0100, 0x0101, 0x0100, 0x0001, 0x0001, 0x0001, 0x0001, 0x0000
	.2byte 0x0100, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x084E6C0E: event_object_movement.s: sub_08097098
	.globl gEventObjectMovementData_084E6C0E
gEventObjectMovementData_084E6C0E:
	.globl gUnknown_84E6C0E
gUnknown_84E6C0E: @ 0x084E6C0E
	@ analyzed canonical ROM range 0x084E6C0E-0x084E6C87
sAnalyzedData_084E6C0E: @ 0x084E6C0E
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00
	.byte 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00
	.byte 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xFA, 0xF8, 0xF6, 0xF5, 0xF4, 0xF4, 0xF4
	.byte 0xF5, 0xF6, 0xF7, 0xF8, 0xFA, 0xFC, 0x00, 0x00, 0x00, 0xFE, 0xFD, 0xFC, 0xFB, 0xFA, 0xFA, 0xFA
	.byte 0xFB, 0xFB, 0xFC, 0xFD, 0xFE, 0x00, 0x00, 0x00, 0xFE, 0xFC, 0xFA, 0xF8, 0xF7, 0xF6, 0xF6, 0xF6
	.byte 0xF7, 0xF8, 0xFA, 0xFB, 0xFD, 0xFE, 0x00, 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x084E6C88: event_object_movement.s: sub_08097190
	.globl gEventObjectMovementData_084E6C88
gEventObjectMovementData_084E6C88:
	.globl gUnknown_84E6C88
gUnknown_84E6C88: @ 0x084E6C88
	@ analyzed canonical ROM range 0x084E6C88-0x084E6C93
sAnalyzedData_084E6C88: @ 0x084E6C88
	@ pointer/nullable table
	.4byte 0x084E6C56 @ +0x0
	.4byte 0x084E6C66 @ +0x4
	.4byte 0x084E6C76 @ +0x8
	@ pret/pokeemerald-jp direct xref for 0x084E6C94: event_object_movement.s: sub_080971CC
	.globl gEventObjectMovementData_084E6C94
gEventObjectMovementData_084E6C94:
	.globl gUnknown_84E6C94
gUnknown_84E6C94: @ 0x084E6C94
	@ analyzed canonical ROM range 0x084E6C94-0x084E6C99
sAnalyzedData_084E6C94: @ 0x084E6C94
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x10, 0x00, 0x10, 0x00, 0x20, 0x00
	@ pret/pokeemerald-jp direct xref for 0x084E6C9A: event_object_movement.s: sub_080971CC
	.globl gEventObjectMovementData_084E6C9A
gEventObjectMovementData_084E6C9A:
	.globl gUnknown_84E6C9A
gUnknown_84E6C9A: @ 0x084E6C9A
	@ analyzed canonical ROM range 0x084E6C9A-0x084E6C9D
sAnalyzedData_084E6C9A: @ 0x084E6C9A
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x00, 0x00, 0x01, 0x00
	@ pret/pokeemerald-jp direct xref for 0x084E6C9E: event_object_movement.s: sub_08097254
	.globl gEventObjectMovementData_084E6C9E
gEventObjectMovementData_084E6C9E:
	.globl gUnknown_84E6C9E
gUnknown_84E6C9E: @ 0x084E6C9E
	@ analyzed canonical ROM range 0x084E6C9E-0x084E6CA3
sAnalyzedData_084E6C9E: @ 0x084E6C9E
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x20, 0x00, 0x20, 0x00, 0x40, 0x00
	@ pret/pokeemerald-jp direct xref for 0x084E6CA4: event_object_movement.s: sub_08097254
	.globl gEventObjectMovementData_084E6CA4
gEventObjectMovementData_084E6CA4:
	.globl gUnknown_84E6CA4
gUnknown_84E6CA4: @ 0x084E6CA4
	@ analyzed canonical ROM range 0x084E6CA4-0x084E6CA7
sAnalyzedData_084E6CA4: @ 0x084E6CA4
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x01, 0x01, 0x02, 0x00
	@ pret/pokeemerald-jp direct xref for 0x084E6CA8: event_object_movement.s: sub_080976D8
	.globl gEventObjectMovementData_084E6CA8
gEventObjectMovementData_084E6CA8:
	.globl gUnknown_84E6CA8
gUnknown_84E6CA8: @ 0x084E6CA8
	@ analyzed canonical ROM range 0x084E6CA8-0x084E6CB3
sAnalyzedData_084E6CA8: @ 0x084E6CA8
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x65, 0x76, 0x6F, 0x62, 0x6A, 0x6D, 0x76, 0x2E, 0x63, 0x00, 0x00, 0x00
	.globl gUnknown_84E6CB4
gUnknown_84E6CB4: @ 0x084E6CB4
	@ Resolved pointer table; original ROM range 0x4E6CB4..0x4E6CDF.
	.4byte MAP_NUM_ROUTE133
	.4byte MovementAction_StoreAndLockAnim_Step0
	.4byte sub_08095E28
	.4byte MovementAction_FreeAndUnlockAnim_Step0
	.4byte sub_08095E28
	.4byte MovementAction_FlyUp_Step0
	.4byte MovementAction_FlyUp_Step1
	.4byte MovementAction_Finish
	.4byte MovementAction_FlyDown_Step0
	.4byte MovementAction_FlyDown_Step1
	.4byte MovementAction_Finish
	@ pret/pokeemerald-jp direct xref for 0x084E6CE0: save_failed_screen.s: CB2_SaveFailedScreen
	.globl gSaveFailedScreenData_084E6CE0
gSaveFailedScreenData_084E6CE0:
	.globl gUnknown_84E6CE0
gUnknown_84E6CE0: @ 0x084E6CE0
	@ analyzed canonical ROM range 0x084E6CE0-0x084E6F3E
sAnalyzedData_084E6CE0: @ 0x084E6CE0
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x10, 0x51, 0x66, 0x66, 0x10, 0x34, 0x33, 0x33
	.byte 0x10, 0x32, 0x33, 0x33, 0x10, 0x32, 0x33, 0x87, 0x10, 0x32, 0x73, 0xEE, 0x10, 0x32, 0x83, 0xEE
	.byte 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x66, 0x66, 0x66, 0x66, 0x33, 0x33, 0x33, 0x33
	.byte 0x33, 0x33, 0x33, 0x33, 0x88, 0x88, 0x88, 0x88, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE
	.byte 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x00, 0x66, 0x66, 0x15, 0x01, 0x33, 0x33, 0x43, 0x01
	.byte 0x33, 0x33, 0x23, 0x01, 0x78, 0x33, 0x23, 0x01, 0xEE, 0x37, 0x23, 0x01, 0xEE, 0x38, 0x23, 0x01
	.byte 0x10, 0x32, 0x83, 0xEE, 0x10, 0x32, 0x83, 0xEE, 0x10, 0x32, 0x83, 0xEE, 0x10, 0x32, 0x83, 0xEE
	.byte 0x10, 0x32, 0x83, 0xEE, 0x10, 0x32, 0x83, 0xEE, 0x10, 0x32, 0x83, 0xEE, 0x10, 0x32, 0x83, 0xEE
	.byte 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE
	.byte 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE
	.byte 0xEE, 0x38, 0x23, 0x01, 0xEE, 0x38, 0x23, 0x01, 0xEE, 0x38, 0x23, 0x01, 0xEE, 0x38, 0x23, 0x01
	.byte 0xEE, 0x38, 0x23, 0x01, 0xEE, 0x38, 0x23, 0x01, 0xEE, 0x38, 0x23, 0x01, 0xEE, 0x38, 0x23, 0x01
	.byte 0x10, 0x32, 0x83, 0xEE, 0x10, 0x32, 0x73, 0xEE, 0x10, 0x32, 0x33, 0x87, 0x10, 0x42, 0x33, 0x33
	.byte 0x10, 0x52, 0x34, 0x33, 0x10, 0x21, 0x22, 0x22, 0x00, 0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00
	.byte 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x88, 0x88, 0x88, 0x88, 0x33, 0x33, 0x33, 0x33
	.byte 0x33, 0x33, 0x33, 0x33, 0x22, 0x22, 0x22, 0x22, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00
	.byte 0xEE, 0x38, 0x23, 0x01, 0xEE, 0x37, 0x23, 0x01, 0x78, 0x33, 0x23, 0x01, 0x33, 0x33, 0x24, 0x01
	.byte 0x33, 0x43, 0x25, 0x01, 0x22, 0x22, 0x12, 0x01, 0x11, 0x11, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x11, 0x11, 0xEE, 0x1E, 0xEE, 0xEE
	.byte 0xEE, 0xE1, 0x1E, 0x11, 0xEE, 0xE1, 0x11, 0x11, 0xEE, 0xE1, 0x11, 0xEE, 0xEE, 0xE1, 0xE1, 0xEE
	.byte 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x11, 0x11, 0x11, 0x11, 0xEE, 0xEE, 0xEE, 0xEE
	.byte 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE
	.byte 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x11, 0x11, 0xEE, 0xEE, 0xEE, 0xEE, 0xE1, 0xEE
	.byte 0x11, 0xE1, 0x1E, 0xEE, 0x11, 0x11, 0x1E, 0xEE, 0xEE, 0x1E, 0x1E, 0xEE, 0xEE, 0x1E, 0x1E, 0xEE
	.byte 0xEE, 0xE1, 0xE1, 0xEE, 0xEE, 0xE1, 0xE1, 0xEE, 0xEE, 0xE1, 0xE1, 0xEE, 0xEE, 0xE1, 0xE1, 0xEE
	.byte 0xEE, 0xE1, 0xE1, 0xEE, 0xEE, 0xE1, 0xE1, 0xEE, 0xEE, 0xE1, 0xE1, 0xEE, 0xEE, 0xE1, 0xE1, 0xEE
	.byte 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE
	.byte 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE
	.byte 0xEE, 0x1E, 0x1E, 0xEE, 0xEE, 0x1E, 0x1E, 0xEE, 0xEE, 0x1E, 0x1E, 0xEE, 0xEE, 0x1E, 0x1E, 0xEE
	.byte 0xEE, 0x1E, 0x1E, 0xEE, 0xEE, 0x1E, 0x1E, 0xEE, 0xEE, 0x1E, 0x1E, 0xEE, 0xEE, 0x1E, 0x1E, 0xEE
	.byte 0xEE, 0xE1, 0xE1, 0xEE, 0xEE, 0xE1, 0x11, 0xEE, 0xEE, 0xE1, 0x1E, 0x11, 0xEE, 0x11, 0xEE, 0xEE
	.byte 0xEE, 0x1E, 0x11, 0x11, 0xEE, 0xEE, 0x11, 0x11, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE
	.byte 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x11, 0x11, 0x11, 0x11, 0xEE, 0xEE, 0xEE, 0xEE
	.byte 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE
	.byte 0xEE, 0x1E, 0x1E, 0xEE, 0xEE, 0x11, 0x1E, 0xEE, 0x11, 0xE1, 0x1E, 0xEE, 0xEE, 0xEE, 0x11, 0xEE
	.byte 0x11, 0x11, 0xE1, 0xEE, 0x11, 0x11, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE
	.byte 0x00, 0xBB, 0x0B, 0x00, 0xB0, 0xA9, 0xFA, 0x00, 0x9B, 0xBB, 0xDA, 0xDF, 0x9B, 0xEB, 0xDF, 0xDF
	.byte 0x9B, 0xF9, 0xED, 0xDF, 0xB0, 0xEE, 0xFE, 0xED, 0x00, 0xFF, 0xDF, 0xED, 0x00, 0xDD, 0xED
