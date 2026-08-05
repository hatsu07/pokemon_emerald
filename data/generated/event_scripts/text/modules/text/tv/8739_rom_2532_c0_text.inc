	@ data/text/tv.inc:1165 GabbyAndTy_Text_GabbyDefeat (+1 aliases)
	.globl gText_Rom_2532C0
gText_Rom_2532C0: @ 0x082532C0
	.string "マリ『すごい たたかいだったわ!\nほら ちゃんと カメラにとった!?"
	.byte EOS
	.if (. - gText_Rom_2532C0) > 0x23
	.error "gText_Rom_2532C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2532C0) < 0x23
	.space 0x23 - (. - gText_Rom_2532C0)
	.endif
