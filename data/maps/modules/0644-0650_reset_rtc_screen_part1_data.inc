	@ pret/pokeemerald-jp direct xref for 0x084E8A48: reset_rtc_screen.s: sub_0809E920
	.globl gResetRtcScreenData_084E8A48
gResetRtcScreenData_084E8A48: @ 0x084E8A48
gResetRtcBgTemplate: @ 0x084E8A48
	bg_template 0, 0, 31, 0, 0, 0, 0
	@ pret/pokeemerald-jp direct xref for 0x084E8A4C: reset_rtc_screen.s: sub_0809E920
	.globl gResetRtcScreenData_084E8A4C
gResetRtcScreenData_084E8A4C: @ 0x084E8A4C
gResetRtcWindowTemplates: @ 0x084E8A4C
	window_template 0, 1, 1, 19, 9, 15, 0x155
	window_template 0, 4, 15, 22, 4, 15, 0xFD
	null_window_template
	@ pret/pokeemerald-jp direct xref for 0x084E8A64: reset_rtc_screen.s: Task_ResetRtc_0
	.globl gResetRtcScreenData_084E8A64
gResetRtcScreenData_084E8A64: @ 0x084E8A64
gResetRtcChooseTimeWindowTemplate: @ 0x084E8A64
	window_template 0, 4, 9, 21, 2, 15, 0xD3

	@ asm/reset_rtc_screen.s:427 PrintTime
.Lbatch85_alias_start_gText_Rom_4E8A6C: @ 0x084E8A6C
gText_ResetRtcDaySuffix: @ 0x084E8A6C
gResetRtcCursorStateInfoBase: @ 0x084E8A6C
	.string "にち{EOS}"
	.if (. - .Lbatch85_alias_start_gText_Rom_4E8A6C) > 0x3
	.error ".Lbatch85_alias_start_gText_Rom_4E8A6C may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch85_alias_start_gText_Rom_4E8A6C) < 0x3
	.space 0x3 - (. - .Lbatch85_alias_start_gText_Rom_4E8A6C)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x084E8A6F: reset_rtc_screen.s: PrintTime
	.globl gResetRtcScreenData_084E8A6F
gResetRtcScreenData_084E8A6F: @ 0x084E8A6F
gText_ResetRtcTimeColon: @ 0x084E8A6F
	.string ":{EOS}"

