	@ asm/clear_save_data_screen.s:35 Task_DoClearSaveDataScreenYesNo
	.globl gText_Rom_5CDB60
	.globl gText_ClearAllSaveDataPrompt
gText_Rom_5CDB60: @ 0x085CDB60
gText_ClearAllSaveDataPrompt:
	.string "すべての　セーブデータエリアを\nクリア　しますか？$"
	.if (. - gText_Rom_5CDB60) > 0x1a
	.error "gText_Rom_5CDB60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CDB60) < 0x1a
	.space 0x1a - (. - gText_Rom_5CDB60)
	.endif
