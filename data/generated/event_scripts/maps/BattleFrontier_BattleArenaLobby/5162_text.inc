	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:501 BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw
	.globl gText_Rom_22FCC3
gText_Rom_22FCC3: @ 0x0822FCC3
	.string "はんていで ひきわけ だったよ\pじかんぎれに なったときに\nあいて ポケモンと のこりの HPが\lおなじ くらい だったからねぇ……"
	.byte EOS
	.if (. - gText_Rom_22FCC3) > 0x43
	.error "gText_Rom_22FCC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FCC3) < 0x43
	.space 0x43 - (. - gText_Rom_22FCC3)
	.endif
