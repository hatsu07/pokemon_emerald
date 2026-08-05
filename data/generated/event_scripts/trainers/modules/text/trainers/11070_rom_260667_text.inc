	@ data/text/trainers.inc:2690 Route124_Text_DeclanIntro (+1 aliases)
	.globl gText_Rom_260667
gText_Rom_260667: @ 0x08260667
	.string "こんな きれいな うみで\nひとりで およいでいる オレ!\lはっきりいって かなしすぎます!$"
	.if (. - gText_Rom_260667) > 0x2e
	.error "gText_Rom_260667 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260667) < 0x2e
	.space 0x2e - (. - gText_Rom_260667)
	.endif
