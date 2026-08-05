	@ src/battle_message.c:1460 gText_LinkStandby
	.globl gText_Rom_5ABB62
gText_Rom_5ABB62: @ 0x085ABB62
	.string "{PAUSE 16}つうしんたいきちゅう……$"
	.if (. - gText_Rom_5ABB62) > 0x10
	.error "gText_Rom_5ABB62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABB62) < 0x10
	.space 0x10 - (. - gText_Rom_5ABB62)
	.endif
