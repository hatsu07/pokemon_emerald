	@ data/maps/BattleFrontier_Lounge2/scripts.inc:134 BattleFrontier_Lounge2_Text_SalonMaidenSilverMons
	.globl gText_Rom_236C60
gText_Rom_236C60: @ 0x08236C60
	.string "きみは タワータイクーンと\nたたかったこと あるかい?\pやつは あいての ちからを はかるとき\nエスパーの ねんりきポケモン!\lほのおの かざんポケモン!\lノーマルの いねむりポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_236C60) > 0x70
	.error "gText_Rom_236C60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236C60) < 0x70
	.space 0x70 - (. - gText_Rom_236C60)
	.endif
