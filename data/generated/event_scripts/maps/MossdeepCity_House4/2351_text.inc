	@ data/maps/MossdeepCity_House4/scripts.inc:45 MossdeepCity_House4_Text_BrotherLikesToVisitBasesAndBattle
	.globl gText_Rom_20CCDB
gText_Rom_20CCDB: @ 0x0820CCDB
	.string "おとうと ったら\nともだちの ひみつきちに いって\lポケモンしょうぶを するのが\lたのしみ なんだって!$"
	.if (. - gText_Rom_20CCDB) > 0x35
	.error "gText_Rom_20CCDB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20CCDB) < 0x35
	.space 0x35 - (. - gText_Rom_20CCDB)
	.endif
