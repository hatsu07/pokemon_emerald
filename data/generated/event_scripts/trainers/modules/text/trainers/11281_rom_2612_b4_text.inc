	@ data/text/trainers.inc:3002 Route128_Text_KatelynPostBattle
	.globl gText_Rom_2612B4
gText_Rom_2612B4: @ 0x082612B4
	.string "つぎは じてんしゃ だけど……\nくじけそうだわ……{EOS}"
	.if (. - gText_Rom_2612B4) > 0x1a
	.error "gText_Rom_2612B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2612B4) < 0x1a
	.space 0x1a - (. - gText_Rom_2612B4)
	.endif
