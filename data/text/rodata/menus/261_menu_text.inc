	@ src/main_menu.c:275 gText_ContinueMenuTime (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC341
gText_Rom_5CC341: @ 0x085CC341
	.string "プレイじかん$"
	.if (. - gText_Rom_5CC341) != 0x7
	.error "gText_Rom_5CC341 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC344
	.set gText_Rom_5CC344, gText_Rom_5CC341 + 0x3

	@ src/strings.c:677 gJPText_BattlePoints
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC348
gText_Rom_5CC348: @ 0x085CC348
	.string "ゲームポイント$"
	.if (. - gText_Rom_5CC348) != 0x8
	.error "gText_Rom_5CC348 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC34B
	.set gText_Rom_5CC34B, gText_Rom_5CC348 + 0x3
	.globl gUnknown_85CC350
gUnknown_85CC350: @ 0x085CC350

