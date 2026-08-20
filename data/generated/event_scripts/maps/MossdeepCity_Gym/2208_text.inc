	@ data/maps/MossdeepCity_Gym/scripts.inc:399 MossdeepCity_Gym_Text_BlakeDefeat (+1 aliases)
	.globl gText_Rom_20BA26
gText_Rom_20BA26: @ 0x0820BA26
	.string "ポケモン しょうぶも\nちょうし わりーっ!{EOS}"
	.if (. - gText_Rom_20BA26) > 0x16
	.error "gText_Rom_20BA26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BA26) < 0x16
	.space 0x16 - (. - gText_Rom_20BA26)
	.endif
