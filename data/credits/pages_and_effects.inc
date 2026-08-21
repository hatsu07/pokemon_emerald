	@ pret/pokeemerald-jp direct xref for 0x085C7590: credits.s: sub_08175CAC
	@ Credits pages: 45 pages x 5 CreditsEntry pointers
	.globl sCreditsPages
sCreditsPages: @ 0x085C7590
	@ analyzed canonical ROM range 0x085C7590-0x085C7913
	credits_page sCreditsEntry_EmptyString, sCreditsEntry_PkmnEmeraldVersion, sCreditsEntry_Credits, sCreditsEntry_EmptyString, sCreditsEntry_EmptyString @ page 00
	credits_page sCreditsEntry_EmptyString, sCreditsEntry_Director, sCreditsEntry_ShigekiMorimoto, sCreditsEntry_EmptyString, sCreditsEntry_EmptyString @ page 01
	credits_page sCreditsEntry_EmptyString, sCreditsEntry_ArtDirector, sCreditsEntry_KenSugimori, sCreditsEntry_EmptyString, sCreditsEntry_EmptyString @ page 02
	credits_page sCreditsEntry_EmptyString, sCreditsEntry_WorldDirector, sCreditsEntry_JunichiMasuda, sCreditsEntry_EmptyString, sCreditsEntry_EmptyString @ page 03
	credits_page sCreditsEntry_LeadProgrammer, sCreditsEntry_HisashiSogabe, sCreditsEntry_LeadGraphicArtist, sCreditsEntry_MotofumiFujiwara, sCreditsEntry_EmptyString @ page 04
	credits_page sCreditsEntry_Programmers, sCreditsEntry_HisashiSogabe, sCreditsEntry_TomomichiOhta, sCreditsEntry_NozomuSaito, sCreditsEntry_EmptyString @ page 05
	credits_page sCreditsEntry_Programmers, sCreditsEntry_AkitoMori, sCreditsEntry_HiroyukiNakamura, sCreditsEntry_MasaoTaya, sCreditsEntry_EmptyString @ page 06
	credits_page sCreditsEntry_Programmers, sCreditsEntry_SatoshiNohara, sCreditsEntry_MiyukiIwasawa, sCreditsEntry_YoshinoriMatsuda, sCreditsEntry_KeitaKagaya @ page 07
	credits_page sCreditsEntry_Programmers, sCreditsEntry_TetsuyaWatanabe, sCreditsEntry_SosukeTamada, sCreditsEntry_TakenoriOhta, sCreditsEntry_EmptyString @ page 08
	credits_page sCreditsEntry_EmptyString, sCreditsEntry_GraphicDesigners, sCreditsEntry_MotofumiFujiwara, sCreditsEntry_SatoshiOhta, sCreditsEntry_EmptyString @ page 09
	credits_page sCreditsEntry_GraphicDesigners, sCreditsEntry_KenkichiToyama, sCreditsEntry_AsukaIwashita, sCreditsEntry_TakaoUnno, sCreditsEntry_EmptyString @ page 10
	credits_page sCreditsEntry_GraphicDesigners, sCreditsEntry_KenSugimori, sCreditsEntry_HironobuYoshida, sCreditsEntry_AimiTomita, sCreditsEntry_KanakoEo @ page 11
	credits_page sCreditsEntry_MusicComposition, sCreditsEntry_GoIchinose, sCreditsEntry_JunichiMasuda, sCreditsEntry_MorikazuAoki, sCreditsEntry_HitomiSato @ page 12
	credits_page sCreditsEntry_EmptyString, sCreditsEntry_SoundEffectsAndPkmnVoices, sCreditsEntry_GoIchinose, sCreditsEntry_MorikazuAoki, sCreditsEntry_EmptyString @ page 13
	credits_page sCreditsEntry_GameDesigners, sCreditsEntry_ShigekiMorimoto, sCreditsEntry_TeruyukiShimoyamada, sCreditsEntry_TakeshiKawachimaru, sCreditsEntry_AkihitoTomisawa @ page 14
	credits_page sCreditsEntry_GameDesigners, sCreditsEntry_SuguruNakatsui, sCreditsEntry_TetsujiOhta, sCreditsEntry_HitomiSato, sCreditsEntry_KenjiMatsushima @ page 15
	credits_page sCreditsEntry_GameDesigners, sCreditsEntry_JunichiMasuda, sCreditsEntry_KojiNishino, sCreditsEntry_ShigeruOhmori, sCreditsEntry_TadashiTakahashi @ page 16
	credits_page sCreditsEntry_ScenarioPlot, sCreditsEntry_AkihitoTomisawa, sCreditsEntry_JunichiMasuda, sCreditsEntry_KojiNishino, sCreditsEntry_EmptyString @ page 17
	credits_page sCreditsEntry_Scenario, sCreditsEntry_AkihitoTomisawa, sCreditsEntry_HitomiSato, sCreditsEntry_ToshinobuMatsumiya, sCreditsEntry_EmptyString @ page 18
	credits_page sCreditsEntry_ScriptDesigners, sCreditsEntry_TomomichiOhta, sCreditsEntry_SatoshiNohara, sCreditsEntry_EmptyString, sCreditsEntry_EmptyString @ page 19
	credits_page sCreditsEntry_MapDesigners, sCreditsEntry_SuguruNakatsui, sCreditsEntry_TeruyukiShimoyamada, sCreditsEntry_ShigeruOhmori, sCreditsEntry_TetsujiOhta @ page 20
	credits_page sCreditsEntry_EmptyString, sCreditsEntry_BattleFrontierData, sCreditsEntry_TetsujiOhta, sCreditsEntry_EmptyString, sCreditsEntry_EmptyString @ page 21
	credits_page sCreditsEntry_ParametricDesigners, sCreditsEntry_TeruyukiShimoyamada, sCreditsEntry_ShigekiMorimoto, sCreditsEntry_TetsujiOhta, sCreditsEntry_KojiNishino @ page 22
	credits_page sCreditsEntry_EmptyString, sCreditsEntry_PokedexText, sCreditsEntry_KenjiMatsushima, sCreditsEntry_EmptyString, sCreditsEntry_EmptyString @ page 23
	credits_page sCreditsEntry_EnvAndToolPgrms, sCreditsEntry_HisashiSogabe, sCreditsEntry_SosukeTamada, sCreditsEntry_HiroyukiNakamura, sCreditsEntry_AkitoMori @ page 24
	credits_page sCreditsEntry_PkmnDesigners, sCreditsEntry_KenSugimori, sCreditsEntry_MotofumiFujiwara, sCreditsEntry_ShigekiMorimoto, sCreditsEntry_EmptyString @ page 25
	credits_page sCreditsEntry_PkmnDesigners, sCreditsEntry_HironobuYoshida, sCreditsEntry_SatoshiOhta, sCreditsEntry_AsukaIwashita, sCreditsEntry_EmptyString @ page 26
	credits_page sCreditsEntry_PkmnDesigners, sCreditsEntry_TakaoUnno, sCreditsEntry_KanakoEo, sCreditsEntry_AimiTomita, sCreditsEntry_EmptyString @ page 27
	credits_page sCreditsEntry_PkmnDesigners, sCreditsEntry_AtsukoNishida, sCreditsEntry_MuneoSaito, sCreditsEntry_RenaYoshikawa, sCreditsEntry_JunOkutani @ page 28
	credits_page sCreditsEntry_EmptyString, sCreditsEntry_SupportProgrammers, sCreditsEntry_SatoshiMitsuhara, sCreditsEntry_DaisukeHoshino, sCreditsEntry_EmptyString @ page 29
	credits_page sCreditsEntry_EmptyString, sCreditsEntry_NCLProductTesting, sCreditsEntry_NCLSuperMarioClub, sCreditsEntry_EmptyString, sCreditsEntry_EmptyString @ page 30
	credits_page sCreditsEntry_EmptyString, sCreditsEntry_SpecialThanks, sCreditsEntry_KenjiTominaga, sCreditsEntry_HirokiEnomoto, sCreditsEntry_EmptyString @ page 31
	credits_page sCreditsEntry_SpecialThanks, sCreditsEntry_HiroNakamura, sCreditsEntry_HiroyukiUesugi, sCreditsEntry_TerukiMurakawa, sCreditsEntry_EmptyString @ page 32
	credits_page sCreditsEntry_SpecialThanks, sCreditsEntry_KazuyaSuyama, sCreditsEntry_KenjiroIto, sCreditsEntry_MichikoTakizawa, sCreditsEntry_MakikoTakada @ page 33
	credits_page sCreditsEntry_SpecialThanks, sCreditsEntry_MikikoOhhashi, sCreditsEntry_TakanaoKondo, sCreditsEntry_RuiKawaguchi, sCreditsEntry_EmptyString @ page 34
	credits_page sCreditsEntry_SpecialThanks, sCreditsEntry_TakahiroOhnishi, sCreditsEntry_NorihideOkamura, sCreditsEntry_ShunsukeKohori, sCreditsEntry_EmptyString @ page 35
	credits_page sCreditsEntry_EmptyString, sCreditsEntry_BrailleCodeCheck, sCreditsEntry_JapanBrailleLibrary, sCreditsEntry_EmptyString, sCreditsEntry_EmptyString @ page 36
	credits_page sCreditsEntry_InfoSupervisors, sCreditsEntry_KazuyukiTerada, sCreditsEntry_YuriSakurai, sCreditsEntry_YumiFunasaka, sCreditsEntry_NaokoYanase @ page 37
	credits_page sCreditsEntry_EmptyString, sCreditsEntry_Artwork, sCreditsEntry_SachikoNakamichi, sCreditsEntry_FujikoNomura, sCreditsEntry_EmptyString @ page 38
	credits_page sCreditsEntry_Coordinators, sCreditsEntry_KazukiYoshihara, sCreditsEntry_AkiraKinashi, sCreditsEntry_RetsujiNomoto, sCreditsEntry_EmptyString @ page 39
	credits_page sCreditsEntry_EmptyString, sCreditsEntry_TaskManagers, sCreditsEntry_AzusaTajima, sCreditsEntry_ShusakuEgami, sCreditsEntry_EmptyString @ page 40
	credits_page sCreditsEntry_Producers, sCreditsEntry_HiroyukiJinnai, sCreditsEntry_HitoshiYamagami, sCreditsEntry_GakujiNomoto, sCreditsEntry_HiroakiTsuru @ page 41
	credits_page sCreditsEntry_EmptyString, sCreditsEntry_ExecutiveDirector, sCreditsEntry_SatoshiTajiri, sCreditsEntry_EmptyString, sCreditsEntry_EmptyString @ page 42
	credits_page sCreditsEntry_EmptyString, sCreditsEntry_ExecProducers, sCreditsEntry_SatoruIwata, sCreditsEntry_EmptyString, sCreditsEntry_EmptyString @ page 43
	credits_page sCreditsEntry_EmptyString, sCreditsEntry_ExecProducers, sCreditsEntry_TsunekazIshihara, sCreditsEntry_EmptyString, sCreditsEntry_EmptyString @ page 44
	@ pret/pokeemerald-jp direct xref for 0x085C7914: credits.s: sub_0817544C
	.globl gCreditsData_085C7914
