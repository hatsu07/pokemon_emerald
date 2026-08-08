	@ data/text/trainers.inc:67 Route103_Text_AmyPostBattle (+1 aliases)
	.globl gText_Rom_2597F7
gText_Rom_2597F7: @ 0x082597F7
	.string "クミ『ふたりを あいてに するのって\nいろんな ことを かんがえるよね!"
	.byte EOS
	.if (. - gText_Rom_2597F7) > 0x25
	.error "gText_Rom_2597F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2597F7) < 0x25
	.space 0x25 - (. - gText_Rom_2597F7)
	.endif
