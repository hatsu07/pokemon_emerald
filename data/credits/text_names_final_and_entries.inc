	@ src/data/credits.h:183 sCreditsText_TomotakaKomura
	.globl sCreditsText_TomotakaKomura
sCreditsText_TomotakaKomura: @ 0x085C7112
	.string "こむら ともたか{EOS}"
	.if (. - sCreditsText_TomotakaKomura) > 0x9
	.error "sCreditsText_TomotakaKomura may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_TomotakaKomura) < 0x9
	.space 0x9 - (. - sCreditsText_TomotakaKomura)
	.endif

	@ src/data/credits.h:184 sCreditsText_MikikoOhhashi
	.globl sCreditsText_MikikoOhhashi
sCreditsText_MikikoOhhashi: @ 0x085C711B
	.string "おおはし みきこ{EOS}"
	.if (. - sCreditsText_MikikoOhhashi) > 0x9
	.error "sCreditsText_MikikoOhhashi may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_MikikoOhhashi) < 0x9
	.space 0x9 - (. - sCreditsText_MikikoOhhashi)
	.endif

	@ src/data/credits.h:185 sCreditsText_DaisukeHoshino
	.globl sCreditsText_DaisukeHoshino
sCreditsText_DaisukeHoshino: @ 0x085C7124
	.string "ほしの だいすけ{EOS}"
	.if (. - sCreditsText_DaisukeHoshino) > 0x9
	.error "sCreditsText_DaisukeHoshino may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_DaisukeHoshino) < 0x9
	.space 0x9 - (. - sCreditsText_DaisukeHoshino)
	.endif

	@ src/data/credits.h:186 sCreditsText_KenjiroIto
	.globl sCreditsText_KenjiroIto
sCreditsText_KenjiroIto: @ 0x085C712D
	.string "いとう けんじろう{EOS}"
	.if (. - sCreditsText_KenjiroIto) > 0xa
	.error "sCreditsText_KenjiroIto may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_KenjiroIto) < 0xa
	.space 0xa - (. - sCreditsText_KenjiroIto)
	.endif

	@ src/data/credits.h:187 sCreditsText_RuiKawaguchi
	.globl sCreditsText_RuiKawaguchi
sCreditsText_RuiKawaguchi: @ 0x085C7137
	.string "かわぐち るい{EOS}"
	.if (. - sCreditsText_RuiKawaguchi) > 0x8
	.error "sCreditsText_RuiKawaguchi may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_RuiKawaguchi) < 0x8
	.space 0x8 - (. - sCreditsText_RuiKawaguchi)
	.endif

	@ src/data/credits.h:188 sCreditsText_ShunsukeKohori
	.globl sCreditsText_ShunsukeKohori
sCreditsText_ShunsukeKohori: @ 0x085C713F
	.string "こほり しゅんすけ{EOS}"
	.if (. - sCreditsText_ShunsukeKohori) > 0xa
	.error "sCreditsText_ShunsukeKohori may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_ShunsukeKohori) < 0xa
	.space 0xa - (. - sCreditsText_ShunsukeKohori)
	.endif

	@ src/data/credits.h:189 sCreditsText_SachikoNakamichi
	.globl sCreditsText_SachikoNakamichi
sCreditsText_SachikoNakamichi: @ 0x085C7149
	.string "なかみち さちこ{EOS}"
	.if (. - sCreditsText_SachikoNakamichi) > 0x9
	.error "sCreditsText_SachikoNakamichi may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_SachikoNakamichi) < 0x9
	.space 0x9 - (. - sCreditsText_SachikoNakamichi)
	.endif

	@ src/data/credits.h:190 sCreditsText_FujikoNomura
	.globl sCreditsText_FujikoNomura
