	@ data/text/trainers.inc:2795 Route125_Text_PresleyPostBattle
	.globl gText_Rom_260ACD
gText_Rom_260ACD: @ 0x08260ACD
	.string "あきビンに メールを いれて\nさっき うみに ながしたんだ!\pきっと かわいい ビキニの おんなのコが\nひろって くれるぜ!{EOS}"
	.if (. - gText_Rom_260ACD) > 0x3f
	.error "gText_Rom_260ACD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260ACD) < 0x3f
	.space 0x3f - (. - gText_Rom_260ACD)
	.endif
