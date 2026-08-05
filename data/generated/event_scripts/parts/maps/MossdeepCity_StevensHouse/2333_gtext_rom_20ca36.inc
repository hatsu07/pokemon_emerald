	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:153 MossdeepCity_StevensHouse_Text_ExplainDive
	.globl gText_Rom_20CA36
gText_Rom_20CA36: @ 0x0820CA36
	.string "ダイゴ『なみのりを していると\nみずの いろが こい ばしょが ある\pそこで ダイビングを つかうと\nうみの そこに もぐれるから\pうかびたい ときは\nもういちど ダイビングを つかうんだ\pばしょに よっては\nうかべない ばあいも あるけど$"
	.if (. - gText_Rom_20CA36) > 0x79
	.error "gText_Rom_20CA36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20CA36) < 0x79
	.space 0x79 - (. - gText_Rom_20CA36)
	.endif
