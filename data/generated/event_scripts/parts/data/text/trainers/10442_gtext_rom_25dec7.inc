	@ data/text/trainers.inc:1760 Route117_Text_MariaPostRematch
	.globl gText_Rom_25DEC7
gText_Rom_25DEC7: @ 0x0825DEC7
	.string "あしたから また れんしゅう するから\nよかったら また しょうぶ してね!$"
	.if (. - gText_Rom_25DEC7) > 0x27
	.error "gText_Rom_25DEC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DEC7) < 0x27
	.space 0x27 - (. - gText_Rom_25DEC7)
	.endif
