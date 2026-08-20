	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:75 SootopolisCity_Gym_B1F_Text_DaphneDefeat (+1 aliases)
	.globl gText_Rom_20ECA7
gText_Rom_20ECA7: @ 0x0820ECA7
	.string "たたかう すがたの\nうつくしさで まけましたわ……{EOS}"
	.if (. - gText_Rom_20ECA7) > 0x1a
	.error "gText_Rom_20ECA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20ECA7) < 0x1a
	.space 0x1a - (. - gText_Rom_20ECA7)
	.endif
