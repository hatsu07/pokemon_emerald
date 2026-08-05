	@ data/text/trainers.inc:115 Route103_Text_AndrewDefeated (+1 aliases)
	.globl gText_Rom_259A93
gText_Rom_259A93: @ 0x08259A93
	.string "まけたっ!\nよけいに イライラするぞーっ!"
	.byte EOS
	.if (. - gText_Rom_259A93) > 0x16
	.error "gText_Rom_259A93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259A93) < 0x16
	.space 0x16 - (. - gText_Rom_259A93)
	.endif
