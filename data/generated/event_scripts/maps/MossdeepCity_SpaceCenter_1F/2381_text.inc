	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:308 MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace
	.globl gText_Rom_20D2E6
gText_Rom_20D2E6: @ 0x0820D2E6
	.string "ひとに よっては\nポケモンは うちゅうから やってきた!\lって いうよね! ほんとう かなー？{EOS}"
	.if (. - gText_Rom_20D2E6) > 0x30
	.error "gText_Rom_20D2E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20D2E6) < 0x30
	.space 0x30 - (. - gText_Rom_20D2E6)
	.endif
