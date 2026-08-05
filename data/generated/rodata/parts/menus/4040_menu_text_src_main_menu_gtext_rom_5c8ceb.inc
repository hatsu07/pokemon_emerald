	@ src/main_menu.c:272 gText_MysteryEventsCantUse
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8CEB
gText_Rom_5C8CEB: @ 0x085C8CEB
	.string "ワイヤレスアダプタ を さしたまま\nふしぎなできごと は できません$"
	.if (. - gText_Rom_5C8CEB) != 0x23
	.error "gText_Rom_5C8CEB must retain its original byte length"
	.endif
