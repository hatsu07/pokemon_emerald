	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:202 RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges
	.globl gText_Rom_202E24
gText_Rom_202E24: @ 0x08202E24
	.string "こくばんに\nポケモンが たたかってるときに おこる\lたいちょうの へんかに ついて かかれてる{EOS}"
	.if (. - gText_Rom_202E24) > 0x30
	.error "gText_Rom_202E24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202E24) < 0x30
	.space 0x30 - (. - gText_Rom_202E24)
	.endif
