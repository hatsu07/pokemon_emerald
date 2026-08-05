	@ data/maps/TrainerHill_Entrance/scripts.inc:333 TrainerHill_Entrance_Text_NeedAtLeastTwoPokemon
	.globl gText_Rom_23BCDA
gText_Rom_23BCDA: @ 0x0823BCDA
	.string "おや?\nてもちが 1ぴきしか いないようですね\pてもちを 2ひき いじょうに してから\nまたおこし くださいませ"
	.byte EOS
	.if (. - gText_Rom_23BCDA) > 0x39
	.error "gText_Rom_23BCDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BCDA) < 0x39
	.space 0x39 - (. - gText_Rom_23BCDA)
	.endif
