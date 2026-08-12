	@ src/strings.c:640 gText_Hideout
	.globl gText_Rom_5CBEC7
gText_Rom_5CBEC7: @ 0x085CBEC7
	.string "アジト$"
	.if (. - gText_Rom_5CBEC7) > 0x4
	.error "gText_Rom_5CBEC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBEC7) < 0x4
	.space 0x4 - (. - gText_Rom_5CBEC7)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085CBECB: reset_rtc_screen.s: Task_ShowResetRtcPrompt
	.globl gResetRtcScreenData_085CBECB
gResetRtcScreenData_085CBECB:
	.globl gUnknown_85CBECB
gUnknown_85CBECB: @ 0x085CBECB
	@ analyzed canonical ROM range 0x085CBECB-0x085CBEE8
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x1E
	.byte 0xCC, 0xCE, 0xBD, 0x2D, 0x00, 0x78, 0x5E, 0xA0, 0x64, 0x0C, 0x1F, 0x0D, 0xFE, 0xBB, 0x44, 0x00
	.byte 0x09, 0x50, 0x13, 0x02, 0x00, 0xBC, 0x44, 0x00, 0x57, 0x84, 0x7E, 0x5E, 0x79, 0xFF

	@ src/strings.c:642 gText_PresentTime
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBEE9
gText_Rom_5CBEE9: @ 0x085CBEE9
	.string "げんざいの ゲームない じかん$"
	.if (. - gText_Rom_5CBEE9) != 0x10
	.error "gText_Rom_5CBEE9 must retain its original byte length"
	.endif
	.globl gText_Rom_5CBEF5
	.set gText_Rom_5CBEF5, gText_Rom_5CBEE9 + 0xc

	@ src/strings.c:643 gText_PreviousTime
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBEF9
gText_Rom_5CBEF9: @ 0x085CBEF9
	.string "ぜんかいの ゲームない じかん$"
	.if (. - gText_Rom_5CBEF9) != 0x10
	.error "gText_Rom_5CBEF9 must retain its original byte length"
	.endif
	.globl gText_Rom_5CBF05
	.set gText_Rom_5CBF05, gText_Rom_5CBEF9 + 0xc

	@ src/strings.c:644 gText_PleaseResetTime
	.globl gText_Rom_5CBF09
gText_Rom_5CBF09: @ 0x085CBF09
	.string "じかんを さいせってい してください$"
	.if (. - gText_Rom_5CBF09) > 0x13
	.error "gText_Rom_5CBF09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBF09) < 0x13
	.space 0x13 - (. - gText_Rom_5CBF09)
	.endif

	@ src/strings.c:645 gText_ClockHasBeenReset
	.globl gText_Rom_5CBF1C
gText_Rom_5CBF1C: @ 0x085CBF1C
	.string "じかんを さいせってい しました!\nレポートを かいています おまちください$"
	.if (. - gText_Rom_5CBF1C) > 0x27
	.error "gText_Rom_5CBF1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBF1C) < 0x27
	.space 0x27 - (. - gText_Rom_5CBF1C)
	.endif

	@ src/strings.c:646 gText_SaveCompleted
	.globl gText_Rom_5CBF43
gText_Rom_5CBF43: @ 0x085CBF43
	.string "レポートを かきこみました!$"
	.if (. - gText_Rom_5CBF43) > 0xf
	.error "gText_Rom_5CBF43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBF43) < 0xf
	.space 0xf - (. - gText_Rom_5CBF43)
	.endif

	@ src/strings.c:647 gText_SaveFailed
	.globl gText_Rom_5CBF52
gText_Rom_5CBF52: @ 0x085CBF52
	.string "レポートの かきこみに\nしっぱい しました…$"
	.if (. - gText_Rom_5CBF52) > 0x17
	.error "gText_Rom_5CBF52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBF52) < 0x17
	.space 0x17 - (. - gText_Rom_5CBF52)
	.endif

	@ src/strings.c:648 gText_NoSaveFileCantSetTime
	.globl gText_Rom_5CBF69
gText_Rom_5CBF69: @ 0x085CBF69
	.string "レポートが ないので\nじかんの せっていは できません!$"
	.if (. - gText_Rom_5CBF69) > 0x1d
	.error "gText_Rom_5CBF69 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBF69) < 0x1d
	.space 0x1d - (. - gText_Rom_5CBF69)
	.endif

	@ src/strings.c:649 gText_InGameClockUsable
	.globl gText_Rom_5CBF86
gText_Rom_5CBF86: @ 0x085CBF86
	.string "ゲームない じかんの しゅうせい システムが\nつかえる ように なりました!$"
	.if (. - gText_Rom_5CBF86) > 0x27
	.error "gText_Rom_5CBF86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBF86) < 0x27
	.space 0x27 - (. - gText_Rom_5CBF86)
	.endif
