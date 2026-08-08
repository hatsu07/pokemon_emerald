	@ data/maps/Route104/scripts.inc:1097 Route104_Text_MayHaventRaisedPokemon (+1 aliases)
	.globl gText_Rom_1E7EFD
gText_Rom_1E7EFD: @ 0x081E7EFD
	.string "ハルカ『えー なんでよー\nあんまり ポケモン つかまえたり\lそだてたり してないのかな?\pそれじゃあ トレーナーとして\nまだまだ ね!$"
	.if (. - gText_Rom_1E7EFD) > 0x44
	.error "gText_Rom_1E7EFD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E7EFD) < 0x44
	.space 0x44 - (. - gText_Rom_1E7EFD)
	.endif
