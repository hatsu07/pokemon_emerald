	@ data/maps/Route101/scripts.inc:283 Route101_Text_TakeTiredPokemonToPokeCenter
	.globl gText_Rom_1E6782
gText_Rom_1E6782: @ 0x081E6782
	.string "ポケモンが よわってきたら\nポケモンセンターに いくと いいよ!\pポケモンセンターなら すぐ ちかく\nコトキタウンに あるからね{EOS}"
	.if (. - gText_Rom_1E6782) > 0x41
	.error "gText_Rom_1E6782 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E6782) < 0x41
	.space 0x41 - (. - gText_Rom_1E6782)
	.endif
