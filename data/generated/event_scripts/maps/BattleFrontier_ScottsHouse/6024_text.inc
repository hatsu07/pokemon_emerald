	@ data/maps/BattleFrontier_ScottsHouse/scripts.inc:260 BattleFrontier_ScottsHouse_Text_YouveCollectedAllGoldSymbols
	.globl gText_Rom_238DBF
gText_Rom_238DBF: @ 0x08238DBF
	.string "エニシダ『バトルフロンティアは\nまんきつ してるかな?\p……って うひょおおっっ!\pきみの フロンティアパスーっ!\nきんのシンボルが すべて\lそろって いるじゃ ないか!\pこれはすごいっ!\nやっぱり きみは おもったとおり\lすごい トレーナー だったんだなあ!\p…… …… ……\p{PLAYER}{KUN}! ぜひ きみに\nこれを プレゼント させて くれ!\pきみならば これの かちを\nわかって くれると おもうんだ!"
	.byte EOS
	.if (. - gText_Rom_238DBF) > 0xca
	.error "gText_Rom_238DBF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238DBF) < 0xca
	.space 0xca - (. - gText_Rom_238DBF)
	.endif
