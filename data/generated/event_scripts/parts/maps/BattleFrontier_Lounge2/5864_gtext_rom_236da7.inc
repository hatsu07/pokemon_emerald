	@ data/maps/BattleFrontier_Lounge2/scripts.inc:143 BattleFrontier_Lounge2_Text_DomeAceSilverMons
	.globl gText_Rom_236DA7
gText_Rom_236DA7: @ 0x08236DA7
	.string "きみは ドームスーパースターと\nたたかったこと あるかい?\pやつは あいての ちからを なめてるとき\nドラゴンと ひこうの ドラゴンポケモン!\lみずと じめんの ぬまうおポケモン!\lほのおと ひこうの かえんポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_236DA7) > 0x80
	.error "gText_Rom_236DA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236DA7) < 0x80
	.space 0x80 - (. - gText_Rom_236DA7)
	.endif
