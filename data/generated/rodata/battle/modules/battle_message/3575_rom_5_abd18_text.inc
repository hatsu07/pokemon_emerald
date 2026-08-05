	@ src/battle_message.c:1498 gText_BattleTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ABD18
gText_Rom_5ABD18: @ 0x085ABD18
	.string "バトルトーナメント$"
	.if (. - gText_Rom_5ABD18) != 0xa
	.error "gText_Rom_5ABD18 must retain its original byte length"
	.endif
