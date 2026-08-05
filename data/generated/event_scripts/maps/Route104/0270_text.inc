	@ data/maps/Route104/scripts.inc:1097 Route104_Text_MayHaventRaisedPokemon (+1 aliases)
	.globl gText_Rom_1DF80B
gText_Rom_1DF80B: @ 0x081DF80B
	.string "ハルカ『えー なんでよー\nあんまり ポケモン つかまえたり\lそだてたり してないのかな?\pそれじゃあ トレーナーとして\nまだまだ ね!$"
	.if (. - gText_Rom_1DF80B) > 0x44
	.error "gText_Rom_1DF80B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF80B) < 0x44
	.space 0x44 - (. - gText_Rom_1DF80B)
	.endif
