	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:399 BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike
	.globl gText_Rom_21F44F
gText_Rom_21F44F: @ 0x0821F44F
	.string "ぱく ぱく\pこのまえ バトルチューブで\nめつきが わるくて こわそうな\lおねえさんに あったんだよ\lぱく ぱく\pそしたら 「いつまで くってるの!」って\nおこられて ボコボコに やられちったよ\pいやあ こわかったなー\pぱく ぱく"
	.byte EOS
	.if (. - gText_Rom_21F44F) > 0x73
	.error "gText_Rom_21F44F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F44F) < 0x73
	.space 0x73 - (. - gText_Rom_21F44F)
	.endif
