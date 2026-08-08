	@ data/maps/BattleFrontier_Lounge2/scripts.inc:137 BattleFrontier_Lounge2_Text_SalonMaidenGoldMons
	.globl gText_Rom_236CD0
gText_Rom_236CD0: @ 0x08236CD0
	.string "きみは ほんきの タワータイクーンと\nたたかったこと あるかい?\pやつは ほんとの ちからで たたかうとき\nドラゴンと エスパーの むげんポケモン!\lでんきの いかづちポケモン!\lノーマルの いねむりポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_236CD0) > 0x7c
	.error "gText_Rom_236CD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236CD0) < 0x7c
	.space 0x7c - (. - gText_Rom_236CD0)
	.endif
