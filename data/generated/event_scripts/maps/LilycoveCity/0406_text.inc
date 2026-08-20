	@ data/maps/LilycoveCity/scripts.inc:616 LilycoveCity_Text_SomeoneStoleMyPokemon
	.globl gText_Rom_1E0FA2
gText_Rom_1E0FA2: @ 0x081E0FA2
	.string "うみべの やどで なみの おとを\nききながら のんびり おひるね\l……を していたら\pわたしの ポケモン とられちゃった!\pはんにんは だれー!?\nアクアだん? アクアだん なのー!?{EOS}"
	.if (. - gText_Rom_1E0FA2) > 0x5d
	.error "gText_Rom_1E0FA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0FA2) < 0x5d
	.space 0x5d - (. - gText_Rom_1E0FA2)
	.endif
