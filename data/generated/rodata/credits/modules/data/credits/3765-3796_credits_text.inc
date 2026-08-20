
	@ src/data/credits.h:90 sCreditsText_NCLProductTesting
	.globl gText_Rom_5C6DC3
gText_Rom_5C6DC3: @ 0x085C6DC3
	.string "デバッグプレイ{EOS}"
	.if (. - gText_Rom_5C6DC3) > 0x8
	.error "gText_Rom_5C6DC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6DC3) < 0x8
	.space 0x8 - (. - gText_Rom_5C6DC3)
	.endif

	@ src/data/credits.h:91 sCreditsText_SpecialThanks
	.globl gText_Rom_5C6DCB
gText_Rom_5C6DCB: @ 0x085C6DCB
	.string "スペシャルサンクス{EOS}"
	.if (. - gText_Rom_5C6DCB) > 0xa
	.error "gText_Rom_5C6DCB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6DCB) < 0xa
	.space 0xa - (. - gText_Rom_5C6DCB)
	.endif

	@ src/data/credits.h:92 sCreditsText_Coordinators
	.globl gText_Rom_5C6DD5
gText_Rom_5C6DD5: @ 0x085C6DD5
	.string "コーディネーター{EOS}"
	.if (. - gText_Rom_5C6DD5) > 0x9
	.error "gText_Rom_5C6DD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6DD5) < 0x9
	.space 0x9 - (. - gText_Rom_5C6DD5)
	.endif

	@ src/data/credits.h:93 sCreditsText_Producers
	.globl gText_Rom_5C6DDE
gText_Rom_5C6DDE: @ 0x085C6DDE
	.string "プロデューサー{EOS}"
	.if (. - gText_Rom_5C6DDE) > 0x8
	.error "gText_Rom_5C6DDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6DDE) < 0x8
	.space 0x8 - (. - gText_Rom_5C6DDE)
	.endif

	@ src/data/credits.h:94 sCreditsText_ExecProducers
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6DE6
gText_Rom_5C6DE6: @ 0x085C6DE6
	.string "エグゼクティブ プロデューサー{EOS}"
	.if (. - gText_Rom_5C6DE6) != 0x10
	.error "gText_Rom_5C6DE6 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6DEE
	.set gText_Rom_5C6DEE, gText_Rom_5C6DE6 + 0x8

	@ src/data/credits.h:95 sCreditsText_InfoSupervisors
	.globl gText_Rom_5C6DF6
gText_Rom_5C6DF6: @ 0x085C6DF6
	.string "じょうほう かんり{EOS}"
	.if (. - gText_Rom_5C6DF6) > 0xa
	.error "gText_Rom_5C6DF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6DF6) < 0xa
	.space 0xa - (. - gText_Rom_5C6DF6)
	.endif

	@ src/data/credits.h:96 sCreditsText_TaskManagers
	.globl gText_Rom_5C6E00
gText_Rom_5C6E00: @ 0x085C6E00
	.string "ファンクション マネージャー{EOS}"
	.if (. - gText_Rom_5C6E00) > 0xf
	.error "gText_Rom_5C6E00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E00) < 0xf
	.space 0xf - (. - gText_Rom_5C6E00)
	.endif

	@ src/data/credits.h:97 sCreditsText_BrailleCodeCheck
	.globl gText_Rom_5C6E0F
gText_Rom_5C6E0F: @ 0x085C6E0F
	.string "てんじ かんしゅう{EOS}"
	.if (. - gText_Rom_5C6E0F) > 0xa
	.error "gText_Rom_5C6E0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E0F) < 0xa
	.space 0xa - (. - gText_Rom_5C6E0F)
	.endif

	@ src/data/credits.h:98 sCreditsText_WorldDirector
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6E19
gText_Rom_5C6E19: @ 0x085C6E19
	.string "ワールド ディレクター{EOS}"
	.if (. - gText_Rom_5C6E19) != 0xc
	.error "gText_Rom_5C6E19 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6E1E
	.set gText_Rom_5C6E1E, gText_Rom_5C6E19 + 0x5

	@ src/data/credits.h:99 sCreditsText_BattleFrontierData
	.globl gText_Rom_5C6E25
gText_Rom_5C6E25: @ 0x085C6E25
	.string "バトルフロンティア データ{EOS}"
	.if (. - gText_Rom_5C6E25) > 0xe
	.error "gText_Rom_5C6E25 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E25) < 0xe
	.space 0xe - (. - gText_Rom_5C6E25)
	.endif

	@ src/data/credits.h:100 sCreditsText_SupportProgrammers
	.globl gText_Rom_5C6E33
gText_Rom_5C6E33: @ 0x085C6E33
	.string "プログラム サポート{EOS}"
	.if (. - gText_Rom_5C6E33) > 0xb
	.error "gText_Rom_5C6E33 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E33) < 0xb
	.space 0xb - (. - gText_Rom_5C6E33)
	.endif

	@ src/data/credits.h:101 sCreditsText_Artwork
	.globl gText_Rom_5C6E3E
gText_Rom_5C6E3E: @ 0x085C6E3E
	.string "アート ワーク{EOS}"
	.if (. - gText_Rom_5C6E3E) > 0x8
	.error "gText_Rom_5C6E3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E3E) < 0x8
	.space 0x8 - (. - gText_Rom_5C6E3E)
	.endif

	@ src/data/credits.h:102 sCreditsText_LeadProgrammer
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6E46
gText_Rom_5C6E46: @ 0x085C6E46
	.string "プログラム リーダー{EOS}"
	.if (. - gText_Rom_5C6E46) != 0xb
	.error "gText_Rom_5C6E46 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6E4C
	.set gText_Rom_5C6E4C, gText_Rom_5C6E46 + 0x6

	@ src/data/credits.h:103 sCreditsText_LeadGraphicArtist
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6E51
gText_Rom_5C6E51: @ 0x085C6E51
	.string "グラフィック リーダー{EOS}"
	.if (. - gText_Rom_5C6E51) != 0xc
	.error "gText_Rom_5C6E51 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6E58
	.set gText_Rom_5C6E58, gText_Rom_5C6E51 + 0x7
