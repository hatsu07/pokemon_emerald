	@ data/text/trainers.inc:70 Route103_Text_AmyNotEnoughPokemon (+2 aliases)
	.globl gText_Rom_25998D
gText_Rom_25998D: @ 0x0825998D
	.string "クミ『あら?\nポケモン 1ひきしか つれてないんだね!\lそれじゃあ あたしたちと たたかえないわ!"
	.byte EOS
	.if (. - gText_Rom_25998D) > 0x32
	.error "gText_Rom_25998D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25998D) < 0x32
	.space 0x32 - (. - gText_Rom_25998D)
	.endif
