	@ data/text/trainers.inc:2951 Route127_Text_KojiPostBattle
	.globl gText_Rom_26109D
gText_Rom_26109D: @ 0x0826109D
	.string "はだし さいこう!\nだが おまえの その ズックも いいな!{EOS}"
	.if (. - gText_Rom_26109D) > 0x1f
	.error "gText_Rom_26109D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26109D) < 0x1f
	.space 0x1f - (. - gText_Rom_26109D)
	.endif
