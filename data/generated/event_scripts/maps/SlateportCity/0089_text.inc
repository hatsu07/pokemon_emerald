	@ data/maps/SlateportCity/scripts.inc:1142 SlateportCity_Text_MostInvaluableExperience
	.globl gText_Rom_1DD1C1
gText_Rom_1DD1C1: @ 0x081DD1C1
	.string "マリ『なるほど なるほど それは\nきちょうな たいけんを なさいましたね……$"
	.if (. - gText_Rom_1DD1C1) > 0x27
	.error "gText_Rom_1DD1C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD1C1) < 0x27
	.space 0x27 - (. - gText_Rom_1DD1C1)
	.endif
