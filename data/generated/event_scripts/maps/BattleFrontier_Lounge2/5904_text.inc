	@ data/maps/BattleFrontier_Lounge2/scripts.inc:203 BattleFrontier_Lounge2_Text_MultiBattleAdvice
	.globl gText_Rom_2375D9
gText_Rom_2375D9: @ 0x082375D9
	.string "バトルサロンには\nいろんな トレーナーが あつまるんだぜ!\pもしかしたら きみの ともだちや\nでしにも あえるかも しれないな!\lよーく さがして みると いいぜ!"
	.byte EOS
	.if (. - gText_Rom_2375D9) > 0x53
	.error "gText_Rom_2375D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2375D9) < 0x53
	.space 0x53 - (. - gText_Rom_2375D9)
	.endif
