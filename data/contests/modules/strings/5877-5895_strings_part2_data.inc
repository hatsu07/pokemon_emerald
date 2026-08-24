	@ src/strings.c:642 gText_PresentTime
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PresentTime
gText_PresentTime: @ 0x085CBEE9
	.string "げんざいの ゲームない じかん{EOS}"
	.if (. - gText_PresentTime) != 0x10
	.error "gText_PresentTime must retain its original byte length"
	.endif

	@ src/strings.c:643 gText_PreviousTime
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PreviousTime
gText_PreviousTime: @ 0x085CBEF9
	.string "ぜんかいの ゲームない じかん{EOS}"
	.if (. - gText_PreviousTime) != 0x10
	.error "gText_PreviousTime must retain its original byte length"
	.endif

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
