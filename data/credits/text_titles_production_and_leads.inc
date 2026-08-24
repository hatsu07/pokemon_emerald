
	@ src/data/credits.h:90 sCreditsText_NCLProductTesting
	.globl sCreditsText_NCLProductTesting
sCreditsText_NCLProductTesting: @ 0x085C6DC3
	.string "デバッグプレイ{EOS}"
	.if (. - sCreditsText_NCLProductTesting) > 0x8
	.error "sCreditsText_NCLProductTesting may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_NCLProductTesting) < 0x8
	.space 0x8 - (. - sCreditsText_NCLProductTesting)
	.endif

	@ src/data/credits.h:91 sCreditsText_SpecialThanks
	.globl sCreditsText_SpecialThanks
sCreditsText_SpecialThanks: @ 0x085C6DCB
	.string "スペシャルサンクス{EOS}"
	.if (. - sCreditsText_SpecialThanks) > 0xa
	.error "sCreditsText_SpecialThanks may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_SpecialThanks) < 0xa
	.space 0xa - (. - sCreditsText_SpecialThanks)
	.endif

	@ src/data/credits.h:92 sCreditsText_Coordinators
	.globl sCreditsText_Coordinators
sCreditsText_Coordinators: @ 0x085C6DD5
	.string "コーディネーター{EOS}"
	.if (. - sCreditsText_Coordinators) > 0x9
	.error "sCreditsText_Coordinators may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_Coordinators) < 0x9
	.space 0x9 - (. - sCreditsText_Coordinators)
	.endif

	@ src/data/credits.h:93 sCreditsText_Producers
	.globl sCreditsText_Producers
sCreditsText_Producers: @ 0x085C6DDE
	.string "プロデューサー{EOS}"
	.if (. - sCreditsText_Producers) > 0x8
	.error "sCreditsText_Producers may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_Producers) < 0x8
	.space 0x8 - (. - sCreditsText_Producers)
	.endif

	@ src/data/credits.h:94 sCreditsText_ExecProducers
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sCreditsText_ExecProducers
sCreditsText_ExecProducers: @ 0x085C6DE6
	.string "エグゼクティブ プロデューサー{EOS}"
	.if (. - sCreditsText_ExecProducers) != 0x10
	.error "sCreditsText_ExecProducers must retain its original byte length"
	.endif
	.globl gText_Rom_5C6DEE
	.set gText_Rom_5C6DEE, sCreditsText_ExecProducers + 0x8

	@ src/data/credits.h:95 sCreditsText_InfoSupervisors
	.globl sCreditsText_InfoSupervisors
sCreditsText_InfoSupervisors: @ 0x085C6DF6
	.string "じょうほう かんり{EOS}"
	.if (. - sCreditsText_InfoSupervisors) > 0xa
	.error "sCreditsText_InfoSupervisors may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_InfoSupervisors) < 0xa
	.space 0xa - (. - sCreditsText_InfoSupervisors)
	.endif

	@ src/data/credits.h:96 sCreditsText_TaskManagers
	.globl sCreditsText_TaskManagers
sCreditsText_TaskManagers: @ 0x085C6E00
	.string "ファンクション マネージャー{EOS}"
	.if (. - sCreditsText_TaskManagers) > 0xf
	.error "sCreditsText_TaskManagers may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_TaskManagers) < 0xf
	.space 0xf - (. - sCreditsText_TaskManagers)
	.endif

	@ src/data/credits.h:97 sCreditsText_BrailleCodeCheck
	.globl sCreditsText_BrailleCodeCheck
sCreditsText_BrailleCodeCheck: @ 0x085C6E0F
	.string "てんじ かんしゅう{EOS}"
	.if (. - sCreditsText_BrailleCodeCheck) > 0xa
	.error "sCreditsText_BrailleCodeCheck may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_BrailleCodeCheck) < 0xa
	.space 0xa - (. - sCreditsText_BrailleCodeCheck)
	.endif

	@ src/data/credits.h:98 sCreditsText_WorldDirector
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sCreditsText_WorldDirector
sCreditsText_WorldDirector: @ 0x085C6E19
	.string "ワールド ディレクター{EOS}"
	.if (. - sCreditsText_WorldDirector) != 0xc
	.error "sCreditsText_WorldDirector must retain its original byte length"
	.endif
	.globl gText_Rom_5C6E1E
	.set gText_Rom_5C6E1E, sCreditsText_WorldDirector + 0x5

	@ src/data/credits.h:99 sCreditsText_BattleFrontierData
	.globl sCreditsText_BattleFrontierData
sCreditsText_BattleFrontierData: @ 0x085C6E25
	.string "バトルフロンティア データ{EOS}"
	.if (. - sCreditsText_BattleFrontierData) > 0xe
	.error "sCreditsText_BattleFrontierData may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_BattleFrontierData) < 0xe
	.space 0xe - (. - sCreditsText_BattleFrontierData)
	.endif

	@ src/data/credits.h:100 sCreditsText_SupportProgrammers
	.globl sCreditsText_SupportProgrammers
sCreditsText_SupportProgrammers: @ 0x085C6E33
	.string "プログラム サポート{EOS}"
	.if (. - sCreditsText_SupportProgrammers) > 0xb
	.error "sCreditsText_SupportProgrammers may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_SupportProgrammers) < 0xb
	.space 0xb - (. - sCreditsText_SupportProgrammers)
	.endif

	@ src/data/credits.h:101 sCreditsText_Artwork
	.globl sCreditsText_Artwork
sCreditsText_Artwork: @ 0x085C6E3E
	.string "アート ワーク{EOS}"
	.if (. - sCreditsText_Artwork) > 0x8
	.error "sCreditsText_Artwork may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_Artwork) < 0x8
	.space 0x8 - (. - sCreditsText_Artwork)
	.endif

	@ src/data/credits.h:102 sCreditsText_LeadProgrammer
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sCreditsText_LeadProgrammer
sCreditsText_LeadProgrammer: @ 0x085C6E46
	.string "プログラム リーダー{EOS}"
	.if (. - sCreditsText_LeadProgrammer) != 0xb
	.error "sCreditsText_LeadProgrammer must retain its original byte length"
	.endif
	.globl gText_Rom_5C6E4C
	.set gText_Rom_5C6E4C, sCreditsText_LeadProgrammer + 0x6

	@ src/data/credits.h:103 sCreditsText_LeadGraphicArtist
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sCreditsText_LeadGraphicArtist
sCreditsText_LeadGraphicArtist: @ 0x085C6E51
	.string "グラフィック リーダー{EOS}"
	.if (. - sCreditsText_LeadGraphicArtist) != 0xc
	.error "sCreditsText_LeadGraphicArtist must retain its original byte length"
	.endif
	.globl gText_Rom_5C6E58
	.set gText_Rom_5C6E58, sCreditsText_LeadGraphicArtist + 0x7
