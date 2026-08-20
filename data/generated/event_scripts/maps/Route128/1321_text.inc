	@ data/maps/Route128/scripts.inc:247 Route128_Text_ArchieIOnlyWanted
	.globl gText_Rom_1EF059
gText_Rom_1EF059: @ 0x081EF059
	.string "おれは……\nただ……{EOS}"
	.if (. - gText_Rom_1EF059) > 0xb
	.error "gText_Rom_1EF059 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EF059) < 0xb
	.space 0xb - (. - gText_Rom_1EF059)
	.endif
