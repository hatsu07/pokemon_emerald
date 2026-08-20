	@ data/maps/PetalburgWoods/scripts.inc:340 PetalburgWoods_Text_NoOneCrossesTeamAqua
	.globl gText_Rom_214696
gText_Rom_214696: @ 0x08214696
	.string "……ん? なんだ おまえ?\nそいつを かばおう ってのか?\pアクアだんの じゃまを する やつは\nこどもでも ようしゃ しねえ!\lしょうぶ しやがれ!{EOS}"
	.if (. - gText_Rom_214696) > 0x4c
	.error "gText_Rom_214696 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_214696) < 0x4c
	.space 0x4c - (. - gText_Rom_214696)
	.endif
