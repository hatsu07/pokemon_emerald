	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:206 SootopolisCity_Gym_1F_Text_JuanPostBattle
	.globl gText_Rom_20E827
gText_Rom_20E827: @ 0x0820E827
	.string "ホウエンで あつめられる\nすべての ジムバッジを てにいれた\lトレーナーが いくべき ばしょ\pそれが ポケモンリーグ\pポケモンリーグに いくならば\nホウエンちほうの さいはて\lサイユウという しまに むかうのです$"
	.if (. - gText_Rom_20E827) > 0x6b
	.error "gText_Rom_20E827 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E827) < 0x6b
	.space 0x6b - (. - gText_Rom_20E827)
	.endif