gCreditsData_085C7914: @ 0x085C7914
	@ analyzed canonical ROM range 0x085C7914-0x085C7917
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0xC8, 0x01, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085C7918: credits.s: sub_0817544C
	.globl gCreditsData_085C7918
gCreditsData_085C7918: @ 0x085C7918
	@ analyzed canonical ROM range 0x085C7918-0x085C7927
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x10 entries=8
	.2byte 0x0000, 0x1E09, 0x080C, 0x0001, 0x00FF, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085C7928: credits.s: sub_08176024
	.globl gCreditsData_085C7928
gCreditsData_085C7928: @ 0x085C7928
	@ analyzed canonical ROM range 0x085C7928-0x085C797B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x54 entries=42
	.2byte 0x2468, 0x2478, 0x2488, 0x0000, 0x0000, 0x0008, 0x0040, 0x0008
	.2byte 0x0080, 0x0008, 0x00C0, 0x0008, 0xFFFE, 0x0000, 0x0000, 0x0004
	.2byte 0x0040, 0x0004, 0x0080, 0x0004, 0x00C0, 0x0004, 0xFFFE, 0x0000
	.2byte 0x0100, 0x0004, 0x0140, 0x0004, 0x0180, 0x0004, 0xFFFF, 0x0000
	.2byte 0x0180, 0x001E, 0x0140, 0x001E, 0x0100, 0x001E, 0x0100, 0x001E
	.2byte 0xFFFF, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085C797C: credits.s: sub_081768B8
	.globl gCreditsData_085C797C
