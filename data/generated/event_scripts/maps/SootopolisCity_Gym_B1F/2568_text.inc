	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:114 SootopolisCity_Gym_B1F_Text_TiffanyPostBattle
	.globl gText_Rom_20EE7C
gText_Rom_20EE7C: @ 0x0820EE7C
	.string "あたりまえ だけど\nポケモンの つよさに\lおとなも こどもも かんけい ないよ$"
	.if (. - gText_Rom_20EE7C) > 0x28
	.error "gText_Rom_20EE7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EE7C) < 0x28
	.space 0x28 - (. - gText_Rom_20EE7C)
	.endif
