	@ data/text/trainers.inc:1193 Route113_Text_MadelinePostRematch
	.globl gText_Rom_25C71F
gText_Rom_25C71F: @ 0x0825C71F
	.string "あいかわらず おつよいのね\nおねえさん かんしん しちゃったわ{EOS}"
	.if (. - gText_Rom_25C71F) > 0x20
	.error "gText_Rom_25C71F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C71F) < 0x20
	.space 0x20 - (. - gText_Rom_25C71F)
	.endif