gCreditsData_085C797C: @ 0x085C797C
	@ analyzed canonical ROM range 0x085C797C-0x085C79BB
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x40 entries=32
	.2byte 0x7930, 0x085C, 0x7944, 0x085C, 0x7958, 0x085C, 0x7968, 0x085C
	.2byte 0x0000, 0x0008, 0x0040, 0x0008, 0x0080, 0x0008, 0x00C0, 0x0008
	.2byte 0xFFFE, 0x0000, 0x0000, 0x0004, 0x0040, 0x0004, 0x0080, 0x0004
	.2byte 0x00C0, 0x0004, 0xFFFE, 0x0000, 0x0000, 0x0004, 0xFFFF, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085C79BC: credits.s: sub_081768B8
	.globl gCreditsData_085C79BC
gCreditsData_085C79BC: @ 0x085C79BC
	@ analyzed canonical ROM range 0x085C79BC-0x085C79C7
	@ pointer/nullable table
	@ ANALYSIS: POINTER_TABLE entries=3 size=0xC
	.4byte 0x085C798C
	.4byte 0x085C79A0
	.4byte 0x085C79B4
	@ pret/pokeemerald-jp direct xref for 0x085C79C8: credits.s: sub_081757EC
	.globl gCreditsData_085C79C8
gCreditsData_085C79C8: @ 0x085C79C8
	@ analyzed canonical ROM range 0x085C79C8-0x085C79D7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x10 entries=8
	.2byte 0xC000, 0x0201, 0x1800, 0x03E9, 0x0000, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085C79D8: credits.s: sub_081757EC
	.globl gCreditsData_085C79D8
gCreditsData_085C79D8: @ 0x085C79D8
	@ analyzed canonical ROM range 0x085C79D8-0x085C7A13
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x3C entries=30
	.2byte 0xD800, 0x0201, 0x03E9, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x00A0, 0xC000, 0x0400, 0x0000, 0x0000, 0x0008, 0xFFFF, 0x0000
	.2byte 0x0040, 0x0008, 0xFFFF, 0x0000, 0x0080, 0x0008, 0xFFFF, 0x0000
	.2byte 0x79F0, 0x085C, 0x79F8, 0x085C, 0x7A00, 0x085C
	@ pret/pokeemerald-jp direct xref for 0x085C7A14: credits.s: sub_081770B0
	.globl gCreditsData_085C7A14
gCreditsData_085C7A14: @ 0x085C7A14
	@ analyzed canonical ROM range 0x085C7A14-0x085C7A2B
sSpriteTemplate_085C7A14: @ 0x085C7A14
	rodata_sprite_template 0x03E9, 0x03E9, 0x085C79E8, 0x085C7A08, 0, gDummySpriteAffineAnimTable, sub_08177144
