	@ data/maps/Route101/scripts.inc:289 Route101_Text_WildPokemonInTallGrass
	.globl gText_Rom_1E67C3
gText_Rom_1E67C3: @ 0x081E67C3
	.string "やせいの ポケモンは\nくさむらから とびだしてくる からな!\pこうして くさむらの なかに はいって\nつかまえたい ポケモンを さがすんだよ!{EOS}"
	.if (. - gText_Rom_1E67C3) > 0x48
	.error "gText_Rom_1E67C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E67C3) < 0x48
	.space 0x48 - (. - gText_Rom_1E67C3)
	.endif
