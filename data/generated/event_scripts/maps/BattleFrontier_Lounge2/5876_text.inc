	@ data/maps/BattleFrontier_Lounge2/scripts.inc:161 BattleFrontier_Lounge2_Text_PikeQueenSilverMons
	.globl gText_Rom_23702D
gText_Rom_23702D: @ 0x0823702D
	.string "きみは チューブクイーンと\nたたかったこと あるかい?\pやつは きげんの いいとき\nどくの キバへびポケモン!\lむしと いわの はっこうポケモン!\lみずの いつくしみポケモンの\l3ひきを つかってくる らしいぜ!"
	.byte EOS
	.if (. - gText_Rom_23702D) > 0x6b
	.error "gText_Rom_23702D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23702D) < 0x6b
	.space 0x6b - (. - gText_Rom_23702D)
	.endif
