	@ data/maps/Route118/scripts.inc:286 Route118_Text_CanCrossRiversWithSurf
	.globl gText_Rom_1ECC68
gText_Rom_1ECC68: @ 0x081ECC68
	.string "ふねを もって いなくても\nなみのりを おぼえた ポケモンが いれば\lうみや かわを わたって いけちゃうの！\pポケモンって たのもしーい！{EOS}"
	.if (. - gText_Rom_1ECC68) > 0x47
	.error "gText_Rom_1ECC68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1ECC68) < 0x47
	.space 0x47 - (. - gText_Rom_1ECC68)
	.endif
