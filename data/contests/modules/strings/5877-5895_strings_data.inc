	@ src/strings.c:640 gText_Hideout
	.globl gText_Hideout
gText_Hideout: @ 0x085CBEC7
	.string "アジト{EOS}"
	.if (. - gText_Hideout) > 0x4
	.error "gText_Hideout may not grow beyond its original slot"
	.endif
	.if (. - gText_Hideout) < 0x4
	.space 0x4 - (. - gText_Hideout)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085CBECB: reset_rtc_screen.s: Task_ShowResetRtcPrompt
	.globl gResetRtcScreenData_085CBECB
gResetRtcScreenData_085CBECB: @ 0x085CBECB
	@ analyzed canonical ROM range 0x085CBECB-0x085CBEE8
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x1E bytes=30
	.byte 0xCC, 0xCE, 0xBD, 0x2D, 0x00, 0x78, 0x5E, 0xA0, 0x64, 0x0C, 0x1F, 0x0D, 0xFE, 0xBB, 0x44, 0x00
	.byte 0x09, 0x50, 0x13, 0x02, 0x00, 0xBC, 0x44, 0x00, 0x57, 0x84, 0x7E, 0x5E, 0x79, 0xFF

	@ src/strings.c:642 gText_PresentTime
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PresentTime
gText_PresentTime: @ 0x085CBEE9
	.string "げんざいの ゲームない じかん{EOS}"
	.if (. - gText_PresentTime) != 0x10
	.error "gText_PresentTime must retain its original byte length"
	.endif
	.globl gText_Rom_5CBEF5
	.set gText_Rom_5CBEF5, gText_PresentTime + 0xc

	@ src/strings.c:643 gText_PreviousTime
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PreviousTime
gText_PreviousTime: @ 0x085CBEF9
	.string "ぜんかいの ゲームない じかん{EOS}"
	.if (. - gText_PreviousTime) != 0x10
	.error "gText_PreviousTime must retain its original byte length"
	.endif
	.globl gText_Rom_5CBF05
	.set gText_Rom_5CBF05, gText_PreviousTime + 0xc

	@ src/strings.c:644 gText_PleaseResetTime
	.globl gText_PleaseResetTime
gText_PleaseResetTime: @ 0x085CBF09
	.string "じかんを さいせってい してください{EOS}"
	.if (. - gText_PleaseResetTime) > 0x13
	.error "gText_PleaseResetTime may not grow beyond its original slot"
	.endif
	.if (. - gText_PleaseResetTime) < 0x13
	.space 0x13 - (. - gText_PleaseResetTime)
	.endif

	@ src/strings.c:645 gText_ClockHasBeenReset
	.globl gText_ClockHasBeenReset
gText_ClockHasBeenReset: @ 0x085CBF1C
	.string "じかんを さいせってい しました!\nレポートを かいています おまちください{EOS}"
	.if (. - gText_ClockHasBeenReset) > 0x27
	.error "gText_ClockHasBeenReset may not grow beyond its original slot"
	.endif
	.if (. - gText_ClockHasBeenReset) < 0x27
	.space 0x27 - (. - gText_ClockHasBeenReset)
	.endif

	@ src/strings.c:646 gText_SaveCompleted
	.globl gText_SaveCompleted
gText_SaveCompleted: @ 0x085CBF43
	.string "レポートを かきこみました!{EOS}"
	.if (. - gText_SaveCompleted) > 0xf
	.error "gText_SaveCompleted may not grow beyond its original slot"
	.endif
	.if (. - gText_SaveCompleted) < 0xf
	.space 0xf - (. - gText_SaveCompleted)
	.endif

	@ src/strings.c:647 gText_SaveFailed
	.globl gText_SaveFailed
gText_SaveFailed: @ 0x085CBF52
	.string "レポートの かきこみに\nしっぱい しました…{EOS}"
	.if (. - gText_SaveFailed) > 0x17
	.error "gText_SaveFailed may not grow beyond its original slot"
	.endif
	.if (. - gText_SaveFailed) < 0x17
	.space 0x17 - (. - gText_SaveFailed)
	.endif

	@ src/strings.c:648 gText_NoSaveFileCantSetTime
	.globl gText_NoSaveFileCantSetTime
gText_NoSaveFileCantSetTime: @ 0x085CBF69
	.string "レポートが ないので\nじかんの せっていは できません!{EOS}"
	.if (. - gText_NoSaveFileCantSetTime) > 0x1d
	.error "gText_NoSaveFileCantSetTime may not grow beyond its original slot"
	.endif
	.if (. - gText_NoSaveFileCantSetTime) < 0x1d
	.space 0x1d - (. - gText_NoSaveFileCantSetTime)
	.endif

	@ src/strings.c:649 gText_InGameClockUsable
	.globl gText_InGameClockUsable
gText_InGameClockUsable: @ 0x085CBF86
	.string "ゲームない じかんの しゅうせい システムが\nつかえる ように なりました!{EOS}"
	.if (. - gText_InGameClockUsable) > 0x27
	.error "gText_InGameClockUsable may not grow beyond its original slot"
	.endif
	.if (. - gText_InGameClockUsable) < 0x27
	.space 0x27 - (. - gText_InGameClockUsable)
	.endif
