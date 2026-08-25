	@ asm/clear_save_data_screen.s:35 Task_DoClearSaveDataScreenYesNo
	.globl gText_ClearAllSaveDataPrompt
.Lbatch81_text_start_gText_Rom_5CDB60: @ 0x085CDB60
gText_ClearAllSaveDataPrompt:
	.string "すべての　セーブデータエリアを\nクリア　しますか？{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CDB60) > 0x1a
	.error ".Lbatch81_text_start_gText_Rom_5CDB60 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5CDB60) < 0x1a
	.space 0x1a - (. - .Lbatch81_text_start_gText_Rom_5CDB60)
	.endif

	@ asm/clear_save_data_screen.s:97 Task_ClearSaveDataScreenYesNoChoice
	.globl gText_ClearingSaveData
.Lbatch81_text_start_gText_Rom_5CDB7A: @ 0x085CDB7A
gText_ClearingSaveData:
	.string "クリア　しています\nおまち　ください{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CDB7A) > 0x13
	.error ".Lbatch81_text_start_gText_Rom_5CDB7A may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5CDB7A) < 0x13
	.space 0x13 - (. - .Lbatch81_text_start_gText_Rom_5CDB7A)
	.endif
	.balign 4, 0
