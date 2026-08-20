	@ data/text/trainers.inc:3056 Route128_Text_CarleeDefeat (+1 aliases)
	.globl gText_Rom_2614EC
gText_Rom_2614EC: @ 0x082614EC
	.string "まぶしくて よく みえなかったの!{EOS}"
	.if (. - gText_Rom_2614EC) > 0x12
	.error "gText_Rom_2614EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2614EC) < 0x12
	.space 0x12 - (. - gText_Rom_2614EC)
	.endif