sCreditsText_FujikoNomura: @ 0x085C7152
	.string "のむら ふじこ{EOS}"
	.if (. - sCreditsText_FujikoNomura) > 0x8
	.error "sCreditsText_FujikoNomura may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_FujikoNomura) < 0x8
	.space 0x8 - (. - sCreditsText_FujikoNomura)
	.endif

	@ src/data/credits.h:191 sCreditsText_KazukiYoshihara
	.globl sCreditsText_KazukiYoshihara
sCreditsText_KazukiYoshihara: @ 0x085C715A
	.string "よしはら かずき{EOS}"
	.if (. - sCreditsText_KazukiYoshihara) > 0x9
	.error "sCreditsText_KazukiYoshihara may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_KazukiYoshihara) < 0x9
	.space 0x9 - (. - sCreditsText_KazukiYoshihara)
	.endif

	@ src/data/credits.h:192 sCreditsText_RetsujiNomoto
	.globl sCreditsText_RetsujiNomoto
sCreditsText_RetsujiNomoto: @ 0x085C7163
	.string "のもと れつじ{EOS}"
	.if (. - sCreditsText_RetsujiNomoto) > 0x8
	.error "sCreditsText_RetsujiNomoto may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_RetsujiNomoto) < 0x8
	.space 0x8 - (. - sCreditsText_RetsujiNomoto)
	.endif

	@ src/data/credits.h:193 sCreditsText_AzusaTajima
	.globl sCreditsText_AzusaTajima
sCreditsText_AzusaTajima: @ 0x085C716B
	.string "たじま あずさ{EOS}"
	.if (. - sCreditsText_AzusaTajima) > 0x8
	.error "sCreditsText_AzusaTajima may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_AzusaTajima) < 0x8
	.space 0x8 - (. - sCreditsText_AzusaTajima)
	.endif

	@ src/data/credits.h:194 sCreditsText_ShusakuEgami
	.globl sCreditsText_ShusakuEgami
