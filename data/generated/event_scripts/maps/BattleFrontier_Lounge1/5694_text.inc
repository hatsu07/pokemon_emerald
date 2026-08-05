	@ data/maps/BattleFrontier_Lounge1/scripts.inc:205 BattleFrontier_Lounge1_Text_LetsLookAtYourPokemon
	.globl gText_Rom_235A40
gText_Rom_235A40: @ 0x08235A40
	.string "おお! わかいの!\nポケモンの のうりょくが きになるんか?\pほれほれ!\nわしに ポケモンを みせて みい!"
	.byte EOS
	.if (. - gText_Rom_235A40) > 0x37
	.error "gText_Rom_235A40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_235A40) < 0x37
	.space 0x37 - (. - gText_Rom_235A40)
	.endif
