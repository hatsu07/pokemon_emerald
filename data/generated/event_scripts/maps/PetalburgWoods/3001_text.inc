	@ data/maps/PetalburgWoods/scripts.inc:381 PetalburgWoods_Text_GoBugPokemonTeam (+1 aliases)
	.globl gText_Rom_214837
gText_Rom_214837: @ 0x08214837
	.string "ポケモン いっぱい つかまえた!\pそら いけ!\nぼくの むしポケモン チーム!{EOS}"
	.if (. - gText_Rom_214837) > 0x28
	.error "gText_Rom_214837 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_214837) < 0x28
	.space 0x28 - (. - gText_Rom_214837)
	.endif
