	@ data/maps/PetalburgWoods/scripts.inc:401 PetalburgWoods_Text_PeopleRespectYou
	.globl gText_Rom_2148D5
gText_Rom_2148D5: @ 0x082148D5
	.string "でかい むしポケモン もってると\nそれだけで そんけー されるだろ!?{EOS}"
	.if (. - gText_Rom_2148D5) > 0x24
	.error "gText_Rom_2148D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2148D5) < 0x24
	.space 0x24 - (. - gText_Rom_2148D5)
	.endif
