	.globl gText_Rom_5CAA31
	.set gText_Rom_5CAA31, sScriptMenuText_TypesOfContests + 0x7
	@ Decoded text from ROM range: offset=0x5CAA36, size=0x14
	.string "ランクに　ついて{EOS}"
	.string "しんさいんに　ついて{EOS}"

	@ src/data/text/ribbon_descriptions.h:3 gRibbonDescriptionPart1_CoolContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_CoolnessContest
sScriptMenuText_CoolnessContest: @ 0x085CAA4A
	.string "かっこよさコンテスト{EOS}"
	.if (. - sScriptMenuText_CoolnessContest) != 0xb
	.error "sScriptMenuText_CoolnessContest must retain its original byte length"
	.endif
	@ src/data/text/ribbon_descriptions.h:4 gRibbonDescriptionPart1_BeautyContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_BeautyContest
sScriptMenuText_BeautyContest: @ 0x085CAA55
	.string "うつくしさコンテスト{EOS}"
	.if (. - sScriptMenuText_BeautyContest) != 0xb
	.error "sScriptMenuText_BeautyContest must retain its original byte length"
	.endif
	@ src/data/text/ribbon_descriptions.h:5 gRibbonDescriptionPart1_CuteContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_CutenessContest
sScriptMenuText_CutenessContest: @ 0x085CAA60
	.string "かわいさコンテスト{EOS}"
	.if (. - sScriptMenuText_CutenessContest) != 0xa
	.error "sScriptMenuText_CutenessContest must retain its original byte length"
	.endif
	@ src/data/text/ribbon_descriptions.h:6 gRibbonDescriptionPart1_SmartContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_SmartnessContest
sScriptMenuText_SmartnessContest: @ 0x085CAA6A
	.string "かしこさコンテスト{EOS}"
	.if (. - sScriptMenuText_SmartnessContest) != 0xa
	.error "sScriptMenuText_SmartnessContest must retain its original byte length"
	.endif
	@ src/data/text/ribbon_descriptions.h:7 gRibbonDescriptionPart1_ToughContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_ToughnessContest
sScriptMenuText_ToughnessContest: @ 0x085CAA74
	.string "たくましさコンテスト{EOS}"
	.if (. - sScriptMenuText_ToughnessContest) != 0xb
	.error "sScriptMenuText_ToughnessContest must retain its original byte length"
	.endif
	@ src/player_pc.c:193 player_pc_line_193
	.globl sScriptMenuText_Decoration2
sScriptMenuText_Decoration2: @ 0x085CAA7F
	.string "もようがえ{EOS}"
	.if (. - sScriptMenuText_Decoration2) > 0x6
	.error "sScriptMenuText_Decoration2 may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Decoration2) < 0x6
	.space 0x6 - (. - sScriptMenuText_Decoration2)
	.endif
	@ analyzed canonical ROM range 0x085CAA85-0x085CAA9C
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x1B, 0x50, 0x0A, 0x0C, 0xFF, 0x56, 0x53, 0x7E, 0x64, 0xFF, 0x14, 0x03, 0x2B, 0x08, 0x00, 0x78
	.byte 0x5D, 0x64, 0xFF, 0x14, 0x03, 0x2B, 0x08, 0x00
