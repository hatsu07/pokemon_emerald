	@ data/maps/PetalburgWoods/scripts.inc:350 PetalburgWoods_Text_YouveGotSomeNerve
	.globl gText_Rom_2146F1
gText_Rom_2146F1: @ 0x082146F1
	.string "むむむ…… アクアだんの\nじゃまを するとは なんて やつ!\lもう いっかい しょうぶ しろ!\p……と いいたい ところ だが\nもう てもちの ポケモンは いない\pそれに カナズミ シティにも アクアだんが\nねらっている ものが あるからな!\pきょうは これぐらいに しといてやらぁ!$"
	.if (. - gText_Rom_2146F1) > 0x8f
	.error "gText_Rom_2146F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2146F1) < 0x8f
	.space 0x8f - (. - gText_Rom_2146F1)
	.endif
