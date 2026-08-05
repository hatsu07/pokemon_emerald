	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:510 BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting (+1 aliases)
	.globl gText_Rom_2205B3
gText_Rom_2205B3: @ 0x082205B3
	.string "おきゃくさま!\pぜんかい ちゃんと レポートを かいて\nしゅうりょう しませんでしたね?\pもうしわけ ありませんが そのばあい\nちょうせんは むこうと なります"
	.byte EOS
	.if (. - gText_Rom_2205B3) > 0x51
	.error "gText_Rom_2205B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2205B3) < 0x51
	.space 0x51 - (. - gText_Rom_2205B3)
	.endif
