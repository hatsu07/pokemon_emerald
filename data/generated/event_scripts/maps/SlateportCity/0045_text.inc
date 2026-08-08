	@ data/maps/SlateportCity/scripts.inc:1034 SlateportCity_Text_ShouldTakeItAll
	.globl gText_Rom_1DCDF2
gText_Rom_1DCDF2: @ 0x081DCDF2
	.string "はくぶつかんに ほしいもの あるなら\nまるごと うばっちゃえば いいのに……$"
	.if (. - gText_Rom_1DCDF2) > 0x27
	.error "gText_Rom_1DCDF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCDF2) < 0x27
	.space 0x27 - (. - gText_Rom_1DCDF2)
	.endif
