	@ src/data/text/ribbon_descriptions.h:3 gRibbonDescriptionPart1_CoolContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAA4A
gText_Rom_5CAA4A: @ 0x085CAA4A
	.string "かっこよさコンテスト$"
	.if (. - gText_Rom_5CAA4A) != 0xb
	.error "gText_Rom_5CAA4A must retain its original byte length"
	.endif
	.globl gText_Rom_5CAA4F
	.set gText_Rom_5CAA4F, gText_Rom_5CAA4A + 0x5
	.globl gText_Rom_5CAA51
	.set gText_Rom_5CAA51, gText_Rom_5CAA4A + 0x7

	@ src/data/text/ribbon_descriptions.h:4 gRibbonDescriptionPart1_BeautyContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAA55
gText_Rom_5CAA55: @ 0x085CAA55
	.string "うつくしさコンテスト$"
	.if (. - gText_Rom_5CAA55) != 0xb
	.error "gText_Rom_5CAA55 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAA5A
	.set gText_Rom_5CAA5A, gText_Rom_5CAA55 + 0x5
	.globl gText_Rom_5CAA5C
	.set gText_Rom_5CAA5C, gText_Rom_5CAA55 + 0x7

	@ src/data/text/ribbon_descriptions.h:5 gRibbonDescriptionPart1_CuteContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAA60
gText_Rom_5CAA60: @ 0x085CAA60
	.string "かわいさコンテスト$"
	.if (. - gText_Rom_5CAA60) != 0xa
	.error "gText_Rom_5CAA60 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAA64
	.set gText_Rom_5CAA64, gText_Rom_5CAA60 + 0x4
	.globl gText_Rom_5CAA66
	.set gText_Rom_5CAA66, gText_Rom_5CAA60 + 0x6

	@ src/data/text/ribbon_descriptions.h:6 gRibbonDescriptionPart1_SmartContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAA6A
gText_Rom_5CAA6A: @ 0x085CAA6A
	.string "かしこさコンテスト$"
	.if (. - gText_Rom_5CAA6A) != 0xa
	.error "gText_Rom_5CAA6A must retain its original byte length"
	.endif
	.globl gText_Rom_5CAA6E
	.set gText_Rom_5CAA6E, gText_Rom_5CAA6A + 0x4
	.globl gText_Rom_5CAA70
	.set gText_Rom_5CAA70, gText_Rom_5CAA6A + 0x6

	@ src/data/text/ribbon_descriptions.h:7 gRibbonDescriptionPart1_ToughContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAA74
gText_Rom_5CAA74: @ 0x085CAA74
	.string "たくましさコンテスト$"
	.if (. - gText_Rom_5CAA74) != 0xb
	.error "gText_Rom_5CAA74 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAA79
	.set gText_Rom_5CAA79, gText_Rom_5CAA74 + 0x5
	.globl gText_Rom_5CAA7B
	.set gText_Rom_5CAA7B, gText_Rom_5CAA74 + 0x7

	@ src/player_pc.c:193 player_pc_line_193
	.globl gText_Rom_5CAA7F
gText_Rom_5CAA7F: @ 0x085CAA7F
	.string "もようがえ$"
	.if (. - gText_Rom_5CAA7F) > 0x6
	.error "gText_Rom_5CAA7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAA7F) < 0x6
	.space 0x6 - (. - gText_Rom_5CAA7F)
	.endif
	@ Replaced baserom.gba range: offset=0x5CAA85, size=0x18
	.byte 0x1B, 0x50, 0x0A, 0x0C, 0xFF, 0x56, 0x53, 0x7E, 0x64, 0xFF, 0x14, 0x03, 0x2B, 0x08, 0x00, 0x78
	.byte 0x5D, 0x64, 0xFF, 0x14, 0x03, 0x2B, 0x08, 0x00

