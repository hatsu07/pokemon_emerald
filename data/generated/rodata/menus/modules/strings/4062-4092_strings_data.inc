	@ src/strings.c:29 gText_AButton
	.globl gText_Rom_5C8DFC
gText_Rom_5C8DFC: @ 0x085C8DFC
	.string "エーボタン$"
	.if (. - gText_Rom_5C8DFC) > 0x6
	.error "gText_Rom_5C8DFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8DFC) < 0x6
	.space 0x6 - (. - gText_Rom_5C8DFC)
	.endif

	@ src/strings.c:30 gText_BButton
	.globl gText_Rom_5C8E02
gText_Rom_5C8E02: @ 0x085C8E02
	.string "ビーボタン$"
	.if (. - gText_Rom_5C8E02) > 0x6
	.error "gText_Rom_5C8E02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E02) < 0x6
	.space 0x6 - (. - gText_Rom_5C8E02)
	.endif

	@ src/strings.c:31 gText_RButton
	.globl gText_Rom_5C8E08
gText_Rom_5C8E08: @ 0x085C8E08
	.string "アールボタン$"
	.if (. - gText_Rom_5C8E08) > 0x7
	.error "gText_Rom_5C8E08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E08) < 0x7
	.space 0x7 - (. - gText_Rom_5C8E08)
	.endif

	@ src/strings.c:32 gText_LButton
	.globl gText_Rom_5C8E0F
gText_Rom_5C8E0F: @ 0x085C8E0F
	.string "エルボタン$"
	.if (. - gText_Rom_5C8E0F) > 0x6
	.error "gText_Rom_5C8E0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E0F) < 0x6
	.space 0x6 - (. - gText_Rom_5C8E0F)
	.endif

	@ src/strings.c:33 gText_Start
	.globl gText_Rom_5C8E15
gText_Rom_5C8E15: @ 0x085C8E15
	.string "スタートボタン$"
	.if (. - gText_Rom_5C8E15) > 0x8
	.error "gText_Rom_5C8E15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E15) < 0x8
	.space 0x8 - (. - gText_Rom_5C8E15)
	.endif

	@ src/strings.c:34 gText_Select
	.globl gText_Rom_5C8E1D
gText_Rom_5C8E1D: @ 0x085C8E1D
	.string "セレクトボタン$"
	.if (. - gText_Rom_5C8E1D) > 0x8
	.error "gText_Rom_5C8E1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E1D) < 0x8
	.space 0x8 - (. - gText_Rom_5C8E1D)
	.endif

	@ src/strings.c:35 gText_ControlPad
	.globl gText_Rom_5C8E25
gText_Rom_5C8E25: @ 0x085C8E25
	.string "じゅうじボタン$"
	.if (. - gText_Rom_5C8E25) > 0x8
	.error "gText_Rom_5C8E25 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E25) < 0x8
	.space 0x8 - (. - gText_Rom_5C8E25)
	.endif

	@ src/strings.c:36 gText_LButtonRButton
	.globl gText_Rom_5C8E2D
gText_Rom_5C8E2D: @ 0x085C8E2D
	.string "Lボタン Rボタン$"
	.if (. - gText_Rom_5C8E2D) > 0xa
	.error "gText_Rom_5C8E2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E2D) < 0xa
	.space 0xa - (. - gText_Rom_5C8E2D)
	.endif

	@ src/strings.c:37 gText_Controls
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8E37
gText_Rom_5C8E37: @ 0x085C8E37
	.string " そうさ せつめい$"
	.if (. - gText_Rom_5C8E37) != 0xa
	.error "gText_Rom_5C8E37 must retain its original byte length"
	.endif
	.globl gText_Rom_5C8E3C
	.set gText_Rom_5C8E3C, gText_Rom_5C8E37 + 0x5
	@ ANALYSIS: RAW_RANGE offset=0x5C8E41, size=0xB
	.byte 0x00, 0x00, 0x00, 0xF8, 0x0A, 0x04, 0x27, 0x48, 0x00, 0xF8, 0x00

	@ src/strings.c:134 gMenuText_Confirm (+2 aliases)
	.globl gText_Rom_5C8E4C
gText_Rom_5C8E4C: @ 0x085C8E4C
	.string "けってい$"
	.if (. - gText_Rom_5C8E4C) > 0x5
	.error "gText_Rom_5C8E4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E4C) < 0x5
	.space 0x5 - (. - gText_Rom_5C8E4C)
	.endif
	.space 0x3, 0x00

	@ src/strings.c:39 gText_Next
	.globl gText_Rom_5C8E54
gText_Rom_5C8E54: @ 0x085C8E54
	.string "{A_BUTTON}つぎ$"
	.if (. - gText_Rom_5C8E54) > 0x5
	.error "gText_Rom_5C8E54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E54) < 0x5
	.space 0x5 - (. - gText_Rom_5C8E54)
	.endif
	.space 0x3, 0x00

	@ src/strings.c:40 gText_NextBack
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8E5C
gText_Rom_5C8E5C: @ 0x085C8E5C
	.string "{A_BUTTON}つぎ {B_BUTTON}もどる$"
	.if (. - gText_Rom_5C8E5C) != 0xb
	.error "gText_Rom_5C8E5C must retain its original byte length"
	.endif
	.globl gText_Rom_5C8E63
	.set gText_Rom_5C8E63, gText_Rom_5C8E5C + 0x7
	.space 0x1, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085C8E68: hall_of_fame.s: Task_HofPC_DrawSpritesPrintText
	.globl gHallOfFameData_085C8E68
gHallOfFameData_085C8E68:
	.globl gUnknown_85C8E68
gUnknown_85C8E68: @ 0x085C8E68
	@ analyzed canonical ROM range 0x085C8E68-0x085C8E74
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0xD
	.byte 0xF8, 0x0A, 0x04, 0x27, 0x48, 0x00, 0xF8, 0x00, 0x12, 0x38, 0x00, 0xF8, 0x01
	.globl gText_Rom_5C8E75
gText_Rom_5C8E75: @ 0x085C8E75
	.string "おわる$"
	.if (. - gText_Rom_5C8E75) > 0x4
	.error "gText_Rom_5C8E75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E75) < 0x4
	.space 0x4 - (. - gText_Rom_5C8E75)
	.endif
	.space 0x3, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085C8E7C: hall_of_fame.s: Task_HofPC_DrawSpritesPrintText
	.globl gHallOfFameData_085C8E7C
gHallOfFameData_085C8E7C:
	.globl gUnknown_85C8E7C
gUnknown_85C8E7C: @ 0x085C8E7C
	@ analyzed canonical ROM range 0x085C8E7C-0x085C8E85
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0xA
	.2byte 0x0AF8, 0x2704, 0x0048, 0x00F8, 0x01F8
	.globl gText_Rom_5C8E86
gText_Rom_5C8E86: @ 0x085C8E86
	.string "おわる$"
	.if (. - gText_Rom_5C8E86) > 0x4
	.error "gText_Rom_5C8E86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E86) < 0x4
	.space 0x4 - (. - gText_Rom_5C8E86)
	.endif
	.space 0x2, 0x00
	.globl gUnknown_85C8E8C
gUnknown_85C8E8C: @ 0x085C8E8C

	@ src/strings.c:43 gText_AButtonExit
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8E8C
gText_Rom_5C8E8C: @ 0x085C8E8C
	.string "{A_BUTTON}おわる$"
	.if (. - gText_Rom_5C8E8C) != 0x6
	.error "gText_Rom_5C8E8C must retain its original byte length"
	.endif
