	@ src/data/credits.h:183 sCreditsText_TomotakaKomura
	.globl gText_Rom_5C7112
gText_Rom_5C7112: @ 0x085C7112
	.string "こむら ともたか$"
	.if (. - gText_Rom_5C7112) > 0x9
	.error "gText_Rom_5C7112 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7112) < 0x9
	.space 0x9 - (. - gText_Rom_5C7112)
	.endif

	@ src/data/credits.h:184 sCreditsText_MikikoOhhashi
	.globl gText_Rom_5C711B
gText_Rom_5C711B: @ 0x085C711B
	.string "おおはし みきこ$"
	.if (. - gText_Rom_5C711B) > 0x9
	.error "gText_Rom_5C711B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C711B) < 0x9
	.space 0x9 - (. - gText_Rom_5C711B)
	.endif

	@ src/data/credits.h:185 sCreditsText_DaisukeHoshino
	.globl gText_Rom_5C7124
gText_Rom_5C7124: @ 0x085C7124
	.string "ほしの だいすけ$"
	.if (. - gText_Rom_5C7124) > 0x9
	.error "gText_Rom_5C7124 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7124) < 0x9
	.space 0x9 - (. - gText_Rom_5C7124)
	.endif

	@ src/data/credits.h:186 sCreditsText_KenjiroIto
	.globl gText_Rom_5C712D
gText_Rom_5C712D: @ 0x085C712D
	.string "いとう けんじろう$"
	.if (. - gText_Rom_5C712D) > 0xa
	.error "gText_Rom_5C712D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C712D) < 0xa
	.space 0xa - (. - gText_Rom_5C712D)
	.endif

	@ src/data/credits.h:187 sCreditsText_RuiKawaguchi
	.globl gText_Rom_5C7137
gText_Rom_5C7137: @ 0x085C7137
	.string "かわぐち るい$"
	.if (. - gText_Rom_5C7137) > 0x8
	.error "gText_Rom_5C7137 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7137) < 0x8
	.space 0x8 - (. - gText_Rom_5C7137)
	.endif

	@ src/data/credits.h:188 sCreditsText_ShunsukeKohori
	.globl gText_Rom_5C713F
gText_Rom_5C713F: @ 0x085C713F
	.string "こほり しゅんすけ$"
	.if (. - gText_Rom_5C713F) > 0xa
	.error "gText_Rom_5C713F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C713F) < 0xa
	.space 0xa - (. - gText_Rom_5C713F)
	.endif

	@ src/data/credits.h:189 sCreditsText_SachikoNakamichi
	.globl gText_Rom_5C7149
gText_Rom_5C7149: @ 0x085C7149
	.string "なかみち さちこ$"
	.if (. - gText_Rom_5C7149) > 0x9
	.error "gText_Rom_5C7149 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7149) < 0x9
	.space 0x9 - (. - gText_Rom_5C7149)
	.endif

	@ src/data/credits.h:190 sCreditsText_FujikoNomura
	.globl gText_Rom_5C7152
gText_Rom_5C7152: @ 0x085C7152
	.string "のむら ふじこ$"
	.if (. - gText_Rom_5C7152) > 0x8
	.error "gText_Rom_5C7152 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7152) < 0x8
	.space 0x8 - (. - gText_Rom_5C7152)
	.endif

	@ src/data/credits.h:191 sCreditsText_KazukiYoshihara
	.globl gText_Rom_5C715A
gText_Rom_5C715A: @ 0x085C715A
	.string "よしはら かずき$"
	.if (. - gText_Rom_5C715A) > 0x9
	.error "gText_Rom_5C715A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C715A) < 0x9
	.space 0x9 - (. - gText_Rom_5C715A)
	.endif

	@ src/data/credits.h:192 sCreditsText_RetsujiNomoto
	.globl gText_Rom_5C7163
gText_Rom_5C7163: @ 0x085C7163
	.string "のもと れつじ$"
	.if (. - gText_Rom_5C7163) > 0x8
	.error "gText_Rom_5C7163 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7163) < 0x8
	.space 0x8 - (. - gText_Rom_5C7163)
	.endif

	@ src/data/credits.h:193 sCreditsText_AzusaTajima
	.globl gText_Rom_5C716B
