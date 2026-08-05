	@ data/text/trainers.inc:1181 Route113_Text_MadelinePostBattle
	.globl gText_Rom_25C6BA
gText_Rom_25C6BA: @ 0x0825C6BA
	.string "とても おつよいのね\nおねえさん かんしん しちゃったわ$"
	.if (. - gText_Rom_25C6BA) > 0x1d
	.error "gText_Rom_25C6BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C6BA) < 0x1d
	.space 0x1d - (. - gText_Rom_25C6BA)
	.endif
