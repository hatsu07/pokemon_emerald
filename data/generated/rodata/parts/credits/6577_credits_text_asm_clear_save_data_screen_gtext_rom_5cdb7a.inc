	@ asm/clear_save_data_screen.s:97 Task_ClearSaveDataScreenYesNoChoice
	.globl gText_Rom_5CDB7A
	.globl gText_ClearingSaveData
gText_Rom_5CDB7A: @ 0x085CDB7A
gText_ClearingSaveData:
	.string "クリア　しています\nおまち　ください$"
	.if (. - gText_Rom_5CDB7A) > 0x13
	.error "gText_Rom_5CDB7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CDB7A) < 0x13
	.space 0x13 - (. - gText_Rom_5CDB7A)
	.endif
	.balign 4, 0
