	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:150 MossdeepCity_StevensHouse_Text_YouveEarnedHMDive
	.globl gText_Rom_20C9C8
gText_Rom_20C9C8: @ 0x0820C9C8
	.string "ダイゴ『{PLAYER}{KUN}……\pみてのとおり なにも ないけど\nここが ボクの いえなんだ\p……そうだ さっきは ありがとう\nこれは ボクからの おれいの きもち\lひでんマシンの ダイビングだ\pえんりょ しないで もっていきなよ$"
	.if (. - gText_Rom_20C9C8) > 0x6e
	.error "gText_Rom_20C9C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C9C8) < 0x6e
	.space 0x6e - (. - gText_Rom_20C9C8)
	.endif
