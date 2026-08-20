	@ data/text/trainers.inc:3059 Route128_Text_CarleePostBattle
	.globl gText_Rom_2614FE
gText_Rom_2614FE: @ 0x082614FE
	.string "そろそろ もどって\nひやけどめ ぬりなおさなきゃ{EOS}"
	.if (. - gText_Rom_2614FE) > 0x19
	.error "gText_Rom_2614FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2614FE) < 0x19
	.space 0x19 - (. - gText_Rom_2614FE)
	.endif
