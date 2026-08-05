	@ data/text/trainers.inc:67 Route103_Text_AmyPostBattle (+1 aliases)
	.globl gText_Rom_259968
gText_Rom_259968: @ 0x08259968
	.string "クミ『ふたりを あいてに するのって\nいろんな ことを かんがえるよね!"
	.byte EOS
	.if (. - gText_Rom_259968) > 0x25
	.error "gText_Rom_259968 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259968) < 0x25
	.space 0x25 - (. - gText_Rom_259968)
	.endif
