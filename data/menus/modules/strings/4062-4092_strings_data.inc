	@ src/strings.c:29 gText_AButton
	.globl gText_AButton
gText_AButton: @ 0x085C8DFC
	.string "エーボタン{EOS}"
	.if (. - gText_AButton) > 0x6
	.error "gText_AButton may not grow beyond its original slot"
	.endif
	.if (. - gText_AButton) < 0x6
	.space 0x6 - (. - gText_AButton)
	.endif

	@ src/strings.c:30 gText_BButton
	.globl gText_BButton
gText_BButton: @ 0x085C8E02
	.string "ビーボタン{EOS}"
	.if (. - gText_BButton) > 0x6
	.error "gText_BButton may not grow beyond its original slot"
	.endif
	.if (. - gText_BButton) < 0x6
	.space 0x6 - (. - gText_BButton)
	.endif

	@ src/strings.c:31 gText_RButton
	.globl gText_RButton
gText_RButton: @ 0x085C8E08
	.string "アールボタン{EOS}"
	.if (. - gText_RButton) > 0x7
	.error "gText_RButton may not grow beyond its original slot"
	.endif
	.if (. - gText_RButton) < 0x7
	.space 0x7 - (. - gText_RButton)
	.endif

	@ src/strings.c:32 gText_LButton
	.globl gText_LButton
gText_LButton: @ 0x085C8E0F
	.string "エルボタン{EOS}"
	.if (. - gText_LButton) > 0x6
	.error "gText_LButton may not grow beyond its original slot"
	.endif
	.if (. - gText_LButton) < 0x6
	.space 0x6 - (. - gText_LButton)
	.endif

	@ src/strings.c:33 gText_Start
	.globl gText_Start
gText_Start: @ 0x085C8E15
	.string "スタートボタン{EOS}"
	.if (. - gText_Start) > 0x8
	.error "gText_Start may not grow beyond its original slot"
	.endif
	.if (. - gText_Start) < 0x8
	.space 0x8 - (. - gText_Start)
	.endif

	@ src/strings.c:34 gText_Select
	.globl gText_Select
gText_Select: @ 0x085C8E1D
	.string "セレクトボタン{EOS}"
	.if (. - gText_Select) > 0x8
	.error "gText_Select may not grow beyond its original slot"
	.endif
	.if (. - gText_Select) < 0x8
	.space 0x8 - (. - gText_Select)
	.endif

	@ src/strings.c:35 gText_ControlPad
	.globl gText_ControlPad
gText_ControlPad: @ 0x085C8E25
	.string "じゅうじボタン{EOS}"
	.if (. - gText_ControlPad) > 0x8
	.error "gText_ControlPad may not grow beyond its original slot"
	.endif
	.if (. - gText_ControlPad) < 0x8
	.space 0x8 - (. - gText_ControlPad)
	.endif

	@ src/strings.c:36 gText_LButtonRButton
	.globl gText_LButtonRButton
gText_LButtonRButton: @ 0x085C8E2D
	.string "Lボタン Rボタン{EOS}"
	.if (. - gText_LButtonRButton) > 0xa
	.error "gText_LButtonRButton may not grow beyond its original slot"
	.endif
	.if (. - gText_LButtonRButton) < 0xa
	.space 0xa - (. - gText_LButtonRButton)
	.endif

	@ src/strings.c:37 gText_Controls
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Controls
gText_Controls: @ 0x085C8E37
	.string " そうさ せつめい{EOS}"
	.if (. - gText_Controls) != 0xa
	.error "gText_Controls must retain its original byte length"
	.endif
	.globl gText_Rom_5C8E3C
	.set gText_Rom_5C8E3C, gText_Controls + 0x5
	@ ANALYSIS: RAW_RANGE offset=0x5C8E41, size=0xB
	.byte 0x00, 0x00, 0x00, 0xF8, 0x0A, 0x04, 0x27, 0x48, 0x00, 0xF8, 0x00

	@ src/strings.c:134 gMenuText_Confirm (+2 aliases)
	.globl gText_Rom_5C8E4C
gText_Rom_5C8E4C: @ 0x085C8E4C
	.string "けってい{EOS}"
	.if (. - gText_Rom_5C8E4C) > 0x5
	.error "gText_Rom_5C8E4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E4C) < 0x5
	.space 0x5 - (. - gText_Rom_5C8E4C)
	.endif
	.space 0x3, 0x00

	@ src/strings.c:39 gText_Next
	.globl gText_Next
gText_Next: @ 0x085C8E54
	.string "{A_BUTTON}つぎ{EOS}"
	.if (. - gText_Next) > 0x5
	.error "gText_Next may not grow beyond its original slot"
	.endif
	.if (. - gText_Next) < 0x5
	.space 0x5 - (. - gText_Next)
	.endif
	.space 0x3, 0x00

	@ src/strings.c:40 gText_NextBack
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_NextBack
gText_NextBack: @ 0x085C8E5C
	.string "{A_BUTTON}つぎ {B_BUTTON}もどる{EOS}"
	.if (. - gText_NextBack) != 0xb
	.error "gText_NextBack must retain its original byte length"
	.endif
	.globl gText_Rom_5C8E63
	.set gText_Rom_5C8E63, gText_NextBack + 0x7
	.space 0x1, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085C8E68: hall_of_fame.s: Task_HofPC_DrawSpritesPrintText
	.globl gHallOfFameData_085C8E68
gHallOfFameData_085C8E68: @ 0x085C8E68
	@ analyzed canonical ROM range 0x085C8E68-0x085C8E74
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0xD bytes=13
	.byte 0xF8, 0x0A, 0x04, 0x27, 0x48, 0x00, 0xF8, 0x00, 0x12, 0x38, 0x00, 0xF8, 0x01
	.globl gText_Rom_5C8E75
gText_Rom_5C8E75: @ 0x085C8E75
	.string "おわる{EOS}"
	.if (. - gText_Rom_5C8E75) > 0x4
	.error "gText_Rom_5C8E75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E75) < 0x4
	.space 0x4 - (. - gText_Rom_5C8E75)
	.endif
	.space 0x3, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085C8E7C: hall_of_fame.s: Task_HofPC_DrawSpritesPrintText
	.globl gHallOfFameData_085C8E7C
gHallOfFameData_085C8E7C: @ 0x085C8E7C
	@ analyzed canonical ROM range 0x085C8E7C-0x085C8E85
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xA entries=5
	.2byte 0x0AF8, 0x2704, 0x0048, 0x00F8, 0x01F8
	.globl gText_Rom_5C8E86
gText_Rom_5C8E86: @ 0x085C8E86
	.string "おわる{EOS}"
	.if (. - gText_Rom_5C8E86) > 0x4
	.error "gText_Rom_5C8E86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E86) < 0x4
	.space 0x4 - (. - gText_Rom_5C8E86)
	.endif
	.space 0x2, 0x00

	@ src/strings.c:43 gText_AButtonExit
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_AButtonExit
gText_AButtonExit: @ 0x085C8E8C
	.string "{A_BUTTON}おわる{EOS}"
	.if (. - gText_AButtonExit) != 0x6
	.error "gText_AButtonExit must retain its original byte length"
	.endif
