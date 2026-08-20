	@ data/text/trainers.inc:2669 Route124_Text_LilaRematchDefeat (+1 aliases)
	.globl gText_Rom_260536
gText_Rom_260536: @ 0x08260536
	.string "カコ『コウったら!\nあんたの せいで また まけたでしょ!\lあとで とっくん だかんね!!{EOS}"
	.if (. - gText_Rom_260536) > 0x2e
	.error "gText_Rom_260536 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260536) < 0x2e
	.space 0x2e - (. - gText_Rom_260536)
	.endif
