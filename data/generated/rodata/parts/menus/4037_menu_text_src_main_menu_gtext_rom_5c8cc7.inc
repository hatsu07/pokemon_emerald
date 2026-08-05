	@ src/main_menu.c:271 gText_MysteryGiftCantUse
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8CC7
gText_Rom_5C8CC7: @ 0x085C8CC7
	.string "ワイヤレスアダプタ を さしたまま\nふしぎなもらいもの は できません$"
	.if (. - gText_Rom_5C8CC7) != 0x24
	.error "gText_Rom_5C8CC7 must retain its original byte length"
	.endif
