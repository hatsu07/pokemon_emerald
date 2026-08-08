	@ data/maps/BattleFrontier_Lounge2/scripts.inc:146 BattleFrontier_Lounge2_Text_DomeAceGoldMons
	.globl gText_Rom_236E27
gText_Rom_236E27: @ 0x08236E27
	.string "きみは ほんきの ドームスーパースターと\nたたかったこと あるかい?\pやつは じぶんの せんりゃくを みせるとき\nドラゴンと エスパーの むげんポケモン!\lみずと じめんの ぬまうおポケモン!\lはがねと エスパーの てつあしポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_236E27) > 0x88
	.error "gText_Rom_236E27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236E27) < 0x88
	.space 0x88 - (. - gText_Rom_236E27)
	.endif
