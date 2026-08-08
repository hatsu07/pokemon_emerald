	@ data/text/trainers.inc:1673 Route116_Text_JohnsonDefeat (+1 aliases)
	.globl gText_Rom_25DAEE
gText_Rom_25DAEE: @ 0x0825DAEE
	.string "まけた けど おもしろかったよ!$"
	.if (. - gText_Rom_25DAEE) > 0x11
	.error "gText_Rom_25DAEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DAEE) < 0x11
	.space 0x11 - (. - gText_Rom_25DAEE)
	.endif
