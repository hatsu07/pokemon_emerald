	@ data/text/trainers.inc:3326 Route133_Text_BeckPostBattle
	.globl gText_Rom_261F9D
gText_Rom_261F9D: @ 0x08261F9D
	.string "そろそろ ヒワマキに かえりたいけど\nなんとなく ここ すきに なっちゃったぞ!?$"
	.if (. - gText_Rom_261F9D) > 0x2a
	.error "gText_Rom_261F9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261F9D) < 0x2a
	.space 0x2a - (. - gText_Rom_261F9D)
	.endif
