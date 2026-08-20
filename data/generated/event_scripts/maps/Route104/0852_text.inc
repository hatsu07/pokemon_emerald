	@ data/maps/Route104/scripts.inc:1008 Route104_Text_ThrowBallAtWeakenedPokemon
	.globl gText_Rom_1E7B5C
gText_Rom_1E7B5C: @ 0x081E7B5C
	.string "モンスターボールを なげるときは\nポケモンの わざで\lどくや やけどに したり\lねむらせると つかまえ やすいよ!{EOS}"
	.if (. - gText_Rom_1E7B5C) > 0x3a
	.error "gText_Rom_1E7B5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E7B5C) < 0x3a
	.space 0x3a - (. - gText_Rom_1E7B5C)
	.endif
