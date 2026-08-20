	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:510 BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting (+1 aliases)
	.globl gText_Rom_2277D7
gText_Rom_2277D7: @ 0x082277D7
	.string "おきゃくさま!\pぜんかい ちゃんと レポートを かいて\nしゅうりょう しませんでしたね?\pもうしわけ ありませんが そのばあい\nちょうせんは むこうと なります{EOS}"
	.if (. - gText_Rom_2277D7) > 0x51
	.error "gText_Rom_2277D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2277D7) < 0x51
	.space 0x51 - (. - gText_Rom_2277D7)
	.endif
