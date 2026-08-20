	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:90 SootopolisCity_Gym_B1F_Text_BridgetIntro (+1 aliases)
	.globl gText_Rom_20ED5F
gText_Rom_20ED5F: @ 0x0820ED5F
	.string "ホウエンちほうで いちばん\nレベルの たかい ポケモンジム……\pそれが ここ ルネジムよ!{EOS}"
	.if (. - gText_Rom_20ED5F) > 0x2e
	.error "gText_Rom_20ED5F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20ED5F) < 0x2e
	.space 0x2e - (. - gText_Rom_20ED5F)
	.endif
