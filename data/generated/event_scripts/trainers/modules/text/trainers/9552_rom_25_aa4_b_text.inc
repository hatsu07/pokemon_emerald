	@ data/text/trainers.inc:482 Route107_Text_LisaNotEnoughPokemon (+1 aliases)
	.globl gText_Rom_25AA4B
gText_Rom_25AA4B: @ 0x0825AA4B
	.string "ユミ『アタシたちと たたかうなら\nポケモン もっと つれてきなさいな$"
	.if (. - gText_Rom_25AA4B) > 0x23
	.error "gText_Rom_25AA4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AA4B) < 0x23
	.space 0x23 - (. - gText_Rom_25AA4B)
	.endif