gText_Rom_5C716B: @ 0x085C716B
	.string "たじま あずさ$"
	.if (. - gText_Rom_5C716B) > 0x8
	.error "gText_Rom_5C716B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C716B) < 0x8
	.space 0x8 - (. - gText_Rom_5C716B)
	.endif

	@ src/data/credits.h:194 sCreditsText_ShusakuEgami
	.globl gText_Rom_5C7173
gText_Rom_5C7173: @ 0x085C7173
	.string "えがみ しゅうさく$"
	.if (. - gText_Rom_5C7173) > 0xa
	.error "gText_Rom_5C7173 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7173) < 0xa
	.space 0xa - (. - gText_Rom_5C7173)
	.endif
	@ Credits entry table
	@ 3-byte alignment padding before the 8-byte entries
	.byte 0, 0, 0
	.globl sCreditsText_EmptyString
	.set sCreditsText_EmptyString, gText_Rom_5C6CB4 - 1
	credits_entry sCreditsEntry_EmptyString, 0, 0, sCreditsText_EmptyString @ 000 empty
	credits_entry sCreditsEntry_PkmnEmeraldVersion, 7, 1, gText_Rom_5C6CB4 @ 001 title
	credits_entry sCreditsEntry_Credits, 11, 1, gText_Rom_5C6CC4 @ 002 title
	credits_entry sCreditsEntry_ExecutiveDirector, 8, 1, gText_Rom_5C6CCC @ 003 title
	credits_entry sCreditsEntry_Director, 12, 1, gText_Rom_5C6CDB @ 004 title
	credits_entry sCreditsEntry_ArtDirector, 10, 1, gText_Rom_5C6CE2 @ 005 title
	credits_entry sCreditsEntry_BattleDirector, 10, 1, gText_Rom_5C6CED @ 006 title
	credits_entry sCreditsEntry_MainProgrammer, 10, 1, gText_Rom_5C6CF8 @ 007 title
	credits_entry sCreditsEntry_BattleSystemPgrms, 8, 1, gText_Rom_5C6D02 @ 008 title
	credits_entry sCreditsEntry_FieldSystemPgrms, 7, 1, gText_Rom_5C6D11 @ 009 title
	credits_entry sCreditsEntry_Programmers, 12, 1, gText_Rom_5C6D22 @ 010 title
	credits_entry sCreditsEntry_MainGraphicDesigner, 7, 1, gText_Rom_5C6D28 @ 011 title
	credits_entry sCreditsEntry_GraphicDesigners, 9, 1, gText_Rom_5C6D38 @ 012 title
	credits_entry sCreditsEntry_PkmnDesigners, 10, 1, gText_Rom_5C6D44 @ 013 title
	credits_entry sCreditsEntry_MusicComposition, 13, 1, gText_Rom_5C6D4E @ 014 title
	credits_entry sCreditsEntry_SoundEffectsAndPkmnVoices, 4, 1, gText_Rom_5C6D53 @ 015 title
	credits_entry sCreditsEntry_GameDesigners, 11, 1, gText_Rom_5C6D67 @ 016 title
	credits_entry sCreditsEntry_ScenarioPlot, 11, 1, gText_Rom_5C6D70 @ 017 title
	credits_entry sCreditsEntry_Scenario, 13, 1, gText_Rom_5C6D79 @ 018 title
	credits_entry sCreditsEntry_ScriptDesigners, 10, 1, gText_Rom_5C6D7E @ 019 title
	credits_entry sCreditsEntry_MapDesigners, 11, 1, gText_Rom_5C6D89 @ 020 title
	credits_entry sCreditsEntry_MapDataDesigners, 9, 1, gText_Rom_5C6D92 @ 021 title
	credits_entry sCreditsEntry_ParametricDesigners, 9, 1, gText_Rom_5C6D9E @ 022 title
	credits_entry sCreditsEntry_PokedexText, 11, 1, gText_Rom_5C6DAA @ 023 title
	credits_entry sCreditsEntry_EnvAndToolPgrms, 6, 1, gText_Rom_5C6DB3 @ 024 title
	credits_entry sCreditsEntry_NCLProductTesting, 11, 1, gText_Rom_5C6DC3 @ 025 title
	credits_entry sCreditsEntry_SpecialThanks, 10, 1, gText_Rom_5C6DCB @ 026 title
	credits_entry sCreditsEntry_Coordinators, 11, 1, gText_Rom_5C6DD5 @ 027 title
	credits_entry sCreditsEntry_Producers, 11, 1, gText_Rom_5C6DDE @ 028 title
	credits_entry sCreditsEntry_ExecProducers, 7, 1, gText_Rom_5C6DE6 @ 029 title
	credits_entry sCreditsEntry_InfoSupervisors, 10, 1, gText_Rom_5C6DF6 @ 030 title
	credits_entry sCreditsEntry_TaskManagers, 8, 1, gText_Rom_5C6E00 @ 031 title
	credits_entry sCreditsEntry_BrailleCodeCheck, 10, 1, gText_Rom_5C6E0F @ 032 title
	credits_entry sCreditsEntry_WorldDirector, 10, 1, gText_Rom_5C6E19 @ 033 title
	credits_entry sCreditsEntry_BattleFrontierData, 8, 1, gText_Rom_5C6E25 @ 034 title
	credits_entry sCreditsEntry_SupportProgrammers, 10, 1, gText_Rom_5C6E33 @ 035 title
	credits_entry sCreditsEntry_Artwork, 12, 1, gText_Rom_5C6E3E @ 036 title
	credits_entry sCreditsEntry_LeadProgrammer, 10, 1, gText_Rom_5C6E46 @ 037 title
	credits_entry sCreditsEntry_LeadGraphicArtist, 9, 1, gText_Rom_5C6E51 @ 038 title
	credits_entry sCreditsEntry_SatoshiTajiri, 11, 0, gText_Rom_5C6E5D @ 039 name
	credits_entry sCreditsEntry_JunichiMasuda, 11, 0, gText_Rom_5C6E65 @ 040 name
	credits_entry sCreditsEntry_KenSugimori, 11, 0, gText_Rom_5C6E6F @ 041 name
	credits_entry sCreditsEntry_ShigekiMorimoto, 11, 0, gText_Rom_5C6E77 @ 042 name
	credits_entry sCreditsEntry_TetsuyaWatanabe, 11, 0, gText_Rom_5C6E80 @ 043 name
	credits_entry sCreditsEntry_HisashiSogabe, 11, 0, gText_Rom_5C6E89 @ 044 name
	credits_entry sCreditsEntry_SosukeTamada, 11, 0, gText_Rom_5C6E91 @ 045 name
	credits_entry sCreditsEntry_AkitoMori, 11, 0, gText_Rom_5C6E9A @ 046 name
	credits_entry sCreditsEntry_KeitaKagaya, 11, 0, gText_Rom_5C6EA1 @ 047 name
	credits_entry sCreditsEntry_YoshinoriMatsuda, 11, 0, gText_Rom_5C6EA9 @ 048 name
	credits_entry sCreditsEntry_HiroyukiNakamura, 11, 0, gText_Rom_5C6EB2 @ 049 name
	credits_entry sCreditsEntry_MasaoTaya, 11, 0, gText_Rom_5C6EBC @ 050 name
	credits_entry sCreditsEntry_SatoshiNohara, 11, 0, gText_Rom_5C6EC3 @ 051 name
	credits_entry sCreditsEntry_TomomichiOhta, 11, 0, gText_Rom_5C6ECB @ 052 name
	credits_entry sCreditsEntry_MiyukiIwasawa, 11, 0, gText_Rom_5C6ED4 @ 053 name
	credits_entry sCreditsEntry_TakenoriOhta, 11, 0, gText_Rom_5C6EDD @ 054 name
	credits_entry sCreditsEntry_HironobuYoshida, 11, 0, gText_Rom_5C6EE6 @ 055 name
	credits_entry sCreditsEntry_MotofumiFujiwara, 11, 0, gText_Rom_5C6EEF @ 056 name
	credits_entry sCreditsEntry_SatoshiOhta, 11, 0, gText_Rom_5C6EF9 @ 057 name
	credits_entry sCreditsEntry_AsukaIwashita, 11, 0, gText_Rom_5C6F01 @ 058 name
	credits_entry sCreditsEntry_AimiTomita, 11, 0, gText_Rom_5C6F0A @ 059 name
	credits_entry sCreditsEntry_TakaoUnno, 11, 0, gText_Rom_5C6F12 @ 060 name
	credits_entry sCreditsEntry_KanakoEo, 11, 0, gText_Rom_5C6F1A @ 061 name
	credits_entry sCreditsEntry_JunOkutani, 11, 0, gText_Rom_5C6F21 @ 062 name
	credits_entry sCreditsEntry_AtsukoNishida, 11, 0, gText_Rom_5C6F2A @ 063 name
	credits_entry sCreditsEntry_MuneoSaito, 11, 0, gText_Rom_5C6F32 @ 064 name
	credits_entry sCreditsEntry_RenaYoshikawa, 11, 0, gText_Rom_5C6F3B @ 065 name
	credits_entry sCreditsEntry_GoIchinose, 11, 0, gText_Rom_5C6F43 @ 066 name
	credits_entry sCreditsEntry_MorikazuAoki, 11, 0, gText_Rom_5C6F4B @ 067 name
	credits_entry sCreditsEntry_KojiNishino, 11, 0, gText_Rom_5C6F54 @ 068 name
	credits_entry sCreditsEntry_KenjiMatsushima, 11, 0, gText_Rom_5C6F5C @ 069 name
	credits_entry sCreditsEntry_TetsujiOhta, 11, 0, gText_Rom_5C6F65 @ 070 name
	credits_entry sCreditsEntry_HitomiSato, 11, 0, gText_Rom_5C6F6D @ 071 name
	credits_entry sCreditsEntry_TakeshiKawachimaru, 11, 0, gText_Rom_5C6F75 @ 072 name
	credits_entry sCreditsEntry_TeruyukiShimoyamada, 11, 0, gText_Rom_5C6F7F @ 073 name
	credits_entry sCreditsEntry_ShigeruOhmori, 11, 0, gText_Rom_5C6F8A @ 074 name
	credits_entry sCreditsEntry_TadashiTakahashi, 11, 0, gText_Rom_5C6F93 @ 075 name
	credits_entry sCreditsEntry_ToshinobuMatsumiya, 11, 0, gText_Rom_5C6F9C @ 076 name
	credits_entry sCreditsEntry_AkihitoTomisawa, 11, 0, gText_Rom_5C6FA6 @ 077 name
	credits_entry sCreditsEntry_HirokiEnomoto, 11, 0, gText_Rom_5C6FB0 @ 078 name
	credits_entry sCreditsEntry_KazuyukiTerada, 11, 0, gText_Rom_5C6FB9 @ 079 name
	credits_entry sCreditsEntry_YuriSakurai, 11, 0, gText_Rom_5C6FC2 @ 080 name
	credits_entry sCreditsEntry_HiromiSagawa, 11, 0, gText_Rom_5C6FCB @ 081 name
	credits_entry sCreditsEntry_KenjiTominaga, 11, 0, gText_Rom_5C6FD3 @ 082 name
	credits_entry sCreditsEntry_YoshioTajiri, 11, 0, gText_Rom_5C6FDC @ 083 name
	credits_entry sCreditsEntry_TeikoSasaki, 11, 0, gText_Rom_5C6FE4 @ 084 name
	credits_entry sCreditsEntry_SachikoHamano, 11, 0, gText_Rom_5C6FEC @ 085 name
	credits_entry sCreditsEntry_ChieMatsumiya, 11, 0, gText_Rom_5C6FF4 @ 086 name
	credits_entry sCreditsEntry_AkikoShinozaki, 11, 0, gText_Rom_5C6FFC @ 087 name
	credits_entry sCreditsEntry_AstukoFujii, 11, 0, gText_Rom_5C7005 @ 088 name
	credits_entry sCreditsEntry_NozomuSaito, 11, 0, gText_Rom_5C700D @ 089 name
	credits_entry sCreditsEntry_KenkichiToyama, 11, 0, gText_Rom_5C7016 @ 090 name
	credits_entry sCreditsEntry_SuguruNakatsui, 11, 0, gText_Rom_5C701F @ 091 name
	credits_entry sCreditsEntry_YumiFunasaka, 11, 0, gText_Rom_5C7028 @ 092 name
	credits_entry sCreditsEntry_NaokoYanase, 11, 0, gText_Rom_5C7030 @ 093 name
	credits_entry sCreditsEntry_NCLSuperMarioClub, 11, 0, gText_Rom_5C7038 @ 094 name
	credits_entry sCreditsEntry_AtsushiTada, 11, 0, gText_Rom_5C7043 @ 095 name
	credits_entry sCreditsEntry_TakahiroOhnishi, 11, 0, gText_Rom_5C704A @ 096 name
	credits_entry sCreditsEntry_NorihideOkamura, 11, 0, gText_Rom_5C7054 @ 097 name
	credits_entry sCreditsEntry_HiroNakamura, 11, 0, gText_Rom_5C705E @ 098 name
	credits_entry sCreditsEntry_HiroyukiUesugi, 11, 0, gText_Rom_5C7067 @ 099 name
	credits_entry sCreditsEntry_TerukiMurakawa, 11, 0, gText_Rom_5C7071 @ 100 name
	credits_entry sCreditsEntry_AkiraKinashi, 11, 0, gText_Rom_5C707A @ 101 name
	credits_entry sCreditsEntry_MichikoTakizawa, 11, 0, gText_Rom_5C7082 @ 102 name
	credits_entry sCreditsEntry_MakikoTakada, 11, 0, gText_Rom_5C708B @ 103 name
	credits_entry sCreditsEntry_TakanaoKondo, 11, 0, gText_Rom_5C7093 @ 104 name
	credits_entry sCreditsEntry_AiMashima, 11, 0, gText_Rom_5C709D @ 105 name
	credits_entry sCreditsEntry_GakujiNomoto, 11, 0, gText_Rom_5C70A4 @ 106 name
	credits_entry sCreditsEntry_TakehiroIzushi, 11, 0, gText_Rom_5C70AC @ 107 name
	credits_entry sCreditsEntry_HitoshiYamagami, 11, 0, gText_Rom_5C70B5 @ 108 name
	credits_entry sCreditsEntry_KyokoWatanabe, 11, 0, gText_Rom_5C70BE @ 109 name
	credits_entry sCreditsEntry_TakaoNakano, 11, 0, gText_Rom_5C70C8 @ 110 name
	credits_entry sCreditsEntry_HiroyukiJinnai, 11, 0, gText_Rom_5C70D0 @ 111 name
	credits_entry sCreditsEntry_HiroakiTsuru, 11, 0, gText_Rom_5C70DA @ 112 name
	credits_entry sCreditsEntry_TsunekazIshihara, 11, 0, gText_Rom_5C70E2 @ 113 name
	credits_entry sCreditsEntry_SatoruIwata, 11, 0, gText_Rom_5C70EC @ 114 name
	credits_entry sCreditsEntry_KazuyaSuyama, 11, 0, gText_Rom_5C70F4 @ 115 name
	credits_entry sCreditsEntry_SatoshiMitsuhara, 11, 0, gText_Rom_5C70FC @ 116 name
	credits_entry sCreditsEntry_JapanBrailleLibrary, 9, 0, gText_Rom_5C7105 @ 117 name
	credits_entry sCreditsEntry_TomotakaKomura, 11, 0, gText_Rom_5C7112 @ 118 name
	credits_entry sCreditsEntry_MikikoOhhashi, 11, 0, gText_Rom_5C711B @ 119 name
	credits_entry sCreditsEntry_DaisukeHoshino, 11, 0, gText_Rom_5C7124 @ 120 name
	credits_entry sCreditsEntry_KenjiroIto, 11, 0, gText_Rom_5C712D @ 121 name
	credits_entry sCreditsEntry_RuiKawaguchi, 11, 0, gText_Rom_5C7137 @ 122 name
	credits_entry sCreditsEntry_ShunsukeKohori, 11, 0, gText_Rom_5C713F @ 123 name
	credits_entry sCreditsEntry_SachikoNakamichi, 11, 0, gText_Rom_5C7149 @ 124 name
	credits_entry sCreditsEntry_FujikoNomura, 11, 0, gText_Rom_5C7152 @ 125 name
	credits_entry sCreditsEntry_KazukiYoshihara, 11, 0, gText_Rom_5C715A @ 126 name
	credits_entry sCreditsEntry_RetsujiNomoto, 11, 0, gText_Rom_5C7163 @ 127 name
	credits_entry sCreditsEntry_AzusaTajima, 11, 0, gText_Rom_5C716B @ 128 name
	credits_entry sCreditsEntry_ShusakuEgami, 11, 0, gText_Rom_5C7173 @ 129 name
