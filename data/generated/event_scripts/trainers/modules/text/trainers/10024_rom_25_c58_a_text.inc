	@ data/text/trainers.inc:1154 Route112_Text_ShaylaPostBattle
	.globl gText_Rom_25C58A
gText_Rom_25C58A: @ 0x0825C58A
	.string "ねえ いま いそがしいの?\nえっと もし よかったら\lさっそく 2かいせん と おもって……\lん? いそがしいなら いいわ{EOS}"
	.if (. - gText_Rom_25C58A) > 0x3e
	.error "gText_Rom_25C58A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C58A) < 0x3e
	.space 0x3e - (. - gText_Rom_25C58A)
	.endif