sCreditsText_ShusakuEgami: @ 0x085C7173
	.string "えがみ しゅうさく{EOS}"
	.if (. - sCreditsText_ShusakuEgami) > 0xa
	.error "sCreditsText_ShusakuEgami may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_ShusakuEgami) < 0xa
	.space 0xa - (. - sCreditsText_ShusakuEgami)
	.endif
	@ Credits entry table
	@ 3-byte alignment padding before the 8-byte entries
	.byte 0, 0, 0
	.globl sCreditsText_EmptyString
	.set sCreditsText_EmptyString, sCreditsText_PkmnEmeraldVersion - 1
	credits_entry sCreditsEntry_EmptyString, 0, 0, sCreditsText_EmptyString @ 000 empty
	credits_entry sCreditsEntry_PkmnEmeraldVersion, 7, 1, sCreditsText_PkmnEmeraldVersion @ 001 title
	credits_entry sCreditsEntry_Credits, 11, 1, sCreditsText_Credits @ 002 title
	credits_entry sCreditsEntry_ExecutiveDirector, 8, 1, sCreditsText_ExecutiveDirector @ 003 title
	credits_entry sCreditsEntry_Director, 12, 1, sCreditsText_Director @ 004 title
	credits_entry sCreditsEntry_ArtDirector, 10, 1, sCreditsText_ArtDirector @ 005 title
	credits_entry sCreditsEntry_BattleDirector, 10, 1, sCreditsText_BattleDirector @ 006 title
	credits_entry sCreditsEntry_MainProgrammer, 10, 1, sCreditsText_MainProgrammer @ 007 title
	credits_entry sCreditsEntry_BattleSystemPgrms, 8, 1, sCreditsText_BattleSystemPgrms @ 008 title
	credits_entry sCreditsEntry_FieldSystemPgrms, 7, 1, sCreditsText_FieldSystemPgrms @ 009 title
	credits_entry sCreditsEntry_Programmers, 12, 1, sCreditsText_Programmers @ 010 title
	credits_entry sCreditsEntry_MainGraphicDesigner, 7, 1, sCreditsText_MainGraphicDesigner @ 011 title
	credits_entry sCreditsEntry_GraphicDesigners, 9, 1, sCreditsText_GraphicDesigners @ 012 title
	credits_entry sCreditsEntry_PkmnDesigners, 10, 1, sCreditsText_PkmnDesigners @ 013 title
	credits_entry sCreditsEntry_MusicComposition, 13, 1, gText_Rom_5C6D4E @ 014 title
	credits_entry sCreditsEntry_SoundEffectsAndPkmnVoices, 4, 1, sCreditsText_SoundEffectsAndPkmnVoices @ 015 title
	credits_entry sCreditsEntry_GameDesigners, 11, 1, sCreditsText_GameDesigners @ 016 title
	credits_entry sCreditsEntry_ScenarioPlot, 11, 1, sCreditsText_ScenarioPlot @ 017 title
	credits_entry sCreditsEntry_Scenario, 13, 1, sCreditsText_Scenario @ 018 title
	credits_entry sCreditsEntry_ScriptDesigners, 10, 1, sCreditsText_ScriptDesigners @ 019 title
	credits_entry sCreditsEntry_MapDesigners, 11, 1, sCreditsText_MapDesigners @ 020 title
	credits_entry sCreditsEntry_MapDataDesigners, 9, 1, sCreditsText_MapDataDesigners @ 021 title
	credits_entry sCreditsEntry_ParametricDesigners, 9, 1, sCreditsText_ParametricDesigners @ 022 title
	credits_entry sCreditsEntry_PokedexText, 11, 1, sCreditsText_PokedexText @ 023 title
	credits_entry sCreditsEntry_EnvAndToolPgrms, 6, 1, sCreditsText_EnvAndToolPgrms @ 024 title
	credits_entry sCreditsEntry_NCLProductTesting, 11, 1, sCreditsText_NCLProductTesting @ 025 title
	credits_entry sCreditsEntry_SpecialThanks, 10, 1, sCreditsText_SpecialThanks @ 026 title
	credits_entry sCreditsEntry_Coordinators, 11, 1, sCreditsText_Coordinators @ 027 title
	credits_entry sCreditsEntry_Producers, 11, 1, sCreditsText_Producers @ 028 title
	credits_entry sCreditsEntry_ExecProducers, 7, 1, sCreditsText_ExecProducers @ 029 title
	credits_entry sCreditsEntry_InfoSupervisors, 10, 1, sCreditsText_InfoSupervisors @ 030 title
	credits_entry sCreditsEntry_TaskManagers, 8, 1, sCreditsText_TaskManagers @ 031 title
	credits_entry sCreditsEntry_BrailleCodeCheck, 10, 1, sCreditsText_BrailleCodeCheck @ 032 title
	credits_entry sCreditsEntry_WorldDirector, 10, 1, sCreditsText_WorldDirector @ 033 title
	credits_entry sCreditsEntry_BattleFrontierData, 8, 1, sCreditsText_BattleFrontierData @ 034 title
	credits_entry sCreditsEntry_SupportProgrammers, 10, 1, sCreditsText_SupportProgrammers @ 035 title
	credits_entry sCreditsEntry_Artwork, 12, 1, sCreditsText_Artwork @ 036 title
	credits_entry sCreditsEntry_LeadProgrammer, 10, 1, sCreditsText_LeadProgrammer @ 037 title
	credits_entry sCreditsEntry_LeadGraphicArtist, 9, 1, sCreditsText_LeadGraphicArtist @ 038 title
	credits_entry sCreditsEntry_SatoshiTajiri, 11, 0, sCreditsText_SatoshiTajiri @ 039 name
	credits_entry sCreditsEntry_JunichiMasuda, 11, 0, sCreditsText_JunichiMasuda @ 040 name
	credits_entry sCreditsEntry_KenSugimori, 11, 0, sCreditsText_KenSugimori @ 041 name
	credits_entry sCreditsEntry_ShigekiMorimoto, 11, 0, sCreditsText_ShigekiMorimoto @ 042 name
	credits_entry sCreditsEntry_TetsuyaWatanabe, 11, 0, sCreditsText_TetsuyaWatanabe @ 043 name
	credits_entry sCreditsEntry_HisashiSogabe, 11, 0, sCreditsText_HisashiSogabe @ 044 name
	credits_entry sCreditsEntry_SosukeTamada, 11, 0, sCreditsText_SosukeTamada @ 045 name
	credits_entry sCreditsEntry_AkitoMori, 11, 0, sCreditsText_AkitoMori @ 046 name
	credits_entry sCreditsEntry_KeitaKagaya, 11, 0, sCreditsText_KeitaKagaya @ 047 name
	credits_entry sCreditsEntry_YoshinoriMatsuda, 11, 0, sCreditsText_YoshinoriMatsuda @ 048 name
	credits_entry sCreditsEntry_HiroyukiNakamura, 11, 0, sCreditsText_HiroyukiNakamura @ 049 name
	credits_entry sCreditsEntry_MasaoTaya, 11, 0, sCreditsText_MasaoTaya @ 050 name
	credits_entry sCreditsEntry_SatoshiNohara, 11, 0, sCreditsText_SatoshiNohara @ 051 name
	credits_entry sCreditsEntry_TomomichiOhta, 11, 0, sCreditsText_TomomichiOhta @ 052 name
	credits_entry sCreditsEntry_MiyukiIwasawa, 11, 0, sCreditsText_MiyukiIwasawa @ 053 name
	credits_entry sCreditsEntry_TakenoriOhta, 11, 0, sCreditsText_TakenoriOhta @ 054 name
	credits_entry sCreditsEntry_HironobuYoshida, 11, 0, sCreditsText_HironobuYoshida @ 055 name
	credits_entry sCreditsEntry_MotofumiFujiwara, 11, 0, sCreditsText_MotofumiFujiwara @ 056 name
	credits_entry sCreditsEntry_SatoshiOhta, 11, 0, sCreditsText_SatoshiOhta @ 057 name
	credits_entry sCreditsEntry_AsukaIwashita, 11, 0, sCreditsText_AsukaIwashita @ 058 name
	credits_entry sCreditsEntry_AimiTomita, 11, 0, sCreditsText_AimiTomita @ 059 name
	credits_entry sCreditsEntry_TakaoUnno, 11, 0, sCreditsText_TakaoUnno @ 060 name
	credits_entry sCreditsEntry_KanakoEo, 11, 0, sCreditsText_KanakoEo @ 061 name
	credits_entry sCreditsEntry_JunOkutani, 11, 0, sCreditsText_JunOkutani @ 062 name
	credits_entry sCreditsEntry_AtsukoNishida, 11, 0, sCreditsText_AtsukoNishida @ 063 name
	credits_entry sCreditsEntry_MuneoSaito, 11, 0, sCreditsText_MuneoSaito @ 064 name
	credits_entry sCreditsEntry_RenaYoshikawa, 11, 0, sCreditsText_RenaYoshikawa @ 065 name
	credits_entry sCreditsEntry_GoIchinose, 11, 0, sCreditsText_GoIchinose @ 066 name
	credits_entry sCreditsEntry_MorikazuAoki, 11, 0, sCreditsText_MorikazuAoki @ 067 name
	credits_entry sCreditsEntry_KojiNishino, 11, 0, sCreditsText_KojiNishino @ 068 name
	credits_entry sCreditsEntry_KenjiMatsushima, 11, 0, sCreditsText_KenjiMatsushima @ 069 name
	credits_entry sCreditsEntry_TetsujiOhta, 11, 0, sCreditsText_TetsujiOhta @ 070 name
	credits_entry sCreditsEntry_HitomiSato, 11, 0, sCreditsText_HitomiSato @ 071 name
	credits_entry sCreditsEntry_TakeshiKawachimaru, 11, 0, sCreditsText_TakeshiKawachimaru @ 072 name
	credits_entry sCreditsEntry_TeruyukiShimoyamada, 11, 0, sCreditsText_TeruyukiShimoyamada @ 073 name
	credits_entry sCreditsEntry_ShigeruOhmori, 11, 0, sCreditsText_ShigeruOhmori @ 074 name
	credits_entry sCreditsEntry_TadashiTakahashi, 11, 0, sCreditsText_TadashiTakahashi @ 075 name
	credits_entry sCreditsEntry_ToshinobuMatsumiya, 11, 0, sCreditsText_ToshinobuMatsumiya @ 076 name
	credits_entry sCreditsEntry_AkihitoTomisawa, 11, 0, sCreditsText_AkihitoTomisawa @ 077 name
	credits_entry sCreditsEntry_HirokiEnomoto, 11, 0, sCreditsText_HirokiEnomoto @ 078 name
	credits_entry sCreditsEntry_KazuyukiTerada, 11, 0, sCreditsText_KazuyukiTerada @ 079 name
	credits_entry sCreditsEntry_YuriSakurai, 11, 0, sCreditsText_YuriSakurai @ 080 name
	credits_entry sCreditsEntry_HiromiSagawa, 11, 0, sCreditsText_HiromiSagawa @ 081 name
	credits_entry sCreditsEntry_KenjiTominaga, 11, 0, sCreditsText_KenjiTominaga @ 082 name
	credits_entry sCreditsEntry_YoshioTajiri, 11, 0, sCreditsText_YoshioTajiri @ 083 name
	credits_entry sCreditsEntry_TeikoSasaki, 11, 0, sCreditsText_TeikoSasaki @ 084 name
	credits_entry sCreditsEntry_SachikoHamano, 11, 0, sCreditsText_SachikoHamano @ 085 name
	credits_entry sCreditsEntry_ChieMatsumiya, 11, 0, sCreditsText_ChieMatsumiya @ 086 name
	credits_entry sCreditsEntry_AkikoShinozaki, 11, 0, sCreditsText_AkikoShinozaki @ 087 name
	credits_entry sCreditsEntry_AstukoFujii, 11, 0, sCreditsText_AstukoFujii @ 088 name
	credits_entry sCreditsEntry_NozomuSaito, 11, 0, sCreditsText_NozomuSaito @ 089 name
	credits_entry sCreditsEntry_KenkichiToyama, 11, 0, sCreditsText_KenkichiToyama @ 090 name
	credits_entry sCreditsEntry_SuguruNakatsui, 11, 0, sCreditsText_SuguruNakatsui @ 091 name
	credits_entry sCreditsEntry_YumiFunasaka, 11, 0, sCreditsText_YumiFunasaka @ 092 name
	credits_entry sCreditsEntry_NaokoYanase, 11, 0, sCreditsText_NaokoYanase @ 093 name
	credits_entry sCreditsEntry_NCLSuperMarioClub, 11, 0, sCreditsText_NCLSuperMarioClub @ 094 name
	credits_entry sCreditsEntry_AtsushiTada, 11, 0, sCreditsText_AtsushiTada @ 095 name
	credits_entry sCreditsEntry_TakahiroOhnishi, 11, 0, sCreditsText_TakahiroOhnishi @ 096 name
	credits_entry sCreditsEntry_NorihideOkamura, 11, 0, sCreditsText_NorihideOkamura @ 097 name
	credits_entry sCreditsEntry_HiroNakamura, 11, 0, sCreditsText_HiroNakamura @ 098 name
	credits_entry sCreditsEntry_HiroyukiUesugi, 11, 0, sCreditsText_HiroyukiUesugi @ 099 name
	credits_entry sCreditsEntry_TerukiMurakawa, 11, 0, sCreditsText_TerukiMurakawa @ 100 name
	credits_entry sCreditsEntry_AkiraKinashi, 11, 0, sCreditsText_AkiraKinashi @ 101 name
	credits_entry sCreditsEntry_MichikoTakizawa, 11, 0, sCreditsText_MichikoTakizawa @ 102 name
	credits_entry sCreditsEntry_MakikoTakada, 11, 0, sCreditsText_MakikoTakada @ 103 name
	credits_entry sCreditsEntry_TakanaoKondo, 11, 0, sCreditsText_TakanaoKondo @ 104 name
	credits_entry sCreditsEntry_AiMashima, 11, 0, sCreditsText_AiMashima @ 105 name
	credits_entry sCreditsEntry_GakujiNomoto, 11, 0, sCreditsText_GakujiNomoto @ 106 name
	credits_entry sCreditsEntry_TakehiroIzushi, 11, 0, sCreditsText_TakehiroIzushi @ 107 name
	credits_entry sCreditsEntry_HitoshiYamagami, 11, 0, sCreditsText_HitoshiYamagami @ 108 name
	credits_entry sCreditsEntry_KyokoWatanabe, 11, 0, sCreditsText_KyokoWatanabe @ 109 name
	credits_entry sCreditsEntry_TakaoNakano, 11, 0, sCreditsText_TakaoNakano @ 110 name
	credits_entry sCreditsEntry_HiroyukiJinnai, 11, 0, sCreditsText_HiroyukiJinnai @ 111 name
	credits_entry sCreditsEntry_HiroakiTsuru, 11, 0, sCreditsText_HiroakiTsuru @ 112 name
	credits_entry sCreditsEntry_TsunekazIshihara, 11, 0, sCreditsText_TsunekazIshihara @ 113 name
	credits_entry sCreditsEntry_SatoruIwata, 11, 0, sCreditsText_SatoruIwata @ 114 name
	credits_entry sCreditsEntry_KazuyaSuyama, 11, 0, sCreditsText_KazuyaSuyama @ 115 name
	credits_entry sCreditsEntry_SatoshiMitsuhara, 11, 0, sCreditsText_SatoshiMitsuhara @ 116 name
	credits_entry sCreditsEntry_JapanBrailleLibrary, 9, 0, sCreditsText_JapanBrailleLibrary @ 117 name
	credits_entry sCreditsEntry_TomotakaKomura, 11, 0, sCreditsText_TomotakaKomura @ 118 name
	credits_entry sCreditsEntry_MikikoOhhashi, 11, 0, sCreditsText_MikikoOhhashi @ 119 name
	credits_entry sCreditsEntry_DaisukeHoshino, 11, 0, sCreditsText_DaisukeHoshino @ 120 name
	credits_entry sCreditsEntry_KenjiroIto, 11, 0, sCreditsText_KenjiroIto @ 121 name
	credits_entry sCreditsEntry_RuiKawaguchi, 11, 0, sCreditsText_RuiKawaguchi @ 122 name
	credits_entry sCreditsEntry_ShunsukeKohori, 11, 0, sCreditsText_ShunsukeKohori @ 123 name
	credits_entry sCreditsEntry_SachikoNakamichi, 11, 0, sCreditsText_SachikoNakamichi @ 124 name
	credits_entry sCreditsEntry_FujikoNomura, 11, 0, sCreditsText_FujikoNomura @ 125 name
	credits_entry sCreditsEntry_KazukiYoshihara, 11, 0, sCreditsText_KazukiYoshihara @ 126 name
	credits_entry sCreditsEntry_RetsujiNomoto, 11, 0, sCreditsText_RetsujiNomoto @ 127 name
	credits_entry sCreditsEntry_AzusaTajima, 11, 0, sCreditsText_AzusaTajima @ 128 name
	credits_entry sCreditsEntry_ShusakuEgami, 11, 0, sCreditsText_ShusakuEgami @ 129 name
